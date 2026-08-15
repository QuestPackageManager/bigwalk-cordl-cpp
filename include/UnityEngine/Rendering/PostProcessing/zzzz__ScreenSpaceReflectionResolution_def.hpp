#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScreenSpaceReflectionResolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceReflectionResolution)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct ScreenSpaceReflectionResolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution, "UnityEngine.Rendering.PostProcessing", "ScreenSpaceReflectionResolution");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution
struct CORDL_TYPE ScreenSpaceReflectionResolution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceReflectionResolution_Unwrapped
enum struct __ScreenSpaceReflectionResolution_Unwrapped : int32_t {
__E_Downsampled = static_cast<int32_t>(0x0),
__E_FullSize = static_cast<int32_t>(0x1),
__E_Supersampled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceReflectionResolution_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceReflectionResolution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceReflectionResolution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScreenSpaceReflectionResolution(int32_t  value__) noexcept;

/// @brief Field Downsampled value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution const Downsampled;

/// @brief Field FullSize value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution const FullSize;

/// @brief Field Supersampled value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution const Supersampled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
