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

#ifndef JSHTMLInputElement_h
#define JSHTMLInputElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLInputElement;

class JSHTMLInputElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLInputElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLInputElement>);
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

    // Custom attributes
    JSC::JSValue type(JSC::ExecState*) const;
    JSC::JSValue selectionStart(JSC::ExecState*) const;
    void setSelectionStart(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue selectionEnd(JSC::ExecState*) const;
    void setSelectionEnd(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue setSelectionRange(JSC::ExecState*, const JSC::ArgList&);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLInputElementPrototype : public JSC::JSObject {
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
    JSHTMLInputElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionStepUp(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionStepDown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionCheckValidity(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionSetCustomValidity(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionSelect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionClick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionSetSelectionRange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsHTMLInputElementDefaultValue(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementDefaultValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementDefaultChecked(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementDefaultChecked(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementForm(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementFormNoValidate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementFormNoValidate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValidity(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementAccept(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementAccept(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAccessKey(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAlign(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAlt(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementAlt(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementChecked(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementChecked(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementDisabled(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAutofocus(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementAutofocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementList(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementMax(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementMax(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMaxLength(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementMaxLength(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMin(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementMin(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMultiple(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementMultiple(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementPattern(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementPattern(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementPlaceholder(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementPlaceholder(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementReadOnly(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementReadOnly(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementRequired(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementRequired(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSize(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementSize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSrc(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementStep(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementStep(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementType(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementUseMap(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementUseMap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValue(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValueAsDate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementValueAsDate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValueAsNumber(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementValueAsNumber(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSelectedOption(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementWillValidate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementValidationMessage(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementIndeterminate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementIndeterminate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSelectionStart(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementSelectionStart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSelectionEnd(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLInputElementSelectionEnd(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementFiles(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsHTMLInputElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
