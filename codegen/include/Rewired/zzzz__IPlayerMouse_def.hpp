#pragma once
// IWYU pragma private; include "Rewired/IPlayerMouse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IPlayerMouse)
namespace Rewired::Utils::Classes::Data {
struct ScreenRect;
}
namespace Rewired {
class IPlayerController;
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
struct PlayerMouse_MovementAreaUnit;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class IPlayerMouse;
}
// Write type traits
MARK_REF_T(::Rewired::IPlayerMouse*);
DEFINE_IL2CPP_CLASS(::Rewired::IPlayerMouse*, "Rewired", "IPlayerMouse");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IPlayerMouse
class CORDL_TYPE IPlayerMouse {
public:
// Declarations
 __declspec(property(get=get_defaultToCenter)) bool  defaultToCenter;

 __declspec(property(get=get_leftButton)) ::Rewired::PlayerController_Button*  leftButton;

 __declspec(property(get=get_middleButton)) ::Rewired::PlayerController_Button*  middleButton;

 __declspec(property(get=get_movementArea, put=set_movementArea)) ::Rewired::Utils::Classes::Data::ScreenRect  movementArea;

 __declspec(property(get=get_movementAreaUnit, put=set_movementAreaUnit)) ::Rewired::PlayerMouse_MovementAreaUnit  movementAreaUnit;

 __declspec(property(get=get_pointerSpeed)) float_t  pointerSpeed;

 __declspec(property(get=get_rightButton)) ::Rewired::PlayerController_Button*  rightButton;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_screenPositionDelta)) ::UnityEngine::Vector2  screenPositionDelta;

 __declspec(property(get=get_screenPositionPrev)) ::UnityEngine::Vector2  screenPositionPrev;

 __declspec(property(get=get_useHardwarePointerPosition)) bool  useHardwarePointerPosition;

 __declspec(property(get=get_wheel)) ::Rewired::PlayerController_MouseWheel*  wheel;

 __declspec(property(get=get_xAxis)) ::Rewired::PlayerController_MouseAxis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::PlayerController_MouseAxis*  yAxis;

/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr operator  ::Rewired::IPlayerController*() noexcept;

/// @brief Method add_ScreenPositionChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method get_defaultToCenter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_defaultToCenter() ;

/// @brief Method get_leftButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Button* get_leftButton() ;

/// @brief Method get_middleButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Button* get_middleButton() ;

/// @brief Method get_movementArea, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ScreenRect get_movementArea() ;

/// @brief Method get_movementAreaUnit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerMouse_MovementAreaUnit get_movementAreaUnit() ;

/// @brief Method get_pointerSpeed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_pointerSpeed() ;

/// @brief Method get_rightButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Button* get_rightButton() ;

/// @brief Method get_screenPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_screenPositionDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPositionDelta() ;

/// @brief Method get_screenPositionPrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPositionPrev() ;

/// @brief Method get_useHardwarePointerPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_useHardwarePointerPosition() ;

/// @brief Method get_wheel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_MouseWheel* get_wheel() ;

/// @brief Method get_xAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_MouseAxis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_MouseAxis* get_yAxis() ;

/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* i___Rewired__IPlayerController() noexcept;

/// @brief Method remove_ScreenPositionChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_movementArea, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value) ;

/// @brief Method set_movementAreaUnit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPlayerMouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayerMouse(IPlayerMouse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
