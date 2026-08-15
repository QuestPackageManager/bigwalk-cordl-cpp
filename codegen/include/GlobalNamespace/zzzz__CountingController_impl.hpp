#pragma once
// IWYU pragma private; include "GlobalNamespace/CountingController.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountingController_def.hpp"
#include "GlobalNamespace/zzzz__CountingController_def.hpp"
#include "GlobalNamespace/zzzz__CountingDisplay_def.hpp"
#include "GlobalNamespace/zzzz__CountingMachine_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PulseGenerator_def.hpp"
#include "GlobalNamespace/zzzz__ValidatorDisplay_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CountingController_CountingState::CountingController_CountingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountingController_CountingState::CountingController_CountingState()   {
}
constexpr ::GlobalNamespace::CountingController_CountingState  GlobalNamespace::CountingController_CountingState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CountingController_CountingState  GlobalNamespace::CountingController_CountingState::Playback{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CountingController_CountingState  GlobalNamespace::CountingController_CountingState::Input{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CountingController_CountingState  GlobalNamespace::CountingController_CountingState::Validating{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CountingController_CountingState  GlobalNamespace::CountingController_CountingState::Blocked{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::CountingController.get_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::get_isServer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fb370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"get_isServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::Awake)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803faa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fb220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803fb230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.AfterDrumRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::AfterDrumRoll)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803fa8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"AfterDrumRoll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.SetCountingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)(::GlobalNamespace::CountingController_CountingState)>(&::GlobalNamespace::CountingController::SetCountingState)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x1803fac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetCountingState", {}, {::i2c::type_of<::GlobalNamespace::CountingController_CountingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.SetToValidatingPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingController::SetToValidatingPeck)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fb200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToValidatingPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.SetToPlaybackPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingController::SetToPlaybackPeck)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fb1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToPlaybackPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.SetToIdlePeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingController::SetToIdlePeck)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803fb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToIdlePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.SetToBlockedPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingController::SetToBlockedPeck)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803fb140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToBlockedPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController.OnSequenceFinishPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::OnSequenceFinishPlayback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fac00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"OnSequenceFinishPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingController::*)()>(&::GlobalNamespace::CountingController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fb350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PulseGenerator>& GlobalNamespace::CountingController::__cordl_internal_get_pulseGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulseGenerator;
}
constexpr ::UnityW<::GlobalNamespace::PulseGenerator> const& GlobalNamespace::CountingController::__cordl_internal_get_pulseGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulseGenerator;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_pulseGenerator(::UnityW<::GlobalNamespace::PulseGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pulseGenerator = value;
}
constexpr ::UnityW<::GlobalNamespace::CountingMachine>& GlobalNamespace::CountingController::__cordl_internal_get_countingMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingMachine;
}
constexpr ::UnityW<::GlobalNamespace::CountingMachine> const& GlobalNamespace::CountingController::__cordl_internal_get_countingMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingMachine;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_countingMachine(::UnityW<::GlobalNamespace::CountingMachine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countingMachine = value;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& GlobalNamespace::CountingController::__cordl_internal_get_validatorDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatorDisplay;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& GlobalNamespace::CountingController::__cordl_internal_get_validatorDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatorDisplay;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_validatorDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validatorDisplay = value;
}
constexpr ::UnityW<::GlobalNamespace::CountingDisplay>& GlobalNamespace::CountingController::__cordl_internal_get_countingDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CountingDisplay> const& GlobalNamespace::CountingController::__cordl_internal_get_countingDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingDisplay;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_countingDisplay(::UnityW<::GlobalNamespace::CountingDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countingDisplay = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingController::__cordl_internal_get_setToIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToIdle;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingController::__cordl_internal_get_setToIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToIdle;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_setToIdle(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setToIdle = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::CountingController::__cordl_internal_get_SetToIdleFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetToIdleFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::CountingController::__cordl_internal_get_SetToIdleFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetToIdleFilter;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_SetToIdleFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetToIdleFilter = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingController::__cordl_internal_get_SetToPlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetToPlayback;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingController::__cordl_internal_get_SetToPlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetToPlayback;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_SetToPlayback(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetToPlayback = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingController::__cordl_internal_get_setToValidating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToValidating;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingController::__cordl_internal_get_setToValidating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToValidating;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_setToValidating(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setToValidating = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingController::__cordl_internal_get_setToBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToBlocked;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingController::__cordl_internal_get_setToBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToBlocked;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_setToBlocked(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setToBlocked = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::CountingController::__cordl_internal_get_SetToBlockedFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetToBlockedFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::CountingController::__cordl_internal_get_SetToBlockedFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetToBlockedFilter;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_SetToBlockedFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetToBlockedFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::CountingController::__cordl_internal_get_validationPrimeSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationPrimeSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::CountingController::__cordl_internal_get_validationPrimeSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationPrimeSwitch;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_validationPrimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validationPrimeSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::CountingController::__cordl_internal_get_validationUnprimeSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationUnprimeSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::CountingController::__cordl_internal_get_validationUnprimeSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationUnprimeSwitch;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_validationUnprimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validationUnprimeSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::CountingController::__cordl_internal_get_playbackPrimeSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackPrimeSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::CountingController::__cordl_internal_get_playbackPrimeSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackPrimeSwitch;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_playbackPrimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackPrimeSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::CountingController::__cordl_internal_get_playbackUnprimeSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackUnprimeSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::CountingController::__cordl_internal_get_playbackUnprimeSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackUnprimeSwitch;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_playbackUnprimeSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackUnprimeSwitch = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingController::__cordl_internal_get_stateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingController::__cordl_internal_get_stateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSystem;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_stateSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::CountingController::__cordl_internal_get_victorySwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victorySwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::CountingController::__cordl_internal_get_victorySwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victorySwitch;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_victorySwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___victorySwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::CountingController::__cordl_internal_get_failureSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::CountingController::__cordl_internal_get_failureSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureSwitch;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_failureSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureSwitch = value;
}
constexpr float_t& GlobalNamespace::CountingController::__cordl_internal_get_drumRollDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumRollDuration;
}
constexpr float_t const& GlobalNamespace::CountingController::__cordl_internal_get_drumRollDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumRollDuration;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_drumRollDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drumRollDuration = value;
}
constexpr float_t& GlobalNamespace::CountingController::__cordl_internal_get_timeDrumRollStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeDrumRollStart;
}
constexpr float_t const& GlobalNamespace::CountingController::__cordl_internal_get_timeDrumRollStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeDrumRollStart;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_timeDrumRollStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeDrumRollStart = value;
}
constexpr bool& GlobalNamespace::CountingController::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CountingController::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::CountingController_CountingState& GlobalNamespace::CountingController::__cordl_internal_get_countingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingState;
}
constexpr ::GlobalNamespace::CountingController_CountingState const& GlobalNamespace::CountingController::__cordl_internal_get_countingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingState;
}
constexpr void GlobalNamespace::CountingController::__cordl_internal_set_countingState(::GlobalNamespace::CountingController_CountingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countingState = value;
}
inline bool GlobalNamespace::CountingController::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"get_isServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CountingController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingController::AfterDrumRoll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"AfterDrumRoll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingController::SetCountingState(::GlobalNamespace::CountingController_CountingState  newCountingState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetCountingState", {}, {::i2c::type_of<::GlobalNamespace::CountingController_CountingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCountingState);
}
inline void GlobalNamespace::CountingController::SetToValidatingPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToValidatingPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingController::SetToPlaybackPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToPlaybackPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingController::SetToIdlePeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToIdlePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingController::SetToBlockedPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"SetToBlockedPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingController::OnSequenceFinishPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {"OnSequenceFinishPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CountingController* GlobalNamespace::CountingController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CountingController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountingController::CountingController()   {
}
