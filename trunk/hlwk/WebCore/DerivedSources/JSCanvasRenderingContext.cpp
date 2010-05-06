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
#include "JSCanvasRenderingContext.h"

#include "CanvasRenderingContext.h"
#include "HTMLCanvasElement.h"
#include "JSHTMLCanvasElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCanvasRenderingContext);

/* Hash table */

static const HashTableValue JSCanvasRenderingContextTableValues[3] =
{
    { "canvas", DontDelete|ReadOnly, (intptr_t)jsCanvasRenderingContextCanvas, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsCanvasRenderingContextConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCanvasRenderingContextTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSCanvasRenderingContextTableValues, 0 };
#else
    { 4, 3, JSCanvasRenderingContextTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSCanvasRenderingContextConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCanvasRenderingContextConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCanvasRenderingContextConstructorTableValues, 0 };
#else
    { 1, 0, JSCanvasRenderingContextConstructorTableValues, 0 };
#endif

class JSCanvasRenderingContextConstructor : public DOMConstructorObject {
public:
    JSCanvasRenderingContextConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSCanvasRenderingContextConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSCanvasRenderingContextPrototype::self(exec, globalObject), None);
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

const ClassInfo JSCanvasRenderingContextConstructor::s_info = { "CanvasRenderingContextConstructor", 0, &JSCanvasRenderingContextConstructorTable, 0 };

bool JSCanvasRenderingContextConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasRenderingContextConstructor, DOMObject>(exec, &JSCanvasRenderingContextConstructorTable, this, propertyName, slot);
}

bool JSCanvasRenderingContextConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCanvasRenderingContextConstructor, DOMObject>(exec, &JSCanvasRenderingContextConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSCanvasRenderingContextPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSCanvasRenderingContextPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCanvasRenderingContextPrototypeTableValues, 0 };
#else
    { 1, 0, JSCanvasRenderingContextPrototypeTableValues, 0 };
#endif

const ClassInfo JSCanvasRenderingContextPrototype::s_info = { "CanvasRenderingContextPrototype", 0, &JSCanvasRenderingContextPrototypeTable, 0 };

JSObject* JSCanvasRenderingContextPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCanvasRenderingContext>(exec, globalObject);
}

const ClassInfo JSCanvasRenderingContext::s_info = { "CanvasRenderingContext", 0, &JSCanvasRenderingContextTable, 0 };

JSCanvasRenderingContext::JSCanvasRenderingContext(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<CanvasRenderingContext> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSCanvasRenderingContext::~JSCanvasRenderingContext()
{
    forgetDOMObject(this, impl());
}

JSObject* JSCanvasRenderingContext::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCanvasRenderingContextPrototype(JSCanvasRenderingContextPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSCanvasRenderingContext::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasRenderingContext, Base>(exec, &JSCanvasRenderingContextTable, this, propertyName, slot);
}

bool JSCanvasRenderingContext::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCanvasRenderingContext, Base>(exec, &JSCanvasRenderingContextTable, this, propertyName, descriptor);
}

JSValue jsCanvasRenderingContextCanvas(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSCanvasRenderingContext* castedThis = static_cast<JSCanvasRenderingContext*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    CanvasRenderingContext* imp = static_cast<CanvasRenderingContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->canvas()));
    return result;
}

JSValue jsCanvasRenderingContextConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSCanvasRenderingContext* domObject = static_cast<JSCanvasRenderingContext*>(asObject(slot.slotBase()));
    return JSCanvasRenderingContext::getConstructor(exec, domObject->globalObject());
}
JSValue JSCanvasRenderingContext::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCanvasRenderingContextConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

CanvasRenderingContext* toCanvasRenderingContext(JSC::JSValue value)
{
    return value.inherits(&JSCanvasRenderingContext::s_info) ? static_cast<JSCanvasRenderingContext*>(asObject(value))->impl() : 0;
}

}
