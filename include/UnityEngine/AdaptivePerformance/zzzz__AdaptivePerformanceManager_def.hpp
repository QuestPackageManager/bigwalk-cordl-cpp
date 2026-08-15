#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__FrameTiming_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMetrics_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalMetrics_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptivePerformanceManager)
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystem;
}
namespace UnityEngine::AdaptivePerformance::Provider {
struct Feature;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class IApplicationLifecycle;
}
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceIndexer;
}
namespace UnityEngine::AdaptivePerformance {
class AutoPerformanceLevelController;
}
namespace UnityEngine::AdaptivePerformance {
class AutoPerformanceModeController;
}
namespace UnityEngine::AdaptivePerformance {
class CpuTimeProvider;
}
namespace UnityEngine::AdaptivePerformance {
class DevicePerformanceControlImpl;
}
namespace UnityEngine::AdaptivePerformance {
struct FrameTiming;
}
namespace UnityEngine::AdaptivePerformance {
class GpuTimeProvider;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformance;
}
namespace UnityEngine::AdaptivePerformance {
class IDevelopmentSettings;
}
namespace UnityEngine::AdaptivePerformance {
class IDevicePerformanceControl;
}
namespace UnityEngine::AdaptivePerformance {
class IPerformanceModeStatus;
}
namespace UnityEngine::AdaptivePerformance {
class IPerformanceStatus;
}
namespace UnityEngine::AdaptivePerformance {
class IThermalStatus;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBoostChangeEventArgs;
}
namespace UnityEngine::AdaptivePerformance {
class PerformanceBoostChangeHandler;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneckChangeEventArgs;
}
namespace UnityEngine::AdaptivePerformance {
class PerformanceBottleneckChangeHandler;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceControlMode;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceLevelChangeEventArgs;
}
namespace UnityEngine::AdaptivePerformance {
class PerformanceLevelChangeHandler;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMetrics;
}
namespace UnityEngine::AdaptivePerformance {
class PerformanceModeEventHandler;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMode;
}
namespace UnityEngine::AdaptivePerformance {
class RunningAverage;
}
namespace UnityEngine::AdaptivePerformance {
class TemperatureTrend;
}
namespace UnityEngine::AdaptivePerformance {
class ThermalEventHandler;
}
namespace UnityEngine::AdaptivePerformance {
struct ThermalMetrics;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceManager");
// Dependencies UnityEngine.AdaptivePerformance.FrameTiming, UnityEngine.AdaptivePerformance.PerformanceMetrics, UnityEngine.AdaptivePerformance.PerformanceMode, UnityEngine.AdaptivePerformance.ThermalMetrics, UnityEngine.MonoBehaviour
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceManager
class CORDL_TYPE AdaptivePerformanceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_AutomaticPerformanceControl, put=set_AutomaticPerformanceControl)) bool  AutomaticPerformanceControl;

 __declspec(property(get=get_CpuLevel, put=set_CpuLevel)) int32_t  CpuLevel;

 __declspec(property(get=get_CpuPerformanceBoost, put=set_CpuPerformanceBoost)) bool  CpuPerformanceBoost;

 __declspec(property(get=get_DevelopmentSettings)) ::UnityEngine::AdaptivePerformance::IDevelopmentSettings*  DevelopmentSettings;

 __declspec(property(get=get_DevicePerformanceControl)) ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*  DevicePerformanceControl;

 __declspec(property(get=get_FrameTiming)) ::UnityEngine::AdaptivePerformance::FrameTiming  FrameTiming;

 __declspec(property(get=get_GpuLevel, put=set_GpuLevel)) int32_t  GpuLevel;

 __declspec(property(get=get_GpuPerformanceBoost, put=set_GpuPerformanceBoost)) bool  GpuPerformanceBoost;

 __declspec(property(get=get_Indexer, put=set_Indexer)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  Indexer;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Logging, put=set_Logging)) bool  Logging;

 __declspec(property(get=get_LoggingFrequencyInFrames, put=set_LoggingFrequencyInFrames)) int32_t  LoggingFrequencyInFrames;

 __declspec(property(get=get_MaxCpuPerformanceLevel)) int32_t  MaxCpuPerformanceLevel;

 __declspec(property(get=get_MaxGpuPerformanceLevel)) int32_t  MaxGpuPerformanceLevel;

/// @brief Field PerformanceBoostChangeEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PerformanceBoostChangeEvent, put=__cordl_internal_set_PerformanceBoostChangeEvent)) ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  PerformanceBoostChangeEvent;

/// @brief Field PerformanceBottleneckChangeEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PerformanceBottleneckChangeEvent, put=__cordl_internal_set_PerformanceBottleneckChangeEvent)) ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  PerformanceBottleneckChangeEvent;

 __declspec(property(get=get_PerformanceControlMode)) ::UnityEngine::AdaptivePerformance::PerformanceControlMode  PerformanceControlMode;

/// @brief Field PerformanceLevelChangeEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PerformanceLevelChangeEvent, put=__cordl_internal_set_PerformanceLevelChangeEvent)) ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  PerformanceLevelChangeEvent;

 __declspec(property(get=get_PerformanceMetrics)) ::UnityEngine::AdaptivePerformance::PerformanceMetrics  PerformanceMetrics;

 __declspec(property(get=get_PerformanceMode)) ::UnityEngine::AdaptivePerformance::PerformanceMode  PerformanceMode;

