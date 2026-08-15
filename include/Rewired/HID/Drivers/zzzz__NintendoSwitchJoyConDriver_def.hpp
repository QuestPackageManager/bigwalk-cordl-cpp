#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchJoyConDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConGripStyle_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConType_def.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchJoyConDriver)
namespace GlobalNamespace {
class nxSccnjzMkUjLoMzgjhhzPVcPAxF;
}
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
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchController;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchJoyCon;
}
namespace Rewired::HID::Drivers {
struct NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt;
}
namespace Rewired::Interfaces {
class IAxisCalibrationIndexMap;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
namespace Rewired {
class Controller_Extension;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
class NintendoSwitchJoyConDriver;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*, "Rewired.HID.Drivers", "NintendoSwitchJoyConDriver");
// Dependencies Rewired.ControllerExtensions.NintendoSwitchJoyConGripStyle, Rewired.ControllerExtensions.NintendoSwitchJoyConType, Rewired.HID.Drivers.NintendoSwitchGamepadDriver
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.NintendoSwitchJoyConDriver
class CORDL_TYPE NintendoSwitchJoyConDriver : public ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver {
public:
// Declarations
/// @brief Field OaZwlTAcOPHUiBHHLAaYnysVAnXI, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_OaZwlTAcOPHUiBHHLAaYnysVAnXI, put=__cordl_internal_set_OaZwlTAcOPHUiBHHLAaYnysVAnXI)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConType  OaZwlTAcOPHUiBHHLAaYnysVAnXI;

/// @brief Field RSOTuyEWQUdQXWEAUjvXOVbUCxeCA, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA, put=__cordl_internal_set_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  RSOTuyEWQUdQXWEAUjvXOVbUCxeCA;

 __declspec(property(get=get_buttonAxisReadBuffer)) ::ArrayW<uint8_t>  buttonAxisReadBuffer;

 __declspec(property(get=get_byteIndexStartSticks)) int32_t  byteIndexStartSticks;

