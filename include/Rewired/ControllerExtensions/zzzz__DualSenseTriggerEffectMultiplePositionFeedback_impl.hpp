#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectMultiplePositionFeedback.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectPositionValueSet_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectMultiplePositionFeedback_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectPositionValueSet_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback.get_strength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::get_strength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818c88b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback>(),
                        {"get_strength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback.set_strength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::*)(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::set_strength)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818cd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback>(),
                        {"set_strength", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback.Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::*)()>(&::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180309580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::get_strength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback>(),
                        {"get_strength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet>(*this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::set_strength(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback>(),
                        {"set_strength", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback>(),
                        {"Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(*this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr  Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::operator ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::i___Rewired__ControllerExtensions__IDualSenseTriggerEffect()  {
return static_cast<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_strength", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::DualSenseTriggerEffectMultiplePositionFeedback(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  _strength) noexcept  {
this->_strength = _strength;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback::DualSenseTriggerEffectMultiplePositionFeedback()   {
}
