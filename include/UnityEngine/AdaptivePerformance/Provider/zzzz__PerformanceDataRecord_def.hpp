#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/PerformanceDataRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceDataRecord)
namespace UnityEngine::AdaptivePerformance::Provider {
struct Feature;
}
namespace UnityEngine::AdaptivePerformance {
struct ClusterInfo;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMode;
}
namespace UnityEngine::AdaptivePerformance {
struct WarningLevel;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
struct PerformanceDataRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, "UnityEngine.AdaptivePerformance.Provider", "PerformanceDataRecord");
// Dependencies UnityEngine.AdaptivePerformance.ClusterInfo, UnityEngine.AdaptivePerformance.PerformanceMode, UnityEngine.AdaptivePerformance.Provider.Feature, UnityEngine.AdaptivePerformance.WarningLevel
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
struct CORDL_TYPE PerformanceDataRecord {
public:
// Declarations
 __declspec(property(get=get_ChangeFlags, put=set_ChangeFlags)) ::UnityEngine::AdaptivePerformance::Provider::Feature  ChangeFlags;

 __declspec(property(get=get_ClusterInfo)) ::UnityEngine::AdaptivePerformance::ClusterInfo  ClusterInfo;

 __declspec(property(get=get_CpuFrameTime)) float_t  CpuFrameTime;

 __declspec(property(get=get_CpuPerformanceBoost, put=set_CpuPerformanceBoost)) bool  CpuPerformanceBoost;

 __declspec(property(get=get_CpuPerformanceLevel, put=set_CpuPerformanceLevel)) int32_t  CpuPerformanceLevel;

 __declspec(property(get=get_GpuFrameTime)) float_t  GpuFrameTime;

 __declspec(property(get=get_GpuPerformanceBoost, put=set_GpuPerformanceBoost)) bool  GpuPerformanceBoost;

 __declspec(property(get=get_GpuPerformanceLevel, put=set_GpuPerformanceLevel)) int32_t  GpuPerformanceLevel;

 __declspec(property(get=get_OverallFrameTime)) float_t  OverallFrameTime;

 __declspec(property(get=get_PerformanceLevelControlAvailable, put=set_PerformanceLevelControlAvailable)) bool  PerformanceLevelControlAvailable;

 __declspec(property(get=get_PerformanceMode)) ::UnityEngine::AdaptivePerformance::PerformanceMode  PerformanceMode;

 __declspec(property(get=get_TemperatureLevel, put=set_TemperatureLevel)) float_t  TemperatureLevel;

 __declspec(property(get=get_TemperatureTrend, put=set_TemperatureTrend)) float_t  TemperatureTrend;

