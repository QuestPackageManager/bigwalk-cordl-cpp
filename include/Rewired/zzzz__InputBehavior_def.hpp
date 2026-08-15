#pragma once
// IWYU pragma private; include "Rewired/InputBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__MouseOtherAxisMode_def.hpp"
#include "Rewired/zzzz__MouseXYAxisDeltaCalc_def.hpp"
#include "Rewired/zzzz__MouseXYAxisMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBehavior)
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
struct MouseOtherAxisMode;
}
namespace Rewired {
struct MouseXYAxisDeltaCalc;
}
namespace Rewired {
struct MouseXYAxisMode;
}
// Forward declare root types
namespace Rewired {
class InputBehavior;
}
// Write type traits
MARK_REF_T(::Rewired::InputBehavior*);
DEFINE_IL2CPP_CLASS(::Rewired::InputBehavior*, "Rewired", "InputBehavior");
// Dependencies Rewired.MouseOtherAxisMode, Rewired.MouseXYAxisDeltaCalc, Rewired.MouseXYAxisMode, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputBehavior
class CORDL_TYPE InputBehavior : public ::System::Object {
public:
// Declarations
/// @brief Field _buttonDeadZone, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonDeadZone, put=__cordl_internal_set__buttonDeadZone)) float_t  _buttonDeadZone;

/// @brief Field _buttonDoublePressSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonDoublePressSpeed, put=__cordl_internal_set__buttonDoublePressSpeed)) float_t  _buttonDoublePressSpeed;

/// @brief Field _buttonDownBuffer, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonDownBuffer, put=__cordl_internal_set__buttonDownBuffer)) float_t  _buttonDownBuffer;

/// @brief Field _buttonLongPressExpiresIn, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonLongPressExpiresIn, put=__cordl_internal_set__buttonLongPressExpiresIn)) float_t  _buttonLongPressExpiresIn;

/// @brief Field _buttonLongPressTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonLongPressTime, put=__cordl_internal_set__buttonLongPressTime)) float_t  _buttonLongPressTime;

/// @brief Field _buttonRepeatDelay, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonRepeatDelay, put=__cordl_internal_set__buttonRepeatDelay)) float_t  _buttonRepeatDelay;

/// @brief Field _buttonRepeatRate, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonRepeatRate, put=__cordl_internal_set__buttonRepeatRate)) float_t  _buttonRepeatRate;

/// @brief Field _buttonShortPressExpiresIn, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonShortPressExpiresIn, put=__cordl_internal_set__buttonShortPressExpiresIn)) float_t  _buttonShortPressExpiresIn;

/// @brief Field _buttonShortPressTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonShortPressTime, put=__cordl_internal_set__buttonShortPressTime)) float_t  _buttonShortPressTime;

/// @brief Field _customControllerAxisSensitivity, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__customControllerAxisSensitivity, put=__cordl_internal_set__customControllerAxisSensitivity)) float_t  _customControllerAxisSensitivity;

/// @brief Field _digitalAxisGravity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__digitalAxisGravity, put=__cordl_internal_set__digitalAxisGravity)) float_t  _digitalAxisGravity;

/// @brief Field _digitalAxisInstantReverse, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__digitalAxisInstantReverse, put=__cordl_internal_set__digitalAxisInstantReverse)) bool  _digitalAxisInstantReverse;

/// @brief Field _digitalAxisSensitivity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__digitalAxisSensitivity, put=__cordl_internal_set__digitalAxisSensitivity)) float_t  _digitalAxisSensitivity;

/// @brief Field _digitalAxisSimulation, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__digitalAxisSimulation, put=__cordl_internal_set__digitalAxisSimulation)) bool  _digitalAxisSimulation;

/// @brief Field _digitalAxisSnap, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__digitalAxisSnap, put=__cordl_internal_set__digitalAxisSnap)) bool  _digitalAxisSnap;

/// @brief Field _id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _joystickAxisSensitivity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__joystickAxisSensitivity, put=__cordl_internal_set__joystickAxisSensitivity)) float_t  _joystickAxisSensitivity;

/// @brief Field _mouseOtherAxisMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouseOtherAxisMode, put=__cordl_internal_set__mouseOtherAxisMode)) ::Rewired::MouseOtherAxisMode  _mouseOtherAxisMode;

/// @brief Field _mouseOtherAxisSensitivity, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouseOtherAxisSensitivity, put=__cordl_internal_set__mouseOtherAxisSensitivity)) float_t  _mouseOtherAxisSensitivity;

/// @brief Field _mouseXYAxisDeltaCalc, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouseXYAxisDeltaCalc, put=__cordl_internal_set__mouseXYAxisDeltaCalc)) ::Rewired::MouseXYAxisDeltaCalc  _mouseXYAxisDeltaCalc;

/// @brief Field _mouseXYAxisMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouseXYAxisMode, put=__cordl_internal_set__mouseXYAxisMode)) ::Rewired::MouseXYAxisMode  _mouseXYAxisMode;

/// @brief Field _mouseXYAxisSensitivity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouseXYAxisSensitivity, put=__cordl_internal_set__mouseXYAxisSensitivity)) float_t  _mouseXYAxisSensitivity;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

