#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_NintendoSwitchController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IDriver_NintendoSwitchController)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchController;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*, "Rewired.HID.Drivers", "IDriver_NintendoSwitchController");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.IDriver_NintendoSwitchController
class CORDL_TYPE IDriver_NintendoSwitchController {
public:
// Declarations
 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Method GetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetVibration(int32_t  motorIndex, ::by_ref<float_t>  amplitudeLow, ::by_ref<float_t>  frequencyLow, ::by_ref<float_t>  amplitudeHigh, ::by_ref<float_t>  frequencyHigh) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, bool  stopOtherMotors) ;

/// @brief Method StopVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopVibration() ;

/// @brief Method StopVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopVibration(int32_t  motorIndex) ;

/// @brief Method get_vibrationMotorCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_vibrationMotorCount() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDriver_NintendoSwitchController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDriver_NintendoSwitchController(IDriver_NintendoSwitchController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
