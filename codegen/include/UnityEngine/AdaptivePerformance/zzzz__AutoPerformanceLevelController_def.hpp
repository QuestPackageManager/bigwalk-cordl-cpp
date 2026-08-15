#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AutoPerformanceLevelController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoPerformanceLevelController)
namespace UnityEngine::AdaptivePerformance {
class IDevicePerformanceControl;
}
namespace UnityEngine::AdaptivePerformance {
class IPerformanceStatus;
}
namespace UnityEngine::AdaptivePerformance {
class IThermalStatus;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneckChangeEventArgs;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AutoPerformanceLevelController;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*, "UnityEngine.AdaptivePerformance", "AutoPerformanceLevelController");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AutoPerformanceLevelController
class CORDL_TYPE AutoPerformanceLevelController : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AllowedCpuActiveTimeRatio, put=set_AllowedCpuActiveTimeRatio)) float_t  AllowedCpuActiveTimeRatio;

 __declspec(property(get=get_AllowedGpuActiveTimeRatio, put=set_AllowedGpuActiveTimeRatio)) float_t  AllowedGpuActiveTimeRatio;

 __declspec(property(get=get_CpuLevelBounceAvoidanceThreshold, put=set_CpuLevelBounceAvoidanceThreshold)) float_t  CpuLevelBounceAvoidanceThreshold;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_GpuLevelBounceAvoidanceThreshold, put=set_GpuLevelBounceAvoidanceThreshold)) float_t  GpuLevelBounceAvoidanceThreshold;

 __declspec(property(get=get_MaxTemperatureLevel, put=set_MaxTemperatureLevel)) float_t  MaxTemperatureLevel;

 __declspec(property(get=get_MinTargetFrameRateHitTime, put=set_MinTargetFrameRateHitTime)) float_t  MinTargetFrameRateHitTime;

 __declspec(property(get=get_TargetFrameTime, put=set_TargetFrameTime)) float_t  TargetFrameTime;

 __declspec(property(get=get_UpdateInterval, put=set_UpdateInterval)) float_t  UpdateInterval;

/// @brief Field <AllowedCpuActiveTimeRatio>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__AllowedCpuActiveTimeRatio_k__BackingField, put=__cordl_internal_set__AllowedCpuActiveTimeRatio_k__BackingField)) float_t  _AllowedCpuActiveTimeRatio_k__BackingField;

/// @brief Field <AllowedGpuActiveTimeRatio>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__AllowedGpuActiveTimeRatio_k__BackingField, put=__cordl_internal_set__AllowedGpuActiveTimeRatio_k__BackingField)) float_t  _AllowedGpuActiveTimeRatio_k__BackingField;

/// @brief Field <CpuLevelBounceAvoidanceThreshold>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__CpuLevelBounceAvoidanceThreshold_k__BackingField, put=__cordl_internal_set__CpuLevelBounceAvoidanceThreshold_k__BackingField)) float_t  _CpuLevelBounceAvoidanceThreshold_k__BackingField;

/// @brief Field <GpuLevelBounceAvoidanceThreshold>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__GpuLevelBounceAvoidanceThreshold_k__BackingField, put=__cordl_internal_set__GpuLevelBounceAvoidanceThreshold_k__BackingField)) float_t  _GpuLevelBounceAvoidanceThreshold_k__BackingField;

/// @brief Field <MaxTemperatureLevel>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxTemperatureLevel_k__BackingField, put=__cordl_internal_set__MaxTemperatureLevel_k__BackingField)) float_t  _MaxTemperatureLevel_k__BackingField;

/// @brief Field <MinTargetFrameRateHitTime>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinTargetFrameRateHitTime_k__BackingField, put=__cordl_internal_set__MinTargetFrameRateHitTime_k__BackingField)) float_t  _MinTargetFrameRateHitTime_k__BackingField;

/// @brief Field <TargetFrameTime>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__TargetFrameTime_k__BackingField, put=__cordl_internal_set__TargetFrameTime_k__BackingField)) float_t  _TargetFrameTime_k__BackingField;

/// @brief Field <UpdateInterval>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__UpdateInterval_k__BackingField, put=__cordl_internal_set__UpdateInterval_k__BackingField)) float_t  _UpdateInterval_k__BackingField;

/// @brief Field m_BottleneckUnknownTimestamp, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BottleneckUnknownTimestamp, put=__cordl_internal_set_m_BottleneckUnknownTimestamp)) float_t  m_BottleneckUnknownTimestamp;

/// @brief Field m_Enabled, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Enabled, put=__cordl_internal_set_m_Enabled)) bool  m_Enabled;

