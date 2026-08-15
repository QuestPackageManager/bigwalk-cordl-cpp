#pragma once
// IWYU pragma private; include "Rewired/Components/PlayerMouse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Components/zzzz__PlayerController_def.hpp"
#include "Rewired/zzzz__PlayerMouse_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerMouse)
namespace Rewired::Components {
class PlayerController_ElementInfo;
}
namespace Rewired::Components {
class PlayerMouse_ScreenPositionChangedHandler;
}
namespace Rewired::UI {
class IMouseInputSource;
}
namespace Rewired::Utils::Classes::Data {
struct ScreenRect;
}
namespace Rewired {
class IPlayerController;
}
namespace Rewired {
class IPlayerMouse;
}
namespace Rewired {
class PlayerController_Button;
}
namespace Rewired {
class PlayerController_MouseAxis;
}
namespace Rewired {
class PlayerController_MouseWheel;
}
namespace Rewired {
class PlayerController;
}
namespace Rewired {
struct PlayerMouse_MovementAreaUnit;
}
namespace Rewired {
class PlayerMouse;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Components {
class PlayerMouse;
}
namespace Rewired::Components {
class PlayerMouse_ScreenPositionChangedHandler;
}
// Write type traits
MARK_REF_T(::Rewired::Components::PlayerMouse*);
MARK_REF_T(::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerMouse*, "Rewired.Components", "PlayerMouse");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*, "Rewired.Components", "PlayerMouse/ScreenPositionChangedHandler");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector2
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerMouse/ScreenPositionChangedHandler
class CORDL_TYPE PlayerMouse_ScreenPositionChangedHandler : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
// Declarations
static inline ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse_ScreenPositionChangedHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_ScreenPositionChangedHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouse_ScreenPositionChangedHandler(PlayerMouse_ScreenPositionChangedHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_ScreenPositionChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouse_ScreenPositionChangedHandler(PlayerMouse_ScreenPositionChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies Rewired.Components.PlayerController, Rewired.PlayerMouse::MovementAreaUnit, UnityEngine.Rect
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerMouse
class CORDL_TYPE PlayerMouse : public ::Rewired::Components::PlayerController {
public:
// Declarations
using ScreenPositionChangedHandler = ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler;

 __declspec(property(get=wQuAHMHFhSPOjfeaaDeAMQJmXqiBA)) ::Rewired::PlayerMouse*  FsEzvEiGEMixAEjdFgDTjrjvimHhA;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_enabled)) bool  Rewired_UI_IMouseInputSource_enabled;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_locked)) bool  Rewired_UI_IMouseInputSource_locked;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_screenPosition)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_screenPosition;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_screenPositionDelta)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_screenPositionDelta;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_wheelDelta)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_wheelDelta;

/// @brief Field _clampToMovementArea, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__clampToMovementArea, put=__cordl_internal_set__clampToMovementArea)) bool  _clampToMovementArea;

/// @brief Field _defaultToCenter, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__defaultToCenter, put=__cordl_internal_set__defaultToCenter)) bool  _defaultToCenter;

/// @brief Field _movementArea, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__movementArea, put=__cordl_internal_set__movementArea)) ::UnityEngine::Rect  _movementArea;

/// @brief Field _movementAreaUnit, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__movementAreaUnit, put=__cordl_internal_set__movementAreaUnit)) ::Rewired::PlayerMouse_MovementAreaUnit  _movementAreaUnit;

/// @brief Field _onScreenPositionChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onScreenPositionChanged, put=__cordl_internal_set__onScreenPositionChanged)) ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*  _onScreenPositionChanged;

/// @brief Field _pointerSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointerSpeed, put=__cordl_internal_set__pointerSpeed)) float_t  _pointerSpeed;

/// @brief Field _useHardwarePointerPosition, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHardwarePointerPosition, put=__cordl_internal_set__useHardwarePointerPosition)) bool  _useHardwarePointerPosition;

 __declspec(property(get=get_clampToMovementArea, put=set_clampToMovementArea)) bool  clampToMovementArea;

 __declspec(property(get=get_defaultToCenter, put=set_defaultToCenter)) bool  defaultToCenter;

 __declspec(property(get=get_leftButton)) ::Rewired::PlayerController_Button*  leftButton;

 __declspec(property(get=get_middleButton)) ::Rewired::PlayerController_Button*  middleButton;

 __declspec(property(get=get_movementArea, put=set_movementArea)) ::Rewired::Utils::Classes::Data::ScreenRect  movementArea;

 __declspec(property(get=get_movementAreaUnit, put=set_movementAreaUnit)) ::Rewired::PlayerMouse_MovementAreaUnit  movementAreaUnit;

 __declspec(property(get=get_pointerSpeed, put=set_pointerSpeed)) float_t  pointerSpeed;

 __declspec(property(get=get_rightButton)) ::Rewired::PlayerController_Button*  rightButton;

 __declspec(property(get=get_screenPosition, put=set_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_screenPositionDelta)) ::UnityEngine::Vector2  screenPositionDelta;

 __declspec(property(get=get_screenPositionPrev)) ::UnityEngine::Vector2  screenPositionPrev;

 __declspec(property(get=get_useHardwarePointerPosition, put=set_useHardwarePointerPosition)) bool  useHardwarePointerPosition;

 __declspec(property(get=get_wheel)) ::Rewired::PlayerController_MouseWheel*  wheel;

 __declspec(property(get=get_xAxis)) ::Rewired::PlayerController_MouseAxis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::PlayerController_MouseAxis*  yAxis;

