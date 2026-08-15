#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IDualSenseTriggerEffect.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::IDualSenseTriggerEffect.get_triggerEffectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectType (::Rewired::ControllerExtensions::IDualSenseTriggerEffect::*)()>(&::Rewired::ControllerExtensions::IDualSenseTriggerEffect::get_triggerEffectType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired::ControllerExtensions::IDualSenseTriggerEffect::get_triggerEffectType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectType>(this, ___internal_method);
}
