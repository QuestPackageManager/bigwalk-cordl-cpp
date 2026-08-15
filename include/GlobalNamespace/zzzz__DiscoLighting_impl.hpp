#pragma once
// IWYU pragma private; include "GlobalNamespace/DiscoLighting.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DiscoLighting_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DiscoLighting::*)()>(&::GlobalNamespace::DiscoLighting::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)()>(&::GlobalNamespace::DiscoLighting::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180332b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)()>(&::GlobalNamespace::DiscoLighting::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803333a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)()>(&::GlobalNamespace::DiscoLighting::OnDisable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803331a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(float_t)>(&::GlobalNamespace::DiscoLighting::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(float_t)>(&::GlobalNamespace::DiscoLighting::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(float_t)>(&::GlobalNamespace::DiscoLighting::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(float_t)>(&::GlobalNamespace::DiscoLighting::AudioUpdate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x180332830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.OnBeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(::GlobalNamespace::MusicGroup*, int32_t, float_t)>(&::GlobalNamespace::DiscoLighting::OnBeat)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x180332d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnBeat", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.OnNoBeatAudible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(::GlobalNamespace::MusicGroup*)>(&::GlobalNamespace::DiscoLighting::OnNoBeatAudible)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803334c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnNoBeatAudible", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.ColorHSVDiff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::DiscoLighting::*)(::UnityEngine::Color, float_t, float_t, float_t)>(&::GlobalNamespace::DiscoLighting::ColorHSVDiff)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180332bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"ColorHSVDiff", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.GetNextColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::DiscoLighting::*)()>(&::GlobalNamespace::DiscoLighting::GetNextColor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180332cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"GetNextColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting.SetMeshAndLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::DiscoLighting::SetMeshAndLight)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803335d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"SetMeshAndLight", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiscoLighting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiscoLighting::*)()>(&::GlobalNamespace::DiscoLighting::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180333690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::DiscoLighting::__cordl_internal_get_Lighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lighting;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::DiscoLighting::__cordl_internal_get_Lighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lighting;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set_Lighting(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lighting = value;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& GlobalNamespace::DiscoLighting::__cordl_internal_get_propertyBlockHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& GlobalNamespace::DiscoLighting::__cordl_internal_get_propertyBlockHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelper = value;
}
constexpr int32_t& GlobalNamespace::DiscoLighting::__cordl_internal_get_period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr int32_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get_period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set_period(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___period = value;
}
constexpr int32_t& GlobalNamespace::DiscoLighting::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr int32_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set_offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr bool& GlobalNamespace::DiscoLighting::__cordl_internal_get_useSpecificColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSpecificColor;
}
constexpr bool const& GlobalNamespace::DiscoLighting::__cordl_internal_get_useSpecificColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSpecificColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set_useSpecificColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSpecificColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get_specificColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get_specificColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set_specificColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specificColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__initialLightingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialLightingColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__initialLightingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialLightingColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__initialLightingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialLightingColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__initialMeshColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialMeshColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__initialMeshColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialMeshColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__initialMeshColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialMeshColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__targetLightingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetLightingColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__targetLightingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetLightingColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__targetLightingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetLightingColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__targetMeshColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMeshColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__targetMeshColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMeshColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__targetMeshColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetMeshColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__currentLightingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLightingColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__currentLightingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLightingColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__currentLightingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentLightingColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__currentMeshColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMeshColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__currentMeshColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMeshColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__currentMeshColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMeshColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DiscoLighting::__cordl_internal_get__nextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DiscoLighting::__cordl_internal_get__nextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextColor;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__nextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextColor = value;
}
constexpr float_t& GlobalNamespace::DiscoLighting::__cordl_internal_get__nextHueDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextHueDiff;
}
constexpr float_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get__nextHueDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextHueDiff;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__nextHueDiff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextHueDiff = value;
}
constexpr float_t& GlobalNamespace::DiscoLighting::__cordl_internal_get__currentIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentIntensity;
}
constexpr float_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get__currentIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentIntensity;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__currentIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentIntensity = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*& GlobalNamespace::DiscoLighting::__cordl_internal_get__audibleGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audibleGroups;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* const& GlobalNamespace::DiscoLighting::__cordl_internal_get__audibleGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audibleGroups;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__audibleGroups(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audibleGroups = value;
}
constexpr float_t& GlobalNamespace::DiscoLighting::__cordl_internal_get__beatInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatInterval;
}
constexpr float_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get__beatInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatInterval;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__beatInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beatInterval = value;
}
constexpr float_t& GlobalNamespace::DiscoLighting::__cordl_internal_get__lastBeatTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBeatTime;
}
constexpr float_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get__lastBeatTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBeatTime;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__lastBeatTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastBeatTime = value;
}
constexpr float_t& GlobalNamespace::DiscoLighting::__cordl_internal_get__lastVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastVol;
}
constexpr float_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get__lastVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastVol;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__lastVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastVol = value;
}
constexpr int32_t& GlobalNamespace::DiscoLighting::__cordl_internal_get__beatInPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatInPeriod;
}
constexpr int32_t const& GlobalNamespace::DiscoLighting::__cordl_internal_get__beatInPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatInPeriod;
}
constexpr void GlobalNamespace::DiscoLighting::__cordl_internal_set__beatInPeriod(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beatInPeriod = value;
}
inline void GlobalNamespace::DiscoLighting::setStaticF__currentHue(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_currentHue", ::GlobalNamespace::DiscoLighting*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::DiscoLighting::getStaticF__currentHue()  {
return ::cordl_internals::getStaticField<float_t, "_currentHue", ::GlobalNamespace::DiscoLighting*>();
}
inline bool GlobalNamespace::DiscoLighting::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DiscoLighting::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DiscoLighting::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DiscoLighting::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DiscoLighting::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::DiscoLighting::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::DiscoLighting::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::DiscoLighting::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::DiscoLighting::OnBeat(::GlobalNamespace::MusicGroup*  musicGroup, int32_t  beat, float_t  maxVol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnBeat", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, musicGroup, beat, maxVol);
}
inline void GlobalNamespace::DiscoLighting::OnNoBeatAudible(::GlobalNamespace::MusicGroup*  musicGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"OnNoBeatAudible", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, musicGroup);
}
inline ::UnityEngine::Color GlobalNamespace::DiscoLighting::ColorHSVDiff(::UnityEngine::Color  color, float_t  hueDiff, float_t  saturationDiff, float_t  valueDiff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"ColorHSVDiff", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, color, hueDiff, saturationDiff, valueDiff);
}
inline ::UnityEngine::Color GlobalNamespace::DiscoLighting::GetNextColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"GetNextColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::DiscoLighting::SetMeshAndLight(::UnityEngine::Color  lightColor, ::UnityEngine::Color  meshColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {"SetMeshAndLight", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightColor, meshColor);
}
inline void GlobalNamespace::DiscoLighting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DiscoLighting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DiscoLighting* GlobalNamespace::DiscoLighting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DiscoLighting*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::DiscoLighting::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::DiscoLighting::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiscoLighting::DiscoLighting()   {
}
