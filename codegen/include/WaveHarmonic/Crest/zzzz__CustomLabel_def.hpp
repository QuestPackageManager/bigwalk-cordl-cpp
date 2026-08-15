#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CustomLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CustomLabel)
// Forward declare root types
namespace WaveHarmonic::Crest {
class CustomLabel;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CustomLabel*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CustomLabel*, "WaveHarmonic.Crest", "CustomLabel");
// Dependencies System.Attribute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CustomLabel
class CORDL_TYPE CustomLabel : public ::System::Attribute {
public:
// Declarations
static inline ::WaveHarmonic::Crest::CustomLabel* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomLabel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomLabel(CustomLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomLabel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomLabel(CustomLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::CustomLabel) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
