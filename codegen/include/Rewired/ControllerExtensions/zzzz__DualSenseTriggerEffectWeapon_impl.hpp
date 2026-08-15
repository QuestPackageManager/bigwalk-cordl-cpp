#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectWeapon.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectWeapon_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.get_startPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::get_startPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"get_startPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.set_startPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::set_startPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818cdd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"set_startPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.get_endPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::get_endPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180438d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"get_endPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.set_endPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::set_endPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cdd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"set_endPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.get_strength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::get_strength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18175fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"get_strength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.set_strength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::set_strength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"set_strength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon.Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::get_startPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"get_startPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::set_startPosition(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"set_startPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::get_endPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"get_endPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::set_endPosition(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"set_endPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::get_strength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"get_strength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::set_strength(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"set_strength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(*this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr  Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::operator ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::i___Rewired__ControllerExtensions__IDualSenseTriggerEffect()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_startPosition", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_endPosition", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_strength", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::DualSenseTriggerEffectWeapon(uint8_t  _startPosition, uint8_t  _endPosition, uint8_t  _strength) noexcept  {
this->_startPosition = _startPosition;
this->_endPosition = _endPosition;
this->_strength = _strength;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon::DualSenseTriggerEffectWeapon()   {
}
