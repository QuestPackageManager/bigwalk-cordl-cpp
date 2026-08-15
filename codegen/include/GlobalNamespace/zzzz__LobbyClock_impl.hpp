#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyClock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyClock_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyClock.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyClock::*)()>(&::GlobalNamespace::LobbyClock::Update)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1803ffd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyClock*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyClock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyClock::*)()>(&::GlobalNamespace::LobbyClock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyClock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LobbyClock::__cordl_internal_get_hourHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hourHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LobbyClock::__cordl_internal_get_hourHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hourHand;
}
constexpr void GlobalNamespace::LobbyClock::__cordl_internal_set_hourHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hourHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LobbyClock::__cordl_internal_get_secondHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LobbyClock::__cordl_internal_get_secondHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondHand;
}
constexpr void GlobalNamespace::LobbyClock::__cordl_internal_set_secondHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondHand = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::LobbyClock::__cordl_internal_get_tickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::LobbyClock::__cordl_internal_get_tickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickSound;
}
constexpr void GlobalNamespace::LobbyClock::__cordl_internal_set_tickSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::LobbyClock::__cordl_internal_get_tockSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tockSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::LobbyClock::__cordl_internal_get_tockSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tockSound;
}
constexpr void GlobalNamespace::LobbyClock::__cordl_internal_set_tockSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tockSound = value;
}
constexpr float_t& GlobalNamespace::LobbyClock::__cordl_internal_get__lastSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSecond;
}
constexpr float_t const& GlobalNamespace::LobbyClock::__cordl_internal_get__lastSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSecond;
}
constexpr void GlobalNamespace::LobbyClock::__cordl_internal_set__lastSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSecond = value;
}
inline void GlobalNamespace::LobbyClock::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyClock*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyClock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyClock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyClock* GlobalNamespace::LobbyClock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyClock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyClock::LobbyClock()   {
}
