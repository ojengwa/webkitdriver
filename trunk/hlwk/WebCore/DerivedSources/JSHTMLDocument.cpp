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
#include "JSHTMLDocument.h"

#include "AtomicString.h"
#include "Element.h"
#include "HTMLCollection.h"
#include "HTMLDocument.h"
#include "JSElement.h"
#include "JSHTMLCollection.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLDocument);

/* Hash table */

static const HashTableValue JSHTMLDocumentTableValues[17] =
{
    { "embeds", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentEmbeds, (intptr_t)0 },
    { "plugins", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentPlugins, (intptr_t)0 },
    { "scripts", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentScripts, (intptr_t)0 },
    { "all", 0, (intptr_t)jsHTMLDocumentAll, (intptr_t)setJSHTMLDocumentAll },
    { "width", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentHeight, (intptr_t)0 },
    { "dir", DontDelete, (intptr_t)jsHTMLDocumentDir, (intptr_t)setJSHTMLDocumentDir },
    { "designMode", DontDelete, (intptr_t)jsHTMLDocumentDesignMode, (intptr_t)setJSHTMLDocumentDesignMode },
    { "compatMode", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentCompatMode, (intptr_t)0 },
    { "activeElement", DontDelete|ReadOnly, (intptr_t)jsHTMLDocumentActiveElement, (intptr_t)0 },
    { "bgColor", DontDelete, (intptr_t)jsHTMLDocumentBgColor, (intptr_t)setJSHTMLDocumentBgColor },
    { "fgColor", DontDelete, (intptr_t)jsHTMLDocumentFgColor, (intptr_t)setJSHTMLDocumentFgColor },
    { "alinkColor", DontDelete, (intptr_t)jsHTMLDocumentAlinkColor, (intptr_t)setJSHTMLDocumentAlinkColor },
    { "linkColor", DontDelete, (intptr_t)jsHTMLDocumentLinkColor, (intptr_t)setJSHTMLDocumentLinkColor },
    { "vlinkColor", DontDelete, (intptr_t)jsHTMLDocumentVlinkColor, (intptr_t)setJSHTMLDocumentVlinkColor },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLDocumentConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLDocumentTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSHTMLDocumentTableValues, 0 };
#else
    { 36, 31, JSHTMLDocumentTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLDocumentConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLDocumentConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLDocumentConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLDocumentConstructorTableValues, 0 };
#endif

class JSHTMLDocumentConstructor : public DOMConstructorObject {
public:
    JSHTMLDocumentConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLDocumentConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLDocumentPrototype::self(exec, globalObject), None);
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

const ClassInfo JSHTMLDocumentConstructor::s_info = { "HTMLDocumentConstructor", 0, &JSHTMLDocumentConstructorTable, 0 };

bool JSHTMLDocumentConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDocumentConstructor, DOMObject>(exec, &JSHTMLDocumentConstructorTable, this, propertyName, slot);
}

bool JSHTMLDocumentConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLDocumentConstructor, DOMObject>(exec, &JSHTMLDocumentConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDocumentPrototypeTableValues[9] =
{
    { "open", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionOpen, (intptr_t)0 },
    { "close", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionClose, (intptr_t)0 },
    { "write", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionWrite, (intptr_t)1 },
    { "writeln", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionWriteln, (intptr_t)1 },
    { "clear", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionClear, (intptr_t)0 },
    { "captureEvents", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionCaptureEvents, (intptr_t)0 },
    { "releaseEvents", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionReleaseEvents, (intptr_t)0 },
    { "hasFocus", DontDelete|Function, (intptr_t)jsHTMLDocumentPrototypeFunctionHasFocus, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLDocumentPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSHTMLDocumentPrototypeTableValues, 0 };
#else
    { 17, 15, JSHTMLDocumentPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLDocumentPrototype::s_info = { "HTMLDocumentPrototype", 0, &JSHTMLDocumentPrototypeTable, 0 };

JSObject* JSHTMLDocumentPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDocument>(exec, globalObject);
}

bool JSHTMLDocumentPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLDocumentPrototypeTable, this, propertyName, slot);
}

