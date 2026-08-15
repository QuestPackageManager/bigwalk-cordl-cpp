#pragma once
// IWYU pragma private; include "Rewired/ControllerElementRole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ControllerElementRole)
// Forward declare root types
namespace Rewired {
class ControllerElementRole;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerElementRole*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerElementRole*, "Rewired", "ControllerElementRole");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerElementRole
class CORDL_TYPE ControllerElementRole : public ::System::Object {
public:
// Declarations
/// @brief Field __s_names, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___s_names, put=setStaticF___s_names)) ::ArrayW<::StringW>  __s_names;

/// @brief Method GetNames, addr 0x181985090, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetNames() ;

static inline ::ArrayW<::StringW> getStaticF___s_names() ;

/// @brief Method get_s_names, addr 0x181985100, size 0x610, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_s_names() ;

static inline void setStaticF___s_names(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerElementRole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerElementRole", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerElementRole(ControllerElementRole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerElementRole", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerElementRole(ControllerElementRole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2025};

/// @brief Field accelerator offset 0xffffffff size 0x8
static constexpr ::ConstString  accelerator{u"racing/accelerator"};

/// @brief Field brake offset 0xffffffff size 0x8
static constexpr ::ConstString  brake{u"racing/brake"};

/// @brief Field capture offset 0xffffffff size 0x8
static constexpr ::ConstString  capture{u"capture"};

/// @brief Field chat offset 0xffffffff size 0x8
static constexpr ::ConstString  chat{u"chat"};

/// @brief Field clutch offset 0xffffffff size 0x8
static constexpr ::ConstString  clutch{u"racing/clutch"};

/// @brief Field dpadD offset 0xffffffff size 0x8
static constexpr ::ConstString  dpadD{u"dpad/down"};

/// @brief Field dpadL offset 0xffffffff size 0x8
static constexpr ::ConstString  dpadL{u"dpad/left"};

/// @brief Field dpadR offset 0xffffffff size 0x8
static constexpr ::ConstString  dpadR{u"dpad/right"};

/// @brief Field dpadU offset 0xffffffff size 0x8
static constexpr ::ConstString  dpadU{u"dpad/up"};

/// @brief Field flightLeftPedal offset 0xffffffff size 0x8
static constexpr ::ConstString  flightLeftPedal{u"flight/left_pedal"};

/// @brief Field flightRightPedal offset 0xffffffff size 0x8
static constexpr ::ConstString  flightRightPedal{u"flight/right_pedal"};

/// @brief Field flightSlidePedals offset 0xffffffff size 0x8
static constexpr ::ConstString  flightSlidePedals{u"flight/slide_pedals"};

/// @brief Field flightThrottle offset 0xffffffff size 0x8
static constexpr ::ConstString  flightThrottle{u"flight/throttle"};

/// @brief Field flightYokeRotate offset 0xffffffff size 0x8
static constexpr ::ConstString  flightYokeRotate{u"flight/yoke/rotate"};

/// @brief Field flightYokeZ offset 0xffffffff size 0x8
static constexpr ::ConstString  flightYokeZ{u"flight/yoke/z"};

/// @brief Field gamepadA offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadA{u"gamepad/a"};

/// @brief Field gamepadB offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadB{u"gamepad/b"};

/// @brief Field gamepadC offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadC{u"gamepad/c"};

/// @brief Field gamepadLB offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadLB{u"gamepad/lb"};

/// @brief Field gamepadLT offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadLT{u"gamepad/lt"};

/// @brief Field gamepadLogoButton offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadLogoButton{u"gamepad/logo_button"};

/// @brief Field gamepadRB offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadRB{u"gamepad/rb"};

/// @brief Field gamepadRT offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadRT{u"gamepad/rt"};

/// @brief Field gamepadSelect offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadSelect{u"gamepad/select"};

/// @brief Field gamepadStart offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadStart{u"gamepad/start"};

/// @brief Field gamepadTouchpadPress offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadTouchpadPress{u"gamepad/touchpad/press"};

/// @brief Field gamepadX offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadX{u"gamepad/x"};

/// @brief Field gamepadY offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadY{u"gamepad/y"};

/// @brief Field gamepadZ offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepadZ{u"gamepad/z"};

/// @brief Field gearReverse offset 0xffffffff size 0x8
static constexpr ::ConstString  gearReverse{u"racing/gear/reverse"};

/// @brief Field gearShiftDown offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShiftDown{u"racing/gear/down"};

/// @brief Field gearShiftUp offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShiftUp{u"racing/gear/up"};

/// @brief Field gearShifter1 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter1{u"racing/gear/1"};

/// @brief Field gearShifter10 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter10{u"racing/gear/10"};

/// @brief Field gearShifter2 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter2{u"racing/gear/2"};

/// @brief Field gearShifter3 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter3{u"racing/gear/3"};

/// @brief Field gearShifter4 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter4{u"racing/gear/4"};

/// @brief Field gearShifter5 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter5{u"racing/gear/5"};

/// @brief Field gearShifter6 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter6{u"racing/gear/6"};

/// @brief Field gearShifter7 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter7{u"racing/gear/7"};

/// @brief Field gearShifter8 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter8{u"racing/gear/8"};

/// @brief Field gearShifter9 offset 0xffffffff size 0x8
static constexpr ::ConstString  gearShifter9{u"racing/gear/9"};

/// @brief Field home offset 0xffffffff size 0x8
static constexpr ::ConstString  home{u"home"};

/// @brief Field joyConLeftSL offset 0xffffffff size 0x8
static constexpr ::ConstString  joyConLeftSL{u"left_joycon/sl"};

/// @brief Field joyConLeftSR offset 0xffffffff size 0x8
static constexpr ::ConstString  joyConLeftSR{u"left_joycon/sr"};

/// @brief Field joyConRightSL offset 0xffffffff size 0x8
static constexpr ::ConstString  joyConRightSL{u"right_joycon/sl"};

/// @brief Field joyConRightSR offset 0xffffffff size 0x8
static constexpr ::ConstString  joyConRightSR{u"right_joycon/sr"};

/// @brief Field joyConSL offset 0xffffffff size 0x8
static constexpr ::ConstString  joyConSL{u"joycon/sl"};

/// @brief Field joyConSR offset 0xffffffff size 0x8
static constexpr ::ConstString  joyConSR{u"joycon/sr"};

/// @brief Field joyMouse1X offset 0xffffffff size 0x8
static constexpr ::ConstString  joyMouse1X{u"joy_mouse1/x"};

/// @brief Field joyMouse1Y offset 0xffffffff size 0x8
static constexpr ::ConstString  joyMouse1Y{u"joy_mouse1/y"};

/// @brief Field joyMouse2X offset 0xffffffff size 0x8
static constexpr ::ConstString  joyMouse2X{u"joy_mouse2/x"};

/// @brief Field joyMouse2Y offset 0xffffffff size 0x8
static constexpr ::ConstString  joyMouse2Y{u"joy_mouse2/y"};

/// @brief Field mute offset 0xffffffff size 0x8
static constexpr ::ConstString  mute{u"mute"};

/// @brief Field stick1Press offset 0xffffffff size 0x8
static constexpr ::ConstString  stick1Press{u"stick1/press"};

/// @brief Field stick1Trigger offset 0xffffffff size 0x8
static constexpr ::ConstString  stick1Trigger{u"stick1/trigger"};

/// @brief Field stick1TriggerStage1 offset 0xffffffff size 0x8
static constexpr ::ConstString  stick1TriggerStage1{u"stick1/trigger/stage1"};

/// @brief Field stick1X offset 0xffffffff size 0x8
static constexpr ::ConstString  stick1X{u"stick1/x"};

/// @brief Field stick1Y offset 0xffffffff size 0x8
static constexpr ::ConstString  stick1Y{u"stick1/y"};

/// @brief Field stick1Z offset 0xffffffff size 0x8
static constexpr ::ConstString  stick1Z{u"stick1/z"};

/// @brief Field stick2Press offset 0xffffffff size 0x8
static constexpr ::ConstString  stick2Press{u"stick2/press"};

/// @brief Field stick2Trigger offset 0xffffffff size 0x8
static constexpr ::ConstString  stick2Trigger{u"stick2/trigger"};

/// @brief Field stick2TriggerStage1 offset 0xffffffff size 0x8
static constexpr ::ConstString  stick2TriggerStage1{u"stick2/trigger/stage1"};

/// @brief Field stick2X offset 0xffffffff size 0x8
static constexpr ::ConstString  stick2X{u"stick2/x"};

/// @brief Field stick2Y offset 0xffffffff size 0x8
static constexpr ::ConstString  stick2Y{u"stick2/y"};

/// @brief Field stick2Z offset 0xffffffff size 0x8
static constexpr ::ConstString  stick2Z{u"stick2/z"};

/// @brief Field wheel offset 0xffffffff size 0x8
static constexpr ::ConstString  wheel{u"racing/wheel"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerElementRole) == 0x10, "Size mismatch!");

} // namespace end def Rewired