/// @brief Field PerformanceModeEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PerformanceModeEvent, put=__cordl_internal_set_PerformanceModeEvent)) ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  PerformanceModeEvent;

 __declspec(property(get=get_PerformanceModeStatus)) ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*  PerformanceModeStatus;

 __declspec(property(get=get_PerformanceStatus)) ::UnityEngine::AdaptivePerformance::IPerformanceStatus*  PerformanceStatus;

 __declspec(property(get=get_Settings, put=set_Settings)) ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  Settings;

 __declspec(property(get=get_Subsystem)) ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*  Subsystem;

/// @brief Field ThermalEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ThermalEvent, put=__cordl_internal_set_ThermalEvent)) ::UnityEngine::AdaptivePerformance::ThermalEventHandler*  ThermalEvent;

 __declspec(property(get=get_ThermalMetrics)) ::UnityEngine::AdaptivePerformance::ThermalMetrics  ThermalMetrics;

 __declspec(property(get=get_ThermalStatus)) ::UnityEngine::AdaptivePerformance::IThermalStatus*  ThermalStatus;

/// @brief Field <Indexer>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Indexer_k__BackingField, put=__cordl_internal_set__Indexer_k__BackingField)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  _Indexer_k__BackingField;

/// @brief Field <LoggingFrequencyInFrames>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__LoggingFrequencyInFrames_k__BackingField, put=__cordl_internal_set__LoggingFrequencyInFrames_k__BackingField)) int32_t  _LoggingFrequencyInFrames_k__BackingField;

/// @brief Field m_AppLifecycle, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AppLifecycle, put=__cordl_internal_set_m_AppLifecycle)) ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  m_AppLifecycle;

/// @brief Field m_AutoPerformanceLevelController, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutoPerformanceLevelController, put=__cordl_internal_set_m_AutoPerformanceLevelController)) ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*  m_AutoPerformanceLevelController;

/// @brief Field m_AutoPerformanceModeController, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutoPerformanceModeController, put=__cordl_internal_set_m_AutoPerformanceModeController)) ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*  m_AutoPerformanceModeController;

/// @brief Field m_AutomaticPerformanceControl, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticPerformanceControl, put=__cordl_internal_set_m_AutomaticPerformanceControl)) bool  m_AutomaticPerformanceControl;

/// @brief Field m_AutomaticPerformanceControlChanged, offset 0xa5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutomaticPerformanceControlChanged, put=__cordl_internal_set_m_AutomaticPerformanceControlChanged)) bool  m_AutomaticPerformanceControlChanged;

/// @brief Field m_CpuFrameTime, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CpuFrameTime, put=__cordl_internal_set_m_CpuFrameTime)) ::UnityEngine::AdaptivePerformance::RunningAverage*  m_CpuFrameTime;

/// @brief Field m_CpuFrameTimeProvider, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CpuFrameTimeProvider, put=__cordl_internal_set_m_CpuFrameTimeProvider)) ::UnityEngine::AdaptivePerformance::CpuTimeProvider*  m_CpuFrameTimeProvider;

/// @brief Field m_DevicePerfControl, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DevicePerfControl, put=__cordl_internal_set_m_DevicePerfControl)) ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*  m_DevicePerfControl;

/// @brief Field m_FrameCount, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameCount, put=__cordl_internal_set_m_FrameCount)) int32_t  m_FrameCount;

/// @brief Field m_FrameTiming, offset 0x84, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_FrameTiming, put=__cordl_internal_set_m_FrameTiming)) ::UnityEngine::AdaptivePerformance::FrameTiming  m_FrameTiming;

/// @brief Field m_GpuFrameTime, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GpuFrameTime, put=__cordl_internal_set_m_GpuFrameTime)) ::UnityEngine::AdaptivePerformance::RunningAverage*  m_GpuFrameTime;

/// @brief Field m_GpuFrameTimeProvider, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GpuFrameTimeProvider, put=__cordl_internal_set_m_GpuFrameTimeProvider)) ::UnityEngine::AdaptivePerformance::GpuTimeProvider*  m_GpuFrameTimeProvider;

/// @brief Field m_JustResumed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_JustResumed, put=__cordl_internal_set_m_JustResumed)) bool  m_JustResumed;

/// @brief Field m_NewUserCpuPerformanceBoostRequest, offset 0x57, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NewUserCpuPerformanceBoostRequest, put=__cordl_internal_set_m_NewUserCpuPerformanceBoostRequest)) bool  m_NewUserCpuPerformanceBoostRequest;

/// @brief Field m_NewUserGpuPerformanceBoostRequest, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NewUserGpuPerformanceBoostRequest, put=__cordl_internal_set_m_NewUserGpuPerformanceBoostRequest)) bool  m_NewUserGpuPerformanceBoostRequest;

/// @brief Field m_NewUserPerformanceLevelRequest, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NewUserPerformanceLevelRequest, put=__cordl_internal_set_m_NewUserPerformanceLevelRequest)) bool  m_NewUserPerformanceLevelRequest;

/// @brief Field m_OverallFrameTime, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverallFrameTime, put=__cordl_internal_set_m_OverallFrameTime)) ::UnityEngine::AdaptivePerformance::RunningAverage*  m_OverallFrameTime;

