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

#if ENABLE(3D_CANVAS)

#include "JSWebGLByteArray.h"

#include "WebGLByteArray.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLByteArray);

/* Hash table for prototype */

static const HashTableValue JSWebGLByteArrayPrototypeTableValues[3] =
{
    { "get", DontDelete|Function, (intptr_t)jsWebGLByteArrayPrototypeFunctionGet, (intptr_t)1 },
    { "set", DontDelete|Function, (intptr_t)jsWebGLByteArrayPrototypeFunctionSet, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSWebGLByteArrayPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSWebGLByteArrayPrototypeTableValues, 0 };
#else
    { 4, 3, JSWebGLByteArrayPrototypeTableValues, 0 };
#endif

const ClassInfo JSWebGLByteArrayPrototype::s_info = { "WebGLByteArrayPrototype", 0, &JSWebGLByteArrayPrototypeTable, 0 };

JSObject* JSWebGLByteArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLByteArray>(exec, globalObject);
}

bool JSWebGLByteArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebGLByteArrayPrototypeTable, this, propertyName, slot);
}

bool JSWebGLByteArrayPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWebGLByteArrayPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWebGLByteArray::s_info = { "WebGLByteArray", &JSWebGLArray::s_info, 0, 0 };

JSWebGLByteArray::JSWebGLByteArray(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLByteArray> impl)
    : JSWebGLArray(structure, globalObject, impl)
{
}

JSObject* JSWebGLByteArray::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebGLByteArrayPrototype(JSWebGLByteArrayPrototype::createStructure(JSWebGLArrayPrototype::self(exec, globalObject)));
}

bool JSWebGLByteArray::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<WebGLByteArray*>(impl())->length()) {
        slot.setValue(getByIndex(exec, index));
        return true;
    }
    return Base::getOwnPropertySlot(exec, propertyName, slot);
}

bool JSWebGLByteArray::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<WebGLByteArray*>(impl())->length()) {
        descriptor.setDescriptor(getByIndex(exec, index), DontDelete);
        return true;
    }
    return Base::getOwnPropertyDescriptor(exec, propertyName, descriptor);
}

bool JSWebGLByteArray::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<WebGLByteArray*>(impl())->length()) {
        slot.setValue(getByIndex(exec, propertyName));
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

void JSWebGLByteArray::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    Base::put(exec, propertyName, value, slot);
}

void JSWebGLByteArray::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    indexSetter(exec, propertyName, value);
    return;
}

void JSWebGLByteArray::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<WebGLByteArray*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSC_HOST_CALL jsWebGLByteArrayPrototypeFunctionGet(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSWebGLByteArray::s_info))
        return throwError(exec, TypeError);
    JSWebGLByteArray* castedThisObj = static_cast<JSWebGLByteArray*>(asObject(thisValue));
    WebGLByteArray* imp = static_cast<WebGLByteArray*>(castedThisObj->impl());
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = jsNumber(exec, imp->get(index));
    return result;
}

JSValue JSC_HOST_CALL jsWebGLByteArrayPrototypeFunctionSet(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSWebGLByteArray::s_info))
        return throwError(exec, TypeError);
    JSWebGLByteArray* castedThisObj = static_cast<JSWebGLByteArray*>(asObject(thisValue));
    return castedThisObj->set(exec, args);
}


JSValue JSWebGLByteArray::getByIndex(ExecState* exec, unsigned index)
{
    return jsNumber(exec, static_cast<WebGLByteArray*>(impl())->item(index));
}
WebGLByteArray* toWebGLByteArray(JSC::JSValue value)
{
    return value.inherits(&JSWebGLByteArray::s_info) ? static_cast<JSWebGLByteArray*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(3D_CANVAS)
