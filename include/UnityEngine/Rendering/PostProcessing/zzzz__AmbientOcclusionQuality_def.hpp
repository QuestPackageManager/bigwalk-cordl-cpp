#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusionQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbientOcclusionQuality)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct AmbientOcclusionQuality;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality, "UnityEngine.Rendering.PostProcessing", "AmbientOcclusionQuality");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.AmbientOcclusionQuality
struct CORDL_TYPE AmbientOcclusionQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AmbientOcclusionQuality_Unwrapped
enum struct __AmbientOcclusionQuality_Unwrapped : int32_t {
__E_Lowest = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_Ultra = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AmbientOcclusionQuality_Unwrapped () const noexcept {
return static_cast<__AmbientOcclusionQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AmbientOcclusionQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AmbientOcclusionQuality(int32_t  value__) noexcept;

/// @brief Field High value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality const High;

/// @brief Field Low value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality const Low;

/// @brief Field Lowest value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality const Lowest;

/// @brief Field Medium value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality const Medium;

/// @brief Field Ultra value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality const Ultra;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQuality) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
