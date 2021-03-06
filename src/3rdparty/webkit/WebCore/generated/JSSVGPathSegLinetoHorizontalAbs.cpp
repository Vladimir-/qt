/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPathSegLinetoHorizontalAbs.h"

#include "SVGPathSegLinetoHorizontal.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoHorizontalAbs);

/* Hash table */

static const HashTableValue JSSVGPathSegLinetoHorizontalAbsTableValues[3] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalAbsX), (intptr_t)setJSSVGPathSegLinetoHorizontalAbsX },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalAbsConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalAbsTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGPathSegLinetoHorizontalAbsTableValues, 0 };
#else
    { 5, 3, JSSVGPathSegLinetoHorizontalAbsTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGPathSegLinetoHorizontalAbsConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalAbsConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegLinetoHorizontalAbsConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegLinetoHorizontalAbsConstructorTableValues, 0 };
#endif

class JSSVGPathSegLinetoHorizontalAbsConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegLinetoHorizontalAbsConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGPathSegLinetoHorizontalAbsConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGPathSegLinetoHorizontalAbsPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGPathSegLinetoHorizontalAbsConstructor::s_info = { "SVGPathSegLinetoHorizontalAbsConstructor", 0, &JSSVGPathSegLinetoHorizontalAbsConstructorTable, 0 };

bool JSSVGPathSegLinetoHorizontalAbsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoHorizontalAbsConstructor, DOMObject>(exec, &JSSVGPathSegLinetoHorizontalAbsConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoHorizontalAbsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoHorizontalAbsConstructor, DOMObject>(exec, &JSSVGPathSegLinetoHorizontalAbsConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoHorizontalAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalAbsPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegLinetoHorizontalAbsPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegLinetoHorizontalAbsPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegLinetoHorizontalAbsPrototype::s_info = { "SVGPathSegLinetoHorizontalAbsPrototype", 0, &JSSVGPathSegLinetoHorizontalAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoHorizontalAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoHorizontalAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoHorizontalAbs::s_info = { "SVGPathSegLinetoHorizontalAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoHorizontalAbsTable, 0 };

JSSVGPathSegLinetoHorizontalAbs::JSSVGPathSegLinetoHorizontalAbs(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoHorizontalAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

JSObject* JSSVGPathSegLinetoHorizontalAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegLinetoHorizontalAbsPrototype(JSSVGPathSegLinetoHorizontalAbsPrototype::createStructure(JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoHorizontalAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoHorizontalAbs, Base>(exec, &JSSVGPathSegLinetoHorizontalAbsTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoHorizontalAbs::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoHorizontalAbs, Base>(exec, &JSSVGPathSegLinetoHorizontalAbsTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoHorizontalAbsX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoHorizontalAbs* castedThis = static_cast<JSSVGPathSegLinetoHorizontalAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoHorizontalAbs* imp = static_cast<SVGPathSegLinetoHorizontalAbs*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x());
    return result;
}

JSValue jsSVGPathSegLinetoHorizontalAbsConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoHorizontalAbs* domObject = static_cast<JSSVGPathSegLinetoHorizontalAbs*>(asObject(slotBase));
    return JSSVGPathSegLinetoHorizontalAbs::getConstructor(exec, domObject->globalObject());
}
void JSSVGPathSegLinetoHorizontalAbs::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegLinetoHorizontalAbs, Base>(exec, propertyName, value, &JSSVGPathSegLinetoHorizontalAbsTable, this, slot);
}

void setJSSVGPathSegLinetoHorizontalAbsX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegLinetoHorizontalAbs* castedThisObj = static_cast<JSSVGPathSegLinetoHorizontalAbs*>(thisObject);
    SVGPathSegLinetoHorizontalAbs* imp = static_cast<SVGPathSegLinetoHorizontalAbs*>(castedThisObj->impl());
    imp->setX(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

JSValue JSSVGPathSegLinetoHorizontalAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoHorizontalAbsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
