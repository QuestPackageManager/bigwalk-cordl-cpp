#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectVibration.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectVibration_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::get_position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::set_position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818cd540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"set_position", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.get_amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::get_amplitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180438d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"get_amplitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.set_amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::set_amplitude)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818cd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"set_amplitude", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.get_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::get_frequency)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18175fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"get_frequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.set_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::set_frequency)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cdd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"set_frequency", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration.Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::set_position(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"set_position", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::get_amplitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"get_amplitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::set_amplitude(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"set_amplitude", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::get_frequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"get_frequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::set_frequency(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"set_frequency", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(*this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr  Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::operator ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::i___Rewired__ControllerExtensions__IDualSenseTriggerEffect()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_position", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_amplitude", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_frequency", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::DualSenseTriggerEffectVibration(uint8_t  _position, uint8_t  _amplitude, uint8_t  _frequency) noexcept  {
this->_position = _position;
this->_amplitude = _amplitude;
this->_frequency = _frequency;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration::DualSenseTriggerEffectVibration()   {
}