/// @brief Field m_OverallFrameTimeAccu, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OverallFrameTimeAccu, put=__cordl_internal_set_m_OverallFrameTimeAccu)) float_t  m_OverallFrameTimeAccu;

/// @brief Field m_PerformanceMetrics, offset 0x68, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_PerformanceMetrics, put=__cordl_internal_set_m_PerformanceMetrics)) ::UnityEngine::AdaptivePerformance::PerformanceMetrics  m_PerformanceMetrics;

/// @brief Field m_PerformanceMode, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PerformanceMode, put=__cordl_internal_set_m_PerformanceMode)) ::UnityEngine::AdaptivePerformance::PerformanceMode  m_PerformanceMode;

/// @brief Field m_RequestedCpuBoost, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RequestedCpuBoost, put=__cordl_internal_set_m_RequestedCpuBoost)) bool  m_RequestedCpuBoost;

/// @brief Field m_RequestedCpuLevel, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RequestedCpuLevel, put=__cordl_internal_set_m_RequestedCpuLevel)) int32_t  m_RequestedCpuLevel;

/// @brief Field m_RequestedGpuBoost, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RequestedGpuBoost, put=__cordl_internal_set_m_RequestedGpuBoost)) bool  m_RequestedGpuBoost;

/// @brief Field m_RequestedGpuLevel, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RequestedGpuLevel, put=__cordl_internal_set_m_RequestedGpuLevel)) int32_t  m_RequestedGpuLevel;

/// @brief Field m_Settings, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  m_Settings;

/// @brief Field m_Subsystem, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Subsystem, put=__cordl_internal_set_m_Subsystem)) ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*  m_Subsystem;

/// @brief Field m_TemperatureTrend, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TemperatureTrend, put=__cordl_internal_set_m_TemperatureTrend)) ::UnityEngine::AdaptivePerformance::TemperatureTrend*  m_TemperatureTrend;

/// @brief Field m_ThermalMetrics, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ThermalMetrics, put=__cordl_internal_set_m_ThermalMetrics)) ::UnityEngine::AdaptivePerformance::ThermalMetrics  m_ThermalMetrics;

/// @brief Field m_UseProviderOverallFrameTime, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseProviderOverallFrameTime, put=__cordl_internal_set_m_UseProviderOverallFrameTime)) bool  m_UseProviderOverallFrameTime;

/// @brief Field m_WaitForEndOfFrame, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WaitForEndOfFrame, put=__cordl_internal_set_m_WaitForEndOfFrame)) ::UnityEngine::WaitForEndOfFrame*  m_WaitForEndOfFrame;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IAdaptivePerformance"
constexpr operator  ::UnityEngine::AdaptivePerformance::IAdaptivePerformance*() noexcept;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IDevelopmentSettings"
constexpr operator  ::UnityEngine::AdaptivePerformance::IDevelopmentSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr operator  ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*() noexcept;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IPerformanceModeStatus"
constexpr operator  ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*() noexcept;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IPerformanceStatus"
constexpr operator  ::UnityEngine::AdaptivePerformance::IPerformanceStatus*() noexcept;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IThermalStatus"
constexpr operator  ::UnityEngine::AdaptivePerformance::IThermalStatus*() noexcept;

/// @brief Method AccumulateTimingValue, addr 0x1822192e0, size 0x30, virtual false, abstract: false, final false
inline void AccumulateTimingValue(::by_ref<float_t>  accu, float_t  newValue) ;

/// @brief Method AddNonNegativeValue, addr 0x182219310, size 0x90, virtual false, abstract: false, final false
inline void AddNonNegativeValue(::UnityEngine::AdaptivePerformance::RunningAverage*  runningAverage, float_t  value) ;

/// @brief Method AppendFrameTiming, addr 0x1822193a0, size 0x120, virtual false, abstract: false, final false
inline void AppendFrameTiming(::StringW  label, float_t  averageSeconds, float_t  currentSeconds) ;

/// @brief Method Awake, addr 0x1822194c0, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CollectProfilerStats, addr 0x1822195e0, size 0x200, virtual false, abstract: false, final false
inline void CollectProfilerStats() ;

/// @brief Method DeinitializeAdaptivePerformance, addr 0x1822197e0, size 0x5c0, virtual true, abstract: false, final true
inline void DeinitializeAdaptivePerformance() ;

/// @brief Method EffectiveTargetFrameRate, addr 0x182219da0, size 0x20, virtual false, abstract: false, final false
static inline float_t EffectiveTargetFrameRate() ;

/// @brief Method HasFeature, addr 0x181cce090, size 0x10, virtual false, abstract: false, final false
static inline bool HasFeature(::UnityEngine::AdaptivePerformance::Provider::Feature  flags, ::UnityEngine::AdaptivePerformance::Provider::Feature  feature) ;

/// @brief Method InitializeAdaptivePerformance, addr 0x182219dc0, size 0xc90, virtual true, abstract: false, final true
inline void InitializeAdaptivePerformance() ;

/// @brief Method LateUpdate, addr 0x18221aa50, size 0xb0, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LogAdaptivePerformanceStatus, addr 0x18221ab00, size 0x6a0, virtual false, abstract: false, final false
inline void LogAdaptivePerformanceStatus() ;

