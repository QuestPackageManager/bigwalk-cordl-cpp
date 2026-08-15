#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_NintendoSwitchJoyCon.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchJoyCon_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConGripStyle_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConType_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchController_def.hpp"
#include "Rewired/Interfaces/zzzz__IAxisCalibrationIndexMap_def.hpp"
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon.get_joyConType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConType (::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::*)()>(&::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::get_joyConType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon.get_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle (::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::*)()>(&::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::get_joyConGripStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon.set_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::*)(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle)>(&::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::set_joyConGripStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConType Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::get_joyConType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConType>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::get_joyConGripStyle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::set_joyConGripStyle(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::operator ::Rewired::Interfaces::IAxisCalibrationIndexMap*() noexcept {
return static_cast<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr ::Rewired::Interfaces::IAxisCalibrationIndexMap* Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon::i___Rewired__Interfaces__IAxisCalibrationIndexMap() noexcept {
return static_cast<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(static_cast<void*>(this));
}
