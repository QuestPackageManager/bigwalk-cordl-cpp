#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioLayer.InIntensityRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioLayer::*)(float_t)>(&::GlobalNamespace::AudioLayer::InIntensityRange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18047baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayer*>(),
                        {"InIntensityRange", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayer.GetIntensityVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioLayer::*)(float_t)>(&::GlobalNamespace::AudioLayer::GetIntensityVolume)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18047ba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayer*>(),
                        {"GetIntensityVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLayer::*)()>(&::GlobalNamespace::AudioLayer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18047bb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioLayer::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioLayer::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
constexpr float_t& GlobalNamespace::AudioLayer::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr float_t const& GlobalNamespace::AudioLayer::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_Delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
constexpr float_t& GlobalNamespace::AudioLayer::__cordl_internal_get_MinIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinIntensity;
}
constexpr float_t const& GlobalNamespace::AudioLayer::__cordl_internal_get_MinIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinIntensity;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_MinIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinIntensity = value;
}
constexpr float_t& GlobalNamespace::AudioLayer::__cordl_internal_get_MaxIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxIntensity;
}
constexpr float_t const& GlobalNamespace::AudioLayer::__cordl_internal_get_MaxIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxIntensity;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_MaxIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxIntensity = value;
}
constexpr bool& GlobalNamespace::AudioLayer::__cordl_internal_get_IntensityVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityVolume;
}
constexpr bool const& GlobalNamespace::AudioLayer::__cordl_internal_get_IntensityVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityVolume;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_IntensityVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntensityVolume = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::AudioLayer::__cordl_internal_get_IntensityVolumeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityVolumeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::AudioLayer::__cordl_internal_get_IntensityVolumeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityVolumeCurve;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_IntensityVolumeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntensityVolumeCurve = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioLayer::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioLayer::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void GlobalNamespace::AudioLayer::__cordl_internal_set_Volume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
inline bool GlobalNamespace::AudioLayer::InIntensityRange(float_t  normalizedIntensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayer*>(),
                        {"InIntensityRange", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, normalizedIntensity);
}
inline float_t GlobalNamespace::AudioLayer::GetIntensityVolume(float_t  normalizedIntensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayer*>(),
                        {"GetIntensityVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, normalizedIntensity);
}
inline void GlobalNamespace::AudioLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioLayer* GlobalNamespace::AudioLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioLayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLayer::AudioLayer()   {
}
