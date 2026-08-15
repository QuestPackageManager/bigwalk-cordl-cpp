#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchJoystick.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_impl.hpp"
#include "Rewired/Utils/UI/zzzz__PositionType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/ComponentControls/zzzz__TouchJoystick_def.hpp"
#include "GlobalNamespace/zzzz__DqFEdekqxKkWYIisdJDTEhuknscCc_def.hpp"
#include "GlobalNamespace/zzzz__QbRVyGVboNvuPJltmYjDksZXeDGJA_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForBoolean_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForFloat_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchJoystick_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchRegion_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis2D_def.hpp"
#include "Rewired/Utils/UI/zzzz__PositionType_def.hpp"
#include "Rewired/zzzz__Axis2DCalibration_def.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection::TouchJoystick_AxisDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection::TouchJoystick_AxisDirection()   {
}
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection  Rewired::ComponentControls::TouchJoystick_AxisDirection::Both{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection  Rewired::ComponentControls::TouchJoystick_AxisDirection::Horizontal{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection  Rewired::ComponentControls::TouchJoystick_AxisDirection::Vertical{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode::TouchJoystick_JoystickMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode::TouchJoystick_JoystickMode()   {
}
constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode  Rewired::ComponentControls::TouchJoystick_JoystickMode::Analog{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode  Rewired::ComponentControls::TouchJoystick_JoystickMode::Digital{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections::TouchJoystick_SnapDirections(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections::TouchJoystick_SnapDirections()   {
}
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections  Rewired::ComponentControls::TouchJoystick_SnapDirections::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections  Rewired::ComponentControls::TouchJoystick_SnapDirections::Four{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections  Rewired::ComponentControls::TouchJoystick_SnapDirections::Eight{static_cast<int32_t>(0x8)};
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections  Rewired::ComponentControls::TouchJoystick_SnapDirections::Sixteen{static_cast<int32_t>(0x10)};
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections  Rewired::ComponentControls::TouchJoystick_SnapDirections::ThirtyTwo{static_cast<int32_t>(0x20)};
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections  Rewired::ComponentControls::TouchJoystick_SnapDirections::SixtyFour{static_cast<int32_t>(0x40)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl()   {
}
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl::TowardTouch{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl::TowardHome{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB()   {
}
constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB::Local{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB::TouchRegion{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds::TouchJoystick_StickBounds(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds::TouchJoystick_StickBounds()   {
}
constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds  Rewired::ComponentControls::TouchJoystick_StickBounds::Circle{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds  Rewired::ComponentControls::TouchJoystick_StickBounds::Square{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler::*)()>(&::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler* Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler::TouchJoystick_ValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler::*)()>(&::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler* Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler::TouchJoystick_StickPositionChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_TapEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_TapEventHandler::*)()>(&::Rewired::ComponentControls::TouchJoystick_TapEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_TapEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_TapEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_TapEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick_TapEventHandler* Rewired::ComponentControls::TouchJoystick_TapEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_TapEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_TapEventHandler::TouchJoystick_TapEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler::*)()>(&::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler* Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler::TouchJoystick_TouchStartedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler::*)()>(&::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler* Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler::TouchJoystick_TouchEndedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler.OnValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler::OnValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_IValueChangedHandler::OnValueChanged(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler.OnStickPositionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler::OnStickPositionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler::OnStickPositionChanged(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::*)()>(&::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe.UpBqCTwUxYmZYOThAkVStUKRfPBd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::*)(::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*, ::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::UpBqCTwUxYmZYOThAkVStUKRfPBd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f39e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(),
                        {"UpBqCTwUxYmZYOThAkVStUKRfPBd", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe.wAEOxaFJxYWKWBBAfitUyqogeiIiA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::*)(::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*, ::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::wAEOxaFJxYWKWBBAfitUyqogeiIiA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(),
                        {"wAEOxaFJxYWKWBBAfitUyqogeiIiA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::setStaticF___9(::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*  value)  {
::cordl_internals::setStaticField<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*, "<>9", ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(std::forward<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(value));
}
inline ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe* Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*, "<>9", ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>();
}
inline void Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::setStaticF___9__277_0(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*, "<>9__277_0", ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(std::forward<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*>(value));
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::getStaticF___9__277_0()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*, "<>9__277_0", ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>();
}
inline void Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::setStaticF___9__280_0(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*, "<>9__280_0", ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(std::forward<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*>(value));
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::getStaticF___9__280_0()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*, "<>9__280_0", ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>();
}
inline void Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::UpBqCTwUxYmZYOThAkVStUKRfPBd(::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(),
                        {"UpBqCTwUxYmZYOThAkVStUKRfPBd", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::wAEOxaFJxYWKWBBAfitUyqogeiIiA(::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>(),
                        {"wAEOxaFJxYWKWBBAfitUyqogeiIiA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe* Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::*)(int32_t)>(&::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::*)()>(&::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x3e50;
  constexpr static std::size_t addrs = 0x1810edc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::*)()>(&::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1819009b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::*)()>(&::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::*)()>(&::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::*)()>(&::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_HVVaMvtVAFwNtyejpGPStYGMTJub()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HVVaMvtVAFwNtyejpGPStYGMTJub;
}
constexpr int32_t const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_HVVaMvtVAFwNtyejpGPStYGMTJub() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HVVaMvtVAFwNtyejpGPStYGMTJub;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_HVVaMvtVAFwNtyejpGPStYGMTJub(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HVVaMvtVAFwNtyejpGPStYGMTJub = value;
}
constexpr ::System::Object*& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_NyLjqoMaoIBTrqgxNePFgDiCLCFeA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NyLjqoMaoIBTrqgxNePFgDiCLCFeA;
}
constexpr ::System::Object* const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_NyLjqoMaoIBTrqgxNePFgDiCLCFeA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NyLjqoMaoIBTrqgxNePFgDiCLCFeA;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_NyLjqoMaoIBTrqgxNePFgDiCLCFeA(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NyLjqoMaoIBTrqgxNePFgDiCLCFeA = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_kwCAAqivUqSrAqljZkaVelojtdkYA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kwCAAqivUqSrAqljZkaVelojtdkYA;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_kwCAAqivUqSrAqljZkaVelojtdkYA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kwCAAqivUqSrAqljZkaVelojtdkYA;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_kwCAAqivUqSrAqljZkaVelojtdkYA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kwCAAqivUqSrAqljZkaVelojtdkYA = value;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchJoystick>& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_UtppBsHTsqadpFePtAnerTMeNumD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UtppBsHTsqadpFePtAnerTMeNumD;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchJoystick> const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_UtppBsHTsqadpFePtAnerTMeNumD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UtppBsHTsqadpFePtAnerTMeNumD;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_UtppBsHTsqadpFePtAnerTMeNumD(::UnityW<::Rewired::ComponentControls::TouchJoystick>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UtppBsHTsqadpFePtAnerTMeNumD = value;
}
constexpr ::Rewired::Utils::UI::PositionType& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_PyrPWAjATHdgYMXWfOIsYjamMNQo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PyrPWAjATHdgYMXWfOIsYjamMNQo;
}
constexpr ::Rewired::Utils::UI::PositionType const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_PyrPWAjATHdgYMXWfOIsYjamMNQo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PyrPWAjATHdgYMXWfOIsYjamMNQo;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_PyrPWAjATHdgYMXWfOIsYjamMNQo(::Rewired::Utils::UI::PositionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PyrPWAjATHdgYMXWfOIsYjamMNQo = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_dELnUJYiSEPqnPyOkQvRoodwljsH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dELnUJYiSEPqnPyOkQvRoodwljsH;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_dELnUJYiSEPqnPyOkQvRoodwljsH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dELnUJYiSEPqnPyOkQvRoodwljsH;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_dELnUJYiSEPqnPyOkQvRoodwljsH(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dELnUJYiSEPqnPyOkQvRoodwljsH = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_jYlFnDIBHGIPRfCGRIwvarqWREoM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jYlFnDIBHGIPRfCGRIwvarqWREoM;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_jYlFnDIBHGIPRfCGRIwvarqWREoM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jYlFnDIBHGIPRfCGRIwvarqWREoM;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_jYlFnDIBHGIPRfCGRIwvarqWREoM(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jYlFnDIBHGIPRfCGRIwvarqWREoM = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_JWsnzlieCKbmCCcZWwDDsxTpXXWD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JWsnzlieCKbmCCcZWwDDsxTpXXWD;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_JWsnzlieCKbmCCcZWwDDsxTpXXWD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JWsnzlieCKbmCCcZWwDDsxTpXXWD;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_JWsnzlieCKbmCCcZWwDDsxTpXXWD(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JWsnzlieCKbmCCcZWwDDsxTpXXWD = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_QFDahDbnnQJgaQSGwmNMdhbeEUtOB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QFDahDbnnQJgaQSGwmNMdhbeEUtOB;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_QFDahDbnnQJgaQSGwmNMdhbeEUtOB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QFDahDbnnQJgaQSGwmNMdhbeEUtOB;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_QFDahDbnnQJgaQSGwmNMdhbeEUtOB(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QFDahDbnnQJgaQSGwmNMdhbeEUtOB = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_mQtvrDLbFFfsNjbhwOqfEDPAKZznB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mQtvrDLbFFfsNjbhwOqfEDPAKZznB;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_mQtvrDLbFFfsNjbhwOqfEDPAKZznB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mQtvrDLbFFfsNjbhwOqfEDPAKZznB;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_mQtvrDLbFFfsNjbhwOqfEDPAKZznB(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mQtvrDLbFFfsNjbhwOqfEDPAKZznB = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_aQsCetgBUGiSsdJQFDQHTMveKFGRb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aQsCetgBUGiSsdJQFDQHTMveKFGRb;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_get_aQsCetgBUGiSsdJQFDQHTMveKFGRb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aQsCetgBUGiSsdJQFDQHTMveKFGRb;
}
constexpr void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::__cordl_internal_set_aQsCetgBUGiSsdJQFDQHTMveKFGRb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aQsCetgBUGiSsdJQFDQHTMveKFGRb = value;
}
inline void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA* Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_horizontalAxisCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_horizontalAxisCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_horizontalAxisCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_verticalAxisCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_verticalAxisCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_verticalAxisCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_tapCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_tapCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_tapCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_stickTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_stickTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_stickTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_stickTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::RectTransform*)>(&::Rewired::ComponentControls::TouchJoystick::set_stickTransform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818edfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_stickTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_joystickMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchJoystick_JoystickMode (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_joystickMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_joystickMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_joystickMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_JoystickMode)>(&::Rewired::ComponentControls::TouchJoystick::set_joystickMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_joystickMode", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_JoystickMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_digitalModeDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_digitalModeDeadZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_digitalModeDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_digitalModeDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(float_t)>(&::Rewired::ComponentControls::TouchJoystick::set_digitalModeDeadZone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818edc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_digitalModeDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_stickRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_stickRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_stickRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_stickRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(float_t)>(&::Rewired::ComponentControls::TouchJoystick::set_stickRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818edf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_stickRange", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_scaleStickRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_scaleStickRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_scaleStickRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_scaleStickRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_scaleStickRange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e48d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_scaleStickRange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.HmUTTEddObvYFXrgScprWqqtOWXA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchJoystick_StickBounds (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::HmUTTEddObvYFXrgScprWqqtOWXA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e96f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"HmUTTEddObvYFXrgScprWqqtOWXA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.fdropTfsfgTuKcClWuvmfhuXtRPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_StickBounds)>(&::Rewired::ComponentControls::TouchJoystick::fdropTfsfgTuKcClWuvmfhuXtRPI)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ebe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"fdropTfsfgTuKcClWuvmfhuXtRPI", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_StickBounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_axesToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchJoystick_AxisDirection (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_axesToUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_axesToUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_axesToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_AxisDirection)>(&::Rewired::ComponentControls::TouchJoystick::set_axesToUse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818edc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_axesToUse", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_AxisDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_snapDirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchJoystick_SnapDirections (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_snapDirections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_snapDirections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_snapDirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_SnapDirections)>(&::Rewired::ComponentControls::TouchJoystick::set_snapDirections)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_snapDirections", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_SnapDirections>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_snapStickToTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_snapStickToTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_snapStickToTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_snapStickToTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_snapStickToTouch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_snapStickToTouch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_centerStickOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_centerStickOnRelease)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_centerStickOnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_centerStickOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_centerStickOnRelease)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_centerStickOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_activateOnSwipeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_activateOnSwipeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_activateOnSwipeIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_activateOnSwipeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_activateOnSwipeIn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_activateOnSwipeIn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_stayActiveOnSwipeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_stayActiveOnSwipeOut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ec060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_stayActiveOnSwipeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_stayActiveOnSwipeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_stayActiveOnSwipeOut)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_stayActiveOnSwipeOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_allowTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_allowTap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_allowTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_allowTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_allowTap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_allowTap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_tapTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_tapTimeout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_tapTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_tapTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(float_t)>(&::Rewired::ComponentControls::TouchJoystick::set_tapTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ee050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_tapTimeout", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_tapDistanceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_tapDistanceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_tapDistanceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_tapDistanceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(int32_t)>(&::Rewired::ComponentControls::TouchJoystick::set_tapDistanceLimit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ee000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_tapDistanceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_touchRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::ComponentControls::TouchRegion> (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_touchRegion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_touchRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_touchRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchRegion*)>(&::Rewired::ComponentControls::TouchJoystick::set_touchRegion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818ee0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_touchRegion", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_useTouchRegionOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_useTouchRegionOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_useTouchRegionOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_useTouchRegionOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_useTouchRegionOnly)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ee100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_useTouchRegionOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_moveToTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_moveToTouchPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_moveToTouchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_moveToTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_moveToTouchPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_moveToTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_returnOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_returnOnRelease)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_returnOnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_returnOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_returnOnRelease)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ede20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_returnOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_followTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_followTouchPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_followTouchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_followTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_followTouchPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_followTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_animateOnMoveToTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_animateOnMoveToTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_animateOnMoveToTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_animateOnMoveToTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_animateOnMoveToTouch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_animateOnMoveToTouch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_moveToTouchSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_moveToTouchSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_moveToTouchSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_moveToTouchSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(float_t)>(&::Rewired::ComponentControls::TouchJoystick::set_moveToTouchSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818eddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_moveToTouchSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_animateOnReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_animateOnReturn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_animateOnReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_animateOnReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_animateOnReturn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818edbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_animateOnReturn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_returnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_returnSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_returnSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_returnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(float_t)>(&::Rewired::ComponentControls::TouchJoystick::set_returnSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818ede50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_returnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_manageRaycasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_manageRaycasting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_manageRaycasting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_manageRaycasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::set_manageRaycasting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818edd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_manageRaycasting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_horizontalAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_horizontalAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ebfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_horizontalAxisCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_verticalAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_verticalAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ec0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_verticalAxisCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_deadZoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis2DCalibration* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_deadZoneType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818ebf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_deadZoneType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_axis2DCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis2DCalibration* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_axis2DCalibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818ebf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_axis2DCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_pointerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ec020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_pointerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.set_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(int32_t)>(&::Rewired::ComponentControls::TouchJoystick::set_pointerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ede10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_pointerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.get_hasPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::get_hasPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_hasPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.lqEZBZrhjGaFlaMLfWzwHXJIQOlY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::lqEZBZrhjGaFlaMLfWzwHXJIQOlY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818ece70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"lqEZBZrhjGaFlaMLfWzwHXJIQOlY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.eDnATMezupCRiGrnftuwDMkbfJeSc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis2D* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::eDnATMezupCRiGrnftuwDMkbfJeSc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"eDnATMezupCRiGrnftuwDMkbfJeSc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.psbejzeGNotnOqVuXsvVUjTDvdUb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::psbejzeGNotnOqVuXsvVUjTDvdUb)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ed7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"psbejzeGNotnOqVuXsvVUjTDvdUb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.qFGOjQiZUaIindbZzkoFeGpbPbKQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::qFGOjQiZUaIindbZzkoFeGpbPbKQ)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ed860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"qFGOjQiZUaIindbZzkoFeGpbPbKQ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.vhTloSfAJaGVFVBjYMKRyBmTKzZr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::vhTloSfAJaGVFVBjYMKRyBmTKzZr)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ee8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"vhTloSfAJaGVFVBjYMKRyBmTKzZr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.RVDgKoXCQYzloAXxNVsckVcjMJEI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::RVDgKoXCQYzloAXxNVsckVcjMJEI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ea7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"RVDgKoXCQYzloAXxNVsckVcjMJEI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.tnDtUpZiHsfpSvWWKCdyEMHenlAb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::tnDtUpZiHsfpSvWWKCdyEMHenlAb)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1818ee1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"tnDtUpZiHsfpSvWWKCdyEMHenlAb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.add_ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::Rewired::ComponentControls::TouchJoystick::add_ValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ebae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.remove_ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::Rewired::ComponentControls::TouchJoystick::remove_ValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818eda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.add_StickPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::Rewired::ComponentControls::TouchJoystick::add_StickPositionChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818eba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_StickPositionChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.remove_StickPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::Rewired::ComponentControls::TouchJoystick::remove_StickPositionChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ed9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_StickPositionChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.add_TouchDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchJoystick::add_TouchDownEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818eba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_TouchDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.remove_TouchDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchJoystick::remove_TouchDownEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818eda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_TouchDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.add_TouchUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchJoystick::add_TouchUpEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ebab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_TouchUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.remove_TouchUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchJoystick::remove_TouchUpEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818eda30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_TouchUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.add_TapEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchJoystick::add_TapEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818eba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.remove_TapEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchJoystick::remove_TapEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ed9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1818eb790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::GetValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e95d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"GetValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.GetRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::GetRawValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e9590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"GetRawValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.SetRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick::SetRawValue)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1818eab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"SetRawValue", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.SetDefaultPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::SetDefaultPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818eaad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"SetDefaultPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.TpmCedgzQBCJthskUeDBXNrQnMRI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick::TpmCedgzQBCJthskUeDBXNrQnMRI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818eae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"TpmCedgzQBCJthskUeDBXNrQnMRI", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.ReturnToDefaultPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(bool)>(&::Rewired::ComponentControls::TouchJoystick::ReturnToDefaultPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ea840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ReturnToDefaultPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.ReturnToDefaultPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::ReturnToDefaultPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818ea8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ReturnToDefaultPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818e8b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ea0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818ea050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::OnValidate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818ea0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.KzFLBIHNWVwCEtAerTSVrOvpIWED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::KzFLBIHNWVwCEtAerTSVrOvpIWED)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818e9a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.DUJJznEzOmPNPDBJJbOSHLWrWbmiA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::DUJJznEzOmPNPDBJJbOSHLWrWbmiA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e9080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.lzaLXdaFMpKNkzDnHgPAIuGVeAHv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::lzaLXdaFMpKNkzDnHgPAIuGVeAHv)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1818ece90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.dsiBMupFxlfdDxxnVPAkDqtVacNAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::dsiBMupFxlfdDxxnVPAkDqtVacNAA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ebd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.pOwaYPzEALfOXHMkgtNCUDGVbazH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::pOwaYPzEALfOXHMkgtNCUDGVbazH)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ed3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.FDDZodvOxBrQUJFeTMPtCmJmcteL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::FDDZodvOxBrQUJFeTMPtCmJmcteL)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e9550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.NunEULiJULeVBEPlNWeZWopSqBFIA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::NunEULiJULeVBEPlNWeZWopSqBFIA)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e9f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.nkyfjLmszqxZCQFPikpkDaRyeFNC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::nkyfjLmszqxZCQFPikpkDaRyeFNC)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1818ed060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.ClearValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::ClearValue)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1818e8ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.uDMEZSeNIJbqXUqxSBRbcjBxrfus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::uDMEZSeNIJbqXUqxSBRbcjBxrfus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818ee870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.RkxQtTTDFwyeizkRQwyVCYYwHTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchJoystick::RkxQtTTDFwyeizkRQwyVCYYwHTo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818ea910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.GfxKrWMovyqeySKQCZnqEUnZPFww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::GfxKrWMovyqeySKQCZnqEUnZPFww)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e9610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"GfxKrWMovyqeySKQCZnqEUnZPFww", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.wbWiphUAApvTAEHUQORuqnWveFrD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::wbWiphUAApvTAEHUQORuqnWveFrD)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818eeb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"wbWiphUAApvTAEHUQORuqnWveFrD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.IfpQhRfdnUMrKAGXcCKZXtnTNANr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::IfpQhRfdnUMrKAGXcCKZXtnTNANr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e9700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"IfpQhRfdnUMrKAGXcCKZXtnTNANr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.gocGnBjlwdMTsQNGHQSIJTwRCJhKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchRegion*)>(&::Rewired::ComponentControls::TouchJoystick::gocGnBjlwdMTsQNGHQSIJTwRCJhKA)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1818ec120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"gocGnBjlwdMTsQNGHQSIJTwRCJhKA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.PmyXRNPdKxDWeVHYdhijDPNWbPQgA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchRegion*)>(&::Rewired::ComponentControls::TouchJoystick::PmyXRNPdKxDWeVHYdhijDPNWbPQgA)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818ea120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"PmyXRNPdKxDWeVHYdhijDPNWbPQgA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.tDRVkyXEpcpbmhuEvJpaRdPwAxOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::tDRVkyXEpcpbmhuEvJpaRdPwAxOr)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ee130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"tDRVkyXEpcpbmhuEvJpaRdPwAxOr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.ipnzsmMdRLwsYqbXSaBaLIDzvIko
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Vector2, bool, float_t, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl)>(&::Rewired::ComponentControls::TouchJoystick::ipnzsmMdRLwsYqbXSaBaLIDzvIko)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1818ec2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ipnzsmMdRLwsYqbXSaBaLIDzvIko", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.VwcBAgQDZdRNtDDzHDnUNgmckUlp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType, bool, float_t, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl)>(&::Rewired::ComponentControls::TouchJoystick::VwcBAgQDZdRNtDDzHDnUNgmckUlp)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1818eb1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"VwcBAgQDZdRNtDDzHDnUNgmckUlp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.LIIZgolMbnKGJNPZveQjPbiUgASt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType, float_t, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl)>(&::Rewired::ComponentControls::TouchJoystick::LIIZgolMbnKGJNPZveQjPbiUgASt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818e9b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"LIIZgolMbnKGJNPZveQjPbiUgASt", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.RzTIBHhIkfOdEInzrVQiIbEpxIHw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl, ::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType)>(&::Rewired::ComponentControls::TouchJoystick::RzTIBHhIkfOdEInzrVQiIbEpxIHw)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818ea9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"RzTIBHhIkfOdEInzrVQiIbEpxIHw", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.flzFDIBilHplowalVdVWqITFAbdYA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl)>(&::Rewired::ComponentControls::TouchJoystick::flzFDIBilHplowalVdVWqITFAbdYA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818ebe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"flzFDIBilHplowalVdVWqITFAbdYA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.butMBaunfHkGCpdKEzCPMHyNRyuu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl)>(&::Rewired::ComponentControls::TouchJoystick::butMBaunfHkGCpdKEzCPMHyNRyuu)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818ebb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"butMBaunfHkGCpdKEzCPMHyNRyuu", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.rkvlxWjAScQCQbaBPdkgzHevIesv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::rkvlxWjAScQCQbaBPdkgzHevIesv)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818eda90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"rkvlxWjAScQCQbaBPdkgzHevIesv", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.dEnBOxJiYrtklEiVxClZOGZigKmM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(int32_t, ::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType)>(&::Rewired::ComponentControls::TouchJoystick::dEnBOxJiYrtklEiVxClZOGZigKmM)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818ebc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"dEnBOxJiYrtklEiVxClZOGZigKmM", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.EqeTihVBstfpJdPUZrBsmahUVlVMA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::EqeTihVBstfpJdPUZrBsmahUVlVMA)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1818e9360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"EqeTihVBstfpJdPUZrBsmahUVlVMA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.LRpluAZMAdaCDIJHgKMhlycGyHceA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::LRpluAZMAdaCDIJHgKMhlycGyHceA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e9c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"LRpluAZMAdaCDIJHgKMhlycGyHceA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.lXMCiHPRWYAljHDvkXKRsMvpBcLwA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ComponentControls::TouchJoystick::lXMCiHPRWYAljHDvkXKRsMvpBcLwA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818ecc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"lXMCiHPRWYAljHDvkXKRsMvpBcLwA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.VmUoLUIkEsGrzMFobhATCWKTkFPB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::VmUoLUIkEsGrzMFobhATCWKTkFPB)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818eb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"VmUoLUIkEsGrzMFobhATCWKTkFPB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.blsHMoQbVkFnnQCikqQuLENCSOfH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::blsHMoQbVkFnnQCikqQuLENCSOfH)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818ebb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"blsHMoQbVkFnnQCikqQuLENCSOfH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.sPxPOzEgwJFjYbEByXyaPZFElhevA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchJoystick::*)(int32_t)>(&::Rewired::ComponentControls::TouchJoystick::sPxPOzEgwJFjYbEByXyaPZFElhevA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818edaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"sPxPOzEgwJFjYbEByXyaPZFElhevA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.UIsEZHBSCqWkBnrKijhNchYFhhpMc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchJoystick::*)(int32_t, ::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchJoystick::UIsEZHBSCqWkBnrKijhNchYFhhpMc)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1818eae80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"UIsEZHBSCqWkBnrKijhNchYFhhpMc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.DhLIAqkRhhbwXhGqecCnsmjXEkadA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchJoystick::*)(int32_t, ::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchJoystick::DhLIAqkRhhbwXhGqecCnsmjXEkadA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"DhLIAqkRhhbwXhGqecCnsmjXEkadA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.QpbePnTvsZNydjvpaQiBdBzHNjkE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchJoystick::*)(int32_t)>(&::Rewired::ComponentControls::TouchJoystick::QpbePnTvsZNydjvpaQiBdBzHNjkE)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818ea470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"QpbePnTvsZNydjvpaQiBdBzHNjkE", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.eMZgghmayRUaQdKClFwivkHuFjzl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::eMZgghmayRUaQdKClFwivkHuFjzl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818ebda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"eMZgghmayRUaQdKClFwivkHuFjzl", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.wHPEazPzaibbzlTnmGNWDyFXXzfA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::wHPEazPzaibbzlTnmGNWDyFXXzfA)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818ee9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"wHPEazPzaibbzlTnmGNWDyFXXzfA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.MuASHFByHfjlrYFXXqYlOxbLSWlS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchJoystick::*)(int32_t)>(&::Rewired::ComponentControls::TouchJoystick::MuASHFByHfjlrYFXXqYlOxbLSWlS)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818e9cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"MuASHFByHfjlrYFXXqYlOxbLSWlS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.EXfJpsCERvxwMxupozHxGeUCrazl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::EXfJpsCERvxwMxupozHxGeUCrazl)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818e91b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"EXfJpsCERvxwMxupozHxGeUCrazl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.uBoXEsxpsUESsdXExZlSiJgSJiih
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::Rewired::ComponentControls::TouchJoystick_AxisDirection)>(&::Rewired::ComponentControls::TouchJoystick::uBoXEsxpsUESsdXExZlSiJgSJiih)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1818ee620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"uBoXEsxpsUESsdXExZlSiJgSJiih", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_AxisDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.zfgMJjVzYKMFanTwrQdGwnoJGVCI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::zfgMJjVzYKMFanTwrQdGwnoJGVCI)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818eec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"zfgMJjVzYKMFanTwrQdGwnoJGVCI", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.QfHFdSeiRaKlgIfNwdaQjKEchUnHc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::QfHFdSeiRaKlgIfNwdaQjKEchUnHc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ea2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"QfHFdSeiRaKlgIfNwdaQjKEchUnHc", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.lPSjTJKCDKmIkqbetHnEExrtbrWU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::lPSjTJKCDKmIkqbetHnEExrtbrWU)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1818ec9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"lPSjTJKCDKmIkqbetHnEExrtbrWU", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.CsJWJzxgzPwawrktXenRsaYFuRtj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::CsJWJzxgzPwawrktXenRsaYFuRtj)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818e8f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"CsJWJzxgzPwawrktXenRsaYFuRtj", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.ZotBvjUzWWBTQhpzhStPksSAqmeG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::ZotBvjUzWWBTQhpzhStPksSAqmeG)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818eb6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ZotBvjUzWWBTQhpzhStPksSAqmeG", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.jsyFhRHrWcamsRuoLvNjmGQPTwQS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::jsyFhRHrWcamsRuoLvNjmGQPTwQS)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1818ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"jsyFhRHrWcamsRuoLvNjmGQPTwQS", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.vtAesEHPGNcqdqRfFPNnhNFzWcci
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::vtAesEHPGNcqdqRfFPNnhNFzWcci)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818eb6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"vtAesEHPGNcqdqRfFPNnhNFzWcci", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.RNEiiGkTVenLfNnVDYAUoJeEcBFDA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(int32_t, ::UnityEngine::Vector2, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB)>(&::Rewired::ComponentControls::TouchJoystick::RNEiiGkTVenLfNnVDYAUoJeEcBFDA)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1818ea590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"RNEiiGkTVenLfNnVDYAUoJeEcBFDA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.llQDQAiVEkXANzeOdxkKumcuozWK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)()>(&::Rewired::ComponentControls::TouchJoystick::llQDQAiVEkXANzeOdxkKumcuozWK)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818ecd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"llQDQAiVEkXANzeOdxkKumcuozWK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.oFsAoXAGkBrgaVoZlAngYdDPKKbHb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::oFsAoXAGkBrgaVoZlAngYdDPKKbHb)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818ed320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.JKObouIgFGzuZJcGYPiETuKuyXTbA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::JKObouIgFGzuZJcGYPiETuKuyXTbA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.txgaLaLaLWMgvEKJTevECZBudTkK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::txgaLaLaLWMgvEKJTevECZBudTkK)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818ee530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.XCEYSalDmTqsEkjolTYVVPFGITKB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::XCEYSalDmTqsEkjolTYVVPFGITKB)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818eb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.VwZqWPBoEdrhUycSXftWYijMMeSN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::VwZqWPBoEdrhUycSXftWYijMMeSN)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e98e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.TIBJLUMjLlBBZxQwaKwyLwuKJInw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::TIBJLUMjLlBBZxQwaKwyLwuKJInw)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818eada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.JMVcMPcagZojYMzjnYdZXkFdjkTB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::JMVcMPcagZojYMzjnYdZXkFdjkTB)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e98e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.qLLdlOBgAQHTArUzRjZzrASRDaVcb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::qLLdlOBgAQHTArUzRjZzrASRDaVcb)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818ed8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"qLLdlOBgAQHTArUzRjZzrASRDaVcb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.KmncMOdcGDRyHfjjBPVQYRdojcfPA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::KmncMOdcGDRyHfjjBPVQYRdojcfPA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e99b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"KmncMOdcGDRyHfjjBPVQYRdojcfPA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.QmSGJJCNmNzRKOZKdsOecWZSOCaCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::QmSGJJCNmNzRKOZKdsOecWZSOCaCA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818ea390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"QmSGJJCNmNzRKOZKdsOecWZSOCaCA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.NVzVaKJxUSDICvjWHpvpiRzLbmYi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::NVzVaKJxUSDICvjWHpvpiRzLbmYi)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"NVzVaKJxUSDICvjWHpvpiRzLbmYi", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.CKaCdeZpXsDlfGYCNfKpjpsKpWkFb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::CKaCdeZpXsDlfGYCNfKpjpsKpWkFb)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"CKaCdeZpXsDlfGYCNfKpjpsKpWkFb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.JJiFvxbpySFwSZhSseXoeBxJZgGJB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::JJiFvxbpySFwSZhSseXoeBxJZgGJB)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e9740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"JJiFvxbpySFwSZhSseXoeBxJZgGJB", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.VQGbbEotQPadjrALObzVDMQpvodbA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchJoystick::VQGbbEotQPadjrALObzVDMQpvodbA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"VQGbbEotQPadjrALObzVDMQpvodbA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.pTVORZYoFZOgrlUulNIvAgwUyysp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchJoystick::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchJoystick::pTVORZYoFZOgrlUulNIvAgwUyysp)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1818ed460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"pTVORZYoFZOgrlUulNIvAgwUyysp", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.wEfQoOOIgCZpgdCOFBpoPkhQrUWs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* (*)()>(&::Rewired::ComponentControls::TouchJoystick::wEfQoOOIgCZpgdCOFBpoPkhQrUWs)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818ee8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"wEfQoOOIgCZpgdCOFBpoPkhQrUWs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchJoystick.yhitIOqBficQuSzNnowYHoPdQMvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* (*)()>(&::Rewired::ComponentControls::TouchJoystick::yhitIOqBficQuSzNnowYHoPdQMvg)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818eeb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"yhitIOqBficQuSzNnowYHoPdQMvg", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__horizontalAxisCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalAxisCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__horizontalAxisCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalAxisCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__horizontalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalAxisCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__verticalAxisCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalAxisCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__verticalAxisCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalAxisCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__verticalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalAxisCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__tapCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__tapCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__tapCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapCustomControllerElement = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stickTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stickTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickTransform;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__stickTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stickTransform = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__joystickMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joystickMode;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__joystickMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joystickMode;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__joystickMode(::Rewired::ComponentControls::TouchJoystick_JoystickMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joystickMode = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__digitalModeDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalModeDeadZone;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__digitalModeDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalModeDeadZone;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__digitalModeDeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalModeDeadZone = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stickRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickRange;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stickRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickRange;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__stickRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stickRange = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__scaleStickRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleStickRange;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__scaleStickRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleStickRange;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__scaleStickRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleStickRange = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stickBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickBounds;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stickBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickBounds;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__stickBounds(::Rewired::ComponentControls::TouchJoystick_StickBounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stickBounds = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__axesToUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axesToUse;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__axesToUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axesToUse;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__axesToUse(::Rewired::ComponentControls::TouchJoystick_AxisDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axesToUse = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__snapDirections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapDirections;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__snapDirections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapDirections;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__snapDirections(::Rewired::ComponentControls::TouchJoystick_SnapDirections  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapDirections = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__snapStickToTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapStickToTouch;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__snapStickToTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapStickToTouch;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__snapStickToTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapStickToTouch = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__centerStickOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerStickOnRelease;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__centerStickOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerStickOnRelease;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__centerStickOnRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____centerStickOnRelease = value;
}
constexpr ::Rewired::Internal::StandaloneAxis2D*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr ::Rewired::Internal::StandaloneAxis2D* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__axis2D(::Rewired::Internal::StandaloneAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2D = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__activateOnSwipeIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnSwipeIn;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__activateOnSwipeIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnSwipeIn;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__activateOnSwipeIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateOnSwipeIn = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stayActiveOnSwipeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayActiveOnSwipeOut;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__stayActiveOnSwipeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayActiveOnSwipeOut;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__stayActiveOnSwipeOut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stayActiveOnSwipeOut = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__allowTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowTap;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__allowTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowTap;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__allowTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowTap = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__tapTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapTimeout;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__tapTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapTimeout;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__tapTimeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapTimeout = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__tapDistanceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapDistanceLimit;
}
constexpr int32_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__tapDistanceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapDistanceLimit;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__tapDistanceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapDistanceLimit = value;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__touchRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchRegion;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__touchRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchRegion;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__touchRegion(::UnityW<::Rewired::ComponentControls::TouchRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchRegion = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__useTouchRegionOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTouchRegionOnly;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__useTouchRegionOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTouchRegionOnly;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__useTouchRegionOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTouchRegionOnly = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__moveToTouchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchPosition;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__moveToTouchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__moveToTouchPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveToTouchPosition = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__returnOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnOnRelease;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__returnOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnOnRelease;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__returnOnRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____returnOnRelease = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__followTouchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTouchPosition;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__followTouchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTouchPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__followTouchPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followTouchPosition = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__animateOnMoveToTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnMoveToTouch;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__animateOnMoveToTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnMoveToTouch;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__animateOnMoveToTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animateOnMoveToTouch = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__moveToTouchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchSpeed;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__moveToTouchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchSpeed;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__moveToTouchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveToTouchSpeed = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__animateOnReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnReturn;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__animateOnReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnReturn;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__animateOnReturn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animateOnReturn = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__returnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnSpeed;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__returnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnSpeed;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__returnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____returnSpeed = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__manageRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manageRaycasting;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__manageRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manageRaycasting;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__manageRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manageRaycasting = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__useXAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useXAxis;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__useXAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useXAxis;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__useXAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useXAxis = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__useYAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useYAxis;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__useYAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useYAxis;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__useYAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useYAxis = value;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__hierarchyValueChangedHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hierarchyValueChangedHandlers;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__hierarchyValueChangedHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hierarchyValueChangedHandlers;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__hierarchyValueChangedHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hierarchyValueChangedHandlers = value;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__hierarchyStickPositionChangedHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hierarchyStickPositionChangedHandlers;
}
constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__hierarchyStickPositionChangedHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hierarchyStickPositionChangedHandlers;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__hierarchyStickPositionChangedHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hierarchyStickPositionChangedHandlers = value;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__workingTouchRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingTouchRegion;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__workingTouchRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingTouchRegion;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__workingTouchRegion(::UnityW<::Rewired::ComponentControls::TouchRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workingTouchRegion = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__origAnchoredPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origAnchoredPosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__origAnchoredPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origAnchoredPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__origAnchoredPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origAnchoredPosition = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__origStickAnchoredPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origStickAnchoredPosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__origStickAnchoredPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origStickAnchoredPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__origStickAnchoredPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origStickAnchoredPosition = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastPressAnchoredPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPressAnchoredPosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastPressAnchoredPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPressAnchoredPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__lastPressAnchoredPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPressAnchoredPosition = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__isMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMoving;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__isMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMoving;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__isMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMoving = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__isMovedFromDefaultPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMovedFromDefaultPosition;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__isMovedFromDefaultPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMovedFromDefaultPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__isMovedFromDefaultPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMovedFromDefaultPosition = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__moveDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveDirection;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__moveDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveDirection;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__moveDirection(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveDirection = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__pointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerId;
}
constexpr int32_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__pointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerId;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__pointerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerId = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__realMousePointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realMousePointerId;
}
constexpr int32_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__realMousePointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realMousePointerId;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__realMousePointerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____realMousePointerId = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get_CSVbDncOCvRIzqyDMCNArskcVwED()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CSVbDncOCvRIzqyDMCNArskcVwED;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get_CSVbDncOCvRIzqyDMCNArskcVwED() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CSVbDncOCvRIzqyDMCNArskcVwED;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set_CSVbDncOCvRIzqyDMCNArskcVwED(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CSVbDncOCvRIzqyDMCNArskcVwED = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get_cCnNRaCSlQTwdmFxZsJZyLiptpER()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cCnNRaCSlQTwdmFxZsJZyLiptpER;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get_cCnNRaCSlQTwdmFxZsJZyLiptpER() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cCnNRaCSlQTwdmFxZsJZyLiptpER;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set_cCnNRaCSlQTwdmFxZsJZyLiptpER(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cCnNRaCSlQTwdmFxZsJZyLiptpER = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__pointerDownIsFake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerDownIsFake;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__pointerDownIsFake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerDownIsFake;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__pointerDownIsFake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerDownIsFake = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastPressStartingValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPressStartingValue;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastPressStartingValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPressStartingValue;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__lastPressStartingValue(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPressStartingValue = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastClaimSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClaimSource;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastClaimSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClaimSource;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__lastClaimSource(::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastClaimSource = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__touchStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartTime;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__touchStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartTime;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__touchStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchStartTime = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__touchStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartPosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__touchStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartPosition;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__touchStartPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchStartPosition = value;
}
constexpr ::System::Collections::IEnumerator*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__coroutineMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineMove;
}
constexpr ::System::Collections::IEnumerator* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__coroutineMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineMove;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__coroutineMove(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutineMove = value;
}
constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__imageRaycastHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageRaycastHelper;
}
constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__imageRaycastHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageRaycastHelper;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__imageRaycastHelper(::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imageRaycastHelper = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__calculatedStickRange_lastUpdatedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calculatedStickRange_lastUpdatedFrame;
}
constexpr int32_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__calculatedStickRange_lastUpdatedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calculatedStickRange_lastUpdatedFrame;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__calculatedStickRange_lastUpdatedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calculatedStickRange_lastUpdatedFrame = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastTapFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTapFrame;
}
constexpr int32_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__lastTapFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTapFrame;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__lastTapFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTapFrame = value;
}
constexpr bool& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__isEligibleForTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEligibleForTap;
}
constexpr bool const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__isEligibleForTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEligibleForTap;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__isEligibleForTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEligibleForTap = value;
}
constexpr float_t& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___calculatedStickRange_cachedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____calculatedStickRange_cachedValue;
}
constexpr float_t const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___calculatedStickRange_cachedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____calculatedStickRange_cachedValue;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set___calculatedStickRange_cachedValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____calculatedStickRange_cachedValue = value;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___moveStartedDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____moveStartedDelegate;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___moveStartedDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____moveStartedDelegate;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set___moveStartedDelegate(::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____moveStartedDelegate = value;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___moveEndedDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____moveEndedDelegate;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___moveEndedDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____moveEndedDelegate;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set___moveEndedDelegate(::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____moveEndedDelegate = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValueChanged;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValueChanged;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__onValueChanged(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onValueChanged = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onStickPositionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStickPositionChanged;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onStickPositionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStickPositionChanged;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__onStickPositionChanged(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStickPositionChanged = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onTouchStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTouchStarted;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onTouchStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTouchStarted;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__onTouchStarted(::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTouchStarted = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onTouchEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTouchEnded;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onTouchEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTouchEnded;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__onTouchEnded(::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTouchEnded = value;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_TapEventHandler*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTap;
}
constexpr ::Rewired::ComponentControls::TouchJoystick_TapEventHandler* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get__onTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTap;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set__onTap(::Rewired::ComponentControls::TouchJoystick_TapEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___fakePointerEventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____fakePointerEventData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& Rewired::ComponentControls::TouchJoystick::__cordl_internal_get___fakePointerEventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____fakePointerEventData;
}
constexpr void Rewired::ComponentControls::TouchJoystick::__cordl_internal_set___fakePointerEventData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____fakePointerEventData = value;
}
inline void Rewired::ComponentControls::TouchJoystick::setStaticF___valueChangedHandlerDelegate(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*, "__valueChangedHandlerDelegate", ::Rewired::ComponentControls::TouchJoystick*>(std::forward<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*>(value));
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* Rewired::ComponentControls::TouchJoystick::getStaticF___valueChangedHandlerDelegate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*, "__valueChangedHandlerDelegate", ::Rewired::ComponentControls::TouchJoystick*>();
}
inline void Rewired::ComponentControls::TouchJoystick::setStaticF___stickPositionChangedHandlerDelegate(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*, "__stickPositionChangedHandlerDelegate", ::Rewired::ComponentControls::TouchJoystick*>(std::forward<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*>(value));
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* Rewired::ComponentControls::TouchJoystick::getStaticF___stickPositionChangedHandlerDelegate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*, "__stickPositionChangedHandlerDelegate", ::Rewired::ComponentControls::TouchJoystick*>();
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TouchJoystick::get_horizontalAxisCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_horizontalAxisCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TouchJoystick::get_verticalAxisCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_verticalAxisCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* Rewired::ComponentControls::TouchJoystick::get_tapCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_tapCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> Rewired::ComponentControls::TouchJoystick::get_stickTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_stickTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_stickTransform(::UnityEngine::RectTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_stickTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchJoystick_JoystickMode Rewired::ComponentControls::TouchJoystick::get_joystickMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_joystickMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchJoystick_JoystickMode>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_joystickMode(::Rewired::ComponentControls::TouchJoystick_JoystickMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_joystickMode", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_JoystickMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchJoystick::get_digitalModeDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_digitalModeDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_digitalModeDeadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_digitalModeDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchJoystick::get_stickRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_stickRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_stickRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_stickRange", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_scaleStickRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_scaleStickRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_scaleStickRange(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_scaleStickRange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchJoystick_StickBounds Rewired::ComponentControls::TouchJoystick::HmUTTEddObvYFXrgScprWqqtOWXA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"HmUTTEddObvYFXrgScprWqqtOWXA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchJoystick_StickBounds>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::fdropTfsfgTuKcClWuvmfhuXtRPI(::Rewired::ComponentControls::TouchJoystick_StickBounds  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"fdropTfsfgTuKcClWuvmfhuXtRPI", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_StickBounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ComponentControls::TouchJoystick_AxisDirection Rewired::ComponentControls::TouchJoystick::get_axesToUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_axesToUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchJoystick_AxisDirection>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_axesToUse(::Rewired::ComponentControls::TouchJoystick_AxisDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_axesToUse", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_AxisDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchJoystick_SnapDirections Rewired::ComponentControls::TouchJoystick::get_snapDirections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_snapDirections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchJoystick_SnapDirections>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_snapDirections(::Rewired::ComponentControls::TouchJoystick_SnapDirections  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_snapDirections", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_SnapDirections>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_snapStickToTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_snapStickToTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_snapStickToTouch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_snapStickToTouch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_centerStickOnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_centerStickOnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_centerStickOnRelease(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_centerStickOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_activateOnSwipeIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_activateOnSwipeIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_activateOnSwipeIn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_activateOnSwipeIn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_stayActiveOnSwipeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_stayActiveOnSwipeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_stayActiveOnSwipeOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_stayActiveOnSwipeOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_allowTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_allowTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_allowTap(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_allowTap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchJoystick::get_tapTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_tapTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_tapTimeout(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_tapTimeout", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::TouchJoystick::get_tapDistanceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_tapDistanceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_tapDistanceLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_tapDistanceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Rewired::ComponentControls::TouchRegion> Rewired::ComponentControls::TouchJoystick::get_touchRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_touchRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::ComponentControls::TouchRegion>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_touchRegion(::Rewired::ComponentControls::TouchRegion*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_touchRegion", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_useTouchRegionOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_useTouchRegionOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_useTouchRegionOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_useTouchRegionOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_moveToTouchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_moveToTouchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_moveToTouchPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_moveToTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_returnOnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_returnOnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_returnOnRelease(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_returnOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_followTouchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_followTouchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_followTouchPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_followTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_animateOnMoveToTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_animateOnMoveToTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_animateOnMoveToTouch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_animateOnMoveToTouch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchJoystick::get_moveToTouchSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_moveToTouchSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_moveToTouchSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_moveToTouchSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_animateOnReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_animateOnReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_animateOnReturn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_animateOnReturn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchJoystick::get_returnSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_returnSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_returnSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_returnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_manageRaycasting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_manageRaycasting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_manageRaycasting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_manageRaycasting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisCalibration* Rewired::ComponentControls::TouchJoystick::get_horizontalAxisCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_horizontalAxisCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::ComponentControls::TouchJoystick::get_verticalAxisCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_verticalAxisCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline ::Rewired::Axis2DCalibration* Rewired::ComponentControls::TouchJoystick::get_deadZoneType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_deadZoneType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis2DCalibration*>(this, ___internal_method);
}
inline ::Rewired::Axis2DCalibration* Rewired::ComponentControls::TouchJoystick::get_axis2DCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_axis2DCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis2DCalibration*>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::TouchJoystick::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_pointerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::set_pointerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"set_pointerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchJoystick::get_hasPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"get_hasPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick::lqEZBZrhjGaFlaMLfWzwHXJIQOlY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"lqEZBZrhjGaFlaMLfWzwHXJIQOlY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis2D* Rewired::ComponentControls::TouchJoystick::eDnATMezupCRiGrnftuwDMkbfJeSc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"eDnATMezupCRiGrnftuwDMkbfJeSc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis2D*>(this, ___internal_method);
}
inline ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* Rewired::ComponentControls::TouchJoystick::psbejzeGNotnOqVuXsvVUjTDvdUb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"psbejzeGNotnOqVuXsvVUjTDvdUb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*>(this, ___internal_method);
}
inline ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* Rewired::ComponentControls::TouchJoystick::qFGOjQiZUaIindbZzkoFeGpbPbKQ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"qFGOjQiZUaIindbZzkoFeGpbPbKQ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::TouchJoystick::vhTloSfAJaGVFVBjYMKRyBmTKzZr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"vhTloSfAJaGVFVBjYMKRyBmTKzZr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> Rewired::ComponentControls::TouchJoystick::RVDgKoXCQYzloAXxNVsckVcjMJEI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"RVDgKoXCQYzloAXxNVsckVcjMJEI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline float_t Rewired::ComponentControls::TouchJoystick::tnDtUpZiHsfpSvWWKCdyEMHenlAb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"tnDtUpZiHsfpSvWWKCdyEMHenlAb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::add_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::remove_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::add_StickPositionChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_StickPositionChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::remove_StickPositionChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_StickPositionChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::add_TouchDownEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_TouchDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::remove_TouchDownEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_TouchDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::add_TouchUpEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_TouchUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::remove_TouchUpEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_TouchUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::add_TapEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"add_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::remove_TapEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"remove_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::ComponentControls::TouchJoystick::GetValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"GetValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::ComponentControls::TouchJoystick::GetRawValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"GetRawValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::SetRawValue(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"SetRawValue", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchJoystick::SetDefaultPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"SetDefaultPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::TpmCedgzQBCJthskUeDBXNrQnMRI(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"TpmCedgzQBCJthskUeDBXNrQnMRI", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::ReturnToDefaultPosition(bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ReturnToDefaultPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instant);
}
inline void Rewired::ComponentControls::TouchJoystick::ReturnToDefaultPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ReturnToDefaultPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::KzFLBIHNWVwCEtAerTSVrOvpIWED()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick::DUJJznEzOmPNPDBJJbOSHLWrWbmiA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::lzaLXdaFMpKNkzDnHgPAIuGVeAHv()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::dsiBMupFxlfdDxxnVPAkDqtVacNAA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::pOwaYPzEALfOXHMkgtNCUDGVbazH()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::FDDZodvOxBrQUJFeTMPtCmJmcteL()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::NunEULiJULeVBEPlNWeZWopSqBFIA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::nkyfjLmszqxZCQFPikpkDaRyeFNC()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::ClearValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick::uDMEZSeNIJbqXUqxSBRbcjBxrfus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick::RkxQtTTDFwyeizkRQwyVCYYwHTo(::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::GfxKrWMovyqeySKQCZnqEUnZPFww()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"GfxKrWMovyqeySKQCZnqEUnZPFww", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::wbWiphUAApvTAEHUQORuqnWveFrD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"wbWiphUAApvTAEHUQORuqnWveFrD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick::IfpQhRfdnUMrKAGXcCKZXtnTNANr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"IfpQhRfdnUMrKAGXcCKZXtnTNANr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::gocGnBjlwdMTsQNGHQSIJTwRCJhKA(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"gocGnBjlwdMTsQNGHQSIJTwRCJhKA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::PmyXRNPdKxDWeVHYdhijDPNWbPQgA(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"PmyXRNPdKxDWeVHYdhijDPNWbPQgA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::tDRVkyXEpcpbmhuEvJpaRdPwAxOr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"tDRVkyXEpcpbmhuEvJpaRdPwAxOr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::ipnzsmMdRLwsYqbXSaBaLIDzvIko(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ipnzsmMdRLwsYqbXSaBaLIDzvIko", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ComponentControls::TouchJoystick::VwcBAgQDZdRNtDDzHDnUNgmckUlp(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"VwcBAgQDZdRNtDDzHDnUNgmckUlp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline ::System::Collections::IEnumerator* Rewired::ComponentControls::TouchJoystick::LIIZgolMbnKGJNPZveQjPbiUgASt(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"LIIZgolMbnKGJNPZveQjPbiUgASt", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ComponentControls::TouchJoystick::RzTIBHhIkfOdEInzrVQiIbEpxIHw(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"RzTIBHhIkfOdEInzrVQiIbEpxIHw", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ComponentControls::TouchJoystick::flzFDIBilHplowalVdVWqITFAbdYA(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"flzFDIBilHplowalVdVWqITFAbdYA", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::butMBaunfHkGCpdKEzCPMHyNRyuu(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"butMBaunfHkGCpdKEzCPMHyNRyuu", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::rkvlxWjAScQCQbaBPdkgzHevIesv()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"rkvlxWjAScQCQbaBPdkgzHevIesv", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::dEnBOxJiYrtklEiVxClZOGZigKmM(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"dEnBOxJiYrtklEiVxClZOGZigKmM", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ComponentControls::TouchJoystick::EqeTihVBstfpJdPUZrBsmahUVlVMA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"EqeTihVBstfpJdPUZrBsmahUVlVMA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::LRpluAZMAdaCDIJHgKMhlycGyHceA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"LRpluAZMAdaCDIJHgKMhlycGyHceA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::lXMCiHPRWYAljHDvkXKRsMvpBcLwA(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"lXMCiHPRWYAljHDvkXKRsMvpBcLwA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ComponentControls::TouchJoystick::VmUoLUIkEsGrzMFobhATCWKTkFPB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"VmUoLUIkEsGrzMFobhATCWKTkFPB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::blsHMoQbVkFnnQCikqQuLENCSOfH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"blsHMoQbVkFnnQCikqQuLENCSOfH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchJoystick::sPxPOzEgwJFjYbEByXyaPZFElhevA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"sPxPOzEgwJFjYbEByXyaPZFElhevA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchJoystick::UIsEZHBSCqWkBnrKijhNchYFhhpMc(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"UIsEZHBSCqWkBnrKijhNchYFhhpMc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchJoystick::DhLIAqkRhhbwXhGqecCnsmjXEkadA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"DhLIAqkRhhbwXhGqecCnsmjXEkadA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchJoystick::QpbePnTvsZNydjvpaQiBdBzHNjkE(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"QpbePnTvsZNydjvpaQiBdBzHNjkE", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::eMZgghmayRUaQdKClFwivkHuFjzl(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"eMZgghmayRUaQdKClFwivkHuFjzl", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::wHPEazPzaibbzlTnmGNWDyFXXzfA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"wHPEazPzaibbzlTnmGNWDyFXXzfA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchJoystick::MuASHFByHfjlrYFXXqYlOxbLSWlS(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"MuASHFByHfjlrYFXXqYlOxbLSWlS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::EXfJpsCERvxwMxupozHxGeUCrazl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"EXfJpsCERvxwMxupozHxGeUCrazl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::uBoXEsxpsUESsdXExZlSiJgSJiih(::Rewired::ComponentControls::TouchJoystick_AxisDirection  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"uBoXEsxpsUESsdXExZlSiJgSJiih", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_AxisDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::zfgMJjVzYKMFanTwrQdGwnoJGVCI(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"zfgMJjVzYKMFanTwrQdGwnoJGVCI", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::QfHFdSeiRaKlgIfNwdaQjKEchUnHc(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"QfHFdSeiRaKlgIfNwdaQjKEchUnHc", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::lPSjTJKCDKmIkqbetHnEExrtbrWU(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"lPSjTJKCDKmIkqbetHnEExrtbrWU", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::CsJWJzxgzPwawrktXenRsaYFuRtj(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"CsJWJzxgzPwawrktXenRsaYFuRtj", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::ZotBvjUzWWBTQhpzhStPksSAqmeG(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"ZotBvjUzWWBTQhpzhStPksSAqmeG", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::jsyFhRHrWcamsRuoLvNjmGQPTwQS(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"jsyFhRHrWcamsRuoLvNjmGQPTwQS", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::vtAesEHPGNcqdqRfFPNnhNFzWcci(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"vtAesEHPGNcqdqRfFPNnhNFzWcci", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchJoystick::RNEiiGkTVenLfNnVDYAUoJeEcBFDA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"RNEiiGkTVenLfNnVDYAUoJeEcBFDA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ComponentControls::TouchJoystick::llQDQAiVEkXANzeOdxkKumcuozWK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"llQDQAiVEkXANzeOdxkKumcuozWK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchJoystick::oFsAoXAGkBrgaVoZlAngYdDPKKbHb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::JKObouIgFGzuZJcGYPiETuKuyXTbA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::txgaLaLaLWMgvEKJTevECZBudTkK(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::XCEYSalDmTqsEkjolTYVVPFGITKB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::VwZqWPBoEdrhUycSXftWYijMMeSN(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::TIBJLUMjLlBBZxQwaKwyLwuKJInw(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::JMVcMPcagZojYMzjnYdZXkFdjkTB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::qLLdlOBgAQHTArUzRjZzrASRDaVcb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"qLLdlOBgAQHTArUzRjZzrASRDaVcb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::KmncMOdcGDRyHfjjBPVQYRdojcfPA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"KmncMOdcGDRyHfjjBPVQYRdojcfPA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::QmSGJJCNmNzRKOZKdsOecWZSOCaCA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"QmSGJJCNmNzRKOZKdsOecWZSOCaCA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::NVzVaKJxUSDICvjWHpvpiRzLbmYi(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"NVzVaKJxUSDICvjWHpvpiRzLbmYi", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::CKaCdeZpXsDlfGYCNfKpjpsKpWkFb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"CKaCdeZpXsDlfGYCNfKpjpsKpWkFb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::JJiFvxbpySFwSZhSseXoeBxJZgGJB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"JJiFvxbpySFwSZhSseXoeBxJZgGJB", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::VQGbbEotQPadjrALObzVDMQpvodbA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"VQGbbEotQPadjrALObzVDMQpvodbA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchJoystick::pTVORZYoFZOgrlUulNIvAgwUyysp(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"pTVORZYoFZOgrlUulNIvAgwUyysp", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* Rewired::ComponentControls::TouchJoystick::wEfQoOOIgCZpgdCOFBpoPkhQrUWs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"wEfQoOOIgCZpgdCOFBpoPkhQrUWs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* Rewired::ComponentControls::TouchJoystick::yhitIOqBficQuSzNnowYHoPdQMvg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchJoystick*>(),
                        {"yhitIOqBficQuSzNnowYHoPdQMvg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*>(nullptr, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchJoystick* Rewired::ComponentControls::TouchJoystick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchJoystick*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchJoystick::TouchJoystick()   {
}
