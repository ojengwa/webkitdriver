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

#if ENABLE(SHARED_WORKERS)

#include "JSSharedWorkerContext.h"

#include "EventListener.h"
#include "JSEventListener.h"
#include "KURL.h"
#include "SharedWorkerContext.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSharedWorkerContext);

/* Hash table */

static const HashTableValue JSSharedWorkerContextTableValues[3] =
{
    { "name", DontDelete|ReadOnly, (intptr_t)jsSharedWorkerContextName, (intptr_t)0 },
    { "onconnect", DontDelete, (intptr_t)jsSharedWorkerContextOnconnect, (intptr_t)setJSSharedWorkerContextOnconnect },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSharedWorkerContextTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSharedWorkerContextTableValues, 0 };
#else
    { 4, 3, JSSharedWorkerContextTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSharedWorkerContextPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSharedWorkerContextPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSharedWorkerContextPrototypeTableValues, 0 };
#else
    { 1, 0, JSSharedWorkerContextPrototypeTableValues, 0 };
#endif

static const HashTable* getJSSharedWorkerContextPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSSharedWorkerContextPrototypeTable);
}
const ClassInfo JSSharedWorkerContextPrototype::s_info = { "SharedWorkerContextPrototype", 0, 0, getJSSharedWorkerContextPrototypeTable };

void* JSSharedWorkerContextPrototype::operator new(size_t size, JSGlobalData* globalData)
{
    return globalData->heap.allocate(size);
}

static const HashTable* getJSSharedWorkerContextTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSSharedWorkerContextTable);
}
const ClassInfo JSSharedWorkerContext::s_info = { "SharedWorkerContext", &JSWorkerContext::s_info, 0, getJSSharedWorkerContextTable };

JSSharedWorkerContext::JSSharedWorkerContext(NonNullPassRefPtr<Structure> structure, PassRefPtr<SharedWorkerContext> impl)
    : JSWorkerContext(structure, impl)
{
}

bool JSSharedWorkerContext::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSharedWorkerContext, Base>(exec, getJSSharedWorkerContextTable(exec), this, propertyName, slot);
}

bool JSSharedWorkerContext::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSharedWorkerContext, Base>(exec, getJSSharedWorkerContextTable(exec), this, propertyName, descriptor);
}

JSValue jsSharedWorkerContextName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSharedWorkerContext* castedThis = static_cast<JSSharedWorkerContext*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SharedWorkerContext* imp = static_cast<SharedWorkerContext*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsSharedWorkerContextOnconnect(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSharedWorkerContext* castedThis = static_cast<JSSharedWorkerContext*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SharedWorkerContext* imp = static_cast<SharedWorkerContext*>(castedThis->impl());
    if (EventListener* listener = imp->onconnect()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp))
                return jsFunction;
        }
    }
    return jsNull();
}

void JSSharedWorkerContext::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSharedWorkerContext, Base>(exec, propertyName, value, getJSSharedWorkerContextTable(exec), this, slot);
}

void setJSSharedWorkerContextOnconnect(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    SharedWorkerContext* imp = static_cast<SharedWorkerContext*>(static_cast<JSSharedWorkerContext*>(thisObject)->impl());
    imp->setOnconnect(createJSAttributeEventListener(exec, value, thisObject));
}

SharedWorkerContext* toSharedWorkerContext(JSC::JSValue value)
{
    return value.inherits(&JSSharedWorkerContext::s_info) ? static_cast<JSSharedWorkerContext*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SHARED_WORKERS)
