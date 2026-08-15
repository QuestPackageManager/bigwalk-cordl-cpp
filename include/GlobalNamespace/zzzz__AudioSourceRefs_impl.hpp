#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceRefs.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "UnityEngine/zzzz__AudioChorusFilter_def.hpp"
#include "UnityEngine/zzzz__AudioDistortionFilter_def.hpp"
#include "UnityEngine/zzzz__AudioEchoFilter_def.hpp"
#include "UnityEngine/zzzz__AudioHighPassFilter_def.hpp"
#include "UnityEngine/zzzz__AudioLowPassFilter_def.hpp"
#include "UnityEngine/zzzz__AudioReverbFilter_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSourceRefs.DisableAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceRefs::*)()>(&::GlobalNamespace::AudioSourceRefs::DisableAll)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18049a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceRefs*>(),
                        {"DisableAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceRefs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceRefs::*)()>(&::GlobalNamespace::AudioSourceRefs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceRefs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_Source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Source = value;
}
constexpr ::UnityW<::UnityEngine::AudioLowPassFilter>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_LP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LP;
}
constexpr ::UnityW<::UnityEngine::AudioLowPassFilter> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_LP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LP;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_LP(::UnityW<::UnityEngine::AudioLowPassFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LP = value;
}
constexpr ::UnityW<::UnityEngine::AudioHighPassFilter>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_HP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HP;
}
constexpr ::UnityW<::UnityEngine::AudioHighPassFilter> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_HP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HP;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_HP(::UnityW<::UnityEngine::AudioHighPassFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HP = value;
}
constexpr ::UnityW<::UnityEngine::AudioEchoFilter>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Echo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Echo;
}
constexpr ::UnityW<::UnityEngine::AudioEchoFilter> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Echo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Echo;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_Echo(::UnityW<::UnityEngine::AudioEchoFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Echo = value;
}
constexpr ::UnityW<::UnityEngine::AudioChorusFilter>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Chorus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Chorus;
}
constexpr ::UnityW<::UnityEngine::AudioChorusFilter> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Chorus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Chorus;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_Chorus(::UnityW<::UnityEngine::AudioChorusFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Chorus = value;
}
constexpr ::UnityW<::UnityEngine::AudioReverbFilter>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Reverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverb;
}
constexpr ::UnityW<::UnityEngine::AudioReverbFilter> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Reverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverb;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_Reverb(::UnityW<::UnityEngine::AudioReverbFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reverb = value;
}
constexpr ::UnityW<::UnityEngine::AudioDistortionFilter>& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Distortion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Distortion;
}
constexpr ::UnityW<::UnityEngine::AudioDistortionFilter> const& GlobalNamespace::AudioSourceRefs::__cordl_internal_get_Distortion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Distortion;
}
constexpr void GlobalNamespace::AudioSourceRefs::__cordl_internal_set_Distortion(::UnityW<::UnityEngine::AudioDistortionFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Distortion = value;
}
inline void GlobalNamespace::AudioSourceRefs::DisableAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceRefs*>(),
                        {"DisableAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceRefs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceRefs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSourceRefs* GlobalNamespace::AudioSourceRefs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSourceRefs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceRefs::AudioSourceRefs()   {
}
