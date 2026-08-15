#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_NintendoSwitchProController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDriver_NintendoSwitchProController)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchController;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchProController;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*, "Rewired.HID.Drivers", "IDriver_NintendoSwitchProController");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.IDriver_NintendoSwitchProController
class CORDL_TYPE IDriver_NintendoSwitchProController {
public:
// Declarations
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr operator  ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDriver_NintendoSwitchProController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDriver_NintendoSwitchProController(IDriver_NintendoSwitchProController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
