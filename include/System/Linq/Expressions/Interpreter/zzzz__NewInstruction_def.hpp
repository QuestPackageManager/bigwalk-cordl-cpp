#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NewInstruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NewInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NewInstruction;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Interpreter::NewInstruction*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::NewInstruction*, "System.Linq.Expressions.Interpreter", "NewInstruction");
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NewInstruction
class CORDL_TYPE NewInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
// Declarations
 __declspec(property(get=get_ConsumedStack)) int32_t  ConsumedStack;

 __declspec(property(get=get_InstructionName)) ::StringW  InstructionName;

 __declspec(property(get=get_ProducedStack)) int32_t  ProducedStack;

/// @brief Field _argumentCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__argumentCount, put=__cordl_internal_set__argumentCount)) int32_t  _argumentCount;

/// @brief Field _constructor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__constructor, put=__cordl_internal_set__constructor)) ::System::Reflection::ConstructorInfo*  _constructor;

/// @brief Method GetArgs, addr 0x181b2c340, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame, int32_t  first) ;

static inline ::System::Linq::Expressions::Interpreter::NewInstruction* New_ctor(::System::Reflection::ConstructorInfo*  constructor, int32_t  argumentCount) ;

/// @brief Method Run, addr 0x181b2c440, size 0xa0, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method ToString, addr 0x181b2c4e0, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__argumentCount() const;

constexpr int32_t& __cordl_internal_get__argumentCount() ;

constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get__constructor() const;

constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get__constructor() ;

constexpr void __cordl_internal_set__argumentCount(int32_t  value) ;

constexpr void __cordl_internal_set__constructor(::System::Reflection::ConstructorInfo*  value) ;

/// @brief Method .ctor, addr 0x180c3ff30, size 0x4250, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::ConstructorInfo*  constructor, int32_t  argumentCount) ;

/// @brief Method get_ConsumedStack, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ConsumedStack() ;

/// @brief Method get_InstructionName, addr 0x181b2c5c0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_InstructionName() ;

/// @brief Method get_ProducedStack, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ProducedStack() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NewInstruction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NewInstruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NewInstruction(NewInstruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NewInstruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NewInstruction(NewInstruction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15786};

/// @brief Field _constructor, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::ConstructorInfo*  ____constructor;

/// @brief Field _argumentCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____argumentCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewInstruction, ____constructor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewInstruction, ____argumentCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Linq::Expressions::Interpreter::NewInstruction) == 0x20, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
