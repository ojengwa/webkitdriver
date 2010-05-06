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
#include "JSHTMLParamElement.h"

#include "HTMLParamElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLParamElement);

/* Hash table */

static const HashTableValue JSHTMLParamElementTableValues[6] =
{
    { "name", DontDelete, (intptr_t)jsHTMLParamElementName, (intptr_t)setJSHTMLParamElementName },
    { "type", DontDelete, (intptr_t)jsHTMLParamElementType, (intptr_t)setJSHTMLParamElementType },
    { "value", DontDelete, (intptr_t)jsHTMLParamElementValue, (intptr_t)setJSHTMLParamElementValue },
    { "valueType", DontDelete, (intptr_t)jsHTMLParamElementValueType, (intptr_t)setJSHTMLParamElementValueType },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLParamElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLParamElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSHTMLParamElementTableValues, 0 };
#else
    { 18, 15, JSHTMLParamElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLParamElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLParamElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLParamElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLParamElementConstructorTableValues, 0 };
#endif

class JSHTMLParamElementConstructor : public DOMConstructorObject {
public:
    JSHTMLParamElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLParamElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLParamElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSHTMLParamElementConstructor::s_info = { "HTMLParamElementConstructor", 0, &JSHTMLParamElementConstructorTable, 0 };

bool JSHTMLParamElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLParamElementConstructor, DOMObject>(exec, &JSHTMLParamElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLParamElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLParamElementConstructor, DOMObject>(exec, &JSHTMLParamElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLParamElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLParamElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLParamElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLParamElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLParamElementPrototype::s_info = { "HTMLParamElementPrototype", 0, &JSHTMLParamElementPrototypeTable, 0 };

JSObject* JSHTMLParamElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLParamElement>(exec, globalObject);
}

const ClassInfo JSHTMLParamElement::s_info = { "HTMLParamElement", &JSHTMLElement::s_info, &JSHTMLParamElementTable, 0 };

JSHTMLParamElement::JSHTMLParamElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLParamElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLParamElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLParamElementPrototype(JSHTMLParamElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLParamElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLParamElement, Base>(exec, &JSHTMLParamElementTable, this, propertyName, slot);
}

bool JSHTMLParamElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLParamElement, Base>(exec, &JSHTMLParamElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLParamElementName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLParamElement* castedThis = static_cast<JSHTMLParamElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsHTMLParamElementType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLParamElement* castedThis = static_cast<JSHTMLParamElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}

JSValue jsHTMLParamElementValue(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLParamElement* castedThis = static_cast<JSHTMLParamElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->value());
    return result;
}

JSValue jsHTMLParamElementValueType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLParamElement* castedThis = static_cast<JSHTMLParamElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->valueType());
    return result;
}

JSValue jsHTMLParamElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLParamElement* domObject = static_cast<JSHTMLParamElement*>(asObject(slot.slotBase()));
    return JSHTMLParamElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLParamElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLParamElement, Base>(exec, propertyName, value, &JSHTMLParamElementTable, this, slot);
}

void setJSHTMLParamElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLParamElement* castedThisObj = static_cast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThisObj->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLParamElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLParamElement* castedThisObj = static_cast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThisObj->impl());
    imp->setType(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLParamElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLParamElement* castedThisObj = static_cast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThisObj->impl());
    imp->setValue(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLParamElementValueType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLParamElement* castedThisObj = static_cast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement* imp = static_cast<HTMLParamElement*>(castedThisObj->impl());
    imp->setValueType(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLParamElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLParamElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