bool JSHTMLDocumentPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLDocumentPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLDocument::s_info = { "HTMLDocument", &JSDocument::s_info, &JSHTMLDocumentTable, 0 };

JSHTMLDocument::JSHTMLDocument(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDocument> impl)
    : JSDocument(structure, globalObject, impl)
{
}

JSObject* JSHTMLDocument::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLDocumentPrototype(JSHTMLDocumentPrototype::createStructure(JSDocumentPrototype::self(exec, globalObject)));
}

bool JSHTMLDocument::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLDocument*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLDocument, Base>(exec, &JSHTMLDocumentTable, this, propertyName, slot);
}

bool JSHTMLDocument::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    if (canGetItemsForName(exec, static_cast<HTMLDocument*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSHTMLDocument, Base>(exec, &JSHTMLDocumentTable, this, propertyName, descriptor);
}

JSValue jsHTMLDocumentEmbeds(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->embeds()));
    return result;
}

JSValue jsHTMLDocumentPlugins(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->plugins()));
    return result;
}

JSValue jsHTMLDocumentScripts(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->scripts()));
    return result;
}

JSValue jsHTMLDocumentAll(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    return castedThis->all(exec);
}

JSValue jsHTMLDocumentWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->width());
    return result;
}

JSValue jsHTMLDocumentHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->height());
    return result;
}

JSValue jsHTMLDocumentDir(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->dir());
    return result;
}

JSValue jsHTMLDocumentDesignMode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->designMode());
    return result;
}

JSValue jsHTMLDocumentCompatMode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->compatMode());
    return result;
}

JSValue jsHTMLDocumentActiveElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->activeElement()));
    return result;
}

JSValue jsHTMLDocumentBgColor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->bgColor());
    return result;
}

JSValue jsHTMLDocumentFgColor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->fgColor());
    return result;
}

JSValue jsHTMLDocumentAlinkColor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->alinkColor());
    return result;
}

JSValue jsHTMLDocumentLinkColor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->linkColor());
    return result;
}

JSValue jsHTMLDocumentVlinkColor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* castedThis = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThis->impl());
    JSValue result = jsString(exec, imp->vlinkColor());
    return result;
}

JSValue jsHTMLDocumentConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLDocument* domObject = static_cast<JSHTMLDocument*>(asObject(slot.slotBase()));
    return JSHTMLDocument::getConstructor(exec, domObject->globalObject());
}
void JSHTMLDocument::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLDocument, Base>(exec, propertyName, value, &JSHTMLDocumentTable, this, slot);
}

void setJSHTMLDocumentAll(ExecState* exec, JSObject* thisObject, JSValue value)
{
    static_cast<JSHTMLDocument*>(thisObject)->setAll(exec, value);
}

void setJSHTMLDocumentDir(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setDir(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLDocumentDesignMode(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setDesignMode(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLDocumentBgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setBgColor(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLDocumentFgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setFgColor(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLDocumentAlinkColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setAlinkColor(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLDocumentLinkColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setLinkColor(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLDocumentVlinkColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObject);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());
    imp->setVlinkColor(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLDocument::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDocumentConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionOpen(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    return castedThisObj->open(exec, args);
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionClose(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());

    imp->close();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionWrite(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    return castedThisObj->write(exec, args);
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionWriteln(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    return castedThisObj->writeln(exec, args);
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());

    imp->clear();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionCaptureEvents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());

    imp->captureEvents();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionReleaseEvents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());

    imp->releaseEvents();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionHasFocus(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLDocument::s_info))
        return throwError(exec, TypeError);
    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(asObject(thisValue));
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());


    JSC::JSValue result = jsBoolean(imp->hasFocus());
    return result;
}


}
