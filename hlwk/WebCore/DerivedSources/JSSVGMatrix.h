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

#ifndef JSSVGMatrix_h
#define JSSVGMatrix_h

#if ENABLE(SVG)

#include "AffineTransform.h"
#include "JSDOMBinding.h"
#include "JSSVGPODTypeWrapper.h"
#include "SVGElement.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSVGMatrix : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSSVGMatrix(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<JSSVGPODTypeWrapper<AffineTransform> >);
    virtual ~JSSVGMatrix();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue multiply(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue inverse(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue rotateFromVector(JSC::ExecState*, const JSC::ArgList&);
    JSSVGPODTypeWrapper<AffineTransform> * impl() const { return m_impl.get(); }

private:
    RefPtr<JSSVGPODTypeWrapper<AffineTransform> > m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, JSSVGPODTypeWrapper<AffineTransform>*, SVGElement*);
AffineTransform toSVGMatrix(JSC::JSValue);

class JSSVGMatrixPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSSVGMatrixPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionMultiply(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionInverse(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionTranslate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionScale(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionScaleNonUniform(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionRotate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionRotateFromVector(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionFlipX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionFlipY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionSkewX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionSkewY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsSVGMatrixA(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGMatrixA(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixB(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGMatrixB(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixC(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGMatrixC(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixD(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGMatrixD(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixE(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGMatrixE(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixF(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGMatrixF(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
