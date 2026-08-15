#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DebugOverlay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugOverlay)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct DebugOverlay;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::DebugOverlay);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::DebugOverlay, "UnityEngine.Rendering.PostProcessing", "DebugOverlay");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.DebugOverlay
struct CORDL_TYPE DebugOverlay {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugOverlay_Unwrapped
enum struct __DebugOverlay_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Depth = static_cast<int32_t>(0x1),
__E_Normals = static_cast<int32_t>(0x2),
__E_MotionVectors = static_cast<int32_t>(0x3),
__E_NANTracker = static_cast<int32_t>(0x4),
__E_ColorBlindnessSimulation = static_cast<int32_t>(0x5),
__E__ = static_cast<int32_t>(0x6),
__E_AmbientOcclusion = static_cast<int32_t>(0x7),
__E_BloomBuffer = static_cast<int32_t>(0x8),
__E_BloomThreshold = static_cast<int32_t>(0x9),
__E_DepthOfField = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugOverlay_Unwrapped () const noexcept {
return static_cast<__DebugOverlay_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugOverlay() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugOverlay(int32_t  value__) noexcept;

/// @brief Field AmbientOcclusion value: I32(7)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const AmbientOcclusion;

/// @brief Field BloomBuffer value: I32(8)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const BloomBuffer;

/// @brief Field BloomThreshold value: I32(9)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const BloomThreshold;

/// @brief Field ColorBlindnessSimulation value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const ColorBlindnessSimulation;

/// @brief Field Depth value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const Depth;

/// @brief Field DepthOfField value: I32(10)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const DepthOfField;

/// @brief Field MotionVectors value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const MotionVectors;

/// @brief Field NANTracker value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const NANTracker;

/// @brief Field None value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const None;

/// @brief Field Normals value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const Normals;

/// @brief Field _ value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::DebugOverlay const _;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18620};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DebugOverlay, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::DebugOverlay) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
