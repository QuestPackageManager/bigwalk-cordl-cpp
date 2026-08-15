#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchProControllerDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchProControllerDriver)
namespace GlobalNamespace {
class nxSccnjzMkUjLoMzgjhhzPVcPAxF;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchController;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchProController;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
struct UpdateLoopType;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class NintendoSwitchProControllerDriver;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*, "Rewired.HID.Drivers", "NintendoSwitchProControllerDriver");
// Dependencies Rewired.HID.Drivers.NintendoSwitchGamepadDriver
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.NintendoSwitchProControllerDriver
class CORDL_TYPE NintendoSwitchProControllerDriver : public ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver {
public:
// Declarations
/// @brief Field rtWGVHavRYRsTeqAGWodOVbeRMTpA, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_rtWGVHavRYRsTeqAGWodOVbeRMTpA, put=__cordl_internal_set_rtWGVHavRYRsTeqAGWodOVbeRMTpA)) ::ArrayW<uint8_t>  rtWGVHavRYRsTeqAGWodOVbeRMTpA;

/// @brief Field zkJdvOpbwnwobMcMRbxWDWXBEnYUA, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_zkJdvOpbwnwobMcMRbxWDWXBEnYUA, put=__cordl_internal_set_zkJdvOpbwnwobMcMRbxWDWXBEnYUA)) ::Rewired::Utils::Classes::Data::NativeBuffer*  zkJdvOpbwnwobMcMRbxWDWXBEnYUA;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr operator  ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchProController"
constexpr operator  ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*() noexcept;

/// @brief Method CreateControllerExtension, addr 0x181abaea0, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* CreateControllerExtension() ;

/// @brief Method Dispose, addr 0x181abaee0, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181aba640, size 0x70, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Matches, addr 0x181abaf30, size 0x20, virtual false, abstract: false, final false
static inline bool Matches(int32_t  vid, int32_t  pid) ;

static inline ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver* New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Update, addr 0x181abb680, size 0x10, virtual true, abstract: false, final false
inline void Update(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UpdateButtons, addr 0x181abaf50, size 0x490, virtual true, abstract: false, final false
inline void UpdateButtons(::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp) ;

/// @brief Method UpdateElements, addr 0x181abb3e0, size 0x2a0, virtual true, abstract: false, final false
inline void UpdateElements(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  elements, ::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rtWGVHavRYRsTeqAGWodOVbeRMTpA() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rtWGVHavRYRsTeqAGWodOVbeRMTpA() ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_zkJdvOpbwnwobMcMRbxWDWXBEnYUA() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_zkJdvOpbwnwobMcMRbxWDWXBEnYUA() ;

constexpr void __cordl_internal_set_rtWGVHavRYRsTeqAGWodOVbeRMTpA(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_zkJdvOpbwnwobMcMRbxWDWXBEnYUA(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

/// @brief Method .ctor, addr 0x181abb690, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchProController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController* i___Rewired__HID__Drivers__IDriver_NintendoSwitchProController() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchProControllerDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchProControllerDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchProControllerDriver(NintendoSwitchProControllerDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchProControllerDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchProControllerDriver(NintendoSwitchProControllerDriver const& ) = delete;

/// @brief Field BKRkqaYvJhWEyXcaJiYknTEgHCnw offset 0xffffffff size 0x4
static constexpr int32_t  BKRkqaYvJhWEyXcaJiYknTEgHCnw{static_cast<int32_t>(0x1)};

/// @brief Field EncxAOWEpSIWKUYvJMXBGrJoCXoM offset 0xffffffff size 0x4
static constexpr int32_t  EncxAOWEpSIWKUYvJMXBGrJoCXoM{static_cast<int32_t>(0x2)};

/// @brief Field JZLoCQCwIpAuHIJvQyQTOpqpcunA offset 0xffffffff size 0x4
static constexpr int32_t  JZLoCQCwIpAuHIJvQyQTOpqpcunA{static_cast<int32_t>(0x6)};

/// @brief Field LjmAiiUtxlqfHrwJKWAUmZuWFENQ offset 0xffffffff size 0x4
static constexpr int32_t  LjmAiiUtxlqfHrwJKWAUmZuWFENQ{static_cast<int32_t>(0x12)};

/// @brief Field MAvtaSXitwZcettIbMDknisDnQAe offset 0xffffffff size 0x4
static constexpr int32_t  MAvtaSXitwZcettIbMDknisDnQAe{static_cast<int32_t>(0x7)};

/// @brief Field MvFQanQINuehqTWQZIMVVUENllMU offset 0xffffffff size 0x4
static constexpr int32_t  MvFQanQINuehqTWQZIMVVUENllMU{static_cast<int32_t>(0x3)};

/// @brief Field SnLPKCBmKCkQWrduRKoIFoTQbeSV offset 0xffffffff size 0x4
static constexpr int32_t  SnLPKCBmKCkQWrduRKoIFoTQbeSV{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6635};

/// @brief Field ezdlQXdLlTJMWQEShpVMMMGoodwr offset 0xffffffff size 0x4
static constexpr int32_t  ezdlQXdLlTJMWQEShpVMMMGoodwr{static_cast<int32_t>(0x5)};

/// @brief Field rVaBrHijVfEgCQujWXyfwyZLUrkn offset 0xffffffff size 0x4
static constexpr int32_t  rVaBrHijVfEgCQujWXyfwyZLUrkn{static_cast<int32_t>(0x3)};

/// @brief Field rtWGVHavRYRsTeqAGWodOVbeRMTpA, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rtWGVHavRYRsTeqAGWodOVbeRMTpA;

/// @brief Field zkJdvOpbwnwobMcMRbxWDWXBEnYUA, offset: 0x118, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___zkJdvOpbwnwobMcMRbxWDWXBEnYUA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::NintendoSwitchProControllerDriver, ___rtWGVHavRYRsTeqAGWodOVbeRMTpA) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::NintendoSwitchProControllerDriver, ___zkJdvOpbwnwobMcMRbxWDWXBEnYUA) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::NintendoSwitchProControllerDriver) == 0x120, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
