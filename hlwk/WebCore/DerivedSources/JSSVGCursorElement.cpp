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

#if ENABLE(SVG)

#include "JSSVGCursorElement.h"

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "SVGCursorElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGCursorElement);

/* Hash table */

static const HashTableValue JSSVGCursorElementTableValues[9] =
{
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementY, (intptr_t)0 },
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementHref, (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementSystemLanguage, (intptr_t)0 },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGCursorElementExternalResourcesRequired, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGCursorElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGCursorElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSSVGCursorElementTableValues, 0 };
#else
    { 18, 15, JSSVGCursorElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGCursorElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGCursorElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGCursorElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGCursorElementConstructorTableValues, 0 };
#endif

class JSSVGCursorElementConstructor : public DOMConstructorObject {
public:
    JSSVGCursorElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGCursorElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGCursorElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGCursorElementConstructor::s_info = { "SVGCursorElementConstructor", 0, &JSSVGCursorElementConstructorTable, 0 };

bool JSSVGCursorElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGCursorElementConstructor, DOMObject>(exec, &JSSVGCursorElementConstructorTable, this, propertyName, slot);
}

bool JSSVGCursorElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGCursorElementConstructor, DOMObject>(exec, &JSSVGCursorElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGCursorElementPrototypeTableValues[2] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGCursorElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGCursorElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGCursorElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGCursorElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGCursorElementPrototype::s_info = { "SVGCursorElementPrototype", 0, &JSSVGCursorElementPrototypeTable, 0 };

JSObject* JSSVGCursorElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGCursorElement>(exec, globalObject);
}

bool JSSVGCursorElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGCursorElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGCursorElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGCursorElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGCursorElement::s_info = { "SVGCursorElement", &JSSVGElement::s_info, &JSSVGCursorElementTable, 0 };

JSSVGCursorElement::JSSVGCursorElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGCursorElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGCursorElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGCursorElementPrototype(JSSVGCursorElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGCursorElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, this, propertyName, slot);
}

bool JSSVGCursorElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, this, propertyName, descriptor);
}

JSValue jsSVGCursorElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
    return result;
}

JSValue jsSVGCursorElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
    return result;
}

JSValue jsSVGCursorElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
    return result;
}

JSValue jsSVGCursorElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGCursorElement* domObject = static_cast<JSSVGCursorElement*>(asObject(slot.slotBase()));
    return JSSVGCursorElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGCursorElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGCursorElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGCursorElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGCursorElement::s_info))
        return throwError(exec, TypeError);
    JSSVGCursorElement* castedThisObj = static_cast<JSSVGCursorElement*>(asObject(thisValue));
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}


}

#endif // ENABLE(SVG)
