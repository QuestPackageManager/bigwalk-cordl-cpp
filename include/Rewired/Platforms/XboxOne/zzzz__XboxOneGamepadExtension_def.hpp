#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/XboxOneGamepadExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__tHsESWDQOdxcIkhJvKlfiYcSCTyD_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XboxOneGamepadExtension)
namespace GlobalNamespace {
struct tHsESWDQOdxcIkhJvKlfiYcSCTyD;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Interfaces {
class IControllerVibrator;
}
namespace Rewired::Platforms::XboxOne {
class IXboxOneInputSource;
}
namespace Rewired::Platforms::XboxOne {
class XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA;
}
namespace Rewired::Platforms::XboxOne {
struct XboxOneGamepadMotorType;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
struct UpdateLoopType;
}
// Forward declare root types
namespace Rewired::Platforms::XboxOne {
class XboxOneGamepadExtension;
}
namespace Rewired::Platforms::XboxOne {
class XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension*);
MARK_REF_T(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension*, "Rewired.Platforms.XboxOne", "XboxOneGamepadExtension");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA*, "Rewired.Platforms.XboxOne", "XboxOneGamepadExtension/CmDCmhnAJWHeIEDAmzymhadiZnNPA");
// Dependencies System.Object, tHsESWDQOdxcIkhJvKlfiYcSCTyD
namespace Rewired::Platforms::XboxOne {
// Is value type: false
// CS Name: Rewired.Platforms.XboxOne.XboxOneGamepadExtension/CmDCmhnAJWHeIEDAmzymhadiZnNPA
class CORDL_TYPE XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA : public ::System::Object {
public:
// Declarations
/// @brief Field ILhNDtyGrxjmvtCewMAvWBtjiArT, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_ILhNDtyGrxjmvtCewMAvWBtjiArT, put=__cordl_internal_set_ILhNDtyGrxjmvtCewMAvWBtjiArT)) ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  ILhNDtyGrxjmvtCewMAvWBtjiArT;

/// @brief Field jgAbaHTPbWYrnIwvJbbvMUfdJLth, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_jgAbaHTPbWYrnIwvJbbvMUfdJLth, put=__cordl_internal_set_jgAbaHTPbWYrnIwvJbbvMUfdJLth)) bool  jgAbaHTPbWYrnIwvJbbvMUfdJLth;

/// @brief Field sGJGEYHMZYYeIBVpusJxlqvylbRr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sGJGEYHMZYYeIBVpusJxlqvylbRr, put=__cordl_internal_set_sGJGEYHMZYYeIBVpusJxlqvylbRr)) ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  sGJGEYHMZYYeIBVpusJxlqvylbRr;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA* New_ctor(bool  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD const& __cordl_internal_get_ILhNDtyGrxjmvtCewMAvWBtjiArT() const;

constexpr ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD& __cordl_internal_get_ILhNDtyGrxjmvtCewMAvWBtjiArT() ;

constexpr bool const& __cordl_internal_get_jgAbaHTPbWYrnIwvJbbvMUfdJLth() const;

constexpr bool& __cordl_internal_get_jgAbaHTPbWYrnIwvJbbvMUfdJLth() ;

constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource* const& __cordl_internal_get_sGJGEYHMZYYeIBVpusJxlqvylbRr() const;

constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource*& __cordl_internal_get_sGJGEYHMZYYeIBVpusJxlqvylbRr() ;

constexpr void __cordl_internal_set_ILhNDtyGrxjmvtCewMAvWBtjiArT(::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  value) ;

constexpr void __cordl_internal_set_jgAbaHTPbWYrnIwvJbbvMUfdJLth(bool  value) ;

constexpr void __cordl_internal_set_sGJGEYHMZYYeIBVpusJxlqvylbRr(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  value) ;

/// @brief Method .ctor, addr 0x1818764c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA(XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA(XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2280};

/// @brief Field cFtBqqTgtutvgYKAHixbgcEfObLAb offset 0xffffffff size 0x4
static constexpr int32_t  cFtBqqTgtutvgYKAHixbgcEfObLAb{static_cast<int32_t>(0x4)};

/// @brief Field ILhNDtyGrxjmvtCewMAvWBtjiArT, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  ___ILhNDtyGrxjmvtCewMAvWBtjiArT;

/// @brief Field sGJGEYHMZYYeIBVpusJxlqvylbRr, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  ___sGJGEYHMZYYeIBVpusJxlqvylbRr;

/// @brief Field jgAbaHTPbWYrnIwvJbbvMUfdJLth, offset: 0x30, size: 0x1, def value: None
 bool  ___jgAbaHTPbWYrnIwvJbbvMUfdJLth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA, ___ILhNDtyGrxjmvtCewMAvWBtjiArT) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA, ___sGJGEYHMZYYeIBVpusJxlqvylbRr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA, ___jgAbaHTPbWYrnIwvJbbvMUfdJLth) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne
// Dependencies Rewired.Controller::Extension, Rewired.Utils.Classes.Utility.TimerAbs
namespace Rewired::Platforms::XboxOne {
// Is value type: false
// CS Name: Rewired.Platforms.XboxOne.XboxOneGamepadExtension
class CORDL_TYPE XboxOneGamepadExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using CmDCmhnAJWHeIEDAmzymhadiZnNPA = ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA;

/// @brief Field CsnMuwfsaOnkcSNXgxGbdBRZfhMH, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CsnMuwfsaOnkcSNXgxGbdBRZfhMH, put=__cordl_internal_set_CsnMuwfsaOnkcSNXgxGbdBRZfhMH)) ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  CsnMuwfsaOnkcSNXgxGbdBRZfhMH;

