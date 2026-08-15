#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeGerstner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWaves_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeGerstner_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeGerstner_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterResources_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSpectrum_def.hpp"
// Ctor Parameters [CppParam { name: "_TwoPiOverWavelength", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Amplitude", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_WaveDirectionX", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_WaveDirectionZ", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Omega", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Phase", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ChopAmplitude", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Amplitude2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ChopAmplitude2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Phase2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4::ShapeGerstner_GerstnerWaveComponent4(::UnityEngine::Vector4  _TwoPiOverWavelength, ::UnityEngine::Vector4  _Amplitude, ::UnityEngine::Vector4  _WaveDirectionX, ::UnityEngine::Vector4  _WaveDirectionZ, ::UnityEngine::Vector4  _Omega, ::UnityEngine::Vector4  _Phase, ::UnityEngine::Vector4  _ChopAmplitude, ::UnityEngine::Vector4  _Amplitude2, ::UnityEngine::Vector4  _ChopAmplitude2, ::UnityEngine::Vector4  _Phase2) noexcept  {
this->_TwoPiOverWavelength = _TwoPiOverWavelength;
this->_Amplitude = _Amplitude;
this->_WaveDirectionX = _WaveDirectionX;
this->_WaveDirectionZ = _WaveDirectionZ;
this->_Omega = _Omega;
this->_Phase = _Phase;
this->_ChopAmplitude = _ChopAmplitude;
this->_Amplitude2 = _Amplitude2;
this->_ChopAmplitude2 = _ChopAmplitude2;
this->_Phase2 = _Phase2;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4::ShapeGerstner_GerstnerWaveComponent4()   {
}
inline void WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::setStaticF_s_FirstCascadeIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FirstCascadeIndex", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::getStaticF_s_FirstCascadeIndex()  {
return ::cordl_internals::getStaticField<int32_t, "s_FirstCascadeIndex", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::setStaticF_s_TextureRes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_TextureRes", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::getStaticF_s_TextureRes()  {
return ::cordl_internals::getStaticField<int32_t, "s_TextureRes", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::setStaticF_s_StartIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_StartIndices", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::getStaticF_s_StartIndices()  {
return ::cordl_internals::getStaticField<int32_t, "s_StartIndices", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::setStaticF_s_GerstnerWaveData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_GerstnerWaveData", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::getStaticF_s_GerstnerWaveData()  {
return ::cordl_internals::getStaticField<int32_t, "s_GerstnerWaveData", ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs::ShapeGerstner_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_MinimumResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_MinimumResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_MaximumResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_MaximumResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181bf2630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_DefaultSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::WaveSpectrum> (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_DefaultSpectrum)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825613b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_SwellSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::WaveSpectrum> (*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_SwellSpectrum)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1825613d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_SwellSpectrum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.InitStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::ShapeGerstner::InitStatics)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"InitStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.TryGetRandomValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeGerstner::*)(float_t)>(&::WaveHarmonic::Crest::ShapeGerstner::TryGetRandomValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182560a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"TryGetRandomValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.GetReverseWaveWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::GetReverseWaveWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"GetReverseWaveWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.InitData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::InitData)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x18255f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"InitData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeGerstner::OnUpdate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18255f930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ShapeGerstner::Draw)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18255efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.SliceUpWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::ShapeGerstner::SliceUpWaves)> {
  constexpr static std::size_t size = 0xe40;
  constexpr static std::size_t addrs = 0x18255fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"SliceUpWaves", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.UpdateGenerateWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::ShapeGerstner::UpdateGenerateWaves)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x182560d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"UpdateGenerateWaves", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.UpdateWaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::ShapeGerstner::UpdateWaveData)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x182560fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"UpdateWaveData", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.UpdateAmplitudes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeGerstner::UpdateAmplitudes)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x182560a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"UpdateAmplitudes", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.InitPhases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::InitPhases)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18255f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"InitPhases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.ReportMaxDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeGerstner::ReportMaxDisplacement)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18255fa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18255f640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::OnDisable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18255f780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18255f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::OnMigrate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_ComponentsPerOctave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_ComponentsPerOctave)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_ComponentsPerOctave", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.set_ComponentsPerOctave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(int32_t)>(&::WaveHarmonic::Crest::ShapeGerstner::set_ComponentsPerOctave)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182561640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_ComponentsPerOctave", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_ManualGeneration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_ManualGeneration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_ManualGeneration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.set_ManualGeneration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(bool)>(&::WaveHarmonic::Crest::ShapeGerstner::set_ManualGeneration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182561650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_ManualGeneration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_Randomize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_Randomize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.set_Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(bool)>(&::WaveHarmonic::Crest::ShapeGerstner::set_Randomize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182194220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_Randomize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_RandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_RandomSeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_RandomSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.set_RandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(int32_t)>(&::WaveHarmonic::Crest::ShapeGerstner::set_RandomSeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821941a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_RandomSeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_ReverseWaveWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_ReverseWaveWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_ReverseWaveWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.set_ReverseWaveWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(float_t)>(&::WaveHarmonic::Crest::ShapeGerstner::set_ReverseWaveWeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_ReverseWaveWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.get_Swell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::get_Swell)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_Swell", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner.set_Swell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)(bool)>(&::WaveHarmonic::Crest::ShapeGerstner::set_Swell)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_Swell", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeGerstner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeGerstner::*)()>(&::WaveHarmonic::Crest::ShapeGerstner::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182561300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Swell()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Swell;
}
constexpr bool const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Swell() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Swell;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Swell(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Swell = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ReverseWaveWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverseWaveWeight;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ReverseWaveWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverseWaveWeight;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__ReverseWaveWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReverseWaveWeight = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ComponentsPerOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComponentsPerOctave;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ComponentsPerOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComponentsPerOctave;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__ComponentsPerOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ComponentsPerOctave = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Randomize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Randomize;
}
constexpr bool const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Randomize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Randomize;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Randomize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Randomize = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__RandomSeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomSeed;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__RandomSeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomSeed;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__RandomSeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomSeed = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ManualGeneration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManualGeneration;
}
constexpr bool const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ManualGeneration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManualGeneration;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__ManualGeneration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ManualGeneration = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__WindSpeedWhenGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindSpeedWhenGenerated;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__WindSpeedWhenGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindSpeedWhenGenerated;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__WindSpeedWhenGenerated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindSpeedWhenGenerated = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Wavelengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wavelengths;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Wavelengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wavelengths;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Wavelengths(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Wavelengths = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Amplitudes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Amplitudes;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Amplitudes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Amplitudes;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Amplitudes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Amplitudes = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Powers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Powers;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Powers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Powers;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Powers(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Powers = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__AngleDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AngleDegrees;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__AngleDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AngleDegrees;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__AngleDegrees(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AngleDegrees = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Phases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Phases;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Phases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Phases;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Phases(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Phases = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Amplitudes2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Amplitudes2;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Amplitudes2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Amplitudes2;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Amplitudes2(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Amplitudes2 = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Phases2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Phases2;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Phases2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Phases2;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Phases2(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Phases2 = value;
}
constexpr ::ArrayW<int32_t>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__StartIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartIndices;
}
constexpr ::ArrayW<int32_t> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__StartIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartIndices;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__StartIndices(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartIndices = value;
}
constexpr ::UnityEngine::ComputeBuffer*& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__BufferWaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferWaveData;
}
constexpr ::UnityEngine::ComputeBuffer* const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__BufferWaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferWaveData;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__BufferWaveData(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BufferWaveData = value;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4>& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__WaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveData;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4> const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__WaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveData;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__WaveData(::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveData = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute* const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__Shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Shader;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__Shader(::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Shader = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__TwoPi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TwoPi;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__TwoPi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TwoPi;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__TwoPi(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TwoPi = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ReciprocalTwoPi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReciprocalTwoPi;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_get__ReciprocalTwoPi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReciprocalTwoPi;
}
constexpr void WaveHarmonic::Crest::ShapeGerstner::__cordl_internal_set__ReciprocalTwoPi(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReciprocalTwoPi = value;
}
inline void WaveHarmonic::Crest::ShapeGerstner::setStaticF_s_SwellSpectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value)  {
::cordl_internals::setStaticField<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>, "s_SwellSpectrum", ::WaveHarmonic::Crest::ShapeGerstner*>(std::forward<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(value));
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeGerstner::getStaticF_s_SwellSpectrum()  {
return ::cordl_internals::getStaticField<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>, "s_SwellSpectrum", ::WaveHarmonic::Crest::ShapeGerstner*>();
}
inline void WaveHarmonic::Crest::ShapeGerstner::setStaticF_s_Instances(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>*, "s_Instances", ::WaveHarmonic::Crest::ShapeGerstner*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>* WaveHarmonic::Crest::ShapeGerstner::getStaticF_s_Instances()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>*, "s_Instances", ::WaveHarmonic::Crest::ShapeGerstner*>();
}
inline void WaveHarmonic::Crest::ShapeGerstner::setStaticF_s_InstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InstanceCount", ::WaveHarmonic::Crest::ShapeGerstner*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner::getStaticF_s_InstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_InstanceCount", ::WaveHarmonic::Crest::ShapeGerstner*>();
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner::get_MinimumResolution()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner::get_MaximumResolution()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeGerstner::get_DefaultSpectrum()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(this, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> WaveHarmonic::Crest::ShapeGerstner::get_SwellSpectrum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_SwellSpectrum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaveSpectrum>>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::InitStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"InitStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShapeGerstner::TryGetRandomValue(float_t  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"TryGetRandomValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fallback);
}
inline float_t WaveHarmonic::Crest::ShapeGerstner::GetReverseWaveWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"GetReverseWaveWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::InitData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"InitData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::ShapeGerstner::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slice);
}
template<typename T>
inline void WaveHarmonic::Crest::ShapeGerstner::SetRenderParameters(::WaveHarmonic::Crest::WaterRenderer*  water, T  wrapper)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 39}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, wrapper);
}
inline void WaveHarmonic::Crest::ShapeGerstner::SliceUpWaves(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  windSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"SliceUpWaves", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, windSpeed);
}
inline void WaveHarmonic::Crest::ShapeGerstner::UpdateGenerateWaves(::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"UpdateGenerateWaves", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::ShapeGerstner::UpdateWaveData(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  windSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"UpdateWaveData", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, windSpeed);
}
inline void WaveHarmonic::Crest::ShapeGerstner::UpdateAmplitudes(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"UpdateAmplitudes", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::ShapeGerstner::InitPhases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"InitPhases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::ReportMaxDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::ShapeGerstner::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner::get_ComponentsPerOctave()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_ComponentsPerOctave", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::set_ComponentsPerOctave(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_ComponentsPerOctave", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeGerstner::get_ManualGeneration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_ManualGeneration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::set_ManualGeneration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_ManualGeneration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeGerstner::get_Randomize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_Randomize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::set_Randomize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_Randomize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::ShapeGerstner::get_RandomSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_RandomSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::set_RandomSeed(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_RandomSeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeGerstner::get_ReverseWaveWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_ReverseWaveWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::set_ReverseWaveWeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_ReverseWaveWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeGerstner::get_Swell()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"get_Swell", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeGerstner::set_Swell(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {"set_Swell", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::ShapeGerstner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeGerstner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ShapeGerstner* WaveHarmonic::Crest::ShapeGerstner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShapeGerstner*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeGerstner::ShapeGerstner()   {
}
