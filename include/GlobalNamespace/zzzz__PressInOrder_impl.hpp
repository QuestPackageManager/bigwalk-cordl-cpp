#pragma once
// IWYU pragma private; include "GlobalNamespace/PressInOrder.hpp"
#include "GlobalNamespace/zzzz__PeckCondition_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PressInOrder_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__ProgressTracker_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)()>(&::GlobalNamespace::PressInOrder::Awake)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18040fd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.OnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PressInOrder::OnInput)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18040ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"OnInput", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.SetRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)()>(&::GlobalNamespace::PressInOrder::SetRandom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804107c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"SetRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PressInOrder::SetActive)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180410420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"SetActive", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.SetOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)()>(&::GlobalNamespace::PressInOrder::SetOff)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180410630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"SetOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.HidePanelChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PressInOrder::HidePanelChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"HidePanelChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder.RefreshIndication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)()>(&::GlobalNamespace::PressInOrder::RefreshIndication)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180410270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"RefreshIndication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PressInOrder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PressInOrder::*)()>(&::GlobalNamespace::PressInOrder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PeckSystemReference>& GlobalNamespace::PressInOrder::__cordl_internal_get_inputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputs;
}
constexpr ::ArrayW<::GlobalNamespace::PeckSystemReference> const& GlobalNamespace::PressInOrder::__cordl_internal_get_inputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputs;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_inputs(::ArrayW<::GlobalNamespace::PeckSystemReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputs = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PressInOrder::__cordl_internal_get_isActiveSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PressInOrder::__cordl_internal_get_isActiveSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveSystem;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_isActiveSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActiveSystem = value;
}
constexpr ::GlobalNamespace::PeckCondition& GlobalNamespace::PressInOrder::__cordl_internal_get_hidePanelCondition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidePanelCondition;
}
constexpr ::GlobalNamespace::PeckCondition const& GlobalNamespace::PressInOrder::__cordl_internal_get_hidePanelCondition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidePanelCondition;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_hidePanelCondition(::GlobalNamespace::PeckCondition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hidePanelCondition = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PressInOrder::__cordl_internal_get_sucessSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sucessSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PressInOrder::__cordl_internal_get_sucessSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sucessSwitch;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_sucessSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sucessSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PressInOrder::__cordl_internal_get_failureSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PressInOrder::__cordl_internal_get_failureSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureSwitch;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_failureSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PressInOrder::__cordl_internal_get_onAnyOutcome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAnyOutcome;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PressInOrder::__cordl_internal_get_onAnyOutcome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAnyOutcome;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_onAnyOutcome(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAnyOutcome = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressTracker>& GlobalNamespace::PressInOrder::__cordl_internal_get_progressTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressTracker;
}
constexpr ::UnityW<::GlobalNamespace::ProgressTracker> const& GlobalNamespace::PressInOrder::__cordl_internal_get_progressTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressTracker;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_progressTracker(::UnityW<::GlobalNamespace::ProgressTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressTracker = value;
}
constexpr bool& GlobalNamespace::PressInOrder::__cordl_internal_get_hotPotatoMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotPotatoMode;
}
constexpr bool const& GlobalNamespace::PressInOrder::__cordl_internal_get_hotPotatoMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotPotatoMode;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_hotPotatoMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hotPotatoMode = value;
}
constexpr bool& GlobalNamespace::PressInOrder::__cordl_internal_get_startAcitve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAcitve;
}
constexpr bool const& GlobalNamespace::PressInOrder::__cordl_internal_get_startAcitve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAcitve;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_startAcitve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startAcitve = value;
}
constexpr bool& GlobalNamespace::PressInOrder::__cordl_internal_get_unprimeOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unprimeOthers;
}
constexpr bool const& GlobalNamespace::PressInOrder::__cordl_internal_get_unprimeOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unprimeOthers;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_unprimeOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unprimeOthers = value;
}
constexpr bool& GlobalNamespace::PressInOrder::__cordl_internal_get_resetWhenInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetWhenInactive;
}
constexpr bool const& GlobalNamespace::PressInOrder::__cordl_internal_get_resetWhenInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetWhenInactive;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_resetWhenInactive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetWhenInactive = value;
}
constexpr bool& GlobalNamespace::PressInOrder::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PressInOrder::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr int32_t& GlobalNamespace::PressInOrder::__cordl_internal_get_desiredIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredIndex;
}
constexpr int32_t const& GlobalNamespace::PressInOrder::__cordl_internal_get_desiredIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredIndex;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_desiredIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredIndex = value;
}
constexpr bool& GlobalNamespace::PressInOrder::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::PressInOrder::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr ::System::Action_2<int32_t,bool>*& GlobalNamespace::PressInOrder::__cordl_internal_get_onInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInput;
}
constexpr ::System::Action_2<int32_t,bool>* const& GlobalNamespace::PressInOrder::__cordl_internal_get_onInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInput;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_onInput(::System::Action_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onInput = value;
}
constexpr ::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>*& GlobalNamespace::PressInOrder::__cordl_internal_get_onSetDesired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSetDesired;
}
constexpr ::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>* const& GlobalNamespace::PressInOrder::__cordl_internal_get_onSetDesired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSetDesired;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_onSetDesired(::System::Action_3<int32_t,bool,::UnityW<::GlobalNamespace::TrackedPeckState>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSetDesired = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PressInOrder::__cordl_internal_get_hotPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotPanel;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PressInOrder::__cordl_internal_get_hotPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotPanel;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_hotPanel(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hotPanel = value;
}
constexpr int32_t& GlobalNamespace::PressInOrder::__cordl_internal_get_currentlyIndicated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyIndicated;
}
constexpr int32_t const& GlobalNamespace::PressInOrder::__cordl_internal_get_currentlyIndicated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyIndicated;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_currentlyIndicated(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlyIndicated = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::PressInOrder::__cordl_internal_get_inputPressStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPressStates;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::PressInOrder::__cordl_internal_get_inputPressStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPressStates;
}
constexpr void GlobalNamespace::PressInOrder::__cordl_internal_set_inputPressStates(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputPressStates = value;
}
inline void GlobalNamespace::PressInOrder::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PressInOrder::OnInput(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  trackedPeckState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"OnInput", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, trackedPeckState);
}
inline void GlobalNamespace::PressInOrder::SetRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"SetRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PressInOrder::SetActive(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"SetActive", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PressInOrder::SetOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"SetOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PressInOrder::HidePanelChange(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"HidePanelChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PressInOrder::RefreshIndication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {"RefreshIndication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PressInOrder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PressInOrder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PressInOrder* GlobalNamespace::PressInOrder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PressInOrder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PressInOrder::PressInOrder()   {
}
