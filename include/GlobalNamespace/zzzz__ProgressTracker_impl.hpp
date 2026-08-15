#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressTracker.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressTracker_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__ProgressDisplay_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.get_currentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::get_currentValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"get_currentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.set_currentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)(int32_t)>(&::GlobalNamespace::ProgressTracker::set_currentValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803fbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"set_currentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.GetCurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::GetCurrentValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"GetCurrentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.get_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::get_isServer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fbd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"get_isServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180411230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.GetNormalizedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::GetNormalizedValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180411310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"GetNormalizedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.OnValueChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::ProgressTracker::OnValueChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180411510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"OnValueChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::ProgressTracker::Increment)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180411340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"Increment", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::ProgressTracker::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804115e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"Reset", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180411410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressTracker::*)()>(&::GlobalNamespace::ProgressTracker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressTracker::__cordl_internal_get_requiredIncrements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredIncrements;
}
constexpr int32_t const& GlobalNamespace::ProgressTracker::__cordl_internal_get_requiredIncrements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredIncrements;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_requiredIncrements(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredIncrements = value;
}
constexpr float_t& GlobalNamespace::ProgressTracker::__cordl_internal_get_victoryCountdownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victoryCountdownDuration;
}
constexpr float_t const& GlobalNamespace::ProgressTracker::__cordl_internal_get_victoryCountdownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victoryCountdownDuration;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_victoryCountdownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___victoryCountdownDuration = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::ProgressTracker::__cordl_internal_get_valueStorageSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueStorageSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::ProgressTracker::__cordl_internal_get_valueStorageSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueStorageSystem;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_valueStorageSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueStorageSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::ProgressTracker::__cordl_internal_get_incrementSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::ProgressTracker::__cordl_internal_get_incrementSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementSystem;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_incrementSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incrementSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::ProgressTracker::__cordl_internal_get_resetSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::ProgressTracker::__cordl_internal_get_resetSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetSystem;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_resetSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::ProgressTracker::__cordl_internal_get_onVictory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onVictory;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::ProgressTracker::__cordl_internal_get_onVictory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onVictory;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_onVictory(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onVictory = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::ProgressTracker::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::ProgressTracker::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>& GlobalNamespace::ProgressTracker::__cordl_internal_get_IncrementSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncrementSounds;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>> const& GlobalNamespace::ProgressTracker::__cordl_internal_get_IncrementSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncrementSounds;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_IncrementSounds(::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncrementSounds = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ProgressTracker::__cordl_internal_get_FinishSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FinishSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ProgressTracker::__cordl_internal_get_FinishSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FinishSound;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_FinishSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FinishSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ProgressTracker::__cordl_internal_get_ResetSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResetSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ProgressTracker::__cordl_internal_get_ResetSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResetSound;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_ResetSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResetSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ProgressTracker::__cordl_internal_get_ResetZeroSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResetZeroSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ProgressTracker::__cordl_internal_get_ResetZeroSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResetZeroSound;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_ResetZeroSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResetZeroSound = value;
}
constexpr bool& GlobalNamespace::ProgressTracker::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ProgressTracker::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::ProgressTracker::__cordl_internal_get_isInVictoryCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInVictoryCountdown;
}
constexpr bool const& GlobalNamespace::ProgressTracker::__cordl_internal_get_isInVictoryCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInVictoryCountdown;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_isInVictoryCountdown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInVictoryCountdown = value;
}
constexpr float_t& GlobalNamespace::ProgressTracker::__cordl_internal_get_timeAtVictoryCountDownStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtVictoryCountDownStart;
}
constexpr float_t const& GlobalNamespace::ProgressTracker::__cordl_internal_get_timeAtVictoryCountDownStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtVictoryCountDownStart;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_timeAtVictoryCountDownStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtVictoryCountDownStart = value;
}
constexpr ::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>*& GlobalNamespace::ProgressTracker::__cordl_internal_get_onTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTransition;
}
constexpr ::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>* const& GlobalNamespace::ProgressTracker::__cordl_internal_get_onTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTransition;
}
constexpr void GlobalNamespace::ProgressTracker::__cordl_internal_set_onTransition(::System::Action_2<float_t,::GlobalNamespace::ProgressDisplay_ProgressBarState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTransition = value;
}
inline int32_t GlobalNamespace::ProgressTracker::get_currentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"get_currentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressTracker::set_currentValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"set_currentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ProgressTracker::GetCurrentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"GetCurrentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressTracker::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"get_isServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressTracker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::ProgressTracker::GetNormalizedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"GetNormalizedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressTracker::OnValueChange(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"OnValueChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::ProgressTracker::Increment(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"Increment", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::ProgressTracker::Reset(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"Reset", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::ProgressTracker::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressTracker* GlobalNamespace::ProgressTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressTracker*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::ProgressTracker::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::ProgressTracker::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressTracker::ProgressTracker()   {
}
