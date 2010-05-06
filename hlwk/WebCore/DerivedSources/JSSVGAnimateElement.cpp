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

#if ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#include "JSSVGAnimateElement.h"

#include "SVGAnimateElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimateElement);

/* Hash table */

static const HashTableValue JSSVGAnimateElementTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGAnimateElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimateElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimateElementTableValues, 0 };
#else
    { 2, 1, JSSVGAnimateElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGAnimateElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimateElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimateElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGAnimateElementConstructorTableValues, 0 };
#endif

class JSSVGAnimateElementConstructor : public DOMConstructorObject {
public:
    JSSVGAnimateElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGAnimateElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGAnimateElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGAnimateElementConstructor::s_info = { "SVGAnimateElementConstructor", 0, &JSSVGAnimateElementConstructorTable, 0 };

bool JSSVGAnimateElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimateElementConstructor, DOMObject>(exec, &JSSVGAnimateElementConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimateElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimateElementConstructor, DOMObject>(exec, &JSSVGAnimateElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimateElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimateElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGAnimateElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimateElementPrototype::s_info = { "SVGAnimateElementPrototype", 0, &JSSVGAnimateElementPrototypeTable, 0 };

JSObject* JSSVGAnimateElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimateElement>(exec, globalObject);
}

const ClassInfo JSSVGAnimateElement::s_info = { "SVGAnimateElement", &JSSVGAnimationElement::s_info, &JSSVGAnimateElementTable, 0 };

JSSVGAnimateElement::JSSVGAnimateElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimateElement> impl)
    : JSSVGAnimationElement(structure, globalObject, impl)
{
}

JSObject* JSSVGAnimateElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimateElementPrototype(JSSVGAnimateElementPrototype::createStructure(JSSVGAnimationElementPrototype::self(exec, globalObject)));
}

bool JSSVGAnimateElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimateElement, Base>(exec, &JSSVGAnimateElementTable, this, propertyName, slot);
}

bool JSSVGAnimateElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimateElement, Base>(exec, &JSSVGAnimateElementTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimateElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGAnimateElement* domObject = static_cast<JSSVGAnimateElement*>(asObject(slot.slotBase()));
    return JSSVGAnimateElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGAnimateElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimateElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_ANIMATION)
