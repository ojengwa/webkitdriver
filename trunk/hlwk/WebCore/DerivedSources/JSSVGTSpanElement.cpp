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

#include "JSSVGTSpanElement.h"

#include "SVGTSpanElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTSpanElement);

/* Hash table */

static const HashTableValue JSSVGTSpanElementTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGTSpanElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTSpanElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTSpanElementTableValues, 0 };
#else
    { 2, 1, JSSVGTSpanElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGTSpanElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTSpanElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTSpanElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGTSpanElementConstructorTableValues, 0 };
#endif

class JSSVGTSpanElementConstructor : public DOMConstructorObject {
public:
    JSSVGTSpanElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGTSpanElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGTSpanElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGTSpanElementConstructor::s_info = { "SVGTSpanElementConstructor", 0, &JSSVGTSpanElementConstructorTable, 0 };

bool JSSVGTSpanElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTSpanElementConstructor, DOMObject>(exec, &JSSVGTSpanElementConstructorTable, this, propertyName, slot);
}

bool JSSVGTSpanElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTSpanElementConstructor, DOMObject>(exec, &JSSVGTSpanElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTSpanElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTSpanElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTSpanElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGTSpanElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGTSpanElementPrototype::s_info = { "SVGTSpanElementPrototype", 0, &JSSVGTSpanElementPrototypeTable, 0 };

JSObject* JSSVGTSpanElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTSpanElement>(exec, globalObject);
}

const ClassInfo JSSVGTSpanElement::s_info = { "SVGTSpanElement", &JSSVGTextPositioningElement::s_info, &JSSVGTSpanElementTable, 0 };

JSSVGTSpanElement::JSSVGTSpanElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTSpanElement> impl)
    : JSSVGTextPositioningElement(structure, globalObject, impl)
{
}

JSObject* JSSVGTSpanElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTSpanElementPrototype(JSSVGTSpanElementPrototype::createStructure(JSSVGTextPositioningElementPrototype::self(exec, globalObject)));
}

bool JSSVGTSpanElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTSpanElement, Base>(exec, &JSSVGTSpanElementTable, this, propertyName, slot);
}

bool JSSVGTSpanElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTSpanElement, Base>(exec, &JSSVGTSpanElementTable, this, propertyName, descriptor);
}

JSValue jsSVGTSpanElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGTSpanElement* domObject = static_cast<JSSVGTSpanElement*>(asObject(slot.slotBase()));
    return JSSVGTSpanElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGTSpanElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTSpanElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