/// @brief Field m_FeatureName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FeatureName, put=__cordl_internal_set_m_FeatureName)) ::StringW  m_FeatureName;

/// @brief Field m_LastChangeTimeStamp, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastChangeTimeStamp, put=__cordl_internal_set_m_LastChangeTimeStamp)) float_t  m_LastChangeTimeStamp;

/// @brief Field m_LastCpuLevelRaiseTimeStamp, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastCpuLevelRaiseTimeStamp, put=__cordl_internal_set_m_LastCpuLevelRaiseTimeStamp)) float_t  m_LastCpuLevelRaiseTimeStamp;

/// @brief Field m_LastGpuLevelRaiseTimeStamp, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastGpuLevelRaiseTimeStamp, put=__cordl_internal_set_m_LastGpuLevelRaiseTimeStamp)) float_t  m_LastGpuLevelRaiseTimeStamp;

/// @brief Field m_PerfControl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PerfControl, put=__cordl_internal_set_m_PerfControl)) ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  m_PerfControl;

/// @brief Field m_PerfStats, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PerfStats, put=__cordl_internal_set_m_PerfStats)) ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  m_PerfStats;

/// @brief Field m_TargetFrameRateHitTimestamp, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetFrameRateHitTimestamp, put=__cordl_internal_set_m_TargetFrameRateHitTimestamp)) float_t  m_TargetFrameRateHitTimestamp;

/// @brief Field m_ThermalStats, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThermalStats, put=__cordl_internal_set_m_ThermalStats)) ::UnityEngine::AdaptivePerformance::IThermalStatus*  m_ThermalStats;

/// @brief Field m_TriedToResolveUnknownBottleneck, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TriedToResolveUnknownBottleneck, put=__cordl_internal_set_m_TriedToResolveUnknownBottleneck)) bool  m_TriedToResolveUnknownBottleneck;

/// @brief Method AllowLowerCpuLevel, addr 0x18221fe30, size 0xb0, virtual false, abstract: false, final false
inline bool AllowLowerCpuLevel(float_t  timestamp) ;

/// @brief Method AllowLowerGpuLevel, addr 0x18221fee0, size 0xb0, virtual false, abstract: false, final false
inline bool AllowLowerGpuLevel(float_t  timestamp) ;

/// @brief Method AllowRaiseCpuLevel, addr 0x18221ff90, size 0x60, virtual false, abstract: false, final false
inline bool AllowRaiseCpuLevel() ;

/// @brief Method AllowRaiseGpuLevel, addr 0x18221fff0, size 0x60, virtual false, abstract: false, final false
inline bool AllowRaiseGpuLevel() ;

/// @brief Method AllowRaiseLevels, addr 0x182220050, size 0x160, virtual false, abstract: false, final false
inline bool AllowRaiseLevels() ;

/// @brief Method LowerCpuLevel, addr 0x1822201b0, size 0xc0, virtual false, abstract: false, final false
inline void LowerCpuLevel(float_t  timestamp) ;

/// @brief Method LowerGpuLevel, addr 0x182220270, size 0xc0, virtual false, abstract: false, final false
inline void LowerGpuLevel(float_t  timestamp) ;

static inline ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController* New_ctor(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  perfControl, ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  perfStat, ::UnityEngine::AdaptivePerformance::IThermalStatus*  thermalStat) ;

/// @brief Method OnBottleneckChange, addr 0x182220330, size 0x50, virtual false, abstract: false, final false
inline void OnBottleneckChange(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  ev) ;

/// @brief Method Override, addr 0x182220380, size 0xa0, virtual false, abstract: false, final false
inline void Override(int32_t  requestedCpuLevel, int32_t  requestedGpuLevel) ;

/// @brief Method RaiseCpuLevel, addr 0x182220420, size 0xc0, virtual false, abstract: false, final false
inline void RaiseCpuLevel(float_t  timestamp) ;

/// @brief Method RaiseGpuLevel, addr 0x1822204e0, size 0xc0, virtual false, abstract: false, final false
inline void RaiseGpuLevel(float_t  timestamp) ;

/// @brief Method Update, addr 0x182220960, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateImpl, addr 0x1822205a0, size 0x3c0, virtual false, abstract: false, final false
inline void UpdateImpl(float_t  timestamp) ;

constexpr float_t const& __cordl_internal_get__AllowedCpuActiveTimeRatio_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AllowedCpuActiveTimeRatio_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__AllowedGpuActiveTimeRatio_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AllowedGpuActiveTimeRatio_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__CpuLevelBounceAvoidanceThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CpuLevelBounceAvoidanceThreshold_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__GpuLevelBounceAvoidanceThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__GpuLevelBounceAvoidanceThreshold_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxTemperatureLevel_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxTemperatureLevel_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MinTargetFrameRateHitTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MinTargetFrameRateHitTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__TargetFrameTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TargetFrameTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__UpdateInterval_k__BackingField() const;

