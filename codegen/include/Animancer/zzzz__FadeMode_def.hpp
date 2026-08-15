#pragma once
// IWYU pragma private; include "Animancer/FadeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FadeMode)
// Forward declare root types
namespace Animancer {
struct FadeMode;
}
// Write type traits
MARK_VAL_T(::Animancer::FadeMode);
DEFINE_IL2CPP_CLASS(::Animancer::FadeMode, "Animancer", "FadeMode");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.FadeMode
struct CORDL_TYPE FadeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FadeMode_Unwrapped
enum struct __FadeMode_Unwrapped : int32_t {
__E_FixedSpeed = static_cast<int32_t>(0x0),
__E_FixedDuration = static_cast<int32_t>(0x1),
__E_FromStart = static_cast<int32_t>(0x2),
__E_NormalizedSpeed = static_cast<int32_t>(0x3),
__E_NormalizedDuration = static_cast<int32_t>(0x4),
__E_NormalizedFromStart = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FadeMode_Unwrapped () const noexcept {
return static_cast<__FadeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FadeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FadeMode(int32_t  value__) noexcept;

/// @brief Field FixedDuration value: I32(1)
static ::Animancer::FadeMode const FixedDuration;

/// @brief Field FixedSpeed value: I32(0)
static ::Animancer::FadeMode const FixedSpeed;

/// @brief Field FromStart value: I32(2)
static ::Animancer::FadeMode const FromStart;

/// @brief Field NormalizedDuration value: I32(4)
static ::Animancer::FadeMode const NormalizedDuration;

/// @brief Field NormalizedFromStart value: I32(5)
static ::Animancer::FadeMode const NormalizedFromStart;

/// @brief Field NormalizedSpeed value: I32(3)
static ::Animancer::FadeMode const NormalizedSpeed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::FadeMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::FadeMode) == 0x4, "Size mismatch!");

} // namespace end def Animancer