 __declspec(property(get=RFsHKdjJsBebZIuKQBxZwWLugqEF)) ::Rewired::Joystick*  joystick;

/// @brief Field pkWmnoMaNqAhqhTNFEOXkaQwiMsu, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pkWmnoMaNqAhqhTNFEOXkaQwiMsu, put=__cordl_internal_set_pkWmnoMaNqAhqhTNFEOXkaQwiMsu)) ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA*  pkWmnoMaNqAhqhTNFEOXkaQwiMsu;

 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

 __declspec(property(get=get_xboxOneJoystickId)) uint64_t  xboxOneJoystickId;

 __declspec(property(get=get_xboxOneUserId)) int32_t  xboxOneUserId;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method Clone, addr 0x181883de0, size 0x80, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method FJoPvqEMUwnHxmGwaYZPZNjajgmN, addr 0x181883e60, size 0x90, virtual false, abstract: false, final false
inline void FJoPvqEMUwnHxmGwaYZPZNjajgmN() ;

/// @brief Method GetVibration, addr 0x181883fc0, size 0xf0, virtual false, abstract: false, final false
inline float_t GetVibration(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor) ;

/// @brief Method GetVibration, addr 0x181883ef0, size 0xd0, virtual true, abstract: false, final true
inline float_t GetVibration(int32_t  motorIndex) ;

static inline ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension* New_ctor(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension* New_ctor(bool  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method PulseVibrateMotor, addr 0x1818840b0, size 0x1a0, virtual false, abstract: false, final false
inline void PulseVibrateMotor(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  startLevel, float_t  endLevel, float_t  duration) ;

/// @brief Method RFsHKdjJsBebZIuKQBxZwWLugqEF, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* RFsHKdjJsBebZIuKQBxZwWLugqEF() ;

/// @brief Method SetVibration, addr 0x1818842a0, size 0x120, virtual false, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel) ;

/// @brief Method SetVibration, addr 0x181884770, size 0x160, virtual false, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftTriggerLevel, float_t  rightTriggerLevel) ;

/// @brief Method SetVibration, addr 0x181884610, size 0x160, virtual false, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818845f0, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x181884260, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818843e0, size 0x1d0, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818843c0, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818845d0, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x1818845b0, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818848d0, size 0xd0, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x181884280, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SourceUpdated, addr 0x1818849a0, size 0xc0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method StopVibration, addr 0x181884a60, size 0xb0, virtual true, abstract: false, final true
inline void StopVibration() ;

/// @brief Method UpdateData, addr 0x181883e60, size 0x90, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method VwPUFsNdZrfSFPacWenTjhHBSFYj, addr 0x181884b10, size 0x120, virtual false, abstract: false, final false
inline void VwPUFsNdZrfSFPacWenTjhHBSFYj() ;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& __cordl_internal_get_CsnMuwfsaOnkcSNXgxGbdBRZfhMH() const;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& __cordl_internal_get_CsnMuwfsaOnkcSNXgxGbdBRZfhMH() ;

constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA* const& __cordl_internal_get_pkWmnoMaNqAhqhTNFEOXkaQwiMsu() const;

constexpr ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA*& __cordl_internal_get_pkWmnoMaNqAhqhTNFEOXkaQwiMsu() ;

constexpr void __cordl_internal_set_CsnMuwfsaOnkcSNXgxGbdBRZfhMH(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value) ;

constexpr void __cordl_internal_set_pkWmnoMaNqAhqhTNFEOXkaQwiMsu(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA*  value) ;

/// @brief Method .ctor, addr 0x181884d10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181884c30, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method eXKzKzgeaEhlqCxWfLfgRHhwOJNi, addr 0x181884d70, size 0xa0, virtual false, abstract: false, final false
inline void eXKzKzgeaEhlqCxWfLfgRHhwOJNi(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_vibrationMotorCount, addr 0x181884e10, size 0x60, virtual true, abstract: false, final true
inline int32_t get_vibrationMotorCount() ;

/// @brief Method get_xboxOneJoystickId, addr 0x181884e70, size 0xc0, virtual false, abstract: false, final false
inline uint64_t get_xboxOneJoystickId() ;

/// @brief Method get_xboxOneUserId, addr 0x181884f30, size 0xf0, virtual false, abstract: false, final false
inline int32_t get_xboxOneUserId() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XboxOneGamepadExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XboxOneGamepadExtension(XboxOneGamepadExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XboxOneGamepadExtension(XboxOneGamepadExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2281};

/// @brief Field pkWmnoMaNqAhqhTNFEOXkaQwiMsu, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_CmDCmhnAJWHeIEDAmzymhadiZnNPA*  ___pkWmnoMaNqAhqhTNFEOXkaQwiMsu;

/// @brief Field CsnMuwfsaOnkcSNXgxGbdBRZfhMH, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  ___CsnMuwfsaOnkcSNXgxGbdBRZfhMH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension, ___pkWmnoMaNqAhqhTNFEOXkaQwiMsu) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension, ___CsnMuwfsaOnkcSNXgxGbdBRZfhMH) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneGamepadExtension) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne
