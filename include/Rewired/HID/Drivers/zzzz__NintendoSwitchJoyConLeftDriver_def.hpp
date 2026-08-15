#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchJoyConLeftDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchJoyConDriver_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchJoyConLeftDriver)
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class NintendoSwitchJoyConLeftDriver;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*, "Rewired.HID.Drivers", "NintendoSwitchJoyConLeftDriver");
// Dependencies Rewired.HID.Drivers.NintendoSwitchJoyConDriver
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.NintendoSwitchJoyConLeftDriver
class CORDL_TYPE NintendoSwitchJoyConLeftDriver : public ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver {
public:
// Declarations
 __declspec(property(get=get_byteIndexStartSticks)) int32_t  byteIndexStartSticks;

/// @brief Method Dispose, addr 0x181aba5f0, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181abaaf0, size 0x70, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method HandleGripStyleStickAxisSwap, addr 0x181abab60, size 0x20, virtual true, abstract: false, final false
inline void HandleGripStyleStickAxisSwap(::by_ref<uint16_t>  stickX, ::by_ref<uint16_t>  stickY) ;

/// @brief Method Matches, addr 0x181abab80, size 0x20, virtual false, abstract: false, final false
static inline bool Matches(int32_t  vid, int32_t  pid) ;

static inline ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver* New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method UpdateButtons, addr 0x181ababa0, size 0x2f0, virtual true, abstract: false, final false
inline void UpdateButtons(::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp) ;

/// @brief Method .ctor, addr 0x181abae90, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_byteIndexStartSticks, addr 0x180908af0, size 0x30, virtual true, abstract: false, final false
inline int32_t get_byteIndexStartSticks() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchJoyConLeftDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConLeftDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchJoyConLeftDriver(NintendoSwitchJoyConLeftDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConLeftDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchJoyConLeftDriver(NintendoSwitchJoyConLeftDriver const& ) = delete;

/// @brief Field GQgqmgkLEYyTDSGcrUcpXkVxqeqQ offset 0xffffffff size 0x4
static constexpr int32_t  GQgqmgkLEYyTDSGcrUcpXkVxqeqQ{static_cast<int32_t>(0x4)};

/// @brief Field KvOdoQTOZIFHytqiLxNBkczcftpD offset 0xffffffff size 0x4
static constexpr int32_t  KvOdoQTOZIFHytqiLxNBkczcftpD{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6633};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver) == 0x128, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
