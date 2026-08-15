#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IDualSenseExtension.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectStates_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualShock4Extension_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::IDualSenseExtension.SetTriggerEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::IDualSenseExtension::*)(::Rewired::ControllerExtensions::DualSenseTriggerType, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*)>(&::Rewired::ControllerExtensions::IDualSenseExtension::SetTriggerEffect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseExtension*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::IDualSenseExtension.GetTriggerEffectStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectStates (::Rewired::ControllerExtensions::IDualSenseExtension::*)()>(&::Rewired::ControllerExtensions::IDualSenseExtension::GetTriggerEffectStates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseExtension*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::ControllerExtensions::IDualSenseExtension::SetTriggerEffect(::Rewired::ControllerExtensions::DualSenseTriggerType  trigger, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*  effect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseExtension*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trigger, effect);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates Rewired::ControllerExtensions::IDualSenseExtension::GetTriggerEffectStates()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::IDualSenseExtension*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectStates>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr  Rewired::ControllerExtensions::IDualSenseExtension::operator ::Rewired::ControllerExtensions::IDualShock4Extension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualShock4Extension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr ::Rewired::ControllerExtensions::IDualShock4Extension* Rewired::ControllerExtensions::IDualSenseExtension::i___Rewired__ControllerExtensions__IDualShock4Extension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualShock4Extension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr  Rewired::ControllerExtensions::IDualSenseExtension::operator ::Rewired::Interfaces::IControllerVibrator*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* Rewired::ControllerExtensions::IDualSenseExtension::i___Rewired__Interfaces__IControllerVibrator() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
