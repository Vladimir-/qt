/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the either Technology Preview License Agreement or the
** Beta Release License Agreement.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://www.qtsoftware.com/contact.
** $QT_END_LICENSE$
**
****************************************************************************/

#include "framecapture.h"

#include <iostream>
#include <QtWebKit>

FrameCapture::FrameCapture(): QObject(), m_percent(0)
{
    connect(&m_page, SIGNAL(loadProgress(int)), this, SLOT(printProgress(int)));
    connect(&m_page, SIGNAL(loadFinished(bool)), this, SLOT(saveResult(bool)));
}

void FrameCapture::load(const QUrl &url, const QString &outputFileName)
{
    std::cout << "Loading " << qPrintable(url.toString()) << std::endl;
    m_percent = 0;
    int index = outputFileName.lastIndexOf('.');
    m_fileName = (index == -1) ? outputFileName + ".png" : outputFileName;
    m_page.mainFrame()->load(url);
    m_page.mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOff);
    m_page.mainFrame()->setScrollBarPolicy(Qt::Horizontal, Qt::ScrollBarAlwaysOff);
}

void FrameCapture::printProgress(int percent)
{
    if (m_percent >= percent)
        return;

    while (m_percent++ < percent)
        std::cout << "#" << std::flush;
}

void FrameCapture::saveResult(bool ok)
{
    std::cout << std::endl;

    // crude error-checking
    if (!ok) {
        std::cerr << "Failed loading " << qPrintable(m_page.mainFrame()->url().toString()) << std::endl;
        emit finished();
        return;
    }

    // save each internal frame in different image files
    int frameCounter = 0;
    foreach(QWebFrame *frame, m_page.mainFrame()->childFrames()) {
        QString fileName(m_fileName);
        int index = m_fileName.lastIndexOf('.');
        fileName = fileName.insert(index, "_frame" + QString::number(++frameCounter));

        frame->setClipRenderToViewport(false);

        QImage image(frame->contentsSize(), QImage::Format_ARGB32_Premultiplied);
        image.fill(Qt::transparent);

        saveFrame(frame, image, fileName);
    }

    // save the main frame
    m_page.setViewportSize(m_page.mainFrame()->contentsSize());
    QImage image(m_page.mainFrame()->contentsSize(), QImage::Format_ARGB32_Premultiplied);
    image.fill(Qt::transparent);
    saveFrame(m_page.mainFrame(), image, m_fileName);

    emit finished();
}

void FrameCapture::saveFrame(QWebFrame *frame, QImage image, QString fileName)
{
    QPainter painter(&image);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::TextAntialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true);

    frame->render(&painter);

    painter.end();

    image.save(fileName);
}