 __declspec(property(get=get_joyConGripStyle, put=set_joyConGripStyle)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  joyConGripStyle;

 __declspec(property(get=get_joyConType)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConType  joyConType;

/// @brief Field nskZjLhKeGNfCmuQDmJbgDBxYUAg, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_nskZjLhKeGNfCmuQDmJbgDBxYUAg, put=__cordl_internal_set_nskZjLhKeGNfCmuQDmJbgDBxYUAg)) ::ArrayW<uint8_t>  nskZjLhKeGNfCmuQDmJbgDBxYUAg;

/// @brief Field pOXoSrecMiMunSUIyFVITAHSSrSL, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_pOXoSrecMiMunSUIyFVITAHSSrSL, put=__cordl_internal_set_pOXoSrecMiMunSUIyFVITAHSSrSL)) ::Rewired::Utils::Classes::Data::NativeBuffer*  pOXoSrecMiMunSUIyFVITAHSSrSL;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr operator  ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon"
constexpr operator  ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr operator  ::Rewired::Interfaces::IAxisCalibrationIndexMap*() noexcept;

/// @brief Method CreateControllerExtension, addr 0x181aba5b0, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* CreateControllerExtension() ;

/// @brief Method Dispose, addr 0x181aba5f0, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181aba640, size 0x70, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method HandleGripStyleStickAxisSwap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleGripStyleStickAxisSwap(::by_ref<uint16_t>  stickX, ::by_ref<uint16_t>  stickY) ;

static inline ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver* New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Rewired.Interfaces.IAxisCalibrationIndexMap.GetMappedAxisIndex, addr 0x181aba6b0, size 0x20, virtual true, abstract: false, final true
inline int32_t Rewired_Interfaces_IAxisCalibrationIndexMap_GetMappedAxisIndex(int32_t  elementIndex) ;

/// @brief Method UpdateElements, addr 0x181aba6d0, size 0x1e0, virtual true, abstract: false, final false
inline void UpdateElements(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  elements, ::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp) ;

constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConType const& __cordl_internal_get_OaZwlTAcOPHUiBHHLAaYnysVAnXI() const;

constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConType& __cordl_internal_get_OaZwlTAcOPHUiBHHLAaYnysVAnXI() ;

constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle const& __cordl_internal_get_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA() const;

constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle& __cordl_internal_get_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_nskZjLhKeGNfCmuQDmJbgDBxYUAg() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_nskZjLhKeGNfCmuQDmJbgDBxYUAg() ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_pOXoSrecMiMunSUIyFVITAHSSrSL() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_pOXoSrecMiMunSUIyFVITAHSSrSL() ;

constexpr void __cordl_internal_set_OaZwlTAcOPHUiBHHLAaYnysVAnXI(::Rewired::ControllerExtensions::NintendoSwitchJoyConType  value) ;

constexpr void __cordl_internal_set_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value) ;

constexpr void __cordl_internal_set_nskZjLhKeGNfCmuQDmJbgDBxYUAg(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_pOXoSrecMiMunSUIyFVITAHSSrSL(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

/// @brief Method .ctor, addr 0x181aba8b0, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_buttonAxisReadBuffer, addr 0x180337120, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_buttonAxisReadBuffer() ;

/// @brief Method get_byteIndexStartSticks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_byteIndexStartSticks() ;

/// @brief Method get_joyConGripStyle, addr 0x181abaad0, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle get_joyConGripStyle() ;

/// @brief Method get_joyConType, addr 0x1805d37f0, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConType get_joyConType() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon* i___Rewired__HID__Drivers__IDriver_NintendoSwitchJoyCon() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr ::Rewired::Interfaces::IAxisCalibrationIndexMap* i___Rewired__Interfaces__IAxisCalibrationIndexMap() noexcept;

/// @brief Method set_joyConGripStyle, addr 0x181abaae0, size 0x10, virtual true, abstract: false, final true
inline void set_joyConGripStyle(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchJoyConDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchJoyConDriver(NintendoSwitchJoyConDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchJoyConDriver(NintendoSwitchJoyConDriver const& ) = delete;

/// @brief Field DMzcocUXeLvZuduJQcuPLAfJEOhe offset 0xffffffff size 0x4
static constexpr int32_t  DMzcocUXeLvZuduJQcuPLAfJEOhe{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6632};

/// @brief Field aoCTTwiWfgAvYRaylxbQiPQDektJ offset 0xffffffff size 0x4
static constexpr int32_t  aoCTTwiWfgAvYRaylxbQiPQDektJ{static_cast<int32_t>(0x3)};

/// @brief Field cdgeDqrFyjiLcbgKNvLKAredcdCY offset 0xffffffff size 0x4
static constexpr int32_t  cdgeDqrFyjiLcbgKNvLKAredcdCY{static_cast<int32_t>(0x2)};

/// @brief Field kgzpBGDdpbSkRFfDrJyUZqygbSxJ offset 0xffffffff size 0x4
static constexpr int32_t  kgzpBGDdpbSkRFfDrJyUZqygbSxJ{static_cast<int32_t>(0xb)};

/// @brief Field shrhUTXzvjtrSzgneiovCmoZJIEr offset 0xffffffff size 0x4
static constexpr int32_t  shrhUTXzvjtrSzgneiovCmoZJIEr{static_cast<int32_t>(0x1)};

/// @brief Field pOXoSrecMiMunSUIyFVITAHSSrSL, offset: 0x110, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___pOXoSrecMiMunSUIyFVITAHSSrSL;

/// @brief Field OaZwlTAcOPHUiBHHLAaYnysVAnXI, offset: 0x118, size: 0x4, def value: None
 ::Rewired::ControllerExtensions::NintendoSwitchJoyConType  ___OaZwlTAcOPHUiBHHLAaYnysVAnXI;

/// @brief Field RSOTuyEWQUdQXWEAUjvXOVbUCxeCA, offset: 0x11c, size: 0x4, def value: None
 ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  ___RSOTuyEWQUdQXWEAUjvXOVbUCxeCA;

/// @brief Field nskZjLhKeGNfCmuQDmJbgDBxYUAg, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___nskZjLhKeGNfCmuQDmJbgDBxYUAg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver, ___pOXoSrecMiMunSUIyFVITAHSSrSL) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver, ___OaZwlTAcOPHUiBHHLAaYnysVAnXI) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver, ___RSOTuyEWQUdQXWEAUjvXOVbUCxeCA) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver, ___nskZjLhKeGNfCmuQDmJbgDBxYUAg) == 0x120, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::NintendoSwitchJoyConDriver) == 0x128, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
