#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IInputManagerJoystick.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystick_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystickPublic_def.hpp"
#include "Rewired/zzzz__BridgedController_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerDisconnectedEventArgs_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IInputManagerJoystick.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IInputManagerJoystick::*)()>(&::Rewired::Interfaces::IInputManagerJoystick::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IInputManagerJoystick.FillData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IInputManagerJoystick::*)(::Rewired::ControllerDataUpdater*)>(&::Rewired::Interfaces::IInputManagerJoystick::FillData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IInputManagerJoystick.ToBridgedController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::BridgedController* (::Rewired::Interfaces::IInputManagerJoystick::*)()>(&::Rewired::Interfaces::IInputManagerJoystick::ToBridgedController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IInputManagerJoystick.ToControllerDisconnectedEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerDisconnectedEventArgs* (::Rewired::Interfaces::IInputManagerJoystick::*)()>(&::Rewired::Interfaces::IInputManagerJoystick::ToControllerDisconnectedEventArgs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Interfaces::IInputManagerJoystick::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Interfaces::IInputManagerJoystick::FillData(::Rewired::ControllerDataUpdater*  dataUpdater)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUpdater);
}
inline ::Rewired::BridgedController* Rewired::Interfaces::IInputManagerJoystick::ToBridgedController()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::BridgedController*>(this, ___internal_method);
}
inline ::Rewired::ControllerDisconnectedEventArgs* Rewired::Interfaces::IInputManagerJoystick::ToControllerDisconnectedEventArgs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IInputManagerJoystick*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerDisconnectedEventArgs*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr  Rewired::Interfaces::IInputManagerJoystick::operator ::Rewired::Interfaces::IInputManagerJoystickPublic*() noexcept {
return static_cast<::Rewired::Interfaces::IInputManagerJoystickPublic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* Rewired::Interfaces::IInputManagerJoystick::i___Rewired__Interfaces__IInputManagerJoystickPublic() noexcept {
return static_cast<::Rewired::Interfaces::IInputManagerJoystickPublic*>(static_cast<void*>(this));
}
