#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceProfilerStats.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceProfilerStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceProfilerStats_def.hpp"
template<typename T>
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>::_ctor(::StringW  name, ::Unity::Profiling::ProfilerMarkerDataUnit  dataUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, dataUnit);
}
template<typename T>
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>::Sample(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>>(),
                        {"Sample", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline uint8_t UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>::GetProfilerMarkerDataType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>>(),
                        {"GetProfilerMarkerDataType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Marker", ty: "::Unity::Profiling::ProfilerMarker", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1(::Unity::Profiling::ProfilerMarker  m_Marker, uint8_t  m_Type) noexcept  {
this->m_Marker = m_Marker;
this->m_Type = m_Type;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<T>::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer(uint8_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "scalerName", ty: "::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabled", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "applied", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo::AdaptivePerformanceProfilerStats_ScalerInfo(::UnityEngine::AdaptivePerformance::ScalerInfo_AdaptivePerformanceProfilerStats__scalerName_e__FixedBuffer  scalerName, uint32_t  enabled, int32_t  overrideLevel, int32_t  currentLevel, int32_t  maxLevel, float_t  scale, uint32_t  applied) noexcept  {
this->scalerName = scalerName;
this->enabled = enabled;
this->overrideLevel = overrideLevel;
this->currentLevel = currentLevel;
this->maxLevel = maxLevel;
this->scale = scale;
this->applied = applied;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo::AdaptivePerformanceProfilerStats_ScalerInfo()   {
}
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats.EmitScalerDataToProfilerStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool, int32_t, int32_t, float_t, bool, int32_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::EmitScalerDataToProfilerStream)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x18221cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(),
                        {"EmitScalerDataToProfilerStream", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats.FlushScalerDataToProfilerStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::FlushScalerDataToProfilerStream)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(),
                        {"FlushScalerDataToProfilerStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_AdaptivePerformanceProfilerCategory(::Unity::Profiling::ProfilerCategory  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerCategory, "AdaptivePerformanceProfilerCategory", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::Unity::Profiling::ProfilerCategory>(value));
}
inline ::Unity::Profiling::ProfilerCategory UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_AdaptivePerformanceProfilerCategory()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerCategory, "AdaptivePerformanceProfilerCategory", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_CurrentCPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "CurrentCPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_CurrentCPUMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "CurrentCPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_AvgCPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "AvgCPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_AvgCPUMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "AvgCPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_CurrentGPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "CurrentGPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_CurrentGPUMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "CurrentGPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_AvgGPUMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "AvgGPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_AvgGPUMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "AvgGPUMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_CurrentCPULevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "CurrentCPULevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_CurrentCPULevelMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "CurrentCPULevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_CurrentGPULevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "CurrentGPULevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_CurrentGPULevelMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "CurrentGPULevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_CurrentFrametimeMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "CurrentFrametimeMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_CurrentFrametimeMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "CurrentFrametimeMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_AvgFrametimeMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "AvgFrametimeMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_AvgFrametimeMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "AvgFrametimeMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_WarningLevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "WarningLevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_WarningLevelMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "WarningLevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_TemperatureLevelMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "TemperatureLevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_TemperatureLevelMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "TemperatureLevelMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_TemperatureTrendMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "TemperatureTrendMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_TemperatureTrendMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<float_t>, "TemperatureTrendMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_BottleneckMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "BottleneckMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_BottleneckMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "BottleneckMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_PerformanceModeMarker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "PerformanceModeMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>>(value));
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t> UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_PerformanceModeMarker()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_CustomProfilerMarker_1<int32_t>, "PerformanceModeMarker", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_kAdaptivePerformanceProfilerModuleGuid(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kAdaptivePerformanceProfilerModuleGuid", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_kAdaptivePerformanceProfilerModuleGuid()  {
return ::cordl_internals::getStaticField<::System::Guid, "kAdaptivePerformanceProfilerModuleGuid", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_kScalerDataTag(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kScalerDataTag", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_kScalerDataTag()  {
return ::cordl_internals::getStaticField<int32_t, "kScalerDataTag", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_scalerInfos(::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>*, "scalerInfos", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>* UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_scalerInfos()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats_ScalerInfo>*, "scalerInfos", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::setStaticF_scalerInfosIndex(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "scalerInfosIndex", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::getStaticF_scalerInfosIndex()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "scalerInfosIndex", ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>();
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::EmitScalerDataToProfilerStream(::StringW  scalerName, bool  enabled, int32_t  overrideLevel, int32_t  currentLevel, float_t  scale, bool  applied, int32_t  maxLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(),
                        {"EmitScalerDataToProfilerStream", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scalerName, enabled, overrideLevel, currentLevel, scale, applied, maxLevel);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::FlushScalerDataToProfilerStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats*>(),
                        {"FlushScalerDataToProfilerStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceProfilerStats::AdaptivePerformanceProfilerStats()   {
}
