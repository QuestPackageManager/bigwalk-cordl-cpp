#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_NintendoSwitchJoyCon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDriver_NintendoSwitchJoyCon)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::ControllerExtensions {
struct NintendoSwitchJoyConGripStyle;
}
namespace Rewired::ControllerExtensions {
struct NintendoSwitchJoyConType;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchController;
}
namespace Rewired::Interfaces {
class IAxisCalibrationIndexMap;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchJoyCon;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*, "Rewired.HID.Drivers", "IDriver_NintendoSwitchJoyCon");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.IDriver_NintendoSwitchJoyCon
class CORDL_TYPE IDriver_NintendoSwitchJoyCon {
public:
// Declarations
 __declspec(property(get=get_joyConGripStyle, put=set_joyConGripStyle)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  joyConGripStyle;

 __declspec(property(get=get_joyConType)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConType  joyConType;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr operator  ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr operator  ::Rewired::Interfaces::IAxisCalibrationIndexMap*() noexcept;

/// @brief Method get_joyConGripStyle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle get_joyConGripStyle() ;

/// @brief Method get_joyConType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConType get_joyConType() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr ::Rewired::Interfaces::IAxisCalibrationIndexMap* i___Rewired__Interfaces__IAxisCalibrationIndexMap() noexcept;

/// @brief Method set_joyConGripStyle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_joyConGripStyle(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDriver_NintendoSwitchJoyCon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDriver_NintendoSwitchJoyCon(IDriver_NintendoSwitchJoyCon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
