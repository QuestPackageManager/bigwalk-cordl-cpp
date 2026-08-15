#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ThermalMetrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ThermalMetrics)
namespace UnityEngine::AdaptivePerformance {
struct WarningLevel;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct ThermalMetrics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::ThermalMetrics);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::ThermalMetrics, "UnityEngine.AdaptivePerformance", "ThermalMetrics");
// Dependencies UnityEngine.AdaptivePerformance.WarningLevel
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.ThermalMetrics
struct CORDL_TYPE ThermalMetrics {
public:
// Declarations
 __declspec(property(get=get_TemperatureLevel, put=set_TemperatureLevel)) float_t  TemperatureLevel;

 __declspec(property(get=get_TemperatureTrend, put=set_TemperatureTrend)) float_t  TemperatureTrend;

 __declspec(property(get=get_WarningLevel, put=set_WarningLevel)) ::UnityEngine::AdaptivePerformance::WarningLevel  WarningLevel;

/// @brief Method get_TemperatureLevel, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TemperatureLevel() ;

/// @brief Method get_TemperatureTrend, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_TemperatureTrend() ;

/// @brief Method get_WarningLevel, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::WarningLevel get_WarningLevel() ;

/// @brief Method set_TemperatureLevel, addr 0x18051ead0, size 0x10, virtual false, abstract: false, final false
inline void set_TemperatureLevel(float_t  value) ;

/// @brief Method set_TemperatureTrend, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_TemperatureTrend(float_t  value) ;

/// @brief Method set_WarningLevel, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_WarningLevel(::UnityEngine::AdaptivePerformance::WarningLevel  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ThermalMetrics() ;

// Ctor Parameters [CppParam { name: "_WarningLevel_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::WarningLevel", modifiers: "", def_value: None }, CppParam { name: "_TemperatureLevel_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_TemperatureTrend_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ThermalMetrics(::UnityEngine::AdaptivePerformance::WarningLevel  _WarningLevel_k__BackingField, float_t  _TemperatureLevel_k__BackingField, float_t  _TemperatureTrend_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field <WarningLevel>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::WarningLevel  _WarningLevel_k__BackingField;

/// @brief Field <TemperatureLevel>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _TemperatureLevel_k__BackingField;

/// @brief Field <TemperatureTrend>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _TemperatureTrend_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::ThermalMetrics, _WarningLevel_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::ThermalMetrics, _TemperatureLevel_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::ThermalMetrics, _TemperatureTrend_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::ThermalMetrics) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
