#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TemporalAntialiasing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TemporalAntialiasing_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TemporalAntialiasing_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass::TemporalAntialiasing_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass::TemporalAntialiasing_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass  UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass::SolverDilate{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass  UnityEngine::Rendering::PostProcessing::TemporalAntialiasing_Pass::SolverNoDilate{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.get_jitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::get_jitter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"get_jitter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.set_jitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::set_jitter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"set_jitter", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.get_sampleIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::get_sampleIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"get_sampleIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.set_sampleIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::set_sampleIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"set_sampleIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::IsSupported)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fbe750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GetCameraFlags)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.ResetHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::ResetHistory)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x180de8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"ResetHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.GenerateRandomOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GenerateRandomOffset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fbe530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GenerateRandomOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.GetJitteredProjectionMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GetJitteredProjectionMatrix)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fbe5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GetJitteredProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.ConfigureJitteredProjectionMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::ConfigureJitteredProjectionMatrix)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181fbe130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"ConfigureJitteredProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.ConfigureStereoJitteredProjectionMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::ConfigureStereoJitteredProjectionMatrices)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181fbe310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"ConfigureStereoJitteredProjectionMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.GenerateHistoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GenerateHistoryName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fbe480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GenerateHistoryName", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.CheckHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(int32_t, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::CheckHistory)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181fbddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"CheckHistory", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::Render)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181fbe890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::Release)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fbe780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fbeb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_jitterSpread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSpread;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_jitterSpread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSpread;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_jitterSpread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitterSpread = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_sharpness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpness;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_sharpness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpness;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_sharpness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpness = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_stationaryBlending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationaryBlending;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_stationaryBlending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationaryBlending;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_stationaryBlending(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stationaryBlending = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_motionBlending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionBlending;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_motionBlending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionBlending;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_motionBlending(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionBlending = value;
}
constexpr ::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>*& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_jitteredMatrixFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitteredMatrixFunc;
}
constexpr ::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>* const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_jitteredMatrixFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitteredMatrixFunc;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_jitteredMatrixFunc(::System::Func_3<::UnityW<::UnityEngine::Camera>,::UnityEngine::Vector2,::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitteredMatrixFunc = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get__jitter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jitter_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get__jitter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jitter_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set__jitter_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jitter_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_Mrt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mrt;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_Mrt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mrt;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_m_Mrt(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Mrt = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_ResetHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetHistory;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_ResetHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetHistory;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_m_ResetHistory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetHistory = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get__sampleIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get__sampleIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set__sampleIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleIndex_k__BackingField = value;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_HistoryTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryTextures;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>> const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_HistoryTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryTextures;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_m_HistoryTextures(::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HistoryTextures = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_HistoryPingPong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryPingPong;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_get_m_HistoryPingPong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HistoryPingPong;
}
constexpr void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::__cordl_internal_set_m_HistoryPingPong(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HistoryPingPong = value;
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::get_jitter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"get_jitter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::set_jitter(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"set_jitter", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::get_sampleIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"get_sampleIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::set_sampleIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"set_sampleIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GetCameraFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::ResetHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"ResetHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GenerateRandomOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GenerateRandomOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GetJitteredProjectionMatrix(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GetJitteredProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::ConfigureJitteredProjectionMatrix(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"ConfigureJitteredProjectionMatrix", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::ConfigureStereoJitteredProjectionMatrices(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"ConfigureStereoJitteredProjectionMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::GenerateHistoryName(::UnityEngine::RenderTexture*  rt, int32_t  id, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"GenerateHistoryName", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, id, context);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::CheckHistory(int32_t  id, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"CheckHistory", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, id, context);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing::TemporalAntialiasing()   {
}
