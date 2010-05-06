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
#include "JSHTMLLabelElement.h"

#include "HTMLFormElement.h"
#include "HTMLLabelElement.h"
#include "JSHTMLFormElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLLabelElement);

/* Hash table */

static const HashTableValue JSHTMLLabelElementTableValues[5] =
{
    { "form", DontDelete|ReadOnly, (intptr_t)jsHTMLLabelElementForm, (intptr_t)0 },
    { "accessKey", DontDelete, (intptr_t)jsHTMLLabelElementAccessKey, (intptr_t)setJSHTMLLabelElementAccessKey },
    { "htmlFor", DontDelete, (intptr_t)jsHTMLLabelElementHtmlFor, (intptr_t)setJSHTMLLabelElementHtmlFor },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLLabelElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLLabelElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSHTMLLabelElementTableValues, 0 };
#else
    { 9, 7, JSHTMLLabelElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLLabelElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLLabelElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLLabelElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLLabelElementConstructorTableValues, 0 };
#endif

class JSHTMLLabelElementConstructor : public DOMConstructorObject {
public:
    JSHTMLLabelElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLLabelElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLLabelElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSHTMLLabelElementConstructor::s_info = { "HTMLLabelElementConstructor", 0, &JSHTMLLabelElementConstructorTable, 0 };

bool JSHTMLLabelElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLabelElementConstructor, DOMObject>(exec, &JSHTMLLabelElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLLabelElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLLabelElementConstructor, DOMObject>(exec, &JSHTMLLabelElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLLabelElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLLabelElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLLabelElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLLabelElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLLabelElementPrototype::s_info = { "HTMLLabelElementPrototype", 0, &JSHTMLLabelElementPrototypeTable, 0 };

JSObject* JSHTMLLabelElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLLabelElement>(exec, globalObject);
}

const ClassInfo JSHTMLLabelElement::s_info = { "HTMLLabelElement", &JSHTMLElement::s_info, &JSHTMLLabelElementTable, 0 };

JSHTMLLabelElement::JSHTMLLabelElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLLabelElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLLabelElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLLabelElementPrototype(JSHTMLLabelElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLLabelElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLabelElement, Base>(exec, &JSHTMLLabelElementTable, this, propertyName, slot);
}

bool JSHTMLLabelElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLLabelElement, Base>(exec, &JSHTMLLabelElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLLabelElementForm(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLLabelElement* castedThis = static_cast<JSHTMLLabelElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLLabelElement* imp = static_cast<HTMLLabelElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->form()));
    return result;
}

JSValue jsHTMLLabelElementAccessKey(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLLabelElement* castedThis = static_cast<JSHTMLLabelElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLLabelElement* imp = static_cast<HTMLLabelElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->accessKey());
    return result;
}

JSValue jsHTMLLabelElementHtmlFor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLLabelElement* castedThis = static_cast<JSHTMLLabelElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLLabelElement* imp = static_cast<HTMLLabelElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->htmlFor());
    return result;
}

JSValue jsHTMLLabelElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLLabelElement* domObject = static_cast<JSHTMLLabelElement*>(asObject(slot.slotBase()));
    return JSHTMLLabelElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLLabelElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLLabelElement, Base>(exec, propertyName, value, &JSHTMLLabelElementTable, this, slot);
}

void setJSHTMLLabelElementAccessKey(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLLabelElement* castedThisObj = static_cast<JSHTMLLabelElement*>(thisObject);
    HTMLLabelElement* imp = static_cast<HTMLLabelElement*>(castedThisObj->impl());
    imp->setAccessKey(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLLabelElementHtmlFor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLLabelElement* castedThisObj = static_cast<JSHTMLLabelElement*>(thisObject);
    HTMLLabelElement* imp = static_cast<HTMLLabelElement*>(castedThisObj->impl());
    imp->setHtmlFor(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLLabelElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLLabelElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
