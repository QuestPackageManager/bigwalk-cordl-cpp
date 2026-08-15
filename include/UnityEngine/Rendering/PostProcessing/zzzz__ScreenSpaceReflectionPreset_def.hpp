#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScreenSpaceReflectionPreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceReflectionPreset)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct ScreenSpaceReflectionPreset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset, "UnityEngine.Rendering.PostProcessing", "ScreenSpaceReflectionPreset");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionPreset
struct CORDL_TYPE ScreenSpaceReflectionPreset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceReflectionPreset_Unwrapped
enum struct __ScreenSpaceReflectionPreset_Unwrapped : int32_t {
__E_Lower = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_Higher = static_cast<int32_t>(0x4),
__E_Ultra = static_cast<int32_t>(0x5),
__E_Overkill = static_cast<int32_t>(0x6),
__E_Custom = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceReflectionPreset_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceReflectionPreset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceReflectionPreset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScreenSpaceReflectionPreset(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(7)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Custom;

/// @brief Field High value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const High;

/// @brief Field Higher value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Higher;

/// @brief Field Low value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Low;

/// @brief Field Lower value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Lower;

/// @brief Field Medium value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Medium;

/// @brief Field Overkill value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Overkill;

/// @brief Field Ultra value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset const Ultra;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18582};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPreset) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
