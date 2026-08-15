#pragma once
// IWYU pragma private; include "GlobalNamespace/Rebinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rebinder)
namespace GlobalNamespace {
class RebindAction;
}
namespace GlobalNamespace {
struct Rebinder_LayoutType;
}
namespace GlobalNamespace {
struct Rebinder_RebindType;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct ControllerPollingInfo;
}
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class InputMapper_ConflictFoundEventData;
}
namespace Rewired {
class InputMapper_Context;
}
namespace Rewired {
class InputMapper_InputMappedEventData;
}
namespace Rewired {
class InputMapper_StoppedEventData;
}
namespace Rewired {
class InputMapper;
}
namespace Rewired {
class Player;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct Rebinder_LayoutType;
}
namespace GlobalNamespace {
struct Rebinder_RebindType;
}
namespace GlobalNamespace {
class Rebinder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Rebinder_LayoutType);
MARK_VAL_T(::GlobalNamespace::Rebinder_RebindType);
MARK_REF_T(::GlobalNamespace::Rebinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Rebinder_LayoutType, "", "Rebinder/LayoutType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Rebinder_RebindType, "", "Rebinder/RebindType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Rebinder*, "", "Rebinder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Rebinder/RebindType
struct CORDL_TYPE Rebinder_RebindType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Rebinder_RebindType_Unwrapped
enum struct __Rebinder_RebindType_Unwrapped : int32_t {
__E_Joystick = static_cast<int32_t>(0x0),
__E_KeyboardMouse = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Rebinder_RebindType_Unwrapped () const noexcept {
return static_cast<__Rebinder_RebindType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Rebinder_RebindType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Rebinder_RebindType(int32_t  value__) noexcept;

/// @brief Field Joystick value: I32(0)
static ::GlobalNamespace::Rebinder_RebindType const Joystick;

/// @brief Field KeyboardMouse value: I32(1)
static ::GlobalNamespace::Rebinder_RebindType const KeyboardMouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Rebinder_RebindType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Rebinder_RebindType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Rebinder/LayoutType
struct CORDL_TYPE Rebinder_LayoutType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Rebinder_LayoutType_Unwrapped
enum struct __Rebinder_LayoutType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_NmouseR = static_cast<int32_t>(0x2),
__E_NmouseL = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Rebinder_LayoutType_Unwrapped () const noexcept {
return static_cast<__Rebinder_LayoutType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Rebinder_LayoutType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Rebinder_LayoutType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::Rebinder_LayoutType const Default;

/// @brief Field NmouseL value: I32(3)
static ::GlobalNamespace::Rebinder_LayoutType const NmouseL;

/// @brief Field NmouseR value: I32(2)
static ::GlobalNamespace::Rebinder_LayoutType const NmouseR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Rebinder_LayoutType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Rebinder_LayoutType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Rebinder::LayoutType, Rebinder::RebindType, Rewired.Pole, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Rebinder
class CORDL_TYPE Rebinder : public ::System::Object {
public:
// Declarations
using LayoutType = ::GlobalNamespace::Rebinder_LayoutType;

using RebindType = ::GlobalNamespace::Rebinder_RebindType;

 __declspec(property(get=get_IsBinding, put=set_IsBinding)) bool  IsBinding;

/// @brief Field <IsBinding>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsBinding_k__BackingField, put=__cordl_internal_set__IsBinding_k__BackingField)) bool  _IsBinding_k__BackingField;

/// @brief Field _player, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::Rewired::Player*  _player;

/// @brief Field bindJoystick, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bindJoystick, put=__cordl_internal_set_bindJoystick)) ::Rewired::Controller*  bindJoystick;

/// @brief Field conflictFoundEventData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_conflictFoundEventData, put=__cordl_internal_set_conflictFoundEventData)) ::Rewired::InputMapper_ConflictFoundEventData*  conflictFoundEventData;

/// @brief Field inputMapper, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMapper, put=__cordl_internal_set_inputMapper)) ::Rewired::InputMapper*  inputMapper;

/// @brief Field keyboardInputMapper, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyboardInputMapper, put=__cordl_internal_set_keyboardInputMapper)) ::Rewired::InputMapper*  keyboardInputMapper;

/// @brief Field lastDisallowedAxisPole, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDisallowedAxisPole, put=__cordl_internal_set_lastDisallowedAxisPole)) ::Rewired::Pole  lastDisallowedAxisPole;

/// @brief Field lastDisallowedElementIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDisallowedElementIndex, put=__cordl_internal_set_lastDisallowedElementIndex)) int32_t  lastDisallowedElementIndex;

/// @brief Field layoutName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_layoutName, put=setStaticF_layoutName)) ::StringW  layoutName;

/// @brief Field layoutType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layoutType, put=__cordl_internal_set_layoutType)) ::GlobalNamespace::Rebinder_LayoutType  layoutType;

/// @brief Field onDisallowedElementPressed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDisallowedElementPressed, put=__cordl_internal_set_onDisallowedElementPressed)) ::System::Action*  onDisallowedElementPressed;

/// @brief Field onRebindFinishedEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRebindFinishedEvent, put=__cordl_internal_set_onRebindFinishedEvent)) ::System::Action_1<bool>*  onRebindFinishedEvent;

 __declspec(property(get=get_player, put=set_player)) ::Rewired::Player*  player;

/// @brief Field rebindOption, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindOption, put=__cordl_internal_set_rebindOption)) ::GlobalNamespace::RebindAction*  rebindOption;

/// @brief Field rebindType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rebindType, put=__cordl_internal_set_rebindType)) ::GlobalNamespace::Rebinder_RebindType  rebindType;

/// @brief Method CancelBind, addr 0x180454840, size 0xa0, virtual false, abstract: false, final false
inline void CancelBind() ;

/// @brief Method CheckAgainstAction, addr 0x1804548e0, size 0x2b0, virtual false, abstract: false, final false
inline bool CheckAgainstAction(::Rewired::ControllerPollingInfo  info, int32_t  action) ;

/// @brief Method CleanUp, addr 0x180454b90, size 0xb0, virtual false, abstract: false, final false
inline void CleanUp() ;

/// @brief Method ClearAction, addr 0x180454c40, size 0x280, virtual false, abstract: false, final false
static inline void ClearAction(::Rewired::Controller*  controller, int32_t  actionID, ::Rewired::AxisRange  range) ;

/// @brief Method Finalize, addr 0x180454ec0, size 0xb0, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FinishRebind, addr 0x180454f70, size 0xb0, virtual false, abstract: false, final false
inline void FinishRebind(bool  success) ;

/// @brief Method GetContext, addr 0x180455020, size 0x1a0, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Context* GetContext(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  joystick, int32_t  action, ::Rewired::AxisRange  range) ;

static inline ::GlobalNamespace::Rebinder* New_ctor(::GlobalNamespace::Rebinder_LayoutType  layout, ::GlobalNamespace::Rebinder_RebindType  rebindControllerType, ::Rewired::Player*  player) ;

/// @brief Method OnConflictFound, addr 0x1804551c0, size 0x350, virtual false, abstract: false, final false
inline void OnConflictFound(::Rewired::InputMapper_ConflictFoundEventData*  data) ;

/// @brief Method OnControllerPreDisconnect, addr 0x180455510, size 0x70, virtual false, abstract: false, final false
inline void OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnInputMapped, addr 0x180455580, size 0x40, virtual false, abstract: false, final false
inline void OnInputMapped(::Rewired::InputMapper_InputMappedEventData*  data) ;

/// @brief Method OnIsElementAllowed, addr 0x1804555c0, size 0x150, virtual false, abstract: false, final false
inline bool OnIsElementAllowed(::Rewired::ControllerPollingInfo  info) ;

/// @brief Method OnStopped, addr 0x180455710, size 0x10, virtual false, abstract: false, final false
inline void OnStopped(::Rewired::InputMapper_StoppedEventData*  data) ;

/// @brief Method RemoveStickConflicts, addr 0x180455720, size 0x290, virtual false, abstract: false, final false
inline bool RemoveStickConflicts(int32_t  stickMapCatID, ::Rewired::Controller*  controller) ;

/// @brief Method SetLayoutName, addr 0x1804559b0, size 0x90, virtual false, abstract: false, final false
inline void SetLayoutName() ;

/// @brief Method StartRebind, addr 0x180455a40, size 0x1f0, virtual false, abstract: false, final false
inline void StartRebind(::GlobalNamespace::RebindAction*  rebindable, ::Rewired::Controller*  controller) ;

constexpr bool const& __cordl_internal_get__IsBinding_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsBinding_k__BackingField() ;

constexpr ::Rewired::Player* const& __cordl_internal_get__player() const;

constexpr ::Rewired::Player*& __cordl_internal_get__player() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_bindJoystick() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_bindJoystick() ;

constexpr ::Rewired::InputMapper_ConflictFoundEventData* const& __cordl_internal_get_conflictFoundEventData() const;

constexpr ::Rewired::InputMapper_ConflictFoundEventData*& __cordl_internal_get_conflictFoundEventData() ;

constexpr ::Rewired::InputMapper* const& __cordl_internal_get_inputMapper() const;

constexpr ::Rewired::InputMapper*& __cordl_internal_get_inputMapper() ;

constexpr ::Rewired::InputMapper* const& __cordl_internal_get_keyboardInputMapper() const;

constexpr ::Rewired::InputMapper*& __cordl_internal_get_keyboardInputMapper() ;

constexpr ::Rewired::Pole const& __cordl_internal_get_lastDisallowedAxisPole() const;

constexpr ::Rewired::Pole& __cordl_internal_get_lastDisallowedAxisPole() ;

constexpr int32_t const& __cordl_internal_get_lastDisallowedElementIndex() const;

constexpr int32_t& __cordl_internal_get_lastDisallowedElementIndex() ;

constexpr ::GlobalNamespace::Rebinder_LayoutType const& __cordl_internal_get_layoutType() const;

constexpr ::GlobalNamespace::Rebinder_LayoutType& __cordl_internal_get_layoutType() ;

constexpr ::System::Action* const& __cordl_internal_get_onDisallowedElementPressed() const;

constexpr ::System::Action*& __cordl_internal_get_onDisallowedElementPressed() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onRebindFinishedEvent() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_onRebindFinishedEvent() ;

constexpr ::GlobalNamespace::RebindAction* const& __cordl_internal_get_rebindOption() const;

constexpr ::GlobalNamespace::RebindAction*& __cordl_internal_get_rebindOption() ;

constexpr ::GlobalNamespace::Rebinder_RebindType const& __cordl_internal_get_rebindType() const;

constexpr ::GlobalNamespace::Rebinder_RebindType& __cordl_internal_get_rebindType() ;

constexpr void __cordl_internal_set__IsBinding_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__player(::Rewired::Player*  value) ;

constexpr void __cordl_internal_set_bindJoystick(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_conflictFoundEventData(::Rewired::InputMapper_ConflictFoundEventData*  value) ;

constexpr void __cordl_internal_set_inputMapper(::Rewired::InputMapper*  value) ;

constexpr void __cordl_internal_set_keyboardInputMapper(::Rewired::InputMapper*  value) ;

constexpr void __cordl_internal_set_lastDisallowedAxisPole(::Rewired::Pole  value) ;

constexpr void __cordl_internal_set_lastDisallowedElementIndex(int32_t  value) ;

constexpr void __cordl_internal_set_layoutType(::GlobalNamespace::Rebinder_LayoutType  value) ;

constexpr void __cordl_internal_set_onDisallowedElementPressed(::System::Action*  value) ;

constexpr void __cordl_internal_set_onRebindFinishedEvent(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_rebindOption(::GlobalNamespace::RebindAction*  value) ;

constexpr void __cordl_internal_set_rebindType(::GlobalNamespace::Rebinder_RebindType  value) ;

/// @brief Method .ctor, addr 0x180455c70, size 0x4c0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Rebinder_LayoutType  layout, ::GlobalNamespace::Rebinder_RebindType  rebindControllerType, ::Rewired::Player*  player) ;

static inline ::StringW getStaticF_layoutName() ;

/// @brief Method get_IsBinding, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBinding() ;

/// @brief Method get_player, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

static inline void setStaticF_layoutName(::StringW  value) ;

/// @brief Method set_IsBinding, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_IsBinding(bool  value) ;

/// @brief Method set_player, addr 0x180456130, size 0x20, virtual false, abstract: false, final false
inline void set_player(::Rewired::Player*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rebinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rebinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rebinder(Rebinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rebinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rebinder(Rebinder const& ) = delete;

/// @brief Field UNSET offset 0xffffffff size 0x4
static constexpr int32_t  UNSET{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5323};

/// @brief Field categoryName offset 0xffffffff size 0x8
static constexpr ::ConstString  categoryName{u"Default"};

/// @brief Field layoutId offset 0xffffffff size 0x4
static constexpr int32_t  layoutId{static_cast<int32_t>(0x0)};

/// @brief Field layoutNameDefault offset 0xffffffff size 0x8
static constexpr ::ConstString  layoutNameDefault{u"Default"};

/// @brief Field layoutNameNmouseL offset 0xffffffff size 0x8
static constexpr ::ConstString  layoutNameNmouseL{u"NMouseL"};

/// @brief Field layoutNameNmouseR offset 0xffffffff size 0x8
static constexpr ::ConstString  layoutNameNmouseR{u"NMouseR"};

/// @brief Field <IsBinding>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsBinding_k__BackingField;

/// @brief Field onRebindFinishedEvent, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___onRebindFinishedEvent;

/// @brief Field onDisallowedElementPressed, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onDisallowedElementPressed;

/// @brief Field rebindType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::Rebinder_RebindType  ___rebindType;

/// @brief Field layoutType, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::Rebinder_LayoutType  ___layoutType;

/// @brief Field conflictFoundEventData, offset: 0x30, size: 0x8, def value: None
 ::Rewired::InputMapper_ConflictFoundEventData*  ___conflictFoundEventData;

/// @brief Field bindJoystick, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Controller*  ___bindJoystick;

/// @brief Field rebindOption, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::RebindAction*  ___rebindOption;

/// @brief Field inputMapper, offset: 0x48, size: 0x8, def value: None
 ::Rewired::InputMapper*  ___inputMapper;

/// @brief Field keyboardInputMapper, offset: 0x50, size: 0x8, def value: None
 ::Rewired::InputMapper*  ___keyboardInputMapper;

/// @brief Field lastDisallowedElementIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___lastDisallowedElementIndex;

/// @brief Field lastDisallowedAxisPole, offset: 0x5c, size: 0x4, def value: None
 ::Rewired::Pole  ___lastDisallowedAxisPole;

/// @brief Field _player, offset: 0x60, size: 0x8, def value: None
 ::Rewired::Player*  ____player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Rebinder, ____IsBinding_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___onRebindFinishedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___onDisallowedElementPressed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___rebindType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___layoutType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___conflictFoundEventData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___bindJoystick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___rebindOption) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___inputMapper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___keyboardInputMapper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___lastDisallowedElementIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ___lastDisallowedAxisPole) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rebinder, ____player) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Rebinder) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