constexpr float_t& __cordl_internal_get__UpdateInterval_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_BottleneckUnknownTimestamp() const;

constexpr float_t& __cordl_internal_get_m_BottleneckUnknownTimestamp() ;

constexpr bool const& __cordl_internal_get_m_Enabled() const;

constexpr bool& __cordl_internal_get_m_Enabled() ;

constexpr ::StringW const& __cordl_internal_get_m_FeatureName() const;

constexpr ::StringW& __cordl_internal_get_m_FeatureName() ;

constexpr float_t const& __cordl_internal_get_m_LastChangeTimeStamp() const;

constexpr float_t& __cordl_internal_get_m_LastChangeTimeStamp() ;

constexpr float_t const& __cordl_internal_get_m_LastCpuLevelRaiseTimeStamp() const;

constexpr float_t& __cordl_internal_get_m_LastCpuLevelRaiseTimeStamp() ;

constexpr float_t const& __cordl_internal_get_m_LastGpuLevelRaiseTimeStamp() const;

constexpr float_t& __cordl_internal_get_m_LastGpuLevelRaiseTimeStamp() ;

constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* const& __cordl_internal_get_m_PerfControl() const;

constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*& __cordl_internal_get_m_PerfControl() ;

constexpr ::UnityEngine::AdaptivePerformance::IPerformanceStatus* const& __cordl_internal_get_m_PerfStats() const;

constexpr ::UnityEngine::AdaptivePerformance::IPerformanceStatus*& __cordl_internal_get_m_PerfStats() ;

constexpr float_t const& __cordl_internal_get_m_TargetFrameRateHitTimestamp() const;

constexpr float_t& __cordl_internal_get_m_TargetFrameRateHitTimestamp() ;

constexpr ::UnityEngine::AdaptivePerformance::IThermalStatus* const& __cordl_internal_get_m_ThermalStats() const;

constexpr ::UnityEngine::AdaptivePerformance::IThermalStatus*& __cordl_internal_get_m_ThermalStats() ;

constexpr bool const& __cordl_internal_get_m_TriedToResolveUnknownBottleneck() const;

constexpr bool& __cordl_internal_get_m_TriedToResolveUnknownBottleneck() ;

constexpr void __cordl_internal_set__AllowedCpuActiveTimeRatio_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__AllowedGpuActiveTimeRatio_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__CpuLevelBounceAvoidanceThreshold_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__GpuLevelBounceAvoidanceThreshold_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxTemperatureLevel_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MinTargetFrameRateHitTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TargetFrameTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__UpdateInterval_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_BottleneckUnknownTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_m_Enabled(bool  value) ;

constexpr void __cordl_internal_set_m_FeatureName(::StringW  value) ;

constexpr void __cordl_internal_set_m_LastChangeTimeStamp(float_t  value) ;

constexpr void __cordl_internal_set_m_LastCpuLevelRaiseTimeStamp(float_t  value) ;

constexpr void __cordl_internal_set_m_LastGpuLevelRaiseTimeStamp(float_t  value) ;

constexpr void __cordl_internal_set_m_PerfControl(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  value) ;

constexpr void __cordl_internal_set_m_PerfStats(::UnityEngine::AdaptivePerformance::IPerformanceStatus*  value) ;

constexpr void __cordl_internal_set_m_TargetFrameRateHitTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_m_ThermalStats(::UnityEngine::AdaptivePerformance::IThermalStatus*  value) ;

constexpr void __cordl_internal_set_m_TriedToResolveUnknownBottleneck(bool  value) ;

/// @brief Method <.ctor>b__43_0, addr 0x182220330, size 0x50, virtual false, abstract: false, final false
inline void __ctor_b__43_0(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  ev) ;

/// @brief Method .ctor, addr 0x182220990, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  perfControl, ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  perfStat, ::UnityEngine::AdaptivePerformance::IThermalStatus*  thermalStat) ;

/// @brief Method get_AllowedCpuActiveTimeRatio, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_AllowedCpuActiveTimeRatio() ;

/// @brief Method get_AllowedGpuActiveTimeRatio, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_AllowedGpuActiveTimeRatio() ;

/// @brief Method get_CpuLevelBounceAvoidanceThreshold, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CpuLevelBounceAvoidanceThreshold() ;

