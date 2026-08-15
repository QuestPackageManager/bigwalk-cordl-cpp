#pragma once
// IWYU pragma private; include "Rewired/Internal/IInputManagerHardwareJoystickMapHandler.hpp"
#include "Rewired/Internal/zzzz__IInputManagerHardwareJoystickMapHandler_def.hpp"
#include "Rewired/zzzz__HardwareJoystickMap_InputManager_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::IInputManagerHardwareJoystickMapHandler.InitializeHardwareJoystickMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::IInputManagerHardwareJoystickMapHandler::*)(::Rewired::HardwareJoystickMap_InputManager*)>(&::Rewired::Internal::IInputManagerHardwareJoystickMapHandler::InitializeHardwareJoystickMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::IInputManagerHardwareJoystickMapHandler::InitializeHardwareJoystickMap(::Rewired::HardwareJoystickMap_InputManager*  hardwareMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hardwareMap);
}
