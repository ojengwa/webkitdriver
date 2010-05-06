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

#include "JSWebGLUnsignedByteArray.h"

#include "WebGLUnsignedByteArray.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLUnsignedByteArray);

/* Hash table for prototype */

static const HashTableValue JSWebGLUnsignedByteArrayPrototypeTableValues[3] =
{
    { "get", DontDelete|Function, (intptr_t)jsWebGLUnsignedByteArrayPrototypeFunctionGet, (intptr_t)1 },
    { "set", DontDelete|Function, (intptr_t)jsWebGLUnsignedByteArrayPrototypeFunctionSet, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSWebGLUnsignedByteArrayPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSWebGLUnsignedByteArrayPrototypeTableValues, 0 };
#else
    { 4, 3, JSWebGLUnsignedByteArrayPrototypeTableValues, 0 };
#endif

const ClassInfo JSWebGLUnsignedByteArrayPrototype::s_info = { "WebGLUnsignedByteArrayPrototype", 0, &JSWebGLUnsignedByteArrayPrototypeTable, 0 };

JSObject* JSWebGLUnsignedByteArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLUnsignedByteArray>(exec, globalObject);
}

bool JSWebGLUnsignedByteArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebGLUnsignedByteArrayPrototypeTable, this, propertyName, slot);
}

bool JSWebGLUnsignedByteArrayPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWebGLUnsignedByteArrayPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWebGLUnsignedByteArray::s_info = { "WebGLUnsignedByteArray", &JSWebGLArray::s_info, 0, 0 };

JSWebGLUnsignedByteArray::JSWebGLUnsignedByteArray(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLUnsignedByteArray> impl)
    : JSWebGLArray(structure, globalObject, impl)
{
}

JSObject* JSWebGLUnsignedByteArray::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebGLUnsignedByteArrayPrototype(JSWebGLUnsignedByteArrayPrototype::createStructure(JSWebGLArrayPrototype::self(exec, globalObject)));
}

bool JSWebGLUnsignedByteArray::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<WebGLUnsignedByteArray*>(impl())->length()) {
        slot.setValue(getByIndex(exec, index));
        return true;
    }
    return Base::getOwnPropertySlot(exec, propertyName, slot);
}

bool JSWebGLUnsignedByteArray::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<WebGLUnsignedByteArray*>(impl())->length()) {
        descriptor.setDescriptor(getByIndex(exec, index), DontDelete);
        return true;
    }
    return Base::getOwnPropertyDescriptor(exec, propertyName, descriptor);
}

bool JSWebGLUnsignedByteArray::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<WebGLUnsignedByteArray*>(impl())->length()) {
        slot.setValue(getByIndex(exec, propertyName));
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

void JSWebGLUnsignedByteArray::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    Base::put(exec, propertyName, value, slot);
}

void JSWebGLUnsignedByteArray::put(ExecState* exec, unsigned propertyName, JSValue value)
{
    indexSetter(exec, propertyName, value);
    return;
}

void JSWebGLUnsignedByteArray::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<WebGLUnsignedByteArray*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSC_HOST_CALL jsWebGLUnsignedByteArrayPrototypeFunctionGet(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSWebGLUnsignedByteArray::s_info))
        return throwError(exec, TypeError);
    JSWebGLUnsignedByteArray* castedThisObj = static_cast<JSWebGLUnsignedByteArray*>(asObject(thisValue));
    WebGLUnsignedByteArray* imp = static_cast<WebGLUnsignedByteArray*>(castedThisObj->impl());
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = jsNumber(exec, imp->get(index));
    return result;
}

JSValue JSC_HOST_CALL jsWebGLUnsignedByteArrayPrototypeFunctionSet(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSWebGLUnsignedByteArray::s_info))
        return throwError(exec, TypeError);
    JSWebGLUnsignedByteArray* castedThisObj = static_cast<JSWebGLUnsignedByteArray*>(asObject(thisValue));
    return castedThisObj->set(exec, args);
}


JSValue JSWebGLUnsignedByteArray::getByIndex(ExecState* exec, unsigned index)
{
    return jsNumber(exec, static_cast<WebGLUnsignedByteArray*>(impl())->item(index));
}
WebGLUnsignedByteArray* toWebGLUnsignedByteArray(JSC::JSValue value)
{
    return value.inherits(&JSWebGLUnsignedByteArray::s_info) ? static_cast<JSWebGLUnsignedByteArray*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(3D_CANVAS)
