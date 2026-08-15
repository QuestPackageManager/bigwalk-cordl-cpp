#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectMultiplePositionVibration.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectPositionValueSet_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectMultiplePositionVibration_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectPositionValueSet_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration.get_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::get_frequency)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"get_frequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration.set_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::set_frequency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818cd6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"set_frequency", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration.get_amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::get_amplitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818c88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"get_amplitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration.set_amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::*)(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::set_amplitude)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818cd680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"set_amplitude", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration.Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::get_frequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"get_frequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::set_frequency(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"set_frequency", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::get_amplitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"get_amplitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::set_amplitude(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"set_amplitude", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(*this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr  Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::operator ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::i___Rewired__ControllerExtensions__IDualSenseTriggerEffect()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_frequency", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_amplitude", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::DualSenseTriggerEffectMultiplePositionVibration(uint8_t  _frequency, ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  _amplitude) noexcept  {
this->_frequency = _frequency;
this->_amplitude = _amplitude;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration::DualSenseTriggerEffectMultiplePositionVibration()   {
}