/// @brief Method LogBoostEvent, addr 0x18221b1a0, size 0xa0, virtual false, abstract: false, final false
inline void LogBoostEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs  ev) ;

/// @brief Method LogBottleneckEvent, addr 0x18221b240, size 0x70, virtual false, abstract: false, final false
inline void LogBottleneckEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  ev) ;

/// @brief Method LogPerformanceLevelEvent, addr 0x18221b2b0, size 0x140, virtual false, abstract: false, final false
inline void LogPerformanceLevelEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs  ev) ;

/// @brief Method LogPerformanceModeEvent, addr 0x18221b3f0, size 0x90, virtual false, abstract: false, final false
inline void LogPerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceMode  performanceMode) ;

/// @brief Method LogThermalEvent, addr 0x18221b480, size 0xc0, virtual false, abstract: false, final false
inline void LogThermalEvent(::UnityEngine::AdaptivePerformance::ThermalMetrics  ev) ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x18221b540, size 0x100, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pause) ;

/// @brief Method OnDestroy, addr 0x18221b640, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method StartAdaptivePerformance, addr 0x18221b650, size 0x40, virtual true, abstract: false, final true
inline void StartAdaptivePerformance() ;

/// @brief Method StopAdaptivePerformance, addr 0x18221b690, size 0x70, virtual true, abstract: false, final true
inline void StopAdaptivePerformance() ;

/// @brief Method SupportedFeature, addr 0x18221b700, size 0x40, virtual true, abstract: false, final true
inline bool SupportedFeature(::UnityEngine::AdaptivePerformance::Provider::Feature  feature) ;

/// @brief Method ToStringWithSign, addr 0x18221b740, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToStringWithSign(int32_t  x) ;

/// @brief Method Update, addr 0x18221c1e0, size 0x2e0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSubsystem, addr 0x18221b770, size 0xa70, virtual false, abstract: false, final false
inline void UpdateSubsystem() ;

/// @brief Method WillCurrentFrameRender, addr 0x18221c4c0, size 0x10, virtual false, abstract: false, final false
static inline bool WillCurrentFrameRender() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler* const& __cordl_internal_get_PerformanceBoostChangeEvent() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*& __cordl_internal_get_PerformanceBoostChangeEvent() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler* const& __cordl_internal_get_PerformanceBottleneckChangeEvent() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*& __cordl_internal_get_PerformanceBottleneckChangeEvent() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler* const& __cordl_internal_get_PerformanceLevelChangeEvent() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*& __cordl_internal_get_PerformanceLevelChangeEvent() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler* const& __cordl_internal_get_PerformanceModeEvent() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*& __cordl_internal_get_PerformanceModeEvent() ;

constexpr ::UnityEngine::AdaptivePerformance::ThermalEventHandler* const& __cordl_internal_get_ThermalEvent() const;

constexpr ::UnityEngine::AdaptivePerformance::ThermalEventHandler*& __cordl_internal_get_ThermalEvent() ;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* const& __cordl_internal_get__Indexer_k__BackingField() const;

constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*& __cordl_internal_get__Indexer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LoggingFrequencyInFrames_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LoggingFrequencyInFrames_k__BackingField() ;

constexpr ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* const& __cordl_internal_get_m_AppLifecycle() const;

constexpr ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*& __cordl_internal_get_m_AppLifecycle() ;

constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController* const& __cordl_internal_get_m_AutoPerformanceLevelController() const;

constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*& __cordl_internal_get_m_AutoPerformanceLevelController() ;

constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController* const& __cordl_internal_get_m_AutoPerformanceModeController() const;

constexpr ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*& __cordl_internal_get_m_AutoPerformanceModeController() ;

constexpr bool const& __cordl_internal_get_m_AutomaticPerformanceControl() const;

constexpr bool& __cordl_internal_get_m_AutomaticPerformanceControl() ;

constexpr bool const& __cordl_internal_get_m_AutomaticPerformanceControlChanged() const;

constexpr bool& __cordl_internal_get_m_AutomaticPerformanceControlChanged() ;

constexpr ::UnityEngine::AdaptivePerformance::RunningAverage* const& __cordl_internal_get_m_CpuFrameTime() const;

constexpr ::UnityEngine::AdaptivePerformance::RunningAverage*& __cordl_internal_get_m_CpuFrameTime() ;

constexpr ::UnityEngine::AdaptivePerformance::CpuTimeProvider* const& __cordl_internal_get_m_CpuFrameTimeProvider() const;

constexpr ::UnityEngine::AdaptivePerformance::CpuTimeProvider*& __cordl_internal_get_m_CpuFrameTimeProvider() ;

constexpr ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl* const& __cordl_internal_get_m_DevicePerfControl() const;

constexpr ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*& __cordl_internal_get_m_DevicePerfControl() ;

constexpr int32_t const& __cordl_internal_get_m_FrameCount() const;

constexpr int32_t& __cordl_internal_get_m_FrameCount() ;

constexpr ::UnityEngine::AdaptivePerformance::FrameTiming const& __cordl_internal_get_m_FrameTiming() const;

constexpr ::UnityEngine::AdaptivePerformance::FrameTiming& __cordl_internal_get_m_FrameTiming() ;

