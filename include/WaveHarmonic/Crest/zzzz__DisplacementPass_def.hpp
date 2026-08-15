#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DisplacementPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisplacementPass)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct DisplacementPass;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::DisplacementPass);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DisplacementPass, "WaveHarmonic.Crest", "DisplacementPass");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.DisplacementPass
struct CORDL_TYPE DisplacementPass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DisplacementPass_Unwrapped
enum struct __DisplacementPass_Unwrapped : int32_t {
__E_LodDependent = static_cast<int32_t>(0x0),
__E_LodIndependent = static_cast<int32_t>(0x1),
__E_LodIndependentLast = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisplacementPass_Unwrapped () const noexcept {
return static_cast<__DisplacementPass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DisplacementPass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisplacementPass(int32_t  value__) noexcept;

/// @brief Field LodDependent value: I32(0)
static ::WaveHarmonic::Crest::DisplacementPass const LodDependent;

/// @brief Field LodIndependent value: I32(1)
static ::WaveHarmonic::Crest::DisplacementPass const LodIndependent;

/// @brief Field LodIndependentLast value: I32(2)
static ::WaveHarmonic::Crest::DisplacementPass const LodIndependentLast;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16477};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DisplacementPass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DisplacementPass) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
