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

#if ENABLE(NOTIFICATIONS)

#include "JSNotificationCenter.h"

#include "JSNotification.h"
#include "Notification.h"
#include "NotificationCenter.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNotificationCenter);

/* Hash table for prototype */

static const HashTableValue JSNotificationCenterPrototypeTableValues[5] =
{
    { "createHTMLNotification", DontDelete|Function, (intptr_t)jsNotificationCenterPrototypeFunctionCreateHTMLNotification, (intptr_t)1 },
    { "createNotification", DontDelete|Function, (intptr_t)jsNotificationCenterPrototypeFunctionCreateNotification, (intptr_t)3 },
    { "checkPermission", DontDelete|Function, (intptr_t)jsNotificationCenterPrototypeFunctionCheckPermission, (intptr_t)0 },
    { "requestPermission", DontDelete|Function, (intptr_t)jsNotificationCenterPrototypeFunctionRequestPermission, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSNotificationCenterPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSNotificationCenterPrototypeTableValues, 0 };
#else
    { 8, 7, JSNotificationCenterPrototypeTableValues, 0 };
#endif

const ClassInfo JSNotificationCenterPrototype::s_info = { "NotificationCenterPrototype", 0, &JSNotificationCenterPrototypeTable, 0 };

JSObject* JSNotificationCenterPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNotificationCenter>(exec, globalObject);
}

bool JSNotificationCenterPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNotificationCenterPrototypeTable, this, propertyName, slot);
}

bool JSNotificationCenterPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSNotificationCenterPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSNotificationCenter::s_info = { "NotificationCenter", 0, 0, 0 };

JSNotificationCenter::JSNotificationCenter(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<NotificationCenter> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSNotificationCenter::~JSNotificationCenter()
{
    forgetDOMObject(this, impl());
}

JSObject* JSNotificationCenter::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSNotificationCenterPrototype(JSNotificationCenterPrototype::createStructure(globalObject->objectPrototype()));
}

JSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCreateHTMLNotification(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSNotificationCenter::s_info))
        return throwError(exec, TypeError);
    JSNotificationCenter* castedThisObj = static_cast<JSNotificationCenter*>(asObject(thisValue));
    NotificationCenter* imp = static_cast<NotificationCenter*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& url = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->createHTMLNotification(url, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCreateNotification(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSNotificationCenter::s_info))
        return throwError(exec, TypeError);
    JSNotificationCenter* castedThisObj = static_cast<JSNotificationCenter*>(asObject(thisValue));
    NotificationCenter* imp = static_cast<NotificationCenter*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& iconUrl = args.at(0).toString(exec);
    const UString& title = args.at(1).toString(exec);
    const UString& body = args.at(2).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->createNotification(iconUrl, title, body, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCheckPermission(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSNotificationCenter::s_info))
        return throwError(exec, TypeError);
    JSNotificationCenter* castedThisObj = static_cast<JSNotificationCenter*>(asObject(thisValue));
    NotificationCenter* imp = static_cast<NotificationCenter*>(castedThisObj->impl());


    JSC::JSValue result = jsNumber(exec, imp->checkPermission());
    return result;
}

JSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionRequestPermission(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSNotificationCenter::s_info))
        return throwError(exec, TypeError);
    JSNotificationCenter* castedThisObj = static_cast<JSNotificationCenter*>(asObject(thisValue));
    return castedThisObj->requestPermission(exec, args);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NotificationCenter* object)
{
    return getDOMObjectWrapper<JSNotificationCenter>(exec, globalObject, object);
}
NotificationCenter* toNotificationCenter(JSC::JSValue value)
{
    return value.inherits(&JSNotificationCenter::s_info) ? static_cast<JSNotificationCenter*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(NOTIFICATIONS)
