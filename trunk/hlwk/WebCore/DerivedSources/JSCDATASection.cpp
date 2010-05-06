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
#include "JSCDATASection.h"

#include "CDATASection.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCDATASection);

/* Hash table */

static const HashTableValue JSCDATASectionTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsCDATASectionConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCDATASectionTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCDATASectionTableValues, 0 };
#else
    { 2, 1, JSCDATASectionTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSCDATASectionConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCDATASectionConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCDATASectionConstructorTableValues, 0 };
#else
    { 1, 0, JSCDATASectionConstructorTableValues, 0 };
#endif

class JSCDATASectionConstructor : public DOMConstructorObject {
public:
    JSCDATASectionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSCDATASectionConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSCDATASectionPrototype::self(exec, globalObject), None);
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

const ClassInfo JSCDATASectionConstructor::s_info = { "CDATASectionConstructor", 0, &JSCDATASectionConstructorTable, 0 };

bool JSCDATASectionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCDATASectionConstructor, DOMObject>(exec, &JSCDATASectionConstructorTable, this, propertyName, slot);
}

bool JSCDATASectionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCDATASectionConstructor, DOMObject>(exec, &JSCDATASectionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSCDATASectionPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCDATASectionPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCDATASectionPrototypeTableValues, 0 };
#else
    { 1, 0, JSCDATASectionPrototypeTableValues, 0 };
#endif

const ClassInfo JSCDATASectionPrototype::s_info = { "CDATASectionPrototype", 0, &JSCDATASectionPrototypeTable, 0 };

JSObject* JSCDATASectionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCDATASection>(exec, globalObject);
}

const ClassInfo JSCDATASection::s_info = { "CDATASection", &JSText::s_info, &JSCDATASectionTable, 0 };

JSCDATASection::JSCDATASection(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<CDATASection> impl)
    : JSText(structure, globalObject, impl)
{
}

JSObject* JSCDATASection::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCDATASectionPrototype(JSCDATASectionPrototype::createStructure(JSTextPrototype::self(exec, globalObject)));
}

bool JSCDATASection::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCDATASection, Base>(exec, &JSCDATASectionTable, this, propertyName, slot);
}

bool JSCDATASection::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCDATASection, Base>(exec, &JSCDATASectionTable, this, propertyName, descriptor);
}

JSValue jsCDATASectionConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSCDATASection* domObject = static_cast<JSCDATASection*>(asObject(slot.slotBase()));
    return JSCDATASection::getConstructor(exec, domObject->globalObject());
}
JSValue JSCDATASection::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCDATASectionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
