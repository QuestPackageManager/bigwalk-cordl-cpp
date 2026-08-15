#pragma once
// IWYU pragma private; include "Shipmates/Utils/CodeGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodeGenerator)
namespace System {
class Random;
}
// Forward declare root types
namespace Shipmates::Utils {
class CodeGenerator;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::CodeGenerator*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::CodeGenerator*, "Shipmates.Utils", "CodeGenerator");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.CodeGenerator
class CORDL_TYPE CodeGenerator : public ::System::Object {
public:
// Declarations
/// @brief Field _random, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__random, put=setStaticF__random)) ::System::Random*  _random;

/// @brief Method GenerateCode, addr 0x181acb250, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GenerateCode() ;

static inline ::System::Random* getStaticF__random() ;

static inline void setStaticF__random(::System::Random*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodeGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeGenerator(CodeGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeGenerator(CodeGenerator const& ) = delete;

/// @brief Field CharacterSet offset 0xffffffff size 0x8
static constexpr ::ConstString  CharacterSet{u"ABCDEFGHJKLMNPQRSTUVWXYZ23456789"};

/// @brief Field CodeLength offset 0xffffffff size 0x4
static constexpr int32_t  CodeLength{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::Utils::CodeGenerator) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::Utils
