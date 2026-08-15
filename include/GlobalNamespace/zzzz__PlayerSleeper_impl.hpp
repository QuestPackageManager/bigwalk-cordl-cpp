#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSleeper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSleeper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SleeplessZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSleeper.get_combinedIsSleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerSleeper::*)()>(&::GlobalNamespace::PlayerSleeper::get_combinedIsSleeping)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180375ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"get_combinedIsSleeping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSleeper.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSleeper::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerSleeper::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180375300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSleeper.RecordAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSleeper::*)()>(&::GlobalNamespace::PlayerSleeper::RecordAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180375330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"RecordAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSleeper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSleeper::*)()>(&::GlobalNamespace::PlayerSleeper::Update)> {
  constexpr static std::size_t size = 0x980;
  constexpr static std::size_t addrs = 0x180375350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSleeper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSleeper::*)()>(&::GlobalNamespace::PlayerSleeper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180375cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerSleeper::__cordl_internal_get_timeTilSleep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTilSleep;
}
constexpr float_t const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_timeTilSleep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTilSleep;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_timeTilSleep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeTilSleep = value;
}
constexpr bool& GlobalNamespace::PlayerSleeper::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerSleeper::__cordl_internal_get_preventSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventSleeping;
}
constexpr bool const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_preventSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventSleeping;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_preventSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preventSleeping = value;
}
constexpr bool& GlobalNamespace::PlayerSleeper::__cordl_internal_get_forceSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceSleeping;
}
constexpr bool const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_forceSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceSleeping;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_forceSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceSleeping = value;
}
constexpr float_t& GlobalNamespace::PlayerSleeper::__cordl_internal_get_sleepSoundThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepSoundThreshold;
}
constexpr float_t const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_sleepSoundThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepSoundThreshold;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_sleepSoundThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepSoundThreshold = value;
}
constexpr bool& GlobalNamespace::PlayerSleeper::__cordl_internal_get__wasSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSleeping;
}
constexpr bool const& GlobalNamespace::PlayerSleeper::__cordl_internal_get__wasSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSleeping;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set__wasSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasSleeping = value;
}
constexpr bool& GlobalNamespace::PlayerSleeper::__cordl_internal_get__sleepSoundToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepSoundToggle;
}
constexpr bool const& GlobalNamespace::PlayerSleeper::__cordl_internal_get__sleepSoundToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepSoundToggle;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set__sleepSoundToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sleepSoundToggle = value;
}
constexpr bool& GlobalNamespace::PlayerSleeper::__cordl_internal_get_localIsSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localIsSleeping;
}
constexpr bool const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_localIsSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localIsSleeping;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_localIsSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localIsSleeping = value;
}
constexpr float_t& GlobalNamespace::PlayerSleeper::__cordl_internal_get_timeAtLastAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastAction;
}
constexpr float_t const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_timeAtLastAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastAction;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_timeAtLastAction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtLastAction = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerSleeper::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerSleeper::__cordl_internal_get_smoothSleepiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSleepiness;
}
constexpr float_t const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_smoothSleepiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSleepiness;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_smoothSleepiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothSleepiness = value;
}
constexpr float_t& GlobalNamespace::PlayerSleeper::__cordl_internal_get_smoothSleepinessVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSleepinessVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_smoothSleepinessVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSleepinessVelocity;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_smoothSleepinessVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothSleepinessVelocity = value;
}
constexpr ::UnityW<::GlobalNamespace::SleeplessZone>& GlobalNamespace::PlayerSleeper::__cordl_internal_get_sleeplessZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleeplessZone;
}
constexpr ::UnityW<::GlobalNamespace::SleeplessZone> const& GlobalNamespace::PlayerSleeper::__cordl_internal_get_sleeplessZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleeplessZone;
}
constexpr void GlobalNamespace::PlayerSleeper::__cordl_internal_set_sleeplessZone(::UnityW<::GlobalNamespace::SleeplessZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleeplessZone = value;
}
inline bool GlobalNamespace::PlayerSleeper::get_combinedIsSleeping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"get_combinedIsSleeping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSleeper::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerSleeper::RecordAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"RecordAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSleeper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSleeper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSleeper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSleeper* GlobalNamespace::PlayerSleeper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSleeper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSleeper::PlayerSleeper()   {
}