/// @brief Method get_Enabled, addr 0x18049d330, size 0x10, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_GpuLevelBounceAvoidanceThreshold, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_GpuLevelBounceAvoidanceThreshold() ;

/// @brief Method get_MaxTemperatureLevel, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxTemperatureLevel() ;

/// @brief Method get_MinTargetFrameRateHitTime, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinTargetFrameRateHitTime() ;

/// @brief Method get_TargetFrameTime, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_TargetFrameTime() ;

/// @brief Method get_UpdateInterval, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_UpdateInterval() ;

/// @brief Method set_AllowedCpuActiveTimeRatio, addr 0x18046fb60, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedCpuActiveTimeRatio(float_t  value) ;

/// @brief Method set_AllowedGpuActiveTimeRatio, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedGpuActiveTimeRatio(float_t  value) ;

/// @brief Method set_CpuLevelBounceAvoidanceThreshold, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void set_CpuLevelBounceAvoidanceThreshold(float_t  value) ;

/// @brief Method set_Enabled, addr 0x182220b60, size 0x10, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_GpuLevelBounceAvoidanceThreshold, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_GpuLevelBounceAvoidanceThreshold(float_t  value) ;

/// @brief Method set_MaxTemperatureLevel, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_MaxTemperatureLevel(float_t  value) ;

/// @brief Method set_MinTargetFrameRateHitTime, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_MinTargetFrameRateHitTime(float_t  value) ;

/// @brief Method set_TargetFrameTime, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_TargetFrameTime(float_t  value) ;

/// @brief Method set_UpdateInterval, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_UpdateInterval(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoPerformanceLevelController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoPerformanceLevelController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoPerformanceLevelController(AutoPerformanceLevelController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoPerformanceLevelController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoPerformanceLevelController(AutoPerformanceLevelController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19386};

/// @brief Field m_PerfControl, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  ___m_PerfControl;

/// @brief Field m_PerfStats, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  ___m_PerfStats;

/// @brief Field m_ThermalStats, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::IThermalStatus*  ___m_ThermalStats;

/// @brief Field m_LastChangeTimeStamp, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_LastChangeTimeStamp;

/// @brief Field m_LastGpuLevelRaiseTimeStamp, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_LastGpuLevelRaiseTimeStamp;

/// @brief Field m_LastCpuLevelRaiseTimeStamp, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_LastCpuLevelRaiseTimeStamp;

/// @brief Field m_TargetFrameRateHitTimestamp, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_TargetFrameRateHitTimestamp;

/// @brief Field m_BottleneckUnknownTimestamp, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_BottleneckUnknownTimestamp;

/// @brief Field m_TriedToResolveUnknownBottleneck, offset: 0x3c, size: 0x1, def value: None
 bool  ___m_TriedToResolveUnknownBottleneck;

/// @brief Field m_Enabled, offset: 0x3d, size: 0x1, def value: None
 bool  ___m_Enabled;

/// @brief Field m_FeatureName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___m_FeatureName;

/// @brief Field <TargetFrameTime>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____TargetFrameTime_k__BackingField;

/// @brief Field <AllowedCpuActiveTimeRatio>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 float_t  ____AllowedCpuActiveTimeRatio_k__BackingField;

/// @brief Field <AllowedGpuActiveTimeRatio>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____AllowedGpuActiveTimeRatio_k__BackingField;

/// @brief Field <GpuLevelBounceAvoidanceThreshold>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____GpuLevelBounceAvoidanceThreshold_k__BackingField;

/// @brief Field <CpuLevelBounceAvoidanceThreshold>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____CpuLevelBounceAvoidanceThreshold_k__BackingField;

/// @brief Field <UpdateInterval>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____UpdateInterval_k__BackingField;

/// @brief Field <MinTargetFrameRateHitTime>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____MinTargetFrameRateHitTime_k__BackingField;

/// @brief Field <MaxTemperatureLevel>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____MaxTemperatureLevel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_PerfControl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_PerfStats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_ThermalStats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_LastChangeTimeStamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_LastGpuLevelRaiseTimeStamp) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_LastCpuLevelRaiseTimeStamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_TargetFrameRateHitTimestamp) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_BottleneckUnknownTimestamp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_TriedToResolveUnknownBottleneck) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_Enabled) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ___m_FeatureName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____TargetFrameTime_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____AllowedCpuActiveTimeRatio_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____AllowedGpuActiveTimeRatio_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____GpuLevelBounceAvoidanceThreshold_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____CpuLevelBounceAvoidanceThreshold_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____UpdateInterval_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____MinTargetFrameRateHitTime_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController, ____MaxTemperatureLevel_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
