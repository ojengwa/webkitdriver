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

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGFontElement.h"

#include "SVGFontElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFontElement);

/* Hash table */

static const HashTableValue JSSVGFontElementTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGFontElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFontElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFontElementTableValues, 0 };
#else
    { 2, 1, JSSVGFontElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGFontElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFontElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFontElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGFontElementConstructorTableValues, 0 };
#endif

class JSSVGFontElementConstructor : public DOMConstructorObject {
public:
    JSSVGFontElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGFontElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGFontElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGFontElementConstructor::s_info = { "SVGFontElementConstructor", 0, &JSSVGFontElementConstructorTable, 0 };

bool JSSVGFontElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontElementConstructor, DOMObject>(exec, &JSSVGFontElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFontElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontElementConstructor, DOMObject>(exec, &JSSVGFontElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFontElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFontElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFontElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGFontElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFontElementPrototype::s_info = { "SVGFontElementPrototype", 0, &JSSVGFontElementPrototypeTable, 0 };

JSObject* JSSVGFontElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontElement>(exec, globalObject);
}

const ClassInfo JSSVGFontElement::s_info = { "SVGFontElement", &JSSVGElement::s_info, &JSSVGFontElementTable, 0 };

JSSVGFontElement::JSSVGFontElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFontElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFontElementPrototype(JSSVGFontElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFontElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontElement, Base>(exec, &JSSVGFontElementTable, this, propertyName, slot);
}

bool JSSVGFontElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontElement, Base>(exec, &JSSVGFontElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFontElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFontElement* domObject = static_cast<JSSVGFontElement*>(asObject(slot.slotBase()));
    return JSSVGFontElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFontElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
