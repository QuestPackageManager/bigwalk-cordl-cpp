#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceProfilerStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptivePerformanceProfilerStats)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Profiling {
struct ProfilerMarkerDataUnit;
}
namespace UnityEngine::AdaptivePerformance {
template<typename T>
struct AdaptivePerformanceProfilerStats_CustomProfilerMarker_1;
}
namespace UnityEngine::AdaptivePerformance {
struct AdaptivePerformanceProfilerStats_ScalerInfo;
}
namespace UnityEngine::AdaptivePerformance {
struct ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceProfilerStats;
}
namespace UnityEngine::AdaptivePerformance {
template<typename T>
struct AdaptivePerformanceProfilerStats_CustomProfilerMarker_1;
}
namespace UnityEngine::AdaptivePerformance {
struct AdaptivePerformanceProfilerStats_ScalerInfo;
}
namespace UnityEngine::AdaptivePerformance {
struct ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*);
MARK_GEN_VAL_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1);
MARK_VAL_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo);
MARK_VAL_T(::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceProfilerStats");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceProfilerStats/CustomProfilerMarker`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceProfilerStats/ScalerInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceProfilerStats/ScalerInfo/<scalerName>e__FixedBuffer");
// Dependencies Unity.Profiling.ProfilerMarker
namespace UnityEngine::AdaptivePerformance {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats/CustomProfilerMarker`1<T>
struct CORDL_TYPE AdaptivePerformanceProfilerStats_CustomProfilerMarker_1 {
public:
// Declarations
/// @brief Method GetProfilerMarkerDataType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline uint8_t GetProfilerMarkerDataType() ;

/// @brief Method Sample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Sample(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::Unity::Profiling::ProfilerMarkerDataUnit  dataUnit) ;

// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceProfilerStats_CustomProfilerMarker_1() ;

// Ctor Parameters [CppParam { name: "m_Marker", ty: "::Unity::Profiling::ProfilerMarker", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AdaptivePerformanceProfilerStats_CustomProfilerMarker_1(::Unity::Profiling::ProfilerMarker  m_Marker, uint8_t  m_Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Marker, offset: 0x0, size: 0x8, def value: None
 ::Unity::Profiling::ProfilerMarker  m_Marker;

/// @brief Field m_Type, offset: 0x8, size: 0x1, def value: None
 uint8_t  m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats/ScalerInfo/<scalerName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x140};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x140 - 0x1 = 0x13f, packed as 0x13f
 uint8_t  _cordl_size_padding[0x13f];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer) == 0x140, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats::ScalerInfo::<scalerName>e__FixedBuffer
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats/ScalerInfo
struct CORDL_TYPE AdaptivePerformanceProfilerStats_ScalerInfo {
public:
// Declarations
using _scalerName_e__FixedBuffer = ::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceProfilerStats_ScalerInfo() ;

// Ctor Parameters [CppParam { name: "scalerName", ty: "::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "enabled", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "overrideLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "applied", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AdaptivePerformanceProfilerStats_ScalerInfo(::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer  scalerName, uint32_t  enabled, int32_t  overrideLevel, int32_t  currentLevel, int32_t  maxLevel, float_t  scale, uint32_t  applied) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x158};

/// @brief Field scalerName, offset: 0x0, size: 0x140, def value: None
 ::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer  scalerName;

/// @brief Field enabled, offset: 0x140, size: 0x4, def value: None
 uint32_t  enabled;

/// @brief Field overrideLevel, offset: 0x144, size: 0x4, def value: None
 int32_t  overrideLevel;

/// @brief Field currentLevel, offset: 0x148, size: 0x4, def value: None
 int32_t  currentLevel;

/// @brief Field maxLevel, offset: 0x14c, size: 0x4, def value: None
 int32_t  maxLevel;

/// @brief Field scale, offset: 0x150, size: 0x4, def value: None
 float_t  scale;

/// @brief Field applied, offset: 0x154, size: 0x4, def value: None
 uint32_t  applied;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, scalerName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, enabled) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, overrideLevel) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, currentLevel) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, maxLevel) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, scale) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo, applied) == 0x154, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo) == 0x158, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
// Dependencies System.Guid, System.Object, Unity.Profiling.ProfilerCategory, UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats::CustomProfilerMarker`1<T>
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceProfilerStats
class CORDL_TYPE AdaptivePerformanceProfilerStats : public ::System::Object {
public:
// Declarations
template<typename T>
using CustomProfilerMarker_1 = ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>;

using ScalerInfo = ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo;

/// @brief Field AdaptivePerformanceProfilerCategory, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_AdaptivePerformanceProfilerCategory, put=setStaticF_AdaptivePerformanceProfilerCategory)) ::Unity::Profiling::ProfilerCategory  AdaptivePerformanceProfilerCategory;

/// @brief Field AvgCPUMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AvgCPUMarker, put=setStaticF_AvgCPUMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  AvgCPUMarker;

/// @brief Field AvgFrametimeMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AvgFrametimeMarker, put=setStaticF_AvgFrametimeMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  AvgFrametimeMarker;

/// @brief Field AvgGPUMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AvgGPUMarker, put=setStaticF_AvgGPUMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  AvgGPUMarker;

/// @brief Field BottleneckMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_BottleneckMarker, put=setStaticF_BottleneckMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  BottleneckMarker;

/// @brief Field CurrentCPULevelMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CurrentCPULevelMarker, put=setStaticF_CurrentCPULevelMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  CurrentCPULevelMarker;

/// @brief Field CurrentCPUMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CurrentCPUMarker, put=setStaticF_CurrentCPUMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  CurrentCPUMarker;

/// @brief Field CurrentFrametimeMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CurrentFrametimeMarker, put=setStaticF_CurrentFrametimeMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  CurrentFrametimeMarker;

/// @brief Field CurrentGPULevelMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CurrentGPULevelMarker, put=setStaticF_CurrentGPULevelMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  CurrentGPULevelMarker;

/// @brief Field CurrentGPUMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CurrentGPUMarker, put=setStaticF_CurrentGPUMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  CurrentGPUMarker;

/// @brief Field PerformanceModeMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_PerformanceModeMarker, put=setStaticF_PerformanceModeMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  PerformanceModeMarker;

/// @brief Field TemperatureLevelMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_TemperatureLevelMarker, put=setStaticF_TemperatureLevelMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  TemperatureLevelMarker;

/// @brief Field TemperatureTrendMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_TemperatureTrendMarker, put=setStaticF_TemperatureTrendMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  TemperatureTrendMarker;

/// @brief Field WarningLevelMarker, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WarningLevelMarker, put=setStaticF_WarningLevelMarker)) ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  WarningLevelMarker;

/// @brief Field kAdaptivePerformanceProfilerModuleGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kAdaptivePerformanceProfilerModuleGuid, put=setStaticF_kAdaptivePerformanceProfilerModuleGuid)) ::System::Guid  kAdaptivePerformanceProfilerModuleGuid;

/// @brief Field kScalerDataTag, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kScalerDataTag, put=setStaticF_kScalerDataTag)) int32_t  kScalerDataTag;

/// @brief Field scalerInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scalerInfos, put=setStaticF_scalerInfos)) ::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>*  scalerInfos;

/// @brief Field scalerInfosIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scalerInfosIndex, put=setStaticF_scalerInfosIndex)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  scalerInfosIndex;

/// @brief Method EmitScalerDataToProfilerStream, addr 0x18221cec0, size 0x530, virtual false, abstract: false, final false
static inline void EmitScalerDataToProfilerStream(::StringW  scalerName, bool  enabled, int32_t  overrideLevel, int32_t  currentLevel, float_t  scale, bool  applied, int32_t  maxLevel) ;

/// @brief Method FlushScalerDataToProfilerStream, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void FlushScalerDataToProfilerStream() ;

static inline ::Unity::Profiling::ProfilerCategory getStaticF_AdaptivePerformanceProfilerCategory() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_AvgCPUMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_AvgFrametimeMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_AvgGPUMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> getStaticF_BottleneckMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> getStaticF_CurrentCPULevelMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_CurrentCPUMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_CurrentFrametimeMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> getStaticF_CurrentGPULevelMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_CurrentGPUMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> getStaticF_PerformanceModeMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_TemperatureLevelMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> getStaticF_TemperatureTrendMarker() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> getStaticF_WarningLevelMarker() ;

static inline ::System::Guid getStaticF_kAdaptivePerformanceProfilerModuleGuid() ;

static inline int32_t getStaticF_kScalerDataTag() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>* getStaticF_scalerInfos() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_scalerInfosIndex() ;

static inline void setStaticF_AdaptivePerformanceProfilerCategory(::Unity::Profiling::ProfilerCategory  value) ;

static inline void setStaticF_AvgCPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_AvgFrametimeMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_AvgGPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_BottleneckMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value) ;

static inline void setStaticF_CurrentCPULevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value) ;

static inline void setStaticF_CurrentCPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_CurrentFrametimeMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_CurrentGPULevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value) ;

static inline void setStaticF_CurrentGPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_PerformanceModeMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value) ;

static inline void setStaticF_TemperatureLevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_TemperatureTrendMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value) ;

static inline void setStaticF_WarningLevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value) ;

static inline void setStaticF_kAdaptivePerformanceProfilerModuleGuid(::System::Guid  value) ;

static inline void setStaticF_kScalerDataTag(int32_t  value) ;

static inline void setStaticF_scalerInfos(::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>*  value) ;

static inline void setStaticF_scalerInfosIndex(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceProfilerStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceProfilerStats", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceProfilerStats(AdaptivePerformanceProfilerStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceProfilerStats", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceProfilerStats(AdaptivePerformanceProfilerStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
