#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchJoyConExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadExtension_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchJoyConExtension)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::ControllerExtensions {
class NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe;
}
namespace Rewired::ControllerExtensions {
struct NintendoSwitchJoyConGripStyle;
}
namespace Rewired::ControllerExtensions {
struct NintendoSwitchJoyConType;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchJoyCon;
}
namespace Rewired::Interfaces {
class IAxisCalibrationIndexMap;
}
namespace Rewired::Interfaces {
class IControllerVibrator;
}
namespace Rewired {
class Controller_Extension;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class NintendoSwitchJoyConExtension;
}
namespace Rewired::ControllerExtensions {
class NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*);
MARK_REF_T(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*, "Rewired.ControllerExtensions", "NintendoSwitchJoyConExtension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*, "Rewired.ControllerExtensions", "NintendoSwitchJoyConExtension/tEFGDsrbecSclRcvraoDkLUyYBYe");
// Dependencies Rewired.ControllerExtensions.NintendoSwitchGamepadExtension::ExtSource_Base
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.NintendoSwitchJoyConExtension/tEFGDsrbecSclRcvraoDkLUyYBYe
class CORDL_TYPE NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe : public ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base {
public:
// Declarations
 __declspec(property(get=ZhXRnOEiqWGQeGDcDpKgOMKqyxdd)) ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  ZknUwtInraSAVvAuedAXTGmSCfGm;

static inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe* New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZhXRnOEiqWGQeGDcDpKgOMKqyxdd, addr 0x1818eeff0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon* ZhXRnOEiqWGQeGDcDpKgOMKqyxdd() ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe(NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe(NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe) == 0x18, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.ControllerExtensions.NintendoSwitchGamepadExtension
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.NintendoSwitchJoyConExtension
class CORDL_TYPE NintendoSwitchJoyConExtension : public ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension {
public:
// Declarations
using tEFGDsrbecSclRcvraoDkLUyYBYe = ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe;

 __declspec(property(get=get_joyConGripStyle, put=set_joyConGripStyle)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  joyConGripStyle;

 __declspec(property(get=get_joyConType)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConType  joyConType;

 __declspec(property(get=WqvJzRdAMKWdpORMBtYGOkbkzYo)) ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*  source;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr operator  ::Rewired::Interfaces::IAxisCalibrationIndexMap*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method Clone, addr 0x1818dabe0, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method IEhvUnDSATtyyGLIJXaVxtEHKnhc, addr 0x1818dac20, size 0x150, virtual true, abstract: false, final true
inline int32_t IEhvUnDSATtyyGLIJXaVxtEHKnhc(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension* New_ctor(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension* New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method WqvJzRdAMKWdpORMBtYGOkbkzYo, addr 0x1818dad70, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe* WqvJzRdAMKWdpORMBtYGOkbkzYo() ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818dadc0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_joyConGripStyle, addr 0x1818dae20, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle get_joyConGripStyle() ;

/// @brief Method get_joyConType, addr 0x1818daee0, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConType get_joyConType() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr ::Rewired::Interfaces::IAxisCalibrationIndexMap* i___Rewired__Interfaces__IAxisCalibrationIndexMap() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

/// @brief Method set_joyConGripStyle, addr 0x1818dafb0, size 0xd0, virtual false, abstract: false, final false
inline void set_joyConGripStyle(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchJoyConExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchJoyConExtension(NintendoSwitchJoyConExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchJoyConExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchJoyConExtension(NintendoSwitchJoyConExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2710};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension) == 0x38, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
