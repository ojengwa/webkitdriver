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

#include "JSSVGScriptElement.h"

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "KURL.h"
#include "SVGScriptElement.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGScriptElement);

/* Hash table */

static const HashTableValue JSSVGScriptElementTableValues[5] =
{
    { "type", DontDelete, (intptr_t)jsSVGScriptElementType, (intptr_t)setJSSVGScriptElementType },
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGScriptElementHref, (intptr_t)0 },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGScriptElementExternalResourcesRequired, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGScriptElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGScriptElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGScriptElementTableValues, 0 };
#else
    { 9, 7, JSSVGScriptElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGScriptElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGScriptElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGScriptElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGScriptElementConstructorTableValues, 0 };
#endif

class JSSVGScriptElementConstructor : public DOMConstructorObject {
public:
    JSSVGScriptElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGScriptElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGScriptElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGScriptElementConstructor::s_info = { "SVGScriptElementConstructor", 0, &JSSVGScriptElementConstructorTable, 0 };

bool JSSVGScriptElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGScriptElementConstructor, DOMObject>(exec, &JSSVGScriptElementConstructorTable, this, propertyName, slot);
}

bool JSSVGScriptElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGScriptElementConstructor, DOMObject>(exec, &JSSVGScriptElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGScriptElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGScriptElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGScriptElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGScriptElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGScriptElementPrototype::s_info = { "SVGScriptElementPrototype", 0, &JSSVGScriptElementPrototypeTable, 0 };

JSObject* JSSVGScriptElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGScriptElement>(exec, globalObject);
}

const ClassInfo JSSVGScriptElement::s_info = { "SVGScriptElement", &JSSVGElement::s_info, &JSSVGScriptElementTable, 0 };

JSSVGScriptElement::JSSVGScriptElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGScriptElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGScriptElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGScriptElementPrototype(JSSVGScriptElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGScriptElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGScriptElement, Base>(exec, &JSSVGScriptElementTable, this, propertyName, slot);
}

bool JSSVGScriptElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGScriptElement, Base>(exec, &JSSVGScriptElementTable, this, propertyName, descriptor);
}

JSValue jsSVGScriptElementType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGScriptElement* castedThis = static_cast<JSSVGScriptElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGScriptElement* imp = static_cast<SVGScriptElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}

JSValue jsSVGScriptElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGScriptElement* castedThis = static_cast<JSSVGScriptElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGScriptElement* imp = static_cast<SVGScriptElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGScriptElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGScriptElement* castedThis = static_cast<JSSVGScriptElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGScriptElement* imp = static_cast<SVGScriptElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGScriptElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGScriptElement* domObject = static_cast<JSSVGScriptElement*>(asObject(slot.slotBase()));
    return JSSVGScriptElement::getConstructor(exec, domObject->globalObject());
}
void JSSVGScriptElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGScriptElement, Base>(exec, propertyName, value, &JSSVGScriptElementTable, this, slot);
}

void setJSSVGScriptElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGScriptElement* castedThisObj = static_cast<JSSVGScriptElement*>(thisObject);
    SVGScriptElement* imp = static_cast<SVGScriptElement*>(castedThisObj->impl());
    imp->setType(valueToStringWithNullCheck(exec, value));
}

JSValue JSSVGScriptElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGScriptElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
