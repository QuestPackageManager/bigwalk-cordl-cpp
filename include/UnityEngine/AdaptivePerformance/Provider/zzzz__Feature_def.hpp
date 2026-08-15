#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/Feature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Feature)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
struct Feature;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::Provider::Feature);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::Feature, "UnityEngine.AdaptivePerformance.Provider", "Feature");
// Dependencies 
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.Provider.Feature
struct CORDL_TYPE Feature {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Feature_Unwrapped
enum struct __Feature_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WarningLevel = static_cast<int32_t>(0x1),
__E_TemperatureLevel = static_cast<int32_t>(0x2),
__E_TemperatureTrend = static_cast<int32_t>(0x4),
__E_CpuPerformanceLevel = static_cast<int32_t>(0x8),
__E_GpuPerformanceLevel = static_cast<int32_t>(0x10),
__E_PerformanceLevelControl = static_cast<int32_t>(0x20),
__E_GpuFrameTime = static_cast<int32_t>(0x40),
__E_CpuFrameTime = static_cast<int32_t>(0x80),
__E_OverallFrameTime = static_cast<int32_t>(0x100),
__E_CpuPerformanceBoost = static_cast<int32_t>(0x200),
__E_GpuPerformanceBoost = static_cast<int32_t>(0x400),
__E_ClusterInfo = static_cast<int32_t>(0x800),
__E_PerformanceMode = static_cast<int32_t>(0x1000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Feature_Unwrapped () const noexcept {
return static_cast<__Feature_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Feature() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Feature(int32_t  value__) noexcept;

/// @brief Field ClusterInfo value: I32(2048)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const ClusterInfo;

/// @brief Field CpuFrameTime value: I32(128)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const CpuFrameTime;

/// @brief Field CpuPerformanceBoost value: I32(512)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const CpuPerformanceBoost;

/// @brief Field CpuPerformanceLevel value: I32(8)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const CpuPerformanceLevel;

/// @brief Field GpuFrameTime value: I32(64)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const GpuFrameTime;

/// @brief Field GpuPerformanceBoost value: I32(1024)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const GpuPerformanceBoost;

/// @brief Field GpuPerformanceLevel value: I32(16)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const GpuPerformanceLevel;

/// @brief Field None value: I32(0)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const None;

/// @brief Field OverallFrameTime value: I32(256)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const OverallFrameTime;

/// @brief Field PerformanceLevelControl value: I32(32)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const PerformanceLevelControl;

/// @brief Field PerformanceMode value: I32(4096)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const PerformanceMode;

/// @brief Field TemperatureLevel value: I32(2)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const TemperatureLevel;

/// @brief Field TemperatureTrend value: I32(4)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const TemperatureTrend;

/// @brief Field WarningLevel value: I32(1)
static ::UnityEngine::AdaptivePerformance::Provider::Feature const WarningLevel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::Feature, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::Feature) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