 __declspec(property(get=get_buttonDeadZone, put=set_buttonDeadZone)) float_t  buttonDeadZone;

 __declspec(property(get=get_buttonDoublePressSpeed, put=set_buttonDoublePressSpeed)) float_t  buttonDoublePressSpeed;

 __declspec(property(get=get_buttonDownBuffer, put=set_buttonDownBuffer)) float_t  buttonDownBuffer;

 __declspec(property(get=get_buttonLongPressExpiresIn, put=set_buttonLongPressExpiresIn)) float_t  buttonLongPressExpiresIn;

 __declspec(property(get=get_buttonLongPressTime, put=set_buttonLongPressTime)) float_t  buttonLongPressTime;

 __declspec(property(get=get_buttonRepeatDelay, put=set_buttonRepeatDelay)) float_t  buttonRepeatDelay;

 __declspec(property(get=get_buttonRepeatRate, put=set_buttonRepeatRate)) float_t  buttonRepeatRate;

 __declspec(property(get=get_buttonShortPressExpiresIn, put=set_buttonShortPressExpiresIn)) float_t  buttonShortPressExpiresIn;

 __declspec(property(get=get_buttonShortPressTime, put=set_buttonShortPressTime)) float_t  buttonShortPressTime;

 __declspec(property(get=get_customControllerAxisSensitivity, put=set_customControllerAxisSensitivity)) float_t  customControllerAxisSensitivity;

 __declspec(property(get=get_digitalAxisGravity, put=set_digitalAxisGravity)) float_t  digitalAxisGravity;

 __declspec(property(get=get_digitalAxisInstantReverse, put=set_digitalAxisInstantReverse)) bool  digitalAxisInstantReverse;

 __declspec(property(get=get_digitalAxisSensitivity, put=set_digitalAxisSensitivity)) float_t  digitalAxisSensitivity;

 __declspec(property(get=get_digitalAxisSimulation, put=set_digitalAxisSimulation)) bool  digitalAxisSimulation;

 __declspec(property(get=get_digitalAxisSnap, put=set_digitalAxisSnap)) bool  digitalAxisSnap;

 __declspec(property(get=get_id, put=qkUAkcZuQOxrxQdCIbcNeIDGckNDA)) int32_t  id;

 __declspec(property(get=get_joystickAxisSensitivity, put=set_joystickAxisSensitivity)) float_t  joystickAxisSensitivity;

 __declspec(property(get=get_mouseOtherAxisMode, put=set_mouseOtherAxisMode)) ::Rewired::MouseOtherAxisMode  mouseOtherAxisMode;

 __declspec(property(get=get_mouseOtherAxisSensitivity, put=set_mouseOtherAxisSensitivity)) float_t  mouseOtherAxisSensitivity;

 __declspec(property(get=get_mouseXYAxisDeltaCalc, put=set_mouseXYAxisDeltaCalc)) ::Rewired::MouseXYAxisDeltaCalc  mouseXYAxisDeltaCalc;

 __declspec(property(get=get_mouseXYAxisMode, put=set_mouseXYAxisMode)) ::Rewired::MouseXYAxisMode  mouseXYAxisMode;

 __declspec(property(get=get_mouseXYAxisSensitivity, put=set_mouseXYAxisSensitivity)) float_t  mouseXYAxisSensitivity;