/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr operator  ::Rewired::IPlayerController*() noexcept;

/// @brief Convert operator to "::Rewired::IPlayerMouse"
constexpr operator  ::Rewired::IPlayerMouse*() noexcept;

/// @brief Convert operator to "::Rewired::UI::IMouseInputSource"
constexpr operator  ::Rewired::UI::IMouseInputSource*() noexcept;

/// @brief Method CreateSource, addr 0x1818dc770, size 0x350, virtual true, abstract: false, final false
inline ::Rewired::PlayerController* CreateSource(::System::Object*  args) ;

/// @brief Method Deinitialize, addr 0x1818dcac0, size 0x10, virtual true, abstract: false, final false
inline void Deinitialize() ;

/// @brief Method LvzDApjGvExguIQPjzTBGHaIBXzV, addr 0x1818dcad0, size 0xb0, virtual false, abstract: false, final false
inline void LvzDApjGvExguIQPjzTBGHaIBXzV(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Components::PlayerMouse* New_ctor() ;

/// @brief Method OnReset, addr 0x1818dcb80, size 0x170, virtual true, abstract: false, final false
inline void OnReset() ;

/// @brief Method OnValidated, addr 0x1818dccf0, size 0x4b0, virtual true, abstract: false, final false
inline void OnValidated() ;

/// @brief Method Rewired.IPlayerController.get_enabled, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_IPlayerController_get_enabled() ;

/// @brief Method Rewired.IPlayerController.set_enabled, addr 0x1818db9c0, size 0x10, virtual true, abstract: false, final true
inline void Rewired_IPlayerController_set_enabled(bool  value) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButton, addr 0x1818dd240, size 0x50, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButton(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButtonDown, addr 0x1818dd1a0, size 0x50, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButtonDown(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButtonUp, addr 0x1818dd1f0, size 0x50, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButtonUp(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.get_enabled, addr 0x1818dd290, size 0x50, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_get_enabled() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_locked, addr 0x1818dd2e0, size 0x50, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_get_locked() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_screenPosition, addr 0x1818dd390, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPosition() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_screenPositionDelta, addr 0x1818dd330, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPositionDelta() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_wheelDelta, addr 0x1818dd3f0, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_wheelDelta() ;

/// @brief Method Subscribe, addr 0x1818dd450, size 0x150, virtual true, abstract: false, final false
inline void Subscribe() ;

/// @brief Method UUnQYdFiQCuZVltLDIYbKpiELMyh, addr 0x1818dd5a0, size 0x670, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>* UUnQYdFiQCuZVltLDIYbKpiELMyh() ;

/// @brief Method Unsubscribe, addr 0x1818ddc10, size 0x150, virtual true, abstract: false, final false
inline void Unsubscribe() ;

constexpr bool const& __cordl_internal_get__clampToMovementArea() const;

constexpr bool& __cordl_internal_get__clampToMovementArea() ;

constexpr bool const& __cordl_internal_get__defaultToCenter() const;

constexpr bool& __cordl_internal_get__defaultToCenter() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__movementArea() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__movementArea() ;

constexpr ::Rewired::PlayerMouse_MovementAreaUnit const& __cordl_internal_get__movementAreaUnit() const;

constexpr ::Rewired::PlayerMouse_MovementAreaUnit& __cordl_internal_get__movementAreaUnit() ;

constexpr ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler* const& __cordl_internal_get__onScreenPositionChanged() const;

constexpr ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*& __cordl_internal_get__onScreenPositionChanged() ;

constexpr float_t const& __cordl_internal_get__pointerSpeed() const;

constexpr float_t& __cordl_internal_get__pointerSpeed() ;

constexpr bool const& __cordl_internal_get__useHardwarePointerPosition() const;

constexpr bool& __cordl_internal_get__useHardwarePointerPosition() ;

constexpr void __cordl_internal_set__clampToMovementArea(bool  value) ;

constexpr void __cordl_internal_set__defaultToCenter(bool  value) ;

constexpr void __cordl_internal_set__movementArea(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value) ;

constexpr void __cordl_internal_set__onScreenPositionChanged(::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*  value) ;

constexpr void __cordl_internal_set__pointerSpeed(float_t  value) ;

constexpr void __cordl_internal_set__useHardwarePointerPosition(bool  value) ;

/// @brief Method .ctor, addr 0x1818ddd60, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_ScreenPositionChangedEvent, addr 0x1818dde80, size 0x40, virtual true, abstract: false, final true
inline void add_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method get_clampToMovementArea, addr 0x1818ddec0, size 0x50, virtual false, abstract: false, final false
inline bool get_clampToMovementArea() ;

/// @brief Method get_defaultToCenter, addr 0x1818ddf10, size 0x50, virtual true, abstract: false, final true
inline bool get_defaultToCenter() ;

/// @brief Method get_leftButton, addr 0x1818ddf60, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Button* get_leftButton() ;

/// @brief Method get_middleButton, addr 0x1818ddfa0, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Button* get_middleButton() ;

/// @brief Method get_movementArea, addr 0x1818de030, size 0x80, virtual true, abstract: false, final true
inline ::Rewired::Utils::Classes::Data::ScreenRect get_movementArea() ;

/// @brief Method get_movementAreaUnit, addr 0x1818ddfe0, size 0x50, virtual true, abstract: false, final true
inline ::Rewired::PlayerMouse_MovementAreaUnit get_movementAreaUnit() ;

/// @brief Method get_pointerSpeed, addr 0x1818de0b0, size 0x50, virtual true, abstract: false, final true
inline float_t get_pointerSpeed() ;

/// @brief Method get_rightButton, addr 0x1818de100, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Button* get_rightButton() ;

/// @brief Method get_screenPosition, addr 0x1818de1e0, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_screenPositionDelta, addr 0x1818de140, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_screenPositionDelta() ;

/// @brief Method get_screenPositionPrev, addr 0x1818de190, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_screenPositionPrev() ;

/// @brief Method get_useHardwarePointerPosition, addr 0x1818de230, size 0x50, virtual true, abstract: false, final true
inline bool get_useHardwarePointerPosition() ;

/// @brief Method get_wheel, addr 0x1818de280, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_MouseWheel* get_wheel() ;

/// @brief Method get_xAxis, addr 0x1818de2c0, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_MouseAxis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x1818de300, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_MouseAxis* get_yAxis() ;

/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* i___Rewired__IPlayerController() noexcept;

/// @brief Convert to "::Rewired::IPlayerMouse"
constexpr ::Rewired::IPlayerMouse* i___Rewired__IPlayerMouse() noexcept;

/// @brief Convert to "::Rewired::UI::IMouseInputSource"
constexpr ::Rewired::UI::IMouseInputSource* i___Rewired__UI__IMouseInputSource() noexcept;

/// @brief Method remove_ScreenPositionChangedEvent, addr 0x1818de340, size 0x40, virtual true, abstract: false, final true
inline void remove_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_clampToMovementArea, addr 0x1818de380, size 0x80, virtual false, abstract: false, final false
inline void set_clampToMovementArea(bool  value) ;

/// @brief Method set_defaultToCenter, addr 0x1818de400, size 0x80, virtual false, abstract: false, final false
inline void set_defaultToCenter(bool  value) ;

/// @brief Method set_movementArea, addr 0x1818de500, size 0x190, virtual true, abstract: false, final true
inline void set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value) ;

/// @brief Method set_movementAreaUnit, addr 0x1818de480, size 0x80, virtual true, abstract: false, final true
inline void set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value) ;

/// @brief Method set_pointerSpeed, addr 0x1818de690, size 0x90, virtual false, abstract: false, final false
inline void set_pointerSpeed(float_t  value) ;

/// @brief Method set_screenPosition, addr 0x1818de720, size 0x40, virtual false, abstract: false, final false
inline void set_screenPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_useHardwarePointerPosition, addr 0x1818de760, size 0x50, virtual false, abstract: false, final false
inline void set_useHardwarePointerPosition(bool  value) ;

/// @brief Method wQuAHMHFhSPOjfeaaDeAMQJmXqiBA, addr 0x1818de7b0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::PlayerMouse* wQuAHMHFhSPOjfeaaDeAMQJmXqiBA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouse(PlayerMouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouse(PlayerMouse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2733};

/// @brief Field _defaultToCenter, offset: 0x60, size: 0x1, def value: None
 bool  ____defaultToCenter;

/// @brief Field _pointerSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ____pointerSpeed;

/// @brief Field _useHardwarePointerPosition, offset: 0x68, size: 0x1, def value: None
 bool  ____useHardwarePointerPosition;

/// @brief Field _clampToMovementArea, offset: 0x69, size: 0x1, def value: None
 bool  ____clampToMovementArea;

/// @brief Field _movementArea, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Rect  ____movementArea;

/// @brief Field _movementAreaUnit, offset: 0x7c, size: 0x4, def value: None
 ::Rewired::PlayerMouse_MovementAreaUnit  ____movementAreaUnit;

/// @brief Field _onScreenPositionChanged, offset: 0x80, size: 0x8, def value: None
 ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*  ____onScreenPositionChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Components::PlayerMouse, ____defaultToCenter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerMouse, ____pointerSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerMouse, ____useHardwarePointerPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerMouse, ____clampToMovementArea) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerMouse, ____movementArea) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerMouse, ____movementAreaUnit) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerMouse, ____onScreenPositionChanged) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Rewired::Components::PlayerMouse) == 0x88, "Size mismatch!");

} // namespace end def Rewired::Components
