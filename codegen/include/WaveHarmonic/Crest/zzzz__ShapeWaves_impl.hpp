#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeWaves.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWaves_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportWaveDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWaves_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSpectrum_def.hpp"
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_TransitionalWavelengthThreshold(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_TransitionalWavelengthThreshold", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_TransitionalWavelengthThreshold()  {
return ::cordl_internals::getStaticField<int32_t, "s_TransitionalWavelengthThreshold", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_WaveResolutionMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveResolutionMultiplier", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_WaveResolutionMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveResolutionMultiplier", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_WaveBufferParameters(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveBufferParameters", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_WaveBufferParameters()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveBufferParameters", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_AlphaSource(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AlphaSource", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_AlphaSource()  {
return ::cordl_internals::getStaticField<int32_t, "s_AlphaSource", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_WaveBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveBuffer", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_WaveBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveBuffer", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_WaveBufferSliceIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveBufferSliceIndex", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_WaveBufferSliceIndex()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveBufferSliceIndex", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_AverageWavelength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AverageWavelength", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_AverageWavelength()  {
return ::cordl_internals::getStaticField<int32_t, "s_AverageWavelength", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_RespectShallowWaterAttenuation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_RespectShallowWaterAttenuation", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_RespectShallowWaterAttenuation()  {
return ::cordl_internals::getStaticField<int32_t, "s_RespectShallowWaterAttenuation", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_MaximumAttenuationDepth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_MaximumAttenuationDepth", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_MaximumAttenuationDepth()  {
return ::cordl_internals::getStaticField<int32_t, "s_MaximumAttenuationDepth", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_AxisX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AxisX", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_AxisX()  {
return ::cordl_internals::getStaticField<int32_t, "s_AxisX", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_SeaLevelOnly(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SeaLevelOnly", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_SeaLevelOnly()  {
return ::cordl_internals::getStaticField<int32_t, "s_SeaLevelOnly", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeWaves_ShaderIDs::setStaticF_s_WaveBufferAttenuation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveBufferAttenuation", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves_ShaderIDs::getStaticF_s_WaveBufferAttenuation()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveBufferAttenuation", ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs::ShapeWaves_ShaderIDs()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource::ShapeWaves_WindSpeedSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource::ShapeWaves_WindSpeedSource()   {
}
constexpr ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource  WaveHarmonic::Crest::ShapeWaves_WindSpeedSource::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource  WaveHarmonic::Crest::ShapeWaves_WindSpeedSource::ShapeWaves{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource  WaveHarmonic::Crest::ShapeWaves_WindSpeedSource::WaterRenderer{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves_Reporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves_Reporter::*)(::WaveHarmonic::Crest::ShapeWaves*)>(&::WaveHarmonic::Crest::ShapeWaves_Reporter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::ShapeWaves*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves_Reporter.ReportDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves_Reporter::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::ShapeWaves_Reporter::ReportDisplacement)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18255bc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves_Reporter.ReportWaveDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves_Reporter::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::ShapeWaves_Reporter::ReportWaveDisplacement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18255be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::ShapeWaves>& WaveHarmonic::Crest::ShapeWaves_Reporter::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::ShapeWaves> const& WaveHarmonic::Crest::ShapeWaves_Reporter::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::ShapeWaves_Reporter::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::ShapeWaves>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::ShapeWaves_Reporter::_ctor(::WaveHarmonic::Crest::ShapeWaves*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::ShapeWaves*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::ShapeWaves_Reporter::ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, horizontal, vertical);
}
inline float_t WaveHarmonic::Crest::ShapeWaves_Reporter::ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, displacement);
}
inline ::WaveHarmonic::Crest::ShapeWaves_Reporter* WaveHarmonic::Crest::ShapeWaves_Reporter::New_ctor(::WaveHarmonic::Crest::ShapeWaves*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShapeWaves_Reporter*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr  WaveHarmonic::Crest::ShapeWaves_Reporter::operator ::WaveHarmonic::Crest::IReportsDisplacement*() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportsDisplacement*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr ::WaveHarmonic::Crest::IReportsDisplacement* WaveHarmonic::Crest::ShapeWaves_Reporter::i___WaveHarmonic__Crest__IReportsDisplacement() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportsDisplacement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr  WaveHarmonic::Crest::ShapeWaves_Reporter::operator ::WaveHarmonic::Crest::IReportWaveDisplacement*() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportWaveDisplacement*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement* WaveHarmonic::Crest::ShapeWaves_Reporter::i___WaveHarmonic__Crest__IReportWaveDisplacement() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportWaveDisplacement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeWaves_Reporter::ShapeWaves_Reporter()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource::ShapeWaves_AlphaSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource::ShapeWaves_AlphaSource()   {
}
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource  WaveHarmonic::Crest::ShapeWaves_AlphaSource::AlwaysOne{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource  WaveHarmonic::Crest::ShapeWaves_AlphaSource::FromZero{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource  WaveHarmonic::Crest::ShapeWaves_AlphaSource::FromZeroNormalized{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182550900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182550940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_DefaultSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::WaveSpectrum> (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_DefaultSpectrum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182562fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_WindSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::WaveSpectrum> (*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_WindSpectrum)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825631e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpectrum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_MinimumResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_MinimumResolution)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_MaximumResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_MaximumResolution)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_PrimaryWaveDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_PrimaryWaveDirection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825630e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_PrimaryWaveDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_WindSpeedKPH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_WindSpeedKPH)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825632a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpeedKPH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_WindSpeedMPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_WindSpeedMPS)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182563310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpeedMPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182562ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::Attach)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1825616e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.Detach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::Detach)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182561850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.GetWindSpeedSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::GetWindSpeedSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825621b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GetWindSpeedSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ShapeWaves::Draw)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x1825618d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.GraphicsDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ShapeWaves::GraphicsDraw)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x182562230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GraphicsDraw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::ShapeWaves::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_Enabled)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182562fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_DefaultMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_FollowHorizontalMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_FollowHorizontalMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_WaveBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_WaveBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WaveBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_MaximumReportedHorizontalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_MaximumReportedHorizontalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_MaximumReportedHorizontalDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_MaximumReportedHorizontalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(float_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_MaximumReportedHorizontalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182563390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_MaximumReportedHorizontalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_MaximumReportedVerticalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_MaximumReportedVerticalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_MaximumReportedVerticalDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_MaximumReportedVerticalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(float_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_MaximumReportedVerticalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_MaximumReportedVerticalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_MaximumReportedWavesDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_MaximumReportedWavesDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825630d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_MaximumReportedWavesDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_MaximumReportedWavesDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(float_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_MaximumReportedWavesDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825633a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_MaximumReportedWavesDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_UpdateDataEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_UpdateDataEachFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b649a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_UpdateDataEachFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.MinWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)(int32_t)>(&::WaveHarmonic::Crest::ShapeWaves::MinWavelength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182562900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"MinWavelength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.ReportMaxDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeWaves::ReportMaxDisplacement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeWaves::OnUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182562af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::Initialize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x182562720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1825629a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.InitializeResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::InitializeResources)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182562570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"InitializeResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.ReportDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::ShapeWaves::ReportDisplacement)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x182562b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.ReportWaveDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::ShapeWaves::ReportWaveDisplacement)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182562d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.GetWaveDirectionHeadingAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::GetWaveDirectionHeadingAngle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182562140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GetWaveDirectionHeadingAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.GetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::GetResolution)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825620d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GetResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182561830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182562930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::OnMigrate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182562a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_BicubicSampling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_BicubicSampling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_BicubicSampling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_BicubicSampling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(bool)>(&::WaveHarmonic::Crest::ShapeWaves::set_BicubicSampling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_BicubicSampling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_EvaluateSpectrumAtRunTimeEveryFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_EvaluateSpectrumAtRunTimeEveryFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b649a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_EvaluateSpectrumAtRunTimeEveryFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_EvaluateSpectrumAtRunTimeEveryFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(bool)>(&::WaveHarmonic::Crest::ShapeWaves::set_EvaluateSpectrumAtRunTimeEveryFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_EvaluateSpectrumAtRunTimeEveryFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_IncludeInDropDetailHeightBasedOnWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_IncludeInDropDetailHeightBasedOnWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181965bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_IncludeInDropDetailHeightBasedOnWaves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_IncludeInDropDetailHeightBasedOnWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(bool)>(&::WaveHarmonic::Crest::ShapeWaves::set_IncludeInDropDetailHeightBasedOnWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181966440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_IncludeInDropDetailHeightBasedOnWaves", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_OverrideGlobalWindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_OverrideGlobalWindDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18242c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_OverrideGlobalWindDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_OverrideGlobalWindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(bool)>(&::WaveHarmonic::Crest::ShapeWaves::set_OverrideGlobalWindDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825633b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_OverrideGlobalWindDirection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_OverrideGlobalWindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_OverrideGlobalWindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_OverrideGlobalWindSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_OverrideGlobalWindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(bool)>(&::WaveHarmonic::Crest::ShapeWaves::set_OverrideGlobalWindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_OverrideGlobalWindSpeed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_Resolution)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825620d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_Resolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(int32_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_Resolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_RespectShallowWaterAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_RespectShallowWaterAttenuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_RespectShallowWaterAttenuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_RespectShallowWaterAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(float_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_RespectShallowWaterAttenuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182552720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_RespectShallowWaterAttenuation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_SeaLevelOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_SeaLevelOnly)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x180f187e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_SeaLevelOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_SeaLevelOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(bool)>(&::WaveHarmonic::Crest::ShapeWaves::set_SeaLevelOnly)> {
  constexpr static std::size_t size = 0xedb0;
  constexpr static std::size_t addrs = 0x180f18e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_SeaLevelOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_Spectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::WaveSpectrum> (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_Spectrum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_Spectrum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_Spectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(::WaveHarmonic::Crest::WaveSpectrum*)>(&::WaveHarmonic::Crest::ShapeWaves::set_Spectrum)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_Spectrum", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaveSpectrum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_WaveDirectionHeadingAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_WaveDirectionHeadingAngle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182562140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WaveDirectionHeadingAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_WaveDirectionHeadingAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(float_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_WaveDirectionHeadingAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_WaveDirectionHeadingAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.get_WindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeWaves::*)()>(&::WaveHarmonic::Crest::ShapeWaves::get_WindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWaves.set_WindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWaves::*)(float_t)>(&::WaveHarmonic::Crest::ShapeWaves::set_WindSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255e570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_WindSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__BicubicSampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BicubicSampling;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__BicubicSampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BicubicSampling;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__BicubicSampling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BicubicSampling = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Spectrum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Spectrum;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Spectrum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Spectrum;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__Spectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Spectrum = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__EvaluateSpectrumAtRunTimeEveryFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EvaluateSpectrumAtRunTimeEveryFrame;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__EvaluateSpectrumAtRunTimeEveryFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EvaluateSpectrumAtRunTimeEveryFrame;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__EvaluateSpectrumAtRunTimeEveryFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EvaluateSpectrumAtRunTimeEveryFrame = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__RespectShallowWaterAttenuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RespectShallowWaterAttenuation;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__RespectShallowWaterAttenuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RespectShallowWaterAttenuation;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__RespectShallowWaterAttenuation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RespectShallowWaterAttenuation = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__SeaLevelOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SeaLevelOnly;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__SeaLevelOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SeaLevelOnly;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__SeaLevelOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SeaLevelOnly = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__OverrideGlobalWindDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGlobalWindDirection;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__OverrideGlobalWindDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGlobalWindDirection;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__OverrideGlobalWindDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideGlobalWindDirection = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WaveDirectionHeadingAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveDirectionHeadingAngle;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WaveDirectionHeadingAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveDirectionHeadingAngle;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__WaveDirectionHeadingAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveDirectionHeadingAngle = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__OverrideGlobalWindSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGlobalWindSpeed;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__OverrideGlobalWindSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGlobalWindSpeed;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__OverrideGlobalWindSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideGlobalWindSpeed = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WindSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindSpeed;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WindSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindSpeed;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__WindSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindSpeed = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__Resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__IncludeInDropDetailHeightBasedOnWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeInDropDetailHeightBasedOnWaves;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__IncludeInDropDetailHeightBasedOnWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeInDropDetailHeightBasedOnWaves;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__IncludeInDropDetailHeightBasedOnWaves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IncludeInDropDetailHeightBasedOnWaves = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__DrawSlicesInEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawSlicesInEditor;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__DrawSlicesInEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawSlicesInEditor;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__DrawSlicesInEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawSlicesInEditor = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WaveBufferParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveBufferParameters;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WaveBufferParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveBufferParameters;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__WaveBufferParameters(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveBufferParameters = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__ActiveSpectrum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveSpectrum;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__ActiveSpectrum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveSpectrum;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__ActiveSpectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveSpectrum = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__FirstCascade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FirstCascade;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__FirstCascade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FirstCascade;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__FirstCascade(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FirstCascade = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__LastCascade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCascade;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__LastCascade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCascade;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__LastCascade(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastCascade = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__FirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FirstUpdate;
}
constexpr bool const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__FirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FirstUpdate;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__FirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FirstUpdate = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__LastGenerateFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastGenerateFrameCount;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__LastGenerateFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastGenerateFrameCount;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__LastGenerateFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastGenerateFrameCount = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Wavelength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wavelength;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Wavelength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wavelength;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__Wavelength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Wavelength = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WaveBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveBuffers;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__WaveBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveBuffers;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__WaveBuffers(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveBuffers = value;
}
constexpr ::UnityEngine::Rect& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr ::UnityEngine::Rect const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__Rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rect = value;
}
constexpr ::UnityEngine::Vector2& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumDisplacement;
}
constexpr ::UnityEngine::Vector2 const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumDisplacement;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__MaximumDisplacement(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumDisplacement = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumReportedHorizontalDisplacement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumReportedHorizontalDisplacement_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumReportedHorizontalDisplacement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumReportedHorizontalDisplacement_k__BackingField;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__MaximumReportedHorizontalDisplacement_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumReportedHorizontalDisplacement_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumReportedVerticalDisplacement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumReportedVerticalDisplacement_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumReportedVerticalDisplacement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumReportedVerticalDisplacement_k__BackingField;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__MaximumReportedVerticalDisplacement_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumReportedVerticalDisplacement_k__BackingField = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumReportedWavesDisplacement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumReportedWavesDisplacement_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__MaximumReportedWavesDisplacement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumReportedWavesDisplacement_k__BackingField;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__MaximumReportedWavesDisplacement_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumReportedWavesDisplacement_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::ShapeWaves_Reporter*& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Reporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reporter;
}
constexpr ::WaveHarmonic::Crest::ShapeWaves_Reporter* const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__Reporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reporter;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__Reporter(::WaveHarmonic::Crest::ShapeWaves_Reporter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reporter = value;
}
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__AlphaSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlphaSource;
}
constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource const& WaveHarmonic::Crest::ShapeWaves::__cordl_internal_get__AlphaSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlphaSource;
}
constexpr void WaveHarmonic::Crest::ShapeWaves::__cordl_internal_set__AlphaSource(::WaveHarmonic::Crest::ShapeWaves_AlphaSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AlphaSource = value;
}
inline void WaveHarmonic::Crest::ShapeWaves::setStaticF_s_WindSpectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value)  {
::cordl_internals::setStaticField<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>, "s_WindSpectrum", ::WaveHarmonic::Crest::ShapeWaves*>(std::forward<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(value));
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeWaves::getStaticF_s_WindSpectrum()  {
return ::cordl_internals::getStaticField<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>, "s_WindSpectrum", ::WaveHarmonic::Crest::ShapeWaves*>();
}
inline void WaveHarmonic::Crest::ShapeWaves::setStaticF_s_TransferWavesComputeShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_TransferWavesComputeShader", ::WaveHarmonic::Crest::ShapeWaves*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::ShapeWaves::getStaticF_s_TransferWavesComputeShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "s_TransferWavesComputeShader", ::WaveHarmonic::Crest::ShapeWaves*>();
}
inline void WaveHarmonic::Crest::ShapeWaves::setStaticF_s_KeywordTexture(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_KeywordTexture", ::WaveHarmonic::Crest::ShapeWaves*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::ShapeWaves::getStaticF_s_KeywordTexture()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_KeywordTexture", ::WaveHarmonic::Crest::ShapeWaves*>();
}
inline void WaveHarmonic::Crest::ShapeWaves::setStaticF_s_KeywordTextureBlend(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_KeywordTextureBlend", ::WaveHarmonic::Crest::ShapeWaves*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::ShapeWaves::getStaticF_s_KeywordTextureBlend()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_KeywordTextureBlend", ::WaveHarmonic::Crest::ShapeWaves*>();
}
inline void WaveHarmonic::Crest::ShapeWaves::setStaticF_s_RenderPassOverride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_RenderPassOverride", ::WaveHarmonic::Crest::ShapeWaves*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::getStaticF_s_RenderPassOverride()  {
return ::cordl_internals::getStaticField<int32_t, "s_RenderPassOverride", ::WaveHarmonic::Crest::ShapeWaves*>();
}
inline void WaveHarmonic::Crest::ShapeWaves::setStaticF_s_InstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InstanceCount", ::WaveHarmonic::Crest::ShapeWaves*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::getStaticF_s_InstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_InstanceCount", ::WaveHarmonic::Crest::ShapeWaves*>();
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ShapeWaves::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ShapeWaves::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeWaves::get_DefaultSpectrum()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(this, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeWaves::get_WindSpectrum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpectrum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(nullptr, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::get_MinimumResolution()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::get_MaximumResolution()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::ShapeWaves::get_PrimaryWaveDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_PrimaryWaveDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_WindSpeedKPH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpeedKPH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_WindSpeedMPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpeedMPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::Attach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::Detach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource WaveHarmonic::Crest::ShapeWaves::GetWindSpeedSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GetWindSpeedSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline void WaveHarmonic::Crest::ShapeWaves::GraphicsDraw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GraphicsDraw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_Enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::ShapeWaves::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::get_Pass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_FollowHorizontalMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::ShapeWaves::get_WaveBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WaveBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_MaximumReportedHorizontalDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_MaximumReportedHorizontalDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_MaximumReportedHorizontalDisplacement(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_MaximumReportedHorizontalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_MaximumReportedVerticalDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_MaximumReportedVerticalDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_MaximumReportedVerticalDisplacement(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_MaximumReportedVerticalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_MaximumReportedWavesDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_MaximumReportedWavesDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_MaximumReportedWavesDisplacement(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_MaximumReportedWavesDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_UpdateDataEachFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_UpdateDataEachFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::MinWavelength(int32_t  cascadeIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"MinWavelength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, cascadeIdx);
}
inline void WaveHarmonic::Crest::ShapeWaves::ReportMaxDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::ShapeWaves::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
template<typename T>
inline void WaveHarmonic::Crest::ShapeWaves::SetRenderParameters(::WaveHarmonic::Crest::WaterRenderer*  water, T  wrapper)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 39}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, wrapper);
}
inline void WaveHarmonic::Crest::ShapeWaves::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::InitializeResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"InitializeResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShapeWaves::ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, horizontal, vertical);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, displacement);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::GetWaveDirectionHeadingAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GetWaveDirectionHeadingAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::GetResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"GetResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_BicubicSampling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_BicubicSampling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_BicubicSampling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_BicubicSampling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_EvaluateSpectrumAtRunTimeEveryFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_EvaluateSpectrumAtRunTimeEveryFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_EvaluateSpectrumAtRunTimeEveryFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_EvaluateSpectrumAtRunTimeEveryFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_IncludeInDropDetailHeightBasedOnWaves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_IncludeInDropDetailHeightBasedOnWaves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_IncludeInDropDetailHeightBasedOnWaves(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_IncludeInDropDetailHeightBasedOnWaves", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_OverrideGlobalWindDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_OverrideGlobalWindDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_OverrideGlobalWindDirection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_OverrideGlobalWindDirection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_OverrideGlobalWindSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_OverrideGlobalWindSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_OverrideGlobalWindSpeed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_OverrideGlobalWindSpeed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::ShapeWaves::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_Resolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_Resolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_RespectShallowWaterAttenuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_RespectShallowWaterAttenuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_RespectShallowWaterAttenuation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_RespectShallowWaterAttenuation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeWaves::get_SeaLevelOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_SeaLevelOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_SeaLevelOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_SeaLevelOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeWaves::get_Spectrum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_Spectrum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_Spectrum(::WaveHarmonic::Crest::WaveSpectrum*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_Spectrum", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaveSpectrum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_WaveDirectionHeadingAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WaveDirectionHeadingAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_WaveDirectionHeadingAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_WaveDirectionHeadingAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeWaves::get_WindSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"get_WindSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWaves::set_WindSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWaves*>(),
                        {"set_WindSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ShapeWaves* WaveHarmonic::Crest::ShapeWaves::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShapeWaves*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeWaves::ShapeWaves()   {
}
