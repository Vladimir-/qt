// This example demonstrates placing items in a view using
// a VisualItemModel

import Qt 4.6

Rectangle {
    color: "lightgray"
    width: 240
    height: 320

    function checkProperties() {
        testObject.error = false;
        if (testObject.useModel && view.model != itemModel) {
            console.log("model property incorrect");
            testObject.error = true;
        }
    }

    VisualItemModel {
        id: itemModel
        objectName: "itemModel"
        Rectangle {
            objectName: "item1"
            height: view.height; width: view.width; color: "#FFFEF0"
            Text { objectName: "text1"; text: "index: " + parent.VisualItemModel.index; font.bold: true; anchors.centerIn: parent }
        }
        Rectangle {
            objectName: "item2"
            height: view.height; width: view.width; color: "#F0FFF7"
            Text { objectName: "text2"; text: "index: " + parent.VisualItemModel.index; font.bold: true; anchors.centerIn: parent }
        }
        Rectangle {
            objectName: "item3"
            height: view.height; width: view.width; color: "#F4F0FF"
            Text { objectName: "text3"; text: "index: " + parent.VisualItemModel.index; font.bold: true; anchors.centerIn: parent }
        }
    }

    Column {
        objectName: "container"
        Repeater {
            id: view
            objectName: "repeater"
            anchors.fill: parent
            anchors.bottomMargin: 30
            model: testObject.useModel ? itemModel : 0
        }
    }
}