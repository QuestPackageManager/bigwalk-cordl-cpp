#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbientOcclusionMode)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct AmbientOcclusionMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode, "UnityEngine.Rendering.PostProcessing", "AmbientOcclusionMode");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode
struct CORDL_TYPE AmbientOcclusionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AmbientOcclusionMode_Unwrapped
enum struct __AmbientOcclusionMode_Unwrapped : int32_t {
__E_ScalableAmbientObscurance = static_cast<int32_t>(0x0),
__E_MultiScaleVolumetricObscurance = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AmbientOcclusionMode_Unwrapped () const noexcept {
return static_cast<__AmbientOcclusionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AmbientOcclusionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AmbientOcclusionMode(int32_t  value__) noexcept;

/// @brief Field MultiScaleVolumetricObscurance value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode const MultiScaleVolumetricObscurance;

/// @brief Field ScalableAmbientObscurance value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode const ScalableAmbientObscurance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18538};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
