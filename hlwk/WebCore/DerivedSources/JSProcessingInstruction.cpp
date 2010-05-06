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
#include "JSProcessingInstruction.h"

#include "JSStyleSheet.h"
#include "KURL.h"
#include "ProcessingInstruction.h"
#include "StyleSheet.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSProcessingInstruction);

/* Hash table */

static const HashTableValue JSProcessingInstructionTableValues[5] =
{
    { "target", DontDelete|ReadOnly, (intptr_t)jsProcessingInstructionTarget, (intptr_t)0 },
    { "data", DontDelete, (intptr_t)jsProcessingInstructionData, (intptr_t)setJSProcessingInstructionData },
    { "sheet", DontDelete|ReadOnly, (intptr_t)jsProcessingInstructionSheet, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsProcessingInstructionConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSProcessingInstructionTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSProcessingInstructionTableValues, 0 };
#else
    { 8, 7, JSProcessingInstructionTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSProcessingInstructionConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSProcessingInstructionConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSProcessingInstructionConstructorTableValues, 0 };
#else
    { 1, 0, JSProcessingInstructionConstructorTableValues, 0 };
#endif

class JSProcessingInstructionConstructor : public DOMConstructorObject {
public:
    JSProcessingInstructionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSProcessingInstructionConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSProcessingInstructionPrototype::self(exec, globalObject), None);
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

const ClassInfo JSProcessingInstructionConstructor::s_info = { "ProcessingInstructionConstructor", 0, &JSProcessingInstructionConstructorTable, 0 };

bool JSProcessingInstructionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProcessingInstructionConstructor, DOMObject>(exec, &JSProcessingInstructionConstructorTable, this, propertyName, slot);
}

bool JSProcessingInstructionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSProcessingInstructionConstructor, DOMObject>(exec, &JSProcessingInstructionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSProcessingInstructionPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSProcessingInstructionPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSProcessingInstructionPrototypeTableValues, 0 };
#else
    { 1, 0, JSProcessingInstructionPrototypeTableValues, 0 };
#endif

const ClassInfo JSProcessingInstructionPrototype::s_info = { "ProcessingInstructionPrototype", 0, &JSProcessingInstructionPrototypeTable, 0 };

JSObject* JSProcessingInstructionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSProcessingInstruction>(exec, globalObject);
}

const ClassInfo JSProcessingInstruction::s_info = { "ProcessingInstruction", &JSNode::s_info, &JSProcessingInstructionTable, 0 };

JSProcessingInstruction::JSProcessingInstruction(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<ProcessingInstruction> impl)
    : JSNode(structure, globalObject, impl)
{
}

JSObject* JSProcessingInstruction::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSProcessingInstructionPrototype(JSProcessingInstructionPrototype::createStructure(JSNodePrototype::self(exec, globalObject)));
}

bool JSProcessingInstruction::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProcessingInstruction, Base>(exec, &JSProcessingInstructionTable, this, propertyName, slot);
}

bool JSProcessingInstruction::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSProcessingInstruction, Base>(exec, &JSProcessingInstructionTable, this, propertyName, descriptor);
}

JSValue jsProcessingInstructionTarget(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->target());
    return result;
}

JSValue jsProcessingInstructionData(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->data());
    return result;
}

JSValue jsProcessingInstructionSheet(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->sheet()));
    return result;
}

JSValue jsProcessingInstructionConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSProcessingInstruction* domObject = static_cast<JSProcessingInstruction*>(asObject(slot.slotBase()));
    return JSProcessingInstruction::getConstructor(exec, domObject->globalObject());
}
void JSProcessingInstruction::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSProcessingInstruction, Base>(exec, propertyName, value, &JSProcessingInstructionTable, this, slot);
}

void setJSProcessingInstructionData(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSProcessingInstruction* castedThisObj = static_cast<JSProcessingInstruction*>(thisObject);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    imp->setData(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValue JSProcessingInstruction::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSProcessingInstructionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