constexpr ::UnityEngine::AdaptivePerformance::RunningAverage* const& __cordl_internal_get_m_GpuFrameTime() const;

constexpr ::UnityEngine::AdaptivePerformance::RunningAverage*& __cordl_internal_get_m_GpuFrameTime() ;

constexpr ::UnityEngine::AdaptivePerformance::GpuTimeProvider* const& __cordl_internal_get_m_GpuFrameTimeProvider() const;

constexpr ::UnityEngine::AdaptivePerformance::GpuTimeProvider*& __cordl_internal_get_m_GpuFrameTimeProvider() ;

constexpr bool const& __cordl_internal_get_m_JustResumed() const;

constexpr bool& __cordl_internal_get_m_JustResumed() ;

constexpr bool const& __cordl_internal_get_m_NewUserCpuPerformanceBoostRequest() const;

constexpr bool& __cordl_internal_get_m_NewUserCpuPerformanceBoostRequest() ;

constexpr bool const& __cordl_internal_get_m_NewUserGpuPerformanceBoostRequest() const;

constexpr bool& __cordl_internal_get_m_NewUserGpuPerformanceBoostRequest() ;

constexpr bool const& __cordl_internal_get_m_NewUserPerformanceLevelRequest() const;

constexpr bool& __cordl_internal_get_m_NewUserPerformanceLevelRequest() ;

constexpr ::UnityEngine::AdaptivePerformance::RunningAverage* const& __cordl_internal_get_m_OverallFrameTime() const;

constexpr ::UnityEngine::AdaptivePerformance::RunningAverage*& __cordl_internal_get_m_OverallFrameTime() ;

constexpr float_t const& __cordl_internal_get_m_OverallFrameTimeAccu() const;

constexpr float_t& __cordl_internal_get_m_OverallFrameTimeAccu() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceMetrics const& __cordl_internal_get_m_PerformanceMetrics() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceMetrics& __cordl_internal_get_m_PerformanceMetrics() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode const& __cordl_internal_get_m_PerformanceMode() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode& __cordl_internal_get_m_PerformanceMode() ;

constexpr bool const& __cordl_internal_get_m_RequestedCpuBoost() const;

constexpr bool& __cordl_internal_get_m_RequestedCpuBoost() ;

constexpr int32_t const& __cordl_internal_get_m_RequestedCpuLevel() const;

constexpr int32_t& __cordl_internal_get_m_RequestedCpuLevel() ;

constexpr bool const& __cordl_internal_get_m_RequestedGpuBoost() const;

constexpr bool& __cordl_internal_get_m_RequestedGpuBoost() ;

constexpr int32_t const& __cordl_internal_get_m_RequestedGpuLevel() const;

constexpr int32_t& __cordl_internal_get_m_RequestedGpuLevel() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>& __cordl_internal_get_m_Settings() ;

constexpr ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem* const& __cordl_internal_get_m_Subsystem() const;

constexpr ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*& __cordl_internal_get_m_Subsystem() ;

constexpr ::UnityEngine::AdaptivePerformance::TemperatureTrend* const& __cordl_internal_get_m_TemperatureTrend() const;

constexpr ::UnityEngine::AdaptivePerformance::TemperatureTrend*& __cordl_internal_get_m_TemperatureTrend() ;

constexpr ::UnityEngine::AdaptivePerformance::ThermalMetrics const& __cordl_internal_get_m_ThermalMetrics() const;

constexpr ::UnityEngine::AdaptivePerformance::ThermalMetrics& __cordl_internal_get_m_ThermalMetrics() ;

constexpr bool const& __cordl_internal_get_m_UseProviderOverallFrameTime() const;

constexpr bool& __cordl_internal_get_m_UseProviderOverallFrameTime() ;

constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get_m_WaitForEndOfFrame() const;

constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get_m_WaitForEndOfFrame() ;

constexpr void __cordl_internal_set_PerformanceBoostChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  value) ;

constexpr void __cordl_internal_set_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value) ;

constexpr void __cordl_internal_set_PerformanceLevelChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  value) ;

constexpr void __cordl_internal_set_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value) ;

constexpr void __cordl_internal_set_ThermalEvent(::UnityEngine::AdaptivePerformance::ThermalEventHandler*  value) ;

constexpr void __cordl_internal_set__Indexer_k__BackingField(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  value) ;

constexpr void __cordl_internal_set__LoggingFrequencyInFrames_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_AppLifecycle(::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  value) ;

constexpr void __cordl_internal_set_m_AutoPerformanceLevelController(::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*  value) ;

constexpr void __cordl_internal_set_m_AutoPerformanceModeController(::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*  value) ;

constexpr void __cordl_internal_set_m_AutomaticPerformanceControl(bool  value) ;

constexpr void __cordl_internal_set_m_AutomaticPerformanceControlChanged(bool  value) ;

constexpr void __cordl_internal_set_m_CpuFrameTime(::UnityEngine::AdaptivePerformance::RunningAverage*  value) ;

constexpr void __cordl_internal_set_m_CpuFrameTimeProvider(::UnityEngine::AdaptivePerformance::CpuTimeProvider*  value) ;

constexpr void __cordl_internal_set_m_DevicePerfControl(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*  value) ;

constexpr void __cordl_internal_set_m_FrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_FrameTiming(::UnityEngine::AdaptivePerformance::FrameTiming  value) ;

