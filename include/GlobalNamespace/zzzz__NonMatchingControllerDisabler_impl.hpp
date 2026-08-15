#pragma once
// IWYU pragma private; include "GlobalNamespace/NonMatchingControllerDisabler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NonMatchingControllerDisabler_def.hpp"
#include "Rewired/zzzz__ControllerStatusChangedEventArgs_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NonMatchingControllerDisabler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonMatchingControllerDisabler::*)()>(&::GlobalNamespace::NonMatchingControllerDisabler::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18037f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NonMatchingControllerDisabler.EvaluateJoystickType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonMatchingControllerDisabler::*)()>(&::GlobalNamespace::NonMatchingControllerDisabler::EvaluateJoystickType)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18037f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {"EvaluateJoystickType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NonMatchingControllerDisabler.OnControllerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonMatchingControllerDisabler::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::GlobalNamespace::NonMatchingControllerDisabler::OnControllerChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {"OnControllerChanged", {}, {::i2c::type_of<::Rewired::ControllerStatusChangedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NonMatchingControllerDisabler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NonMatchingControllerDisabler::*)()>(&::GlobalNamespace::NonMatchingControllerDisabler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NonMatchingControllerDisabler::__cordl_internal_get_joystickGuidValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickGuidValid;
}
constexpr ::StringW const& GlobalNamespace::NonMatchingControllerDisabler::__cordl_internal_get_joystickGuidValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickGuidValid;
}
constexpr void GlobalNamespace::NonMatchingControllerDisabler::__cordl_internal_set_joystickGuidValid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickGuidValid = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NonMatchingControllerDisabler::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NonMatchingControllerDisabler::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::NonMatchingControllerDisabler::__cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
inline void GlobalNamespace::NonMatchingControllerDisabler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NonMatchingControllerDisabler::EvaluateJoystickType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {"EvaluateJoystickType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NonMatchingControllerDisabler::OnControllerChanged(::Rewired::ControllerStatusChangedEventArgs*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {"OnControllerChanged", {}, {::i2c::type_of<::Rewired::ControllerStatusChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::NonMatchingControllerDisabler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NonMatchingControllerDisabler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NonMatchingControllerDisabler* GlobalNamespace::NonMatchingControllerDisabler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NonMatchingControllerDisabler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NonMatchingControllerDisabler::NonMatchingControllerDisabler()   {
}
