#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RadioDisplay_def.hpp"
#include "GlobalNamespace/zzzz__FlareDriver_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "GlobalNamespace/zzzz__RadioDisplay_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState::RadioDisplay_RadioDisplayState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState::RadioDisplay_RadioDisplayState()   {
}
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState  GlobalNamespace::RadioDisplay_RadioDisplayState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState  GlobalNamespace::RadioDisplay_RadioDisplayState::Receiving{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState  GlobalNamespace::RadioDisplay_RadioDisplayState::Broadcasting{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState  GlobalNamespace::RadioDisplay_RadioDisplayState::Deadzone{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState  GlobalNamespace::RadioDisplay_RadioDisplayState::BroadcastInDeadzone{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::RadioDisplay_PropertyEffect.SetOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioDisplay_PropertyEffect::*)(bool)>(&::GlobalNamespace::RadioDisplay_PropertyEffect::SetOn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180412140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay_PropertyEffect>(),
                        {"SetOn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RadioDisplay_PropertyEffect::SetOn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay_PropertyEffect>(),
                        {"SetOn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "propertyBlockHelper", ty: "::UnityW<::GlobalNamespace::PropertyBlockHelper>", modifiers: "", def_value: Some("{}") }, CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "onValue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_on", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect::RadioDisplay_PropertyEffect(::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper, ::StringW  propertyName, float_t  onValue, bool  _on) noexcept  {
this->propertyBlockHelper = propertyBlockHelper;
this->propertyName = propertyName;
this->onValue = onValue;
this->_on = _on;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect::RadioDisplay_PropertyEffect()   {
}
//  Writing Method size for method: ::GlobalNamespace::RadioDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioDisplay::*)()>(&::GlobalNamespace::RadioDisplay::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180412470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioDisplay.SetDisplayState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioDisplay::*)(::GlobalNamespace::RadioDisplay_RadioDisplayState)>(&::GlobalNamespace::RadioDisplay::SetDisplayState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180412920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"SetDisplayState", {}, {::i2c::type_of<::GlobalNamespace::RadioDisplay_RadioDisplayState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioDisplay.RefreshDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioDisplay::*)()>(&::GlobalNamespace::RadioDisplay::RefreshDisplay)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x180412590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"RefreshDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioDisplay.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioDisplay::*)()>(&::GlobalNamespace::RadioDisplay::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180412970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioDisplay::*)()>(&::GlobalNamespace::RadioDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RadioDisplay::__cordl_internal_get_downTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTime;
}
constexpr float_t const& GlobalNamespace::RadioDisplay::__cordl_internal_get_downTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTime;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_downTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downTime = value;
}
constexpr float_t& GlobalNamespace::RadioDisplay::__cordl_internal_get_upTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTime;
}
constexpr float_t const& GlobalNamespace::RadioDisplay::__cordl_internal_get_upTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTime;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_upTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upTime = value;
}
constexpr float_t& GlobalNamespace::RadioDisplay::__cordl_internal_get_jitterLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterLimit;
}
constexpr float_t const& GlobalNamespace::RadioDisplay::__cordl_internal_get_jitterLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterLimit;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_jitterLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitterLimit = value;
}
constexpr ::UnityW<::GlobalNamespace::RadioDisplay>& GlobalNamespace::RadioDisplay::__cordl_internal_get_parentDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentDisplay;
}
constexpr ::UnityW<::GlobalNamespace::RadioDisplay> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_parentDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentDisplay;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_parentDisplay(::UnityW<::GlobalNamespace::RadioDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentDisplay = value;
}
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState& GlobalNamespace::RadioDisplay::__cordl_internal_get_displayState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayState;
}
constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState const& GlobalNamespace::RadioDisplay::__cordl_internal_get_displayState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayState;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_displayState(::GlobalNamespace::RadioDisplay_RadioDisplayState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayState = value;
}
constexpr bool& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulseIsUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulseIsUp;
}
constexpr bool const& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulseIsUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulseIsUp;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_pulseIsUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pulseIsUp = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RadioDisplay::__cordl_internal_get_deadZoneThing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZoneThing;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_deadZoneThing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZoneThing;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_deadZoneThing(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deadZoneThing = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RadioDisplay::__cordl_internal_get_broadcastingThing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastingThing;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_broadcastingThing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastingThing;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_broadcastingThing(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastingThing = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RadioDisplay::__cordl_internal_get_receivingThing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivingThing;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_receivingThing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivingThing;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_receivingThing(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivingThing = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulsingThing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulsingThing;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulsingThing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulsingThing;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_pulsingThing(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pulsingThing = value;
}
constexpr ::UnityW<::GlobalNamespace::FlareDriver>& GlobalNamespace::RadioDisplay::__cordl_internal_get_broadcastingFlare()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastingFlare;
}
constexpr ::UnityW<::GlobalNamespace::FlareDriver> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_broadcastingFlare() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastingFlare;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_broadcastingFlare(::UnityW<::GlobalNamespace::FlareDriver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastingFlare = value;
}
constexpr ::UnityW<::GlobalNamespace::FlareDriver>& GlobalNamespace::RadioDisplay::__cordl_internal_get_receivingFlare()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivingFlare;
}
constexpr ::UnityW<::GlobalNamespace::FlareDriver> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_receivingFlare() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivingFlare;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_receivingFlare(::UnityW<::GlobalNamespace::FlareDriver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivingFlare = value;
}
constexpr ::UnityW<::GlobalNamespace::FlareDriver>& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulsingFlare()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulsingFlare;
}
constexpr ::UnityW<::GlobalNamespace::FlareDriver> const& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulsingFlare() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulsingFlare;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_pulsingFlare(::UnityW<::GlobalNamespace::FlareDriver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pulsingFlare = value;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& GlobalNamespace::RadioDisplay::__cordl_internal_get_deadZonePropertyEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZonePropertyEffect;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& GlobalNamespace::RadioDisplay::__cordl_internal_get_deadZonePropertyEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZonePropertyEffect;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_deadZonePropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deadZonePropertyEffect = value;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& GlobalNamespace::RadioDisplay::__cordl_internal_get_broadcastPropertyEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastPropertyEffect;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& GlobalNamespace::RadioDisplay::__cordl_internal_get_broadcastPropertyEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastPropertyEffect;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_broadcastPropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastPropertyEffect = value;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& GlobalNamespace::RadioDisplay::__cordl_internal_get_receivingPropertyEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivingPropertyEffect;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& GlobalNamespace::RadioDisplay::__cordl_internal_get_receivingPropertyEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivingPropertyEffect;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_receivingPropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivingPropertyEffect = value;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulsingPropertyEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulsingPropertyEffect;
}
constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& GlobalNamespace::RadioDisplay::__cordl_internal_get_pulsingPropertyEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulsingPropertyEffect;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_pulsingPropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pulsingPropertyEffect = value;
}
constexpr bool& GlobalNamespace::RadioDisplay::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::RadioDisplay::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr double_t& GlobalNamespace::RadioDisplay::__cordl_internal_get_timeNextChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeNextChange;
}
constexpr double_t const& GlobalNamespace::RadioDisplay::__cordl_internal_get_timeNextChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeNextChange;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_timeNextChange(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeNextChange = value;
}
constexpr float_t& GlobalNamespace::RadioDisplay::__cordl_internal_get_jitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitter;
}
constexpr float_t const& GlobalNamespace::RadioDisplay::__cordl_internal_get_jitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitter;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_jitter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitter = value;
}
constexpr ::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>*& GlobalNamespace::RadioDisplay::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>* const& GlobalNamespace::RadioDisplay::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::RadioDisplay::__cordl_internal_set_onChange(::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline void GlobalNamespace::RadioDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioDisplay::SetDisplayState(::GlobalNamespace::RadioDisplay_RadioDisplayState  newDisplayState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"SetDisplayState", {}, {::i2c::type_of<::GlobalNamespace::RadioDisplay_RadioDisplayState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDisplayState);
}
inline void GlobalNamespace::RadioDisplay::RefreshDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"RefreshDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RadioDisplay* GlobalNamespace::RadioDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadioDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioDisplay::RadioDisplay()   {
}
