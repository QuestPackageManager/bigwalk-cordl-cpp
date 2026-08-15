#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HeightAreaEffectStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightStamp_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightAreaEffectStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightAreaEffectStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType::HeightAreaEffectStamp_EffectType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType::HeightAreaEffectStamp_EffectType()   {
}
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType::Terrace{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType::Beach{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType::RemapCurve{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType::Noise{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)()>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)()>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181440380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)()>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::Initialize)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181440170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)()>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::GetBounds)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181440010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp.ApplyHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::ApplyHeightStamp)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x18143f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)()>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181440390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightAreaEffectStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightAreaEffectStamp::*)()>(&::JBooth::MicroVerseCore::HeightAreaEffectStamp::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181440640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_effectType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectType;
}
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_effectType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectType;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_effectType(::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectType = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter*& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_falloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloff;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_falloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloff;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_falloff(::JBooth::MicroVerseCore::FalloffFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloff = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_noise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noise = value;
}
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_combineMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineMode;
}
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_combineMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineMode;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_combineMode(::JBooth::MicroVerseCore::HeightStamp_CombineMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineMode = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_combineBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineBlend;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_combineBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineBlend;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_combineBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineBlend = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_terraceSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terraceSize;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_terraceSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terraceSize;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_terraceSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terraceSize = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_terraceStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terraceStrength;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_terraceStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terraceStrength;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_terraceStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terraceStrength = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_beachDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachDistance;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_beachDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachDistance;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_beachDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beachDistance = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_beachPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachPower;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_beachPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachPower;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_beachPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beachPower = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_remapCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_remapCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurve;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_remapCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remapCurve = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_remapCurveTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurveTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_get_remapCurveTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurveTex;
}
constexpr void JBooth::MicroVerseCore::HeightAreaEffectStamp::__cordl_internal_set_remapCurveTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remapCurveTex = value;
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF_heightmapShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "heightmapShader", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF_heightmapShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "heightmapShader", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__Transform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__Transform()  {
return ::cordl_internals::getStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__RealSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__RealSize()  {
return ::cordl_internals::getStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__NoiseUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__NoiseUV()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__TerraceSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerraceSize", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__TerraceSize()  {
return ::cordl_internals::getStaticField<int32_t, "_TerraceSize", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__BeachDistance(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BeachDistance", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__BeachDistance()  {
return ::cordl_internals::getStaticField<int32_t, "_BeachDistance", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__WorldPosY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WorldPosY", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__WorldPosY()  {
return ::cordl_internals::getStaticField<int32_t, "_WorldPosY", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__BeachPower(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BeachPower", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__BeachPower()  {
return ::cordl_internals::getStaticField<int32_t, "_BeachPower", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__RemapCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RemapCurve", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__RemapCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_RemapCurve", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__CombineMode(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CombineMode", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__CombineMode()  {
return ::cordl_internals::getStaticField<int32_t, "_CombineMode", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__CombineBlend(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CombineBlend", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__CombineBlend()  {
return ::cordl_internals::getStaticField<int32_t, "_CombineBlend", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::setStaticF__TerraceStrength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerraceStrength", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightAreaEffectStamp::getStaticF__TerraceStrength()  {
return ::cordl_internals::getStaticField<int32_t, "_TerraceStrength", ::JBooth::MicroVerseCore::HeightAreaEffectStamp*>();
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::HeightAreaEffectStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::HeightAreaEffectStamp::ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od);
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightAreaEffectStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::HeightAreaEffectStamp* JBooth::MicroVerseCore::HeightAreaEffectStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::HeightAreaEffectStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr  JBooth::MicroVerseCore::HeightAreaEffectStamp::operator ::JBooth::MicroVerseCore::IHeightModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* JBooth::MicroVerseCore::HeightAreaEffectStamp::i___JBooth__MicroVerseCore__IHeightModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::HeightAreaEffectStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::HeightAreaEffectStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp::HeightAreaEffectStamp()   {
}