 __declspec(property(get=get_WarningLevel)) ::UnityEngine::AdaptivePerformance::WarningLevel  WarningLevel;

/// @brief Method get_ChangeFlags, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::Feature get_ChangeFlags() ;

/// @brief Method get_ClusterInfo, addr 0x1803f2bc0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ClusterInfo get_ClusterInfo() ;

/// @brief Method get_CpuFrameTime, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CpuFrameTime() ;

/// @brief Method get_CpuPerformanceBoost, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_CpuPerformanceBoost() ;

/// @brief Method get_CpuPerformanceLevel, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CpuPerformanceLevel() ;

/// @brief Method get_GpuFrameTime, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_GpuFrameTime() ;

/// @brief Method get_GpuPerformanceBoost, addr 0x180503cd0, size 0x10, virtual false, abstract: false, final false
inline bool get_GpuPerformanceBoost() ;

/// @brief Method get_GpuPerformanceLevel, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_GpuPerformanceLevel() ;

/// @brief Method get_OverallFrameTime, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_OverallFrameTime() ;

/// @brief Method get_PerformanceLevelControlAvailable, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_PerformanceLevelControlAvailable() ;

/// @brief Method get_PerformanceMode, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::PerformanceMode get_PerformanceMode() ;

/// @brief Method get_TemperatureLevel, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TemperatureLevel() ;

/// @brief Method get_TemperatureTrend, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_TemperatureTrend() ;

/// @brief Method get_WarningLevel, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::WarningLevel get_WarningLevel() ;

/// @brief Method set_ChangeFlags, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ChangeFlags(::UnityEngine::AdaptivePerformance::Provider::Feature  value) ;

/// @brief Method set_CpuPerformanceBoost, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_CpuPerformanceBoost(bool  value) ;

/// @brief Method set_CpuPerformanceLevel, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_CpuPerformanceLevel(int32_t  value) ;

/// @brief Method set_GpuPerformanceBoost, addr 0x180503d00, size 0x10, virtual false, abstract: false, final false
inline void set_GpuPerformanceBoost(bool  value) ;

/// @brief Method set_GpuPerformanceLevel, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_GpuPerformanceLevel(int32_t  value) ;

/// @brief Method set_PerformanceLevelControlAvailable, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_PerformanceLevelControlAvailable(bool  value) ;

/// @brief Method set_TemperatureLevel, addr 0x18051ead0, size 0x10, virtual false, abstract: false, final false
inline void set_TemperatureLevel(float_t  value) ;

/// @brief Method set_TemperatureTrend, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_TemperatureTrend(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceDataRecord() ;

// Ctor Parameters [CppParam { name: "_ChangeFlags_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::Provider::Feature", modifiers: "", def_value: None }, CppParam { name: "_TemperatureLevel_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_TemperatureTrend_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_WarningLevel_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::WarningLevel", modifiers: "", def_value: None }, CppParam { name: "_CpuPerformanceLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_GpuPerformanceLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_PerformanceLevelControlAvailable_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_CpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_GpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_OverallFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_CpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_GpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ClusterInfo_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::ClusterInfo", modifiers: "", def_value: None }, CppParam { name: "_PerformanceMode_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceMode", modifiers: "", def_value: None }]
constexpr PerformanceDataRecord(::UnityEngine::AdaptivePerformance::Provider::Feature  _ChangeFlags_k__BackingField, float_t  _TemperatureLevel_k__BackingField, float_t  _TemperatureTrend_k__BackingField, ::UnityEngine::AdaptivePerformance::WarningLevel  _WarningLevel_k__BackingField, int32_t  _CpuPerformanceLevel_k__BackingField, int32_t  _GpuPerformanceLevel_k__BackingField, bool  _PerformanceLevelControlAvailable_k__BackingField, float_t  _CpuFrameTime_k__BackingField, float_t  _GpuFrameTime_k__BackingField, float_t  _OverallFrameTime_k__BackingField, bool  _CpuPerformanceBoost_k__BackingField, bool  _GpuPerformanceBoost_k__BackingField, ::UnityEngine::AdaptivePerformance::ClusterInfo  _ClusterInfo_k__BackingField, ::UnityEngine::AdaptivePerformance::PerformanceMode  _PerformanceMode_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19458};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field <ChangeFlags>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::Provider::Feature  _ChangeFlags_k__BackingField;

/// @brief Field <TemperatureLevel>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _TemperatureLevel_k__BackingField;

/// @brief Field <TemperatureTrend>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _TemperatureTrend_k__BackingField;

/// @brief Field <WarningLevel>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::WarningLevel  _WarningLevel_k__BackingField;

/// @brief Field <CpuPerformanceLevel>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  _CpuPerformanceLevel_k__BackingField;

/// @brief Field <GpuPerformanceLevel>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  _GpuPerformanceLevel_k__BackingField;

/// @brief Field <PerformanceLevelControlAvailable>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  _PerformanceLevelControlAvailable_k__BackingField;

/// @brief Field <CpuFrameTime>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  _CpuFrameTime_k__BackingField;

/// @brief Field <GpuFrameTime>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  _GpuFrameTime_k__BackingField;

/// @brief Field <OverallFrameTime>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  _OverallFrameTime_k__BackingField;

/// @brief Field <CpuPerformanceBoost>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  _CpuPerformanceBoost_k__BackingField;

/// @brief Field <GpuPerformanceBoost>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  _GpuPerformanceBoost_k__BackingField;

/// @brief Field <ClusterInfo>k__BackingField, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::AdaptivePerformance::ClusterInfo  _ClusterInfo_k__BackingField;

/// @brief Field <PerformanceMode>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceMode  _PerformanceMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _ChangeFlags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _TemperatureLevel_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _TemperatureTrend_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _WarningLevel_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _CpuPerformanceLevel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _GpuPerformanceLevel_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _PerformanceLevelControlAvailable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _CpuFrameTime_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _GpuFrameTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _OverallFrameTime_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _CpuPerformanceBoost_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _GpuPerformanceBoost_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _ClusterInfo_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord, _PerformanceMode_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord) == 0x3c, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
