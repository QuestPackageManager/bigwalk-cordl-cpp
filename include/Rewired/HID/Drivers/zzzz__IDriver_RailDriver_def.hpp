#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_RailDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDriver_RailDriver)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class IDriver_RailDriver;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::IDriver_RailDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::IDriver_RailDriver*, "Rewired.HID.Drivers", "IDriver_RailDriver");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.IDriver_RailDriver
class CORDL_TYPE IDriver_RailDriver {
public:
// Declarations
 __declspec(property(get=get_SpeakerEnabled, put=set_SpeakerEnabled)) bool  SpeakerEnabled;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Method SetLEDDisplay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetLEDDisplay(uint8_t  digit1BitValues, uint8_t  digit2BitValues, uint8_t  digit3BitValues) ;

/// @brief Method SetLEDDisplay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetLEDDisplay(int32_t  digitIndex, uint8_t  digitBitValues) ;

/// @brief Method get_SpeakerEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_SpeakerEnabled() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Method set_SpeakerEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_SpeakerEnabled(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDriver_RailDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDriver_RailDriver(IDriver_RailDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
