#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/SwitchJoyConRightDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchJoyConDriver_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SwitchJoyConRightDriver)
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class SwitchJoyConRightDriver;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::SwitchJoyConRightDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::SwitchJoyConRightDriver*, "Rewired.HID.Drivers", "SwitchJoyConRightDriver");
// Dependencies Rewired.HID.Drivers.NintendoSwitchJoyConDriver
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.SwitchJoyConRightDriver
class CORDL_TYPE SwitchJoyConRightDriver : public ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver {
public:
// Declarations
 __declspec(property(get=get_byteIndexStartSticks)) int32_t  byteIndexStartSticks;

/// @brief Method Dispose, addr 0x181aba5f0, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181abaaf0, size 0x70, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method HandleGripStyleStickAxisSwap, addr 0x181abc9f0, size 0x20, virtual true, abstract: false, final false
inline void HandleGripStyleStickAxisSwap(::by_ref<uint16_t>  stickX, ::by_ref<uint16_t>  stickY) ;

/// @brief Method Matches, addr 0x181abca10, size 0x20, virtual false, abstract: false, final false
static inline bool Matches(int32_t  vid, int32_t  pid) ;

static inline ::Rewired::HID::Drivers::SwitchJoyConRightDriver* New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method UpdateButtons, addr 0x181abca30, size 0x250, virtual true, abstract: false, final false
inline void UpdateButtons(::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp) ;

/// @brief Method .ctor, addr 0x181abcc80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_byteIndexStartSticks, addr 0x1813ef7d0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_byteIndexStartSticks() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SwitchJoyConRightDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SwitchJoyConRightDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SwitchJoyConRightDriver(SwitchJoyConRightDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwitchJoyConRightDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwitchJoyConRightDriver(SwitchJoyConRightDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6634};

/// @brief Field mBIANZEWGCDJZydvsllxlDnqJSbg offset 0xffffffff size 0x4
static constexpr int32_t  mBIANZEWGCDJZydvsllxlDnqJSbg{static_cast<int32_t>(0x3)};

/// @brief Field mLlgQNEOoOjNpfqgifMIXFUSRAYAA offset 0xffffffff size 0x4
static constexpr int32_t  mLlgQNEOoOjNpfqgifMIXFUSRAYAA{static_cast<int32_t>(0x9)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::HID::Drivers::SwitchJoyConRightDriver) == 0x128, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