 __declspec(property(get=get_name, put=aReumDhQzarjtJfUbCkMHXtpkjCI)) ::StringW  name;

/// @brief Method Clone, addr 0x1819a3ea0, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* Clone() ;

/// @brief Method ImportData, addr 0x1819a3fa0, size 0xe0, virtual false, abstract: false, final false
inline bool ImportData(::Rewired::InputBehavior*  inputBehavior) ;

/// @brief Method ImportJsonString, addr 0x1819a4080, size 0x90, virtual false, abstract: false, final false
inline bool ImportJsonString(::StringW  jsonString) ;

/// @brief Method ImportXmlString, addr 0x1819a4110, size 0x90, virtual false, abstract: false, final false
inline bool ImportXmlString(::StringW  xmlString) ;

/// @brief Method KFXFEeKEaRBLbOnXyDgnWKxLDhPSA, addr 0x1819a41a0, size 0x330, virtual false, abstract: false, final false
inline void KFXFEeKEaRBLbOnXyDgnWKxLDhPSA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::InputBehavior* New_ctor() ;

static inline ::Rewired::InputBehavior* New_ctor(::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RFoiebKhEkXzfARlVcjvPSNRZlMD, addr 0x1819a44d0, size 0x740, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* RFoiebKhEkXzfARlVcjvPSNRZlMD() ;

/// @brief Method Reset, addr 0x1819a4c10, size 0x100, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToJsonString, addr 0x1819a4d10, size 0x90, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

/// @brief Method ToXmlString, addr 0x1819a4da0, size 0x90, virtual false, abstract: false, final false
inline ::StringW ToXmlString() ;

constexpr float_t const& __cordl_internal_get__buttonDeadZone() const;

constexpr float_t& __cordl_internal_get__buttonDeadZone() ;

constexpr float_t const& __cordl_internal_get__buttonDoublePressSpeed() const;

constexpr float_t& __cordl_internal_get__buttonDoublePressSpeed() ;

constexpr float_t const& __cordl_internal_get__buttonDownBuffer() const;

constexpr float_t& __cordl_internal_get__buttonDownBuffer() ;

constexpr float_t const& __cordl_internal_get__buttonLongPressExpiresIn() const;

constexpr float_t& __cordl_internal_get__buttonLongPressExpiresIn() ;

constexpr float_t const& __cordl_internal_get__buttonLongPressTime() const;

constexpr float_t& __cordl_internal_get__buttonLongPressTime() ;

constexpr float_t const& __cordl_internal_get__buttonRepeatDelay() const;

constexpr float_t& __cordl_internal_get__buttonRepeatDelay() ;

constexpr float_t const& __cordl_internal_get__buttonRepeatRate() const;

constexpr float_t& __cordl_internal_get__buttonRepeatRate() ;

constexpr float_t const& __cordl_internal_get__buttonShortPressExpiresIn() const;

constexpr float_t& __cordl_internal_get__buttonShortPressExpiresIn() ;

constexpr float_t const& __cordl_internal_get__buttonShortPressTime() const;

constexpr float_t& __cordl_internal_get__buttonShortPressTime() ;

constexpr float_t const& __cordl_internal_get__customControllerAxisSensitivity() const;

constexpr float_t& __cordl_internal_get__customControllerAxisSensitivity() ;

constexpr float_t const& __cordl_internal_get__digitalAxisGravity() const;

constexpr float_t& __cordl_internal_get__digitalAxisGravity() ;

constexpr bool const& __cordl_internal_get__digitalAxisInstantReverse() const;

constexpr bool& __cordl_internal_get__digitalAxisInstantReverse() ;

constexpr float_t const& __cordl_internal_get__digitalAxisSensitivity() const;

constexpr float_t& __cordl_internal_get__digitalAxisSensitivity() ;

constexpr bool const& __cordl_internal_get__digitalAxisSimulation() const;

constexpr bool& __cordl_internal_get__digitalAxisSimulation() ;

constexpr bool const& __cordl_internal_get__digitalAxisSnap() const;

constexpr bool& __cordl_internal_get__digitalAxisSnap() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr float_t const& __cordl_internal_get__joystickAxisSensitivity() const;

constexpr float_t& __cordl_internal_get__joystickAxisSensitivity() ;

constexpr ::Rewired::MouseOtherAxisMode const& __cordl_internal_get__mouseOtherAxisMode() const;

constexpr ::Rewired::MouseOtherAxisMode& __cordl_internal_get__mouseOtherAxisMode() ;

constexpr float_t const& __cordl_internal_get__mouseOtherAxisSensitivity() const;

constexpr float_t& __cordl_internal_get__mouseOtherAxisSensitivity() ;

constexpr ::Rewired::MouseXYAxisDeltaCalc const& __cordl_internal_get__mouseXYAxisDeltaCalc() const;

constexpr ::Rewired::MouseXYAxisDeltaCalc& __cordl_internal_get__mouseXYAxisDeltaCalc() ;

constexpr ::Rewired::MouseXYAxisMode const& __cordl_internal_get__mouseXYAxisMode() const;

constexpr ::Rewired::MouseXYAxisMode& __cordl_internal_get__mouseXYAxisMode() ;

constexpr float_t const& __cordl_internal_get__mouseXYAxisSensitivity() const;

constexpr float_t& __cordl_internal_get__mouseXYAxisSensitivity() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__buttonDeadZone(float_t  value) ;

constexpr void __cordl_internal_set__buttonDoublePressSpeed(float_t  value) ;

constexpr void __cordl_internal_set__buttonDownBuffer(float_t  value) ;

constexpr void __cordl_internal_set__buttonLongPressExpiresIn(float_t  value) ;

constexpr void __cordl_internal_set__buttonLongPressTime(float_t  value) ;

constexpr void __cordl_internal_set__buttonRepeatDelay(float_t  value) ;

constexpr void __cordl_internal_set__buttonRepeatRate(float_t  value) ;

constexpr void __cordl_internal_set__buttonShortPressExpiresIn(float_t  value) ;

constexpr void __cordl_internal_set__buttonShortPressTime(float_t  value) ;

constexpr void __cordl_internal_set__customControllerAxisSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__digitalAxisGravity(float_t  value) ;

constexpr void __cordl_internal_set__digitalAxisInstantReverse(bool  value) ;

constexpr void __cordl_internal_set__digitalAxisSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__digitalAxisSimulation(bool  value) ;

constexpr void __cordl_internal_set__digitalAxisSnap(bool  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__joystickAxisSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__mouseOtherAxisMode(::Rewired::MouseOtherAxisMode  value) ;

constexpr void __cordl_internal_set__mouseOtherAxisSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__mouseXYAxisDeltaCalc(::Rewired::MouseXYAxisDeltaCalc  value) ;

constexpr void __cordl_internal_set__mouseXYAxisMode(::Rewired::MouseXYAxisMode  value) ;

constexpr void __cordl_internal_set__mouseXYAxisSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1819a4f20, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a4e30, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aReumDhQzarjtJfUbCkMHXtpkjCI, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void aReumDhQzarjtJfUbCkMHXtpkjCI(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_buttonDeadZone, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonDeadZone() ;

/// @brief Method get_buttonDoublePressSpeed, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonDoublePressSpeed() ;

/// @brief Method get_buttonDownBuffer, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonDownBuffer() ;

/// @brief Method get_buttonLongPressExpiresIn, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonLongPressExpiresIn() ;

/// @brief Method get_buttonLongPressTime, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonLongPressTime() ;

/// @brief Method get_buttonRepeatDelay, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonRepeatDelay() ;

/// @brief Method get_buttonRepeatRate, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonRepeatRate() ;

/// @brief Method get_buttonShortPressExpiresIn, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonShortPressExpiresIn() ;

/// @brief Method get_buttonShortPressTime, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonShortPressTime() ;

/// @brief Method get_customControllerAxisSensitivity, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_customControllerAxisSensitivity() ;

/// @brief Method get_digitalAxisGravity, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_digitalAxisGravity() ;

/// @brief Method get_digitalAxisInstantReverse, addr 0x1803a7510, size 0x10, virtual false, abstract: false, final false
inline bool get_digitalAxisInstantReverse() ;

/// @brief Method get_digitalAxisSensitivity, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_digitalAxisSensitivity() ;

/// @brief Method get_digitalAxisSimulation, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_digitalAxisSimulation() ;

/// @brief Method get_digitalAxisSnap, addr 0x1803a74f0, size 0x10, virtual false, abstract: false, final false
inline bool get_digitalAxisSnap() ;

/// @brief Method get_id, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_joystickAxisSensitivity, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_joystickAxisSensitivity() ;

/// @brief Method get_mouseOtherAxisMode, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::MouseOtherAxisMode get_mouseOtherAxisMode() ;

/// @brief Method get_mouseOtherAxisSensitivity, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_mouseOtherAxisSensitivity() ;

/// @brief Method get_mouseXYAxisDeltaCalc, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::MouseXYAxisDeltaCalc get_mouseXYAxisDeltaCalc() ;

/// @brief Method get_mouseXYAxisMode, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::MouseXYAxisMode get_mouseXYAxisMode() ;

/// @brief Method get_mouseXYAxisSensitivity, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_mouseXYAxisSensitivity() ;

/// @brief Method get_name, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method qkUAkcZuQOxrxQdCIbcNeIDGckNDA, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void qkUAkcZuQOxrxQdCIbcNeIDGckNDA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_buttonDeadZone, addr 0x1819a4f50, size 0x30, virtual false, abstract: false, final false
inline void set_buttonDeadZone(float_t  value) ;

/// @brief Method set_buttonDoublePressSpeed, addr 0x1819a4f80, size 0x30, virtual false, abstract: false, final false
inline void set_buttonDoublePressSpeed(float_t  value) ;

/// @brief Method set_buttonDownBuffer, addr 0x1819a4fb0, size 0x30, virtual false, abstract: false, final false
inline void set_buttonDownBuffer(float_t  value) ;

/// @brief Method set_buttonLongPressExpiresIn, addr 0x1819a4fe0, size 0x30, virtual false, abstract: false, final false
inline void set_buttonLongPressExpiresIn(float_t  value) ;

/// @brief Method set_buttonLongPressTime, addr 0x1819a5010, size 0x30, virtual false, abstract: false, final false
inline void set_buttonLongPressTime(float_t  value) ;

/// @brief Method set_buttonRepeatDelay, addr 0x1819a5040, size 0x20, virtual false, abstract: false, final false
inline void set_buttonRepeatDelay(float_t  value) ;

/// @brief Method set_buttonRepeatRate, addr 0x1819a5060, size 0x30, virtual false, abstract: false, final false
inline void set_buttonRepeatRate(float_t  value) ;

/// @brief Method set_buttonShortPressExpiresIn, addr 0x1819a5090, size 0x30, virtual false, abstract: false, final false
inline void set_buttonShortPressExpiresIn(float_t  value) ;

/// @brief Method set_buttonShortPressTime, addr 0x1819a50c0, size 0x30, virtual false, abstract: false, final false
inline void set_buttonShortPressTime(float_t  value) ;

/// @brief Method set_customControllerAxisSensitivity, addr 0x1819a50f0, size 0x30, virtual false, abstract: false, final false
inline void set_customControllerAxisSensitivity(float_t  value) ;

/// @brief Method set_digitalAxisGravity, addr 0x1819a5120, size 0x30, virtual false, abstract: false, final false
inline void set_digitalAxisGravity(float_t  value) ;

/// @brief Method set_digitalAxisInstantReverse, addr 0x1803a7520, size 0x10, virtual false, abstract: false, final false
inline void set_digitalAxisInstantReverse(bool  value) ;

/// @brief Method set_digitalAxisSensitivity, addr 0x1819a5150, size 0x30, virtual false, abstract: false, final false
inline void set_digitalAxisSensitivity(float_t  value) ;

/// @brief Method set_digitalAxisSimulation, addr 0x1803a74c0, size 0x10, virtual false, abstract: false, final false
inline void set_digitalAxisSimulation(bool  value) ;

/// @brief Method set_digitalAxisSnap, addr 0x1803a7500, size 0x10, virtual false, abstract: false, final false
inline void set_digitalAxisSnap(bool  value) ;

/// @brief Method set_joystickAxisSensitivity, addr 0x1819a5180, size 0x30, virtual false, abstract: false, final false
inline void set_joystickAxisSensitivity(float_t  value) ;

/// @brief Method set_mouseOtherAxisMode, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_mouseOtherAxisMode(::Rewired::MouseOtherAxisMode  value) ;

/// @brief Method set_mouseOtherAxisSensitivity, addr 0x1819a51b0, size 0x30, virtual false, abstract: false, final false
inline void set_mouseOtherAxisSensitivity(float_t  value) ;

/// @brief Method set_mouseXYAxisDeltaCalc, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void set_mouseXYAxisDeltaCalc(::Rewired::MouseXYAxisDeltaCalc  value) ;

/// @brief Method set_mouseXYAxisMode, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_mouseXYAxisMode(::Rewired::MouseXYAxisMode  value) ;

/// @brief Method set_mouseXYAxisSensitivity, addr 0x1819a51e0, size 0x30, virtual false, abstract: false, final false
inline void set_mouseXYAxisSensitivity(float_t  value) ;

/// @brief Method xdchdNaLkBKVWLVCAFGeZJuIFZTd, addr 0x1819a5210, size 0xe0, virtual false, abstract: false, final false
static inline void xdchdNaLkBKVWLVCAFGeZJuIFZTd(::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputBehavior() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputBehavior", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputBehavior(InputBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputBehavior", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputBehavior(InputBehavior const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2075};

/// @brief Field _id, offset: 0x10, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _joystickAxisSensitivity, offset: 0x20, size: 0x4, def value: None
 float_t  ____joystickAxisSensitivity;

/// @brief Field _digitalAxisSimulation, offset: 0x24, size: 0x1, def value: None
 bool  ____digitalAxisSimulation;

/// @brief Field _digitalAxisSnap, offset: 0x25, size: 0x1, def value: None
 bool  ____digitalAxisSnap;

/// @brief Field _digitalAxisInstantReverse, offset: 0x26, size: 0x1, def value: None
 bool  ____digitalAxisInstantReverse;

/// @brief Field _digitalAxisGravity, offset: 0x28, size: 0x4, def value: None
 float_t  ____digitalAxisGravity;

/// @brief Field _digitalAxisSensitivity, offset: 0x2c, size: 0x4, def value: None
 float_t  ____digitalAxisSensitivity;

/// @brief Field _mouseXYAxisMode, offset: 0x30, size: 0x4, def value: None
 ::Rewired::MouseXYAxisMode  ____mouseXYAxisMode;

/// @brief Field _mouseOtherAxisMode, offset: 0x34, size: 0x4, def value: None
 ::Rewired::MouseOtherAxisMode  ____mouseOtherAxisMode;

/// @brief Field _mouseXYAxisSensitivity, offset: 0x38, size: 0x4, def value: None
 float_t  ____mouseXYAxisSensitivity;

/// @brief Field _mouseXYAxisDeltaCalc, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::MouseXYAxisDeltaCalc  ____mouseXYAxisDeltaCalc;

/// @brief Field _mouseOtherAxisSensitivity, offset: 0x40, size: 0x4, def value: None
 float_t  ____mouseOtherAxisSensitivity;

/// @brief Field _customControllerAxisSensitivity, offset: 0x44, size: 0x4, def value: None
 float_t  ____customControllerAxisSensitivity;

/// @brief Field _buttonDoublePressSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ____buttonDoublePressSpeed;

/// @brief Field _buttonShortPressTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ____buttonShortPressTime;

/// @brief Field _buttonShortPressExpiresIn, offset: 0x50, size: 0x4, def value: None
 float_t  ____buttonShortPressExpiresIn;

/// @brief Field _buttonLongPressTime, offset: 0x54, size: 0x4, def value: None
 float_t  ____buttonLongPressTime;

/// @brief Field _buttonLongPressExpiresIn, offset: 0x58, size: 0x4, def value: None
 float_t  ____buttonLongPressExpiresIn;

/// @brief Field _buttonDeadZone, offset: 0x5c, size: 0x4, def value: None
 float_t  ____buttonDeadZone;

/// @brief Field _buttonDownBuffer, offset: 0x60, size: 0x4, def value: None
 float_t  ____buttonDownBuffer;

/// @brief Field _buttonRepeatRate, offset: 0x64, size: 0x4, def value: None
 float_t  ____buttonRepeatRate;

/// @brief Field _buttonRepeatDelay, offset: 0x68, size: 0x4, def value: None
 float_t  ____buttonRepeatDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputBehavior, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____joystickAxisSensitivity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____digitalAxisSimulation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____digitalAxisSnap) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____digitalAxisInstantReverse) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____digitalAxisGravity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____digitalAxisSensitivity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____mouseXYAxisMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____mouseOtherAxisMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____mouseXYAxisSensitivity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____mouseXYAxisDeltaCalc) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____mouseOtherAxisSensitivity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____customControllerAxisSensitivity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonDoublePressSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonShortPressTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonShortPressExpiresIn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonLongPressTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonLongPressExpiresIn) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonDeadZone) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonDownBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonRepeatRate) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputBehavior, ____buttonRepeatDelay) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputBehavior) == 0x70, "Size mismatch!");

} // namespace end def Rewired
