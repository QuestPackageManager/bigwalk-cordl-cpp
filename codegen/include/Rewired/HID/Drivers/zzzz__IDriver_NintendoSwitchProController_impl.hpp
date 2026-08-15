#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_NintendoSwitchProController.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchProController_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchController_def.hpp"
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchProController::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* Rewired::HID::Drivers::IDriver_NintendoSwitchProController::i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchProController::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::IDriver_NintendoSwitchProController::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::IDriver_NintendoSwitchProController::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::IDriver_NintendoSwitchProController::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
