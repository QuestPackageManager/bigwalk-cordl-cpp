#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectSlopeFeedback.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectSlopeFeedback_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.get_startPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_startPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_startPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.set_startPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_startPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818cd540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_startPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.get_endPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_endPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180438d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_endPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.set_endPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_endPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cdc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_endPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.get_startStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_startStrength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18175fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_startStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.set_startStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_startStrength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cdcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_startStrength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.get_endStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_endStrength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_endStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.set_endStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_endStrength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cdc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_endStrength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback.Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_startPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_startPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_startPosition(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_startPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_endPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_endPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_endPosition(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_endPosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_startStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_startStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_startStrength(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_startStrength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::get_endStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"get_endStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::set_endStrength(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"set_endStrength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(*this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr  Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::operator ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::i___Rewired__ControllerExtensions__IDualSenseTriggerEffect()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_startPosition", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_endPosition", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_startStrength", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_endStrength", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::DualSenseTriggerEffectSlopeFeedback(uint8_t  _startPosition, uint8_t  _endPosition, uint8_t  _startStrength, uint8_t  _endStrength) noexcept  {
this->_startPosition = _startPosition;
this->_endPosition = _endPosition;
this->_startStrength = _startStrength;
this->_endStrength = _endStrength;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectSlopeFeedback::DualSenseTriggerEffectSlopeFeedback()   {
}