constexpr void __cordl_internal_set_m_GpuFrameTime(::UnityEngine::AdaptivePerformance::RunningAverage*  value) ;

constexpr void __cordl_internal_set_m_GpuFrameTimeProvider(::UnityEngine::AdaptivePerformance::GpuTimeProvider*  value) ;

constexpr void __cordl_internal_set_m_JustResumed(bool  value) ;

constexpr void __cordl_internal_set_m_NewUserCpuPerformanceBoostRequest(bool  value) ;

constexpr void __cordl_internal_set_m_NewUserGpuPerformanceBoostRequest(bool  value) ;

constexpr void __cordl_internal_set_m_NewUserPerformanceLevelRequest(bool  value) ;

constexpr void __cordl_internal_set_m_OverallFrameTime(::UnityEngine::AdaptivePerformance::RunningAverage*  value) ;

constexpr void __cordl_internal_set_m_OverallFrameTimeAccu(float_t  value) ;

constexpr void __cordl_internal_set_m_PerformanceMetrics(::UnityEngine::AdaptivePerformance::PerformanceMetrics  value) ;

constexpr void __cordl_internal_set_m_PerformanceMode(::UnityEngine::AdaptivePerformance::PerformanceMode  value) ;

constexpr void __cordl_internal_set_m_RequestedCpuBoost(bool  value) ;

constexpr void __cordl_internal_set_m_RequestedCpuLevel(int32_t  value) ;

constexpr void __cordl_internal_set_m_RequestedGpuBoost(bool  value) ;

constexpr void __cordl_internal_set_m_RequestedGpuLevel(int32_t  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  value) ;

constexpr void __cordl_internal_set_m_Subsystem(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*  value) ;

constexpr void __cordl_internal_set_m_TemperatureTrend(::UnityEngine::AdaptivePerformance::TemperatureTrend*  value) ;

constexpr void __cordl_internal_set_m_ThermalMetrics(::UnityEngine::AdaptivePerformance::ThermalMetrics  value) ;

constexpr void __cordl_internal_set_m_UseProviderOverallFrameTime(bool  value) ;

constexpr void __cordl_internal_set_m_WaitForEndOfFrame(::UnityEngine::WaitForEndOfFrame*  value) ;

/// @brief Method .ctor, addr 0x18221c4d0, size 0x230, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_PerformanceBoostChangeEvent, addr 0x18221c700, size 0x80, virtual true, abstract: false, final true
inline void add_PerformanceBoostChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  value) ;

/// @brief Method add_PerformanceBottleneckChangeEvent, addr 0x18221c780, size 0x80, virtual true, abstract: false, final true
inline void add_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value) ;

/// @brief Method add_PerformanceLevelChangeEvent, addr 0x18221c800, size 0x80, virtual true, abstract: false, final true
inline void add_PerformanceLevelChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  value) ;

/// @brief Method add_PerformanceModeEvent, addr 0x18221c880, size 0x80, virtual true, abstract: false, final true
inline void add_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value) ;

/// @brief Method add_ThermalEvent, addr 0x18221c900, size 0x80, virtual true, abstract: false, final true
inline void add_ThermalEvent(::UnityEngine::AdaptivePerformance::ThermalEventHandler*  value) ;

/// @brief Method get_Active, addr 0x18221c980, size 0x70, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_AutomaticPerformanceControl, addr 0x181fc8210, size 0x10, virtual true, abstract: false, final true
inline bool get_AutomaticPerformanceControl() ;

/// @brief Method get_CpuLevel, addr 0x180e25b50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_CpuLevel() ;

/// @brief Method get_CpuPerformanceBoost, addr 0x181d20b20, size 0x10, virtual true, abstract: false, final true
inline bool get_CpuPerformanceBoost() ;

/// @brief Method get_DevelopmentSettings, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::IDevelopmentSettings* get_DevelopmentSettings() ;

/// @brief Method get_DevicePerformanceControl, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* get_DevicePerformanceControl() ;

/// @brief Method get_FrameTiming, addr 0x18221c9f0, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::FrameTiming get_FrameTiming() ;

/// @brief Method get_GpuLevel, addr 0x1803d7410, size 0x10, virtual true, abstract: false, final true
inline int32_t get_GpuLevel() ;

/// @brief Method get_GpuPerformanceBoost, addr 0x1816ea340, size 0x10, virtual true, abstract: false, final true
inline bool get_GpuPerformanceBoost() ;

/// @brief Method get_Indexer, addr 0x180322750, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* get_Indexer() ;

/// @brief Method get_Initialized, addr 0x18221ca10, size 0x80, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_Logging, addr 0x18221ca90, size 0x40, virtual true, abstract: false, final true
inline bool get_Logging() ;

/// @brief Method get_LoggingFrequencyInFrames, addr 0x180408b50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_LoggingFrequencyInFrames() ;

/// @brief Method get_MaxCpuPerformanceLevel, addr 0x18221cad0, size 0x30, virtual true, abstract: false, final true
inline int32_t get_MaxCpuPerformanceLevel() ;

/// @brief Method get_MaxGpuPerformanceLevel, addr 0x18221cb00, size 0x40, virtual true, abstract: false, final true
inline int32_t get_MaxGpuPerformanceLevel() ;

