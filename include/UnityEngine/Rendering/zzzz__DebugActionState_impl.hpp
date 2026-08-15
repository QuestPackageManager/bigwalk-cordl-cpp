#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType::DebugActionState_DebugActionKeyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType::DebugActionState_DebugActionKeyType()   {
}
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  UnityEngine::Rendering::DebugActionState_DebugActionKeyType::Button{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  UnityEngine::Rendering::DebugActionState_DebugActionKeyType::Axis{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  UnityEngine::Rendering::DebugActionState_DebugActionKeyType::Key{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.get_runningAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::get_runningAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cbf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_runningAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.set_runningAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(bool)>(&::UnityEngine::Rendering::DebugActionState::set_runningAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_runningAction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.get_actionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::get_actionState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_actionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.set_actionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(float_t)>(&::UnityEngine::Rendering::DebugActionState::set_actionState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_actionState", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(int32_t, float_t)>(&::UnityEngine::Rendering::DebugActionState::Trigger)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fe69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Trigger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.TriggerWithButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::ArrayW<::StringW>, float_t)>(&::UnityEngine::Rendering::DebugActionState::TriggerWithButton)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fe6840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithButton", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.TriggerWithAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::StringW, float_t)>(&::UnityEngine::Rendering::DebugActionState::TriggerWithAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fe67a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithAxis", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.TriggerWithKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::ArrayW<::UnityEngine::KeyCode>, float_t)>(&::UnityEngine::Rendering::DebugActionState::TriggerWithKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fe68f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithKey", {}, {::i2c::type_of<::ArrayW<::UnityEngine::KeyCode>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fe6780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)(::UnityEngine::Rendering::DebugActionDesc*)>(&::UnityEngine::Rendering::DebugActionState::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181fe6a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugActionDesc*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionState::*)()>(&::UnityEngine::Rendering::DebugActionState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fe6c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_Type(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_PressedButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PressedButtons;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_PressedButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PressedButtons;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_PressedButtons(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PressedButtons = value;
}
constexpr ::StringW& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_PressedAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PressedAxis;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_PressedAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PressedAxis;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_PressedAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PressedAxis = value;
}
constexpr ::ArrayW<::UnityEngine::KeyCode>& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_PressedKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PressedKeys;
}
constexpr ::ArrayW<::UnityEngine::KeyCode> const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_PressedKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PressedKeys;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_PressedKeys(::ArrayW<::UnityEngine::KeyCode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PressedKeys = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_TriggerPressedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerPressedUp;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_TriggerPressedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerPressedUp;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerPressedUp = value;
}
constexpr float_t& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Timer;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get_m_Timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Timer;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set_m_Timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Timer = value;
}
constexpr bool& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__runningAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningAction_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__runningAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningAction_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set__runningAction_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningAction_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__actionState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionState_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionState::__cordl_internal_get__actionState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionState_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugActionState::__cordl_internal_set__actionState_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionState_k__BackingField = value;
}
inline bool UnityEngine::Rendering::DebugActionState::get_runningAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_runningAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::set_runningAction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_runningAction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::DebugActionState::get_actionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"get_actionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::set_actionState(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"set_actionState", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugActionState::Trigger(int32_t  triggerCount, float_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Trigger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerCount, state);
}
inline void UnityEngine::Rendering::DebugActionState::TriggerWithButton(::ArrayW<::StringW>  buttons, float_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithButton", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttons, state);
}
inline void UnityEngine::Rendering::DebugActionState::TriggerWithAxis(::StringW  axis, float_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithAxis", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, state);
}
inline void UnityEngine::Rendering::DebugActionState::TriggerWithKey(::ArrayW<::UnityEngine::KeyCode>  keys, float_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"TriggerWithKey", {}, {::i2c::type_of<::ArrayW<::UnityEngine::KeyCode>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, state);
}
inline void UnityEngine::Rendering::DebugActionState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugActionState::Update(::UnityEngine::Rendering::DebugActionDesc*  desc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugActionDesc*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::DebugActionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::DebugActionState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugActionState* UnityEngine::Rendering::DebugActionState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugActionState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionState::DebugActionState()   {
}
