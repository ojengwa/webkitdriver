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

#if ENABLE(SVG) && ENABLE(SVG_FOREIGN_OBJECT)

#include "JSSVGForeignObjectElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGForeignObjectElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGForeignObjectElement);

/* Hash table */

static const HashTableValue JSSVGForeignObjectElementTableValues[17] =
{
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementHeight, (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementSystemLanguage, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGForeignObjectElementXmllang, (intptr_t)setJSSVGForeignObjectElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGForeignObjectElementXmlspace, (intptr_t)setJSSVGForeignObjectElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementStyle, (intptr_t)0 },
    { "transform", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementTransform, (intptr_t)0 },
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementNearestViewportElement, (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGForeignObjectElementFarthestViewportElement, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGForeignObjectElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGForeignObjectElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSSVGForeignObjectElementTableValues, 0 };
#else
    { 37, 31, JSSVGForeignObjectElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGForeignObjectElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGForeignObjectElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGForeignObjectElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGForeignObjectElementConstructorTableValues, 0 };
#endif

class JSSVGForeignObjectElementConstructor : public DOMConstructorObject {
public:
    JSSVGForeignObjectElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGForeignObjectElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGForeignObjectElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGForeignObjectElementConstructor::s_info = { "SVGForeignObjectElementConstructor", 0, &JSSVGForeignObjectElementConstructorTable, 0 };

bool JSSVGForeignObjectElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGForeignObjectElementConstructor, DOMObject>(exec, &JSSVGForeignObjectElementConstructorTable, this, propertyName, slot);
}

bool JSSVGForeignObjectElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGForeignObjectElementConstructor, DOMObject>(exec, &JSSVGForeignObjectElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGForeignObjectElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGForeignObjectElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { "getBBox", DontDelete|Function, (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetBBox, (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetCTM, (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetScreenCTM, (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)jsSVGForeignObjectElementPrototypeFunctionGetTransformToElement, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGForeignObjectElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSSVGForeignObjectElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGForeignObjectElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGForeignObjectElementPrototype::s_info = { "SVGForeignObjectElementPrototype", 0, &JSSVGForeignObjectElementPrototypeTable, 0 };

JSObject* JSSVGForeignObjectElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGForeignObjectElement>(exec, globalObject);
}

bool JSSVGForeignObjectElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGForeignObjectElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGForeignObjectElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGForeignObjectElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGForeignObjectElement::s_info = { "SVGForeignObjectElement", &JSSVGElement::s_info, &JSSVGForeignObjectElementTable, 0 };

JSSVGForeignObjectElement::JSSVGForeignObjectElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGForeignObjectElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGForeignObjectElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGForeignObjectElementPrototype(JSSVGForeignObjectElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGForeignObjectElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGForeignObjectElement, Base>(exec, &JSSVGForeignObjectElementTable, this, propertyName, slot);
}

bool JSSVGForeignObjectElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGForeignObjectElement, Base>(exec, &JSSVGForeignObjectElementTable, this, propertyName, descriptor);
}

JSValue jsSVGForeignObjectElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
    return result;
}

JSValue jsSVGForeignObjectElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
    return result;
}

JSValue jsSVGForeignObjectElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
    return result;
}

JSValue jsSVGForeignObjectElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}

JSValue jsSVGForeignObjectElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}

JSValue jsSVGForeignObjectElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGForeignObjectElementTransform(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGForeignObjectElementNearestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}

JSValue jsSVGForeignObjectElementFarthestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* castedThis = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}

JSValue jsSVGForeignObjectElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGForeignObjectElement* domObject = static_cast<JSSVGForeignObjectElement*>(asObject(slot.slotBase()));
    return JSSVGForeignObjectElement::getConstructor(exec, domObject->globalObject());
}
void JSSVGForeignObjectElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGForeignObjectElement, Base>(exec, propertyName, value, &JSSVGForeignObjectElementTable, this, slot);
}

void setJSSVGForeignObjectElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisObject);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGForeignObjectElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(thisObject);
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSSVGForeignObjectElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGForeignObjectElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGForeignObjectElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(asObject(thisValue));
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGForeignObjectElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(asObject(thisValue));
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue JSC_HOST_CALL jsSVGForeignObjectElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(asObject(thisValue));
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), 0 /* no context on purpose */);
    return result;
}

JSValue JSC_HOST_CALL jsSVGForeignObjectElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(asObject(thisValue));
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), 0 /* no context on purpose */);
    return result;
}

JSValue JSC_HOST_CALL jsSVGForeignObjectElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(asObject(thisValue));
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), 0 /* no context on purpose */);
    return result;
}

JSValue JSC_HOST_CALL jsSVGForeignObjectElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGForeignObjectElement::s_info))
        return throwError(exec, TypeError);
    JSSVGForeignObjectElement* castedThisObj = static_cast<JSSVGForeignObjectElement*>(asObject(thisValue));
    SVGForeignObjectElement* imp = static_cast<SVGForeignObjectElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(0));


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), 0 /* no context on purpose */);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FOREIGN_OBJECT)
