#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectFeedback.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectFeedback_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::get_position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::set_position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818cd540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"set_position", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback.get_strength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::get_strength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180438d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"get_strength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback.set_strength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::set_strength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818cd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"set_strength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback.Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::set_position(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"set_position", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::get_strength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"get_strength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::set_strength(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"set_strength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(*this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr  Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::operator ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::i___Rewired__ControllerExtensions__IDualSenseTriggerEffect()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_position", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_strength", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::DualSenseTriggerEffectFeedback(uint8_t  _position, uint8_t  _strength) noexcept  {
this->_position = _position;
this->_strength = _strength;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback::DualSenseTriggerEffectFeedback()   {
}
