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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEDiffuseLightingElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDiffuseLightingElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEDiffuseLightingElement);

/* Hash table */

static const HashTableValue JSSVGFEDiffuseLightingElementTableValues[14] =
{
    { "in1", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementIn1, (intptr_t)0 },
    { "surfaceScale", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementSurfaceScale, (intptr_t)0 },
    { "diffuseConstant", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementDiffuseConstant, (intptr_t)0 },
    { "kernelUnitLengthX", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementKernelUnitLengthX, (intptr_t)0 },
    { "kernelUnitLengthY", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementKernelUnitLengthY, (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementHeight, (intptr_t)0 },
    { "result", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementResult, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementStyle, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGFEDiffuseLightingElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFEDiffuseLightingElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGFEDiffuseLightingElementTableValues, 0 };
#else
    { 35, 31, JSSVGFEDiffuseLightingElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGFEDiffuseLightingElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFEDiffuseLightingElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFEDiffuseLightingElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGFEDiffuseLightingElementConstructorTableValues, 0 };
#endif

class JSSVGFEDiffuseLightingElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEDiffuseLightingElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGFEDiffuseLightingElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGFEDiffuseLightingElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGFEDiffuseLightingElementConstructor::s_info = { "SVGFEDiffuseLightingElementConstructor", 0, &JSSVGFEDiffuseLightingElementConstructorTable, 0 };

bool JSSVGFEDiffuseLightingElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDiffuseLightingElementConstructor, DOMObject>(exec, &JSSVGFEDiffuseLightingElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEDiffuseLightingElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEDiffuseLightingElementConstructor, DOMObject>(exec, &JSSVGFEDiffuseLightingElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEDiffuseLightingElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGFEDiffuseLightingElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFEDiffuseLightingElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFEDiffuseLightingElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGFEDiffuseLightingElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFEDiffuseLightingElementPrototype::s_info = { "SVGFEDiffuseLightingElementPrototype", 0, &JSSVGFEDiffuseLightingElementPrototypeTable, 0 };

JSObject* JSSVGFEDiffuseLightingElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEDiffuseLightingElement>(exec, globalObject);
}

bool JSSVGFEDiffuseLightingElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEDiffuseLightingElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEDiffuseLightingElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEDiffuseLightingElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEDiffuseLightingElement::s_info = { "SVGFEDiffuseLightingElement", &JSSVGElement::s_info, &JSSVGFEDiffuseLightingElementTable, 0 };

JSSVGFEDiffuseLightingElement::JSSVGFEDiffuseLightingElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEDiffuseLightingElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFEDiffuseLightingElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEDiffuseLightingElementPrototype(JSSVGFEDiffuseLightingElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEDiffuseLightingElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDiffuseLightingElement, Base>(exec, &JSSVGFEDiffuseLightingElementTable, this, propertyName, slot);
}

bool JSSVGFEDiffuseLightingElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEDiffuseLightingElement, Base>(exec, &JSSVGFEDiffuseLightingElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEDiffuseLightingElementIn1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementSurfaceScale(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->surfaceScaleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementDiffuseConstant(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->diffuseConstantAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementKernelUnitLengthX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementKernelUnitLengthY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementResult(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEDiffuseLightingElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* castedThis = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFEDiffuseLightingElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* domObject = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(slot.slotBase()));
    return JSSVGFEDiffuseLightingElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFEDiffuseLightingElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEDiffuseLightingElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGFEDiffuseLightingElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGFEDiffuseLightingElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEDiffuseLightingElement* castedThisObj = static_cast<JSSVGFEDiffuseLightingElement*>(asObject(thisValue));
    SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
