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

#if ENABLE(INSPECTOR)

#include "JSInspectorFrontendHost.h"

#include "InspectorFrontendHost.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSInspectorFrontendHost);

/* Hash table */

static const HashTableValue JSInspectorFrontendHostTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsInspectorFrontendHostConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSInspectorFrontendHostTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSInspectorFrontendHostTableValues, 0 };
#else
    { 2, 1, JSInspectorFrontendHostTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSInspectorFrontendHostConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSInspectorFrontendHostConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSInspectorFrontendHostConstructorTableValues, 0 };
#else
    { 1, 0, JSInspectorFrontendHostConstructorTableValues, 0 };
#endif

class JSInspectorFrontendHostConstructor : public DOMConstructorObject {
public:
    JSInspectorFrontendHostConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSInspectorFrontendHostConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSInspectorFrontendHostPrototype::self(exec, globalObject), None);
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

const ClassInfo JSInspectorFrontendHostConstructor::s_info = { "InspectorFrontendHostConstructor", 0, &JSInspectorFrontendHostConstructorTable, 0 };

bool JSInspectorFrontendHostConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInspectorFrontendHostConstructor, DOMObject>(exec, &JSInspectorFrontendHostConstructorTable, this, propertyName, slot);
}

bool JSInspectorFrontendHostConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInspectorFrontendHostConstructor, DOMObject>(exec, &JSInspectorFrontendHostConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSInspectorFrontendHostPrototypeTableValues[15] =
{
    { "loaded", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionLoaded, (intptr_t)0 },
    { "attach", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionAttach, (intptr_t)0 },
    { "detach", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionDetach, (intptr_t)0 },
    { "closeWindow", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionCloseWindow, (intptr_t)0 },
    { "windowUnloading", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionWindowUnloading, (intptr_t)0 },
    { "canAttachWindow", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionCanAttachWindow, (intptr_t)0 },
    { "setAttachedWindowHeight", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowHeight, (intptr_t)1 },
    { "moveWindowBy", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionMoveWindowBy, (intptr_t)2 },
    { "localizedStringsURL", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionLocalizedStringsURL, (intptr_t)0 },
    { "hiddenPanels", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionHiddenPanels, (intptr_t)0 },
    { "platform", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionPlatform, (intptr_t)0 },
    { "port", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionPort, (intptr_t)0 },
    { "copyText", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionCopyText, (intptr_t)1 },
    { "showContextMenu", DontDelete|Function, (intptr_t)jsInspectorFrontendHostPrototypeFunctionShowContextMenu, (intptr_t)2 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSInspectorFrontendHostPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSInspectorFrontendHostPrototypeTableValues, 0 };
#else
    { 35, 31, JSInspectorFrontendHostPrototypeTableValues, 0 };
#endif

const ClassInfo JSInspectorFrontendHostPrototype::s_info = { "InspectorFrontendHostPrototype", 0, &JSInspectorFrontendHostPrototypeTable, 0 };

JSObject* JSInspectorFrontendHostPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSInspectorFrontendHost>(exec, globalObject);
}

bool JSInspectorFrontendHostPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSInspectorFrontendHostPrototypeTable, this, propertyName, slot);
}

bool JSInspectorFrontendHostPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSInspectorFrontendHostPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSInspectorFrontendHost::s_info = { "InspectorFrontendHost", 0, &JSInspectorFrontendHostTable, 0 };

JSInspectorFrontendHost::JSInspectorFrontendHost(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<InspectorFrontendHost> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSInspectorFrontendHost::~JSInspectorFrontendHost()
{
    forgetDOMObject(this, impl());
}

JSObject* JSInspectorFrontendHost::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSInspectorFrontendHostPrototype(JSInspectorFrontendHostPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSInspectorFrontendHost::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInspectorFrontendHost, Base>(exec, &JSInspectorFrontendHostTable, this, propertyName, slot);
}

bool JSInspectorFrontendHost::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInspectorFrontendHost, Base>(exec, &JSInspectorFrontendHostTable, this, propertyName, descriptor);
}

JSValue jsInspectorFrontendHostConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSInspectorFrontendHost* domObject = static_cast<JSInspectorFrontendHost*>(asObject(slot.slotBase()));
    return JSInspectorFrontendHost::getConstructor(exec, domObject->globalObject());
}
JSValue JSInspectorFrontendHost::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSInspectorFrontendHostConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoaded(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());

    imp->loaded();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionAttach(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());

    imp->attach();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionDetach(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());

    imp->detach();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCloseWindow(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());

    imp->closeWindow();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionWindowUnloading(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());

    imp->windowUnloading();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCanAttachWindow(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());


    JSC::JSValue result = jsBoolean(imp->canAttachWindow());
    return result;
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowHeight(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());
    unsigned height = args.at(0).toInt32(exec);

    imp->setAttachedWindowHeight(height);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionMoveWindowBy(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());
    float x = args.at(0).toFloat(exec);
    float y = args.at(1).toFloat(exec);

    imp->moveWindowBy(x, y);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLocalizedStringsURL(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());


    JSC::JSValue result = jsString(exec, imp->localizedStringsURL());
    return result;
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionHiddenPanels(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());


    JSC::JSValue result = jsString(exec, imp->hiddenPanels());
    return result;
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPlatform(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());


    JSC::JSValue result = jsString(exec, imp->platform());
    return result;
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPort(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());


    JSC::JSValue result = jsString(exec, imp->port());
    return result;
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCopyText(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    InspectorFrontendHost* imp = static_cast<InspectorFrontendHost*>(castedThisObj->impl());
    const UString& text = args.at(0).toString(exec);

    imp->copyText(text);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionShowContextMenu(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSInspectorFrontendHost::s_info))
        return throwError(exec, TypeError);
    JSInspectorFrontendHost* castedThisObj = static_cast<JSInspectorFrontendHost*>(asObject(thisValue));
    return castedThisObj->showContextMenu(exec, args);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, InspectorFrontendHost* object)
{
    return getDOMObjectWrapper<JSInspectorFrontendHost>(exec, globalObject, object);
}
InspectorFrontendHost* toInspectorFrontendHost(JSC::JSValue value)
{
    return value.inherits(&JSInspectorFrontendHost::s_info) ? static_cast<JSInspectorFrontendHost*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INSPECTOR)
