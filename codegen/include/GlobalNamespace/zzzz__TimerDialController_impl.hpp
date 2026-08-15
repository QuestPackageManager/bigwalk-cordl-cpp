#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerDialController.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimerDialController_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TimerDialController_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "GlobalNamespace/zzzz__ValidatorDisplay_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TimerDialController_DialState::TimerDialController_DialState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimerDialController_DialState::TimerDialController_DialState()   {
}
constexpr ::GlobalNamespace::TimerDialController_DialState  GlobalNamespace::TimerDialController_DialState::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimerDialController_DialState  GlobalNamespace::TimerDialController_DialState::Primed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimerDialController_DialState  GlobalNamespace::TimerDialController_DialState::Satisfied{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TimerDialController_DialState  GlobalNamespace::TimerDialController_DialState::Failure{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180418cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180419320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.SatisfiedPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::TimerDialController::SatisfiedPeck)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180419170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"SatisfiedPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.EarlyFailurePeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::TimerDialController::EarlyFailurePeck)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180418f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"EarlyFailurePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.IgnitionPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::TimerDialController::IgnitionPeck)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804190d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"IgnitionPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::Stop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180419250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.DoMidnight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::DoMidnight)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180418db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"DoMidnight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.Success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::Success)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180419280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Success", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.Failure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::Failure)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180418ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Failure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.SetPrimed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)(bool)>(&::GlobalNamespace::TimerDialController::SetPrimed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804191f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"SetPrimed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController.GetNormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::GetNormalizedTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180419090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"GetNormalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialController::*)()>(&::GlobalNamespace::TimerDialController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180419460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& GlobalNamespace::TimerDialController::__cordl_internal_get_validatorDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatorDisplay;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& GlobalNamespace::TimerDialController::__cordl_internal_get_validatorDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatorDisplay;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_validatorDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validatorDisplay = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::TimerDialController::__cordl_internal_get_ignitionSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignitionSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::TimerDialController::__cordl_internal_get_ignitionSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignitionSystem;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_ignitionSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignitionSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::TimerDialController::__cordl_internal_get_satisfiedSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___satisfiedSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::TimerDialController::__cordl_internal_get_satisfiedSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___satisfiedSystem;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_satisfiedSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___satisfiedSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::TimerDialController::__cordl_internal_get_earlyFailureSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earlyFailureSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::TimerDialController::__cordl_internal_get_earlyFailureSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earlyFailureSystem;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_earlyFailureSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___earlyFailureSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::TimerDialController::__cordl_internal_get_outcomeSwitchSucess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomeSwitchSucess;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::TimerDialController::__cordl_internal_get_outcomeSwitchSucess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomeSwitchSucess;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_outcomeSwitchSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomeSwitchSucess = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::TimerDialController::__cordl_internal_get_outcomeSwitchFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomeSwitchFailure;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::TimerDialController::__cordl_internal_get_outcomeSwitchFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomeSwitchFailure;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_outcomeSwitchFailure(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomeSwitchFailure = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::TimerDialController::__cordl_internal_get_isPrimedSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrimedSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::TimerDialController::__cordl_internal_get_isPrimedSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrimedSystem;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_isPrimedSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPrimedSystem = value;
}
constexpr float_t& GlobalNamespace::TimerDialController::__cordl_internal_get_period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr float_t const& GlobalNamespace::TimerDialController::__cordl_internal_get_period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___period;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_period(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___period = value;
}
constexpr bool& GlobalNamespace::TimerDialController::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::TimerDialController::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::TimerDialController_DialState& GlobalNamespace::TimerDialController::__cordl_internal_get_dialState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialState;
}
constexpr ::GlobalNamespace::TimerDialController_DialState const& GlobalNamespace::TimerDialController::__cordl_internal_get_dialState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialState;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_dialState(::GlobalNamespace::TimerDialController_DialState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dialState = value;
}
constexpr double_t& GlobalNamespace::TimerDialController::__cordl_internal_get_startOfSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOfSequence;
}
constexpr double_t const& GlobalNamespace::TimerDialController::__cordl_internal_get_startOfSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOfSequence;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_startOfSequence(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startOfSequence = value;
}
constexpr double_t& GlobalNamespace::TimerDialController::__cordl_internal_get_startOfPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOfPeriod;
}
constexpr double_t const& GlobalNamespace::TimerDialController::__cordl_internal_get_startOfPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOfPeriod;
}
constexpr void GlobalNamespace::TimerDialController::__cordl_internal_set_startOfPeriod(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startOfPeriod = value;
}
inline void GlobalNamespace::TimerDialController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::SatisfiedPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"SatisfiedPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::TimerDialController::EarlyFailurePeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"EarlyFailurePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::TimerDialController::IgnitionPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"IgnitionPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::TimerDialController::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::DoMidnight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"DoMidnight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::Success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::Failure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"Failure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::SetPrimed(bool  isPrimed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"SetPrimed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPrimed);
}
inline float_t GlobalNamespace::TimerDialController::GetNormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {"GetNormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimerDialController* GlobalNamespace::TimerDialController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimerDialController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimerDialController::TimerDialController()   {
}