/// @brief Method get_PerformanceControlMode, addr 0x18221cb40, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::PerformanceControlMode get_PerformanceControlMode() ;

/// @brief Method get_PerformanceMetrics, addr 0x18221cb60, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::PerformanceMetrics get_PerformanceMetrics() ;

/// @brief Method get_PerformanceMode, addr 0x181561f30, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::PerformanceMode get_PerformanceMode() ;

/// @brief Method get_PerformanceModeStatus, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus* get_PerformanceModeStatus() ;

/// @brief Method get_PerformanceStatus, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::IPerformanceStatus* get_PerformanceStatus() ;

/// @brief Method get_Settings, addr 0x180322760, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> get_Settings() ;

/// @brief Method get_Subsystem, addr 0x1803d9940, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem* get_Subsystem() ;

/// @brief Method get_ThermalMetrics, addr 0x18221cb80, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::ThermalMetrics get_ThermalMetrics() ;

/// @brief Method get_ThermalStatus, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::IThermalStatus* get_ThermalStatus() ;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IAdaptivePerformance"
constexpr ::UnityEngine::AdaptivePerformance::IAdaptivePerformance* i___UnityEngine__AdaptivePerformance__IAdaptivePerformance() noexcept;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IDevelopmentSettings"
constexpr ::UnityEngine::AdaptivePerformance::IDevelopmentSettings* i___UnityEngine__AdaptivePerformance__IDevelopmentSettings() noexcept;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* i___UnityEngine__AdaptivePerformance__IDevicePerformanceControl() noexcept;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IPerformanceModeStatus"
constexpr ::UnityEngine::AdaptivePerformance::IPerformanceModeStatus* i___UnityEngine__AdaptivePerformance__IPerformanceModeStatus() noexcept;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IPerformanceStatus"
constexpr ::UnityEngine::AdaptivePerformance::IPerformanceStatus* i___UnityEngine__AdaptivePerformance__IPerformanceStatus() noexcept;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IThermalStatus"
constexpr ::UnityEngine::AdaptivePerformance::IThermalStatus* i___UnityEngine__AdaptivePerformance__IThermalStatus() noexcept;

/// @brief Method remove_PerformanceBoostChangeEvent, addr 0x18221cba0, size 0x80, virtual true, abstract: false, final true
inline void remove_PerformanceBoostChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  value) ;

/// @brief Method remove_PerformanceBottleneckChangeEvent, addr 0x18221cc20, size 0x80, virtual true, abstract: false, final true
inline void remove_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value) ;

/// @brief Method remove_PerformanceLevelChangeEvent, addr 0x18221cca0, size 0x80, virtual true, abstract: false, final true
inline void remove_PerformanceLevelChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  value) ;

/// @brief Method remove_PerformanceModeEvent, addr 0x18221cd20, size 0x80, virtual true, abstract: false, final true
inline void remove_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value) ;

/// @brief Method remove_ThermalEvent, addr 0x18221cda0, size 0x80, virtual true, abstract: false, final true
inline void remove_ThermalEvent(::UnityEngine::AdaptivePerformance::ThermalEventHandler*  value) ;

/// @brief Method set_AutomaticPerformanceControl, addr 0x18221ce20, size 0x10, virtual true, abstract: false, final true
inline void set_AutomaticPerformanceControl(bool  value) ;

/// @brief Method set_CpuLevel, addr 0x18221ce30, size 0x10, virtual true, abstract: false, final true
inline void set_CpuLevel(int32_t  value) ;

/// @brief Method set_CpuPerformanceBoost, addr 0x18221ce40, size 0x10, virtual true, abstract: false, final true
inline void set_CpuPerformanceBoost(bool  value) ;

/// @brief Method set_GpuLevel, addr 0x18221ce50, size 0x10, virtual true, abstract: false, final true
inline void set_GpuLevel(int32_t  value) ;

/// @brief Method set_GpuPerformanceBoost, addr 0x18221ce60, size 0x10, virtual true, abstract: false, final true
inline void set_GpuPerformanceBoost(bool  value) ;

/// @brief Method set_Indexer, addr 0x180322770, size 0x20, virtual false, abstract: false, final false
inline void set_Indexer(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  value) ;

/// @brief Method set_Logging, addr 0x18221ce70, size 0x50, virtual true, abstract: false, final true
inline void set_Logging(bool  value) ;

/// @brief Method set_LoggingFrequencyInFrames, addr 0x180b9feb0, size 0x2630, virtual true, abstract: false, final true
inline void set_LoggingFrequencyInFrames(int32_t  value) ;

