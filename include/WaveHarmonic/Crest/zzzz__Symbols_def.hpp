#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Symbols.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Symbols)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Symbols;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Symbols*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Symbols*, "WaveHarmonic.Crest", "Symbols");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Symbols
class CORDL_TYPE Symbols : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Symbols() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Symbols", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Symbols(Symbols && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Symbols", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Symbols(Symbols const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20075};

/// @brief Field k_UnityEditor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UnityEditor{u"UNITY_EDITOR"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Symbols) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
