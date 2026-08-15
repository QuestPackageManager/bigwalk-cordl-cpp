#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Integrations/Sampling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Sampling)
// Forward declare root types
namespace Rowlan::Genesis::Integrations {
struct Sampling;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::Integrations::Sampling);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Integrations::Sampling, "Rowlan.Genesis.Integrations", "Sampling");
// Dependencies 
namespace Rowlan::Genesis::Integrations {
// Is value type: true
// CS Name: Rowlan.Genesis.Integrations.Sampling
struct CORDL_TYPE Sampling {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sampling_Unwrapped
enum struct __Sampling_Unwrapped : int32_t {
__E_Discrete = static_cast<int32_t>(0x0),
__E_Interpolate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sampling_Unwrapped () const noexcept {
return static_cast<__Sampling_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sampling() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Sampling(int32_t  value__) noexcept;

/// @brief Field Discrete value: I32(0)
static ::Rowlan::Genesis::Integrations::Sampling const Discrete;

/// @brief Field Interpolate value: I32(1)
static ::Rowlan::Genesis::Integrations::Sampling const Interpolate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Integrations::Sampling, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Integrations::Sampling) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Integrations