/// @brief Method set_Settings, addr 0x180322790, size 0x20, virtual false, abstract: false, final false
inline void set_Settings(::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceManager(AdaptivePerformanceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceManager(AdaptivePerformanceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19383};

/// @brief Field ThermalEvent, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::ThermalEventHandler*  ___ThermalEvent;

/// @brief Field PerformanceBottleneckChangeEvent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  ___PerformanceBottleneckChangeEvent;

/// @brief Field PerformanceLevelChangeEvent, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*  ___PerformanceLevelChangeEvent;

/// @brief Field PerformanceBoostChangeEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*  ___PerformanceBoostChangeEvent;

/// @brief Field PerformanceModeEvent, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  ___PerformanceModeEvent;

/// @brief Field m_JustResumed, offset: 0x48, size: 0x1, def value: None
 bool  ___m_JustResumed;

/// @brief Field m_RequestedCpuLevel, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___m_RequestedCpuLevel;

/// @brief Field m_RequestedGpuLevel, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_RequestedGpuLevel;

/// @brief Field m_NewUserPerformanceLevelRequest, offset: 0x54, size: 0x1, def value: None
 bool  ___m_NewUserPerformanceLevelRequest;

/// @brief Field m_RequestedCpuBoost, offset: 0x55, size: 0x1, def value: None
 bool  ___m_RequestedCpuBoost;

/// @brief Field m_RequestedGpuBoost, offset: 0x56, size: 0x1, def value: None
 bool  ___m_RequestedGpuBoost;

/// @brief Field m_NewUserCpuPerformanceBoostRequest, offset: 0x57, size: 0x1, def value: None
 bool  ___m_NewUserCpuPerformanceBoostRequest;

/// @brief Field m_NewUserGpuPerformanceBoostRequest, offset: 0x58, size: 0x1, def value: None
 bool  ___m_NewUserGpuPerformanceBoostRequest;

/// @brief Field m_ThermalMetrics, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::AdaptivePerformance::ThermalMetrics  ___m_ThermalMetrics;

/// @brief Field m_PerformanceMetrics, offset: 0x68, size: 0x1c, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceMetrics  ___m_PerformanceMetrics;

/// @brief Field m_FrameTiming, offset: 0x84, size: 0x18, def value: None
 ::UnityEngine::AdaptivePerformance::FrameTiming  ___m_FrameTiming;

/// @brief Field m_PerformanceMode, offset: 0x9c, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceMode  ___m_PerformanceMode;

/// @brief Field <LoggingFrequencyInFrames>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____LoggingFrequencyInFrames_k__BackingField;

/// @brief Field m_AutomaticPerformanceControl, offset: 0xa4, size: 0x1, def value: None
 bool  ___m_AutomaticPerformanceControl;

/// @brief Field m_AutomaticPerformanceControlChanged, offset: 0xa5, size: 0x1, def value: None
 bool  ___m_AutomaticPerformanceControlChanged;

/// @brief Field <Indexer>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*  ____Indexer_k__BackingField;

/// @brief Field m_Settings, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  ___m_Settings;

/// @brief Field m_Subsystem, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*  ___m_Subsystem;

/// @brief Field m_DevicePerfControl, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*  ___m_DevicePerfControl;

/// @brief Field m_AutoPerformanceLevelController, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AutoPerformanceLevelController*  ___m_AutoPerformanceLevelController;

/// @brief Field m_AutoPerformanceModeController, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::AutoPerformanceModeController*  ___m_AutoPerformanceModeController;

/// @brief Field m_CpuFrameTimeProvider, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::CpuTimeProvider*  ___m_CpuFrameTimeProvider;

/// @brief Field m_GpuFrameTimeProvider, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::GpuTimeProvider*  ___m_GpuFrameTimeProvider;

/// @brief Field m_AppLifecycle, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  ___m_AppLifecycle;

/// @brief Field m_TemperatureTrend, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::TemperatureTrend*  ___m_TemperatureTrend;

/// @brief Field m_UseProviderOverallFrameTime, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_UseProviderOverallFrameTime;

/// @brief Field m_WaitForEndOfFrame, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::WaitForEndOfFrame*  ___m_WaitForEndOfFrame;

/// @brief Field m_FrameCount, offset: 0x108, size: 0x4, def value: None
 int32_t  ___m_FrameCount;

/// @brief Field m_OverallFrameTime, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::RunningAverage*  ___m_OverallFrameTime;

/// @brief Field m_OverallFrameTimeAccu, offset: 0x118, size: 0x4, def value: None
 float_t  ___m_OverallFrameTimeAccu;

/// @brief Field m_GpuFrameTime, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::RunningAverage*  ___m_GpuFrameTime;

/// @brief Field m_CpuFrameTime, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::RunningAverage*  ___m_CpuFrameTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___ThermalEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___PerformanceBottleneckChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___PerformanceLevelChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___PerformanceBoostChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___PerformanceModeEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_JustResumed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_RequestedCpuLevel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_RequestedGpuLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_NewUserPerformanceLevelRequest) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_RequestedCpuBoost) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_RequestedGpuBoost) == 0x56, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_NewUserCpuPerformanceBoostRequest) == 0x57, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_NewUserGpuPerformanceBoostRequest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_ThermalMetrics) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_PerformanceMetrics) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_FrameTiming) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_PerformanceMode) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ____LoggingFrequencyInFrames_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_AutomaticPerformanceControl) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_AutomaticPerformanceControlChanged) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ____Indexer_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_Settings) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_Subsystem) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_DevicePerfControl) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_AutoPerformanceLevelController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_AutoPerformanceModeController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_CpuFrameTimeProvider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_GpuFrameTimeProvider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_AppLifecycle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_TemperatureTrend) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_UseProviderOverallFrameTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_WaitForEndOfFrame) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_FrameCount) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_OverallFrameTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_OverallFrameTimeAccu) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_GpuFrameTime) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager, ___m_CpuFrameTime) == 0x128, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManager) == 0x130, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
