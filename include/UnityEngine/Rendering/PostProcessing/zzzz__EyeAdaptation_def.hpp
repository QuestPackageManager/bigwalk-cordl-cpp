#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/EyeAdaptation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EyeAdaptation)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct EyeAdaptation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::EyeAdaptation);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::EyeAdaptation, "UnityEngine.Rendering.PostProcessing", "EyeAdaptation");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.EyeAdaptation
struct CORDL_TYPE EyeAdaptation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EyeAdaptation_Unwrapped
enum struct __EyeAdaptation_Unwrapped : int32_t {
__E_Progressive = static_cast<int32_t>(0x0),
__E_Fixed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EyeAdaptation_Unwrapped () const noexcept {
return static_cast<__EyeAdaptation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EyeAdaptation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EyeAdaptation(int32_t  value__) noexcept;

/// @brief Field Fixed value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::EyeAdaptation const Fixed;

/// @brief Field Progressive value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::EyeAdaptation const Progressive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::EyeAdaptation, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::EyeAdaptation) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
