#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchJoystick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__TouchInteractable_def.hpp"
#include "Rewired/Utils/UI/zzzz__PositionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchJoystick)
namespace GlobalNamespace {
class DqFEdekqxKkWYIisdJDTEhuknscCc;
}
namespace GlobalNamespace {
template<typename T,typename TArgs>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2;
}
namespace GlobalNamespace {
template<typename THandler,typename TValue>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForBoolean;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForFloat;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_AxisDirection;
}
namespace Rewired::ComponentControls {
class TouchJoystick_IStickPositionChangedHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_IValueChangedHandler;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_JoystickMode;
}
namespace Rewired::ComponentControls {
class TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_SnapDirections;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_StickBounds;
}
namespace Rewired::ComponentControls {
class TouchJoystick_StickPositionChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_TapEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_TouchEndedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_TouchStartedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_ValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl;
}
namespace Rewired::ComponentControls {
class TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA;
}
namespace Rewired::ComponentControls {
class TouchRegion;
}
namespace Rewired::Internal {
class StandaloneAxis2D;
}
namespace Rewired::Utils::UI {
struct PositionType;
}
namespace Rewired {
class Axis2DCalibration;
}
namespace Rewired {
class AxisCalibration;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::ComponentControls {
struct TouchJoystick_AxisDirection;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_JoystickMode;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_SnapDirections;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_StickBounds;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB;
}
namespace Rewired::ComponentControls {
struct TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl;
}
namespace Rewired::ComponentControls {
class TouchJoystick;
}
namespace Rewired::ComponentControls {
class TouchJoystick_IStickPositionChangedHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_IValueChangedHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe;
}
namespace Rewired::ComponentControls {
class TouchJoystick_StickPositionChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_TapEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_TouchEndedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_TouchStartedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_ValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::TouchJoystick_AxisDirection);
MARK_VAL_T(::Rewired::ComponentControls::TouchJoystick_JoystickMode);
MARK_VAL_T(::Rewired::ComponentControls::TouchJoystick_SnapDirections);
MARK_VAL_T(::Rewired::ComponentControls::TouchJoystick_StickBounds);
MARK_VAL_T(::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB);
MARK_VAL_T(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_TapEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_AxisDirection, "Rewired.ComponentControls", "TouchJoystick/AxisDirection");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_JoystickMode, "Rewired.ComponentControls", "TouchJoystick/JoystickMode");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_SnapDirections, "Rewired.ComponentControls", "TouchJoystick/SnapDirections");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_StickBounds, "Rewired.ComponentControls", "TouchJoystick/StickBounds");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB, "Rewired.ComponentControls", "TouchJoystick/bMXElyGLLoDVBKdtoKzmdnvivzCIB");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl, "Rewired.ComponentControls", "TouchJoystick/gKtBifVxAAxRkXBYVmHQhhlLvehl");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick*, "Rewired.ComponentControls", "TouchJoystick");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*, "Rewired.ComponentControls", "TouchJoystick/IStickPositionChangedHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*, "Rewired.ComponentControls", "TouchJoystick/IValueChangedHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*, "Rewired.ComponentControls", "TouchJoystick/OeosAihZOGhAgjlyYNszSXujTxe");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler*, "Rewired.ComponentControls", "TouchJoystick/StickPositionChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_TapEventHandler*, "Rewired.ComponentControls", "TouchJoystick/TapEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*, "Rewired.ComponentControls", "TouchJoystick/TouchEndedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*, "Rewired.ComponentControls", "TouchJoystick/TouchStartedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*, "Rewired.ComponentControls", "TouchJoystick/ValueChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA*, "Rewired.ComponentControls", "TouchJoystick/wDOaeiDEiTWdoJHoQeUcfqhgKDVLA");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchJoystick/AxisDirection
struct CORDL_TYPE TouchJoystick_AxisDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchJoystick_AxisDirection_Unwrapped
enum struct __TouchJoystick_AxisDirection_Unwrapped : int32_t {
__E_Both = static_cast<int32_t>(0x0),
__E_Horizontal = static_cast<int32_t>(0x1),
__E_Vertical = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchJoystick_AxisDirection_Unwrapped () const noexcept {
return static_cast<__TouchJoystick_AxisDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_AxisDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchJoystick_AxisDirection(int32_t  value__) noexcept;

/// @brief Field Both value: I32(0)
static ::Rewired::ComponentControls::TouchJoystick_AxisDirection const Both;

/// @brief Field Horizontal value: I32(1)
static ::Rewired::ComponentControls::TouchJoystick_AxisDirection const Horizontal;

/// @brief Field Vertical value: I32(2)
static ::Rewired::ComponentControls::TouchJoystick_AxisDirection const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2766};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_AxisDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_AxisDirection) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchJoystick/JoystickMode
struct CORDL_TYPE TouchJoystick_JoystickMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchJoystick_JoystickMode_Unwrapped
enum struct __TouchJoystick_JoystickMode_Unwrapped : int32_t {
__E_Analog = static_cast<int32_t>(0x0),
__E_Digital = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchJoystick_JoystickMode_Unwrapped () const noexcept {
return static_cast<__TouchJoystick_JoystickMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_JoystickMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchJoystick_JoystickMode(int32_t  value__) noexcept;

/// @brief Field Analog value: I32(0)
static ::Rewired::ComponentControls::TouchJoystick_JoystickMode const Analog;

/// @brief Field Digital value: I32(1)
static ::Rewired::ComponentControls::TouchJoystick_JoystickMode const Digital;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2767};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_JoystickMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_JoystickMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchJoystick/SnapDirections
struct CORDL_TYPE TouchJoystick_SnapDirections {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchJoystick_SnapDirections_Unwrapped
enum struct __TouchJoystick_SnapDirections_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Four = static_cast<int32_t>(0x4),
__E_Eight = static_cast<int32_t>(0x8),
__E_Sixteen = static_cast<int32_t>(0x10),
__E_ThirtyTwo = static_cast<int32_t>(0x20),
__E_SixtyFour = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchJoystick_SnapDirections_Unwrapped () const noexcept {
return static_cast<__TouchJoystick_SnapDirections_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_SnapDirections() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchJoystick_SnapDirections(int32_t  value__) noexcept;

/// @brief Field Eight value: I32(8)
static ::Rewired::ComponentControls::TouchJoystick_SnapDirections const Eight;

/// @brief Field Four value: I32(4)
static ::Rewired::ComponentControls::TouchJoystick_SnapDirections const Four;

/// @brief Field None value: I32(0)
static ::Rewired::ComponentControls::TouchJoystick_SnapDirections const None;

/// @brief Field Sixteen value: I32(16)
static ::Rewired::ComponentControls::TouchJoystick_SnapDirections const Sixteen;

/// @brief Field SixtyFour value: I32(64)
static ::Rewired::ComponentControls::TouchJoystick_SnapDirections const SixtyFour;

/// @brief Field ThirtyTwo value: I32(32)
static ::Rewired::ComponentControls::TouchJoystick_SnapDirections const ThirtyTwo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2768};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_SnapDirections, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_SnapDirections) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchJoystick/gKtBifVxAAxRkXBYVmHQhhlLvehl
struct CORDL_TYPE TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl_Unwrapped
enum struct __TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TowardTouch = static_cast<int32_t>(0x1),
__E_TowardHome = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl_Unwrapped () const noexcept {
return static_cast<__TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const None;

/// @brief Field TowardHome value: I32(2)
static ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const TowardHome;

/// @brief Field TowardTouch value: I32(1)
static ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const TowardTouch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2769};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchJoystick/bMXElyGLLoDVBKdtoKzmdnvivzCIB
struct CORDL_TYPE TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB_Unwrapped
enum struct __TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_TouchRegion = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB_Unwrapped () const noexcept {
return static_cast<__TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB const Local;

/// @brief Field TouchRegion value: I32(1)
static ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB const TouchRegion;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2770};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchJoystick/StickBounds
struct CORDL_TYPE TouchJoystick_StickBounds {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchJoystick_StickBounds_Unwrapped
enum struct __TouchJoystick_StickBounds_Unwrapped : int32_t {
__E_Circle = static_cast<int32_t>(0x0),
__E_Square = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchJoystick_StickBounds_Unwrapped () const noexcept {
return static_cast<__TouchJoystick_StickBounds_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_StickBounds() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchJoystick_StickBounds(int32_t  value__) noexcept;

/// @brief Field Circle value: I32(0)
static ::Rewired::ComponentControls::TouchJoystick_StickBounds const Circle;

/// @brief Field Square value: I32(1)
static ::Rewired::ComponentControls::TouchJoystick_StickBounds const Square;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2771};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_StickBounds, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_StickBounds) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/ValueChangedEventHandler
class CORDL_TYPE TouchJoystick_ValueChangedEventHandler : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_ValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_ValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_ValueChangedEventHandler(TouchJoystick_ValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_ValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_ValueChangedEventHandler(TouchJoystick_ValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2772};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/StickPositionChangedEventHandler
class CORDL_TYPE TouchJoystick_StickPositionChangedEventHandler : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_StickPositionChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_StickPositionChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_StickPositionChangedEventHandler(TouchJoystick_StickPositionChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_StickPositionChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_StickPositionChangedEventHandler(TouchJoystick_StickPositionChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/TapEventHandler
class CORDL_TYPE TouchJoystick_TapEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchJoystick_TapEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_TapEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_TapEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_TapEventHandler(TouchJoystick_TapEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_TapEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_TapEventHandler(TouchJoystick_TapEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_TapEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/TouchStartedEventHandler
class CORDL_TYPE TouchJoystick_TouchStartedEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_TouchStartedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_TouchStartedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_TouchStartedEventHandler(TouchJoystick_TouchStartedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_TouchStartedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_TouchStartedEventHandler(TouchJoystick_TouchStartedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/TouchEndedEventHandler
class CORDL_TYPE TouchJoystick_TouchEndedEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_TouchEndedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_TouchEndedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_TouchEndedEventHandler(TouchJoystick_TouchEndedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_TouchEndedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_TouchEndedEventHandler(TouchJoystick_TouchEndedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2776};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/IValueChangedHandler
class CORDL_TYPE TouchJoystick_IValueChangedHandler {
public:
// Declarations
/// @brief Method OnValueChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnValueChanged(::UnityEngine::Vector2  value) ;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_IValueChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_IValueChangedHandler(TouchJoystick_IValueChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/IStickPositionChangedHandler
class CORDL_TYPE TouchJoystick_IStickPositionChangedHandler {
public:
// Declarations
/// @brief Method OnStickPositionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStickPositionChanged(::UnityEngine::Vector2  value) ;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_IStickPositionChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_IStickPositionChangedHandler(TouchJoystick_IStickPositionChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ComponentControls
// Dependencies System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/OeosAihZOGhAgjlyYNszSXujTxe
class CORDL_TYPE TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*  __9;

/// @brief Field <>9__277_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__277_0, put=setStaticF___9__277_0)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  __9__277_0;

/// @brief Field <>9__280_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__280_0, put=setStaticF___9__280_0)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  __9__280_0;

static inline ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe* New_ctor() ;

/// @brief Method UpBqCTwUxYmZYOThAkVStUKRfPBd, addr 0x1818f39e0, size 0x30, virtual false, abstract: false, final false
inline void UpBqCTwUxYmZYOThAkVStUKRfPBd(::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe* getStaticF___9() ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* getStaticF___9__277_0() ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* getStaticF___9__280_0() ;

static inline void setStaticF___9(::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe*  value) ;

static inline void setStaticF___9__277_0(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  value) ;

static inline void setStaticF___9__280_0(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  value) ;

/// @brief Method wAEOxaFJxYWKWBBAfitUyqogeiIiA, addr 0x1818f3a50, size 0x30, virtual false, abstract: false, final false
inline void wAEOxaFJxYWKWBBAfitUyqogeiIiA(::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe(TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe(TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe) == 0x10, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchJoystick::gKtBifVxAAxRkXBYVmHQhhlLvehl, Rewired.Utils.UI.PositionType, System.Object, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick/wDOaeiDEiTWdoJHoQeUcfqhgKDVLA
class CORDL_TYPE TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA : public ::System::Object {
public:
// Declarations
/// @brief Field HVVaMvtVAFwNtyejpGPStYGMTJub, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_HVVaMvtVAFwNtyejpGPStYGMTJub, put=__cordl_internal_set_HVVaMvtVAFwNtyejpGPStYGMTJub)) int32_t  HVVaMvtVAFwNtyejpGPStYGMTJub;

/// @brief Field JWsnzlieCKbmCCcZWwDDsxTpXXWD, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_JWsnzlieCKbmCCcZWwDDsxTpXXWD, put=__cordl_internal_set_JWsnzlieCKbmCCcZWwDDsxTpXXWD)) ::UnityW<::UnityEngine::RectTransform>  JWsnzlieCKbmCCcZWwDDsxTpXXWD;

/// @brief Field NyLjqoMaoIBTrqgxNePFgDiCLCFeA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NyLjqoMaoIBTrqgxNePFgDiCLCFeA, put=__cordl_internal_set_NyLjqoMaoIBTrqgxNePFgDiCLCFeA)) ::System::Object*  NyLjqoMaoIBTrqgxNePFgDiCLCFeA;

/// @brief Field PyrPWAjATHdgYMXWfOIsYjamMNQo, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PyrPWAjATHdgYMXWfOIsYjamMNQo, put=__cordl_internal_set_PyrPWAjATHdgYMXWfOIsYjamMNQo)) ::Rewired::Utils::UI::PositionType  PyrPWAjATHdgYMXWfOIsYjamMNQo;

/// @brief Field QFDahDbnnQJgaQSGwmNMdhbeEUtOB, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_QFDahDbnnQJgaQSGwmNMdhbeEUtOB, put=__cordl_internal_set_QFDahDbnnQJgaQSGwmNMdhbeEUtOB)) ::UnityEngine::Vector2  QFDahDbnnQJgaQSGwmNMdhbeEUtOB;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field UtppBsHTsqadpFePtAnerTMeNumD, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_UtppBsHTsqadpFePtAnerTMeNumD, put=__cordl_internal_set_UtppBsHTsqadpFePtAnerTMeNumD)) ::UnityW<::Rewired::ComponentControls::TouchJoystick>  UtppBsHTsqadpFePtAnerTMeNumD;

/// @brief Field aQsCetgBUGiSsdJQFDQHTMveKFGRb, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_aQsCetgBUGiSsdJQFDQHTMveKFGRb, put=__cordl_internal_set_aQsCetgBUGiSsdJQFDQHTMveKFGRb)) float_t  aQsCetgBUGiSsdJQFDQHTMveKFGRb;

/// @brief Field dELnUJYiSEPqnPyOkQvRoodwljsH, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_dELnUJYiSEPqnPyOkQvRoodwljsH, put=__cordl_internal_set_dELnUJYiSEPqnPyOkQvRoodwljsH)) ::UnityEngine::Vector2  dELnUJYiSEPqnPyOkQvRoodwljsH;

/// @brief Field jYlFnDIBHGIPRfCGRIwvarqWREoM, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jYlFnDIBHGIPRfCGRIwvarqWREoM, put=__cordl_internal_set_jYlFnDIBHGIPRfCGRIwvarqWREoM)) ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  jYlFnDIBHGIPRfCGRIwvarqWREoM;

/// @brief Field kwCAAqivUqSrAqljZkaVelojtdkYA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_kwCAAqivUqSrAqljZkaVelojtdkYA, put=__cordl_internal_set_kwCAAqivUqSrAqljZkaVelojtdkYA)) float_t  kwCAAqivUqSrAqljZkaVelojtdkYA;

/// @brief Field mQtvrDLbFFfsNjbhwOqfEDPAKZznB, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_mQtvrDLbFFfsNjbhwOqfEDPAKZznB, put=__cordl_internal_set_mQtvrDLbFFfsNjbhwOqfEDPAKZznB)) float_t  mQtvrDLbFFfsNjbhwOqfEDPAKZznB;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819009b0, size 0x250, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1810edc40, size 0x3e50, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_HVVaMvtVAFwNtyejpGPStYGMTJub() const;

constexpr int32_t& __cordl_internal_get_HVVaMvtVAFwNtyejpGPStYGMTJub() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_JWsnzlieCKbmCCcZWwDDsxTpXXWD() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_JWsnzlieCKbmCCcZWwDDsxTpXXWD() ;

constexpr ::System::Object* const& __cordl_internal_get_NyLjqoMaoIBTrqgxNePFgDiCLCFeA() const;

constexpr ::System::Object*& __cordl_internal_get_NyLjqoMaoIBTrqgxNePFgDiCLCFeA() ;

constexpr ::Rewired::Utils::UI::PositionType const& __cordl_internal_get_PyrPWAjATHdgYMXWfOIsYjamMNQo() const;

constexpr ::Rewired::Utils::UI::PositionType& __cordl_internal_get_PyrPWAjATHdgYMXWfOIsYjamMNQo() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_QFDahDbnnQJgaQSGwmNMdhbeEUtOB() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_QFDahDbnnQJgaQSGwmNMdhbeEUtOB() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchJoystick> const& __cordl_internal_get_UtppBsHTsqadpFePtAnerTMeNumD() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchJoystick>& __cordl_internal_get_UtppBsHTsqadpFePtAnerTMeNumD() ;

constexpr float_t const& __cordl_internal_get_aQsCetgBUGiSsdJQFDQHTMveKFGRb() const;

constexpr float_t& __cordl_internal_get_aQsCetgBUGiSsdJQFDQHTMveKFGRb() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_dELnUJYiSEPqnPyOkQvRoodwljsH() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_dELnUJYiSEPqnPyOkQvRoodwljsH() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const& __cordl_internal_get_jYlFnDIBHGIPRfCGRIwvarqWREoM() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl& __cordl_internal_get_jYlFnDIBHGIPRfCGRIwvarqWREoM() ;

constexpr float_t const& __cordl_internal_get_kwCAAqivUqSrAqljZkaVelojtdkYA() const;

constexpr float_t& __cordl_internal_get_kwCAAqivUqSrAqljZkaVelojtdkYA() ;

constexpr float_t const& __cordl_internal_get_mQtvrDLbFFfsNjbhwOqfEDPAKZznB() const;

constexpr float_t& __cordl_internal_get_mQtvrDLbFFfsNjbhwOqfEDPAKZznB() ;

constexpr void __cordl_internal_set_HVVaMvtVAFwNtyejpGPStYGMTJub(int32_t  value) ;

constexpr void __cordl_internal_set_JWsnzlieCKbmCCcZWwDDsxTpXXWD(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_NyLjqoMaoIBTrqgxNePFgDiCLCFeA(::System::Object*  value) ;

constexpr void __cordl_internal_set_PyrPWAjATHdgYMXWfOIsYjamMNQo(::Rewired::Utils::UI::PositionType  value) ;

constexpr void __cordl_internal_set_QFDahDbnnQJgaQSGwmNMdhbeEUtOB(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_UtppBsHTsqadpFePtAnerTMeNumD(::UnityW<::Rewired::ComponentControls::TouchJoystick>  value) ;

constexpr void __cordl_internal_set_aQsCetgBUGiSsdJQFDQHTMveKFGRb(float_t  value) ;

constexpr void __cordl_internal_set_dELnUJYiSEPqnPyOkQvRoodwljsH(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_jYlFnDIBHGIPRfCGRIwvarqWREoM(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  value) ;

constexpr void __cordl_internal_set_kwCAAqivUqSrAqljZkaVelojtdkYA(float_t  value) ;

constexpr void __cordl_internal_set_mQtvrDLbFFfsNjbhwOqfEDPAKZznB(float_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA(TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA(TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2780};

/// @brief Field HVVaMvtVAFwNtyejpGPStYGMTJub, offset: 0x10, size: 0x4, def value: None
 int32_t  ___HVVaMvtVAFwNtyejpGPStYGMTJub;

/// @brief Field NyLjqoMaoIBTrqgxNePFgDiCLCFeA, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___NyLjqoMaoIBTrqgxNePFgDiCLCFeA;

/// @brief Field kwCAAqivUqSrAqljZkaVelojtdkYA, offset: 0x20, size: 0x4, def value: None
 float_t  ___kwCAAqivUqSrAqljZkaVelojtdkYA;

/// @brief Field UtppBsHTsqadpFePtAnerTMeNumD, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchJoystick>  ___UtppBsHTsqadpFePtAnerTMeNumD;

/// @brief Field PyrPWAjATHdgYMXWfOIsYjamMNQo, offset: 0x30, size: 0x4, def value: None
 ::Rewired::Utils::UI::PositionType  ___PyrPWAjATHdgYMXWfOIsYjamMNQo;

/// @brief Field dELnUJYiSEPqnPyOkQvRoodwljsH, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___dELnUJYiSEPqnPyOkQvRoodwljsH;

/// @brief Field jYlFnDIBHGIPRfCGRIwvarqWREoM, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  ___jYlFnDIBHGIPRfCGRIwvarqWREoM;

/// @brief Field JWsnzlieCKbmCCcZWwDDsxTpXXWD, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___JWsnzlieCKbmCCcZWwDDsxTpXXWD;

/// @brief Field QFDahDbnnQJgaQSGwmNMdhbeEUtOB, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___QFDahDbnnQJgaQSGwmNMdhbeEUtOB;

/// @brief Field mQtvrDLbFFfsNjbhwOqfEDPAKZznB, offset: 0x50, size: 0x4, def value: None
 float_t  ___mQtvrDLbFFfsNjbhwOqfEDPAKZznB;

/// @brief Field aQsCetgBUGiSsdJQFDQHTMveKFGRb, offset: 0x54, size: 0x4, def value: None
 float_t  ___aQsCetgBUGiSsdJQFDQHTMveKFGRb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___HVVaMvtVAFwNtyejpGPStYGMTJub) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___NyLjqoMaoIBTrqgxNePFgDiCLCFeA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___kwCAAqivUqSrAqljZkaVelojtdkYA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___UtppBsHTsqadpFePtAnerTMeNumD) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___PyrPWAjATHdgYMXWfOIsYjamMNQo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___dELnUJYiSEPqnPyOkQvRoodwljsH) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___jYlFnDIBHGIPRfCGRIwvarqWREoM) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___JWsnzlieCKbmCCcZWwDDsxTpXXWD) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___QFDahDbnnQJgaQSGwmNMdhbeEUtOB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___mQtvrDLbFFfsNjbhwOqfEDPAKZznB) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA, ___aQsCetgBUGiSsdJQFDQHTMveKFGRb) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA) == 0x58, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchInteractable, Rewired.ComponentControls.TouchJoystick::AxisDirection, Rewired.ComponentControls.TouchJoystick::JoystickMode, Rewired.ComponentControls.TouchJoystick::SnapDirections, Rewired.ComponentControls.TouchJoystick::StickBounds, Rewired.ComponentControls.TouchJoystick::bMXElyGLLoDVBKdtoKzmdnvivzCIB, Rewired.ComponentControls.TouchJoystick::gKtBifVxAAxRkXBYVmHQhhlLvehl, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchJoystick
class CORDL_TYPE TouchJoystick : public ::Rewired::ComponentControls::TouchInteractable {
public:
// Declarations
using AxisDirection = ::Rewired::ComponentControls::TouchJoystick_AxisDirection;

using IStickPositionChangedHandler = ::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler;

using IValueChangedHandler = ::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler;

using JoystickMode = ::Rewired::ComponentControls::TouchJoystick_JoystickMode;

using OeosAihZOGhAgjlyYNszSXujTxe = ::Rewired::ComponentControls::TouchJoystick_OeosAihZOGhAgjlyYNszSXujTxe;

using SnapDirections = ::Rewired::ComponentControls::TouchJoystick_SnapDirections;

using StickBounds = ::Rewired::ComponentControls::TouchJoystick_StickBounds;

using StickPositionChangedEventHandler = ::Rewired::ComponentControls::TouchJoystick_StickPositionChangedEventHandler;

using TapEventHandler = ::Rewired::ComponentControls::TouchJoystick_TapEventHandler;

using TouchEndedEventHandler = ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler;

using TouchStartedEventHandler = ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler;

using ValueChangedEventHandler = ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler;

using bMXElyGLLoDVBKdtoKzmdnvivzCIB = ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB;

using gKtBifVxAAxRkXBYVmHQhhlLvehl = ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl;

using wDOaeiDEiTWdoJHoQeUcfqhgKDVLA = ::Rewired::ComponentControls::TouchJoystick_wDOaeiDEiTWdoJHoQeUcfqhgKDVLA;

/// @brief Field CSVbDncOCvRIzqyDMCNArskcVwED, offset 0x1e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_CSVbDncOCvRIzqyDMCNArskcVwED, put=__cordl_internal_set_CSVbDncOCvRIzqyDMCNArskcVwED)) bool  CSVbDncOCvRIzqyDMCNArskcVwED;

 __declspec(property(get=eDnATMezupCRiGrnftuwDMkbfJeSc)) ::Rewired::Internal::StandaloneAxis2D*  NyijYKiwffWhvajWbyOOkeLJkkJA;

 __declspec(property(get=tnDtUpZiHsfpSvWWKCdyEMHenlAb)) float_t  XhlfqwjAcZNtmCIOlLYdRefKYHocA;

/// @brief Field __calculatedStickRange_cachedValue, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get___calculatedStickRange_cachedValue, put=__cordl_internal_set___calculatedStickRange_cachedValue)) float_t  __calculatedStickRange_cachedValue;

/// @brief Field __fakePointerEventData, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get___fakePointerEventData, put=__cordl_internal_set___fakePointerEventData)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  __fakePointerEventData;

/// @brief Field __moveEndedDelegate, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get___moveEndedDelegate, put=__cordl_internal_set___moveEndedDelegate)) ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  __moveEndedDelegate;

/// @brief Field __moveStartedDelegate, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get___moveStartedDelegate, put=__cordl_internal_set___moveStartedDelegate)) ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  __moveStartedDelegate;

/// @brief Field __stickPositionChangedHandlerDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___stickPositionChangedHandlerDelegate, put=setStaticF___stickPositionChangedHandlerDelegate)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  __stickPositionChangedHandlerDelegate;

/// @brief Field __valueChangedHandlerDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___valueChangedHandlerDelegate, put=setStaticF___valueChangedHandlerDelegate)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  __valueChangedHandlerDelegate;

/// @brief Field _activateOnSwipeIn, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateOnSwipeIn, put=__cordl_internal_set__activateOnSwipeIn)) bool  _activateOnSwipeIn;

/// @brief Field _allowTap, offset 0x17a, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowTap, put=__cordl_internal_set__allowTap)) bool  _allowTap;

/// @brief Field _animateOnMoveToTouch, offset 0x194, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateOnMoveToTouch, put=__cordl_internal_set__animateOnMoveToTouch)) bool  _animateOnMoveToTouch;

/// @brief Field _animateOnReturn, offset 0x19c, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateOnReturn, put=__cordl_internal_set__animateOnReturn)) bool  _animateOnReturn;

/// @brief Field _axesToUse, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__axesToUse, put=__cordl_internal_set__axesToUse)) ::Rewired::ComponentControls::TouchJoystick_AxisDirection  _axesToUse;

/// @brief Field _axis2D, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::Rewired::Internal::StandaloneAxis2D*  _axis2D;

/// @brief Field _calculatedStickRange_lastUpdatedFrame, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get__calculatedStickRange_lastUpdatedFrame, put=__cordl_internal_set__calculatedStickRange_lastUpdatedFrame)) int32_t  _calculatedStickRange_lastUpdatedFrame;

/// @brief Field _centerStickOnRelease, offset 0x16d, size 0x1 
 __declspec(property(get=__cordl_internal_get__centerStickOnRelease, put=__cordl_internal_set__centerStickOnRelease)) bool  _centerStickOnRelease;

/// @brief Field _coroutineMove, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutineMove, put=__cordl_internal_set__coroutineMove)) ::System::Collections::IEnumerator*  _coroutineMove;

/// @brief Field _digitalModeDeadZone, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get__digitalModeDeadZone, put=__cordl_internal_set__digitalModeDeadZone)) float_t  _digitalModeDeadZone;

/// @brief Field _followTouchPosition, offset 0x193, size 0x1 
 __declspec(property(get=__cordl_internal_get__followTouchPosition, put=__cordl_internal_set__followTouchPosition)) bool  _followTouchPosition;

/// @brief Field _hierarchyStickPositionChangedHandlers, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hierarchyStickPositionChangedHandlers, put=__cordl_internal_set__hierarchyStickPositionChangedHandlers)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  _hierarchyStickPositionChangedHandlers;

/// @brief Field _hierarchyValueChangedHandlers, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__hierarchyValueChangedHandlers, put=__cordl_internal_set__hierarchyValueChangedHandlers)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  _hierarchyValueChangedHandlers;

/// @brief Field _horizontalAxisCustomControllerElement, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalAxisCustomControllerElement, put=__cordl_internal_set__horizontalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _horizontalAxisCustomControllerElement;

/// @brief Field _imageRaycastHelper, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__imageRaycastHelper, put=__cordl_internal_set__imageRaycastHelper)) ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  _imageRaycastHelper;

/// @brief Field _isEligibleForTap, offset 0x220, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEligibleForTap, put=__cordl_internal_set__isEligibleForTap)) bool  _isEligibleForTap;

/// @brief Field _isMovedFromDefaultPosition, offset 0x1d9, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMovedFromDefaultPosition, put=__cordl_internal_set__isMovedFromDefaultPosition)) bool  _isMovedFromDefaultPosition;

/// @brief Field _isMoving, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMoving, put=__cordl_internal_set__isMoving)) bool  _isMoving;

/// @brief Field _joystickMode, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get__joystickMode, put=__cordl_internal_set__joystickMode)) ::Rewired::ComponentControls::TouchJoystick_JoystickMode  _joystickMode;

/// @brief Field _lastClaimSource, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastClaimSource, put=__cordl_internal_set__lastClaimSource)) ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _lastClaimSource;

/// @brief Field _lastPressAnchoredPosition, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastPressAnchoredPosition, put=__cordl_internal_set__lastPressAnchoredPosition)) ::UnityEngine::Vector2  _lastPressAnchoredPosition;

/// @brief Field _lastPressStartingValue, offset 0x1ec, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastPressStartingValue, put=__cordl_internal_set__lastPressStartingValue)) ::UnityEngine::Vector2  _lastPressStartingValue;

/// @brief Field _lastTapFrame, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTapFrame, put=__cordl_internal_set__lastTapFrame)) int32_t  _lastTapFrame;

/// @brief Field _manageRaycasting, offset 0x1a4, size 0x1 
 __declspec(property(get=__cordl_internal_get__manageRaycasting, put=__cordl_internal_set__manageRaycasting)) bool  _manageRaycasting;

/// @brief Field _moveDirection, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveDirection, put=__cordl_internal_set__moveDirection)) ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _moveDirection;

/// @brief Field _moveToTouchPosition, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get__moveToTouchPosition, put=__cordl_internal_set__moveToTouchPosition)) bool  _moveToTouchPosition;

/// @brief Field _moveToTouchSpeed, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveToTouchSpeed, put=__cordl_internal_set__moveToTouchSpeed)) float_t  _moveToTouchSpeed;

/// @brief Field _onStickPositionChanged, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStickPositionChanged, put=__cordl_internal_set__onStickPositionChanged)) ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  _onStickPositionChanged;

/// @brief Field _onTap, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get__onTap, put=__cordl_internal_set__onTap)) ::Rewired::ComponentControls::TouchJoystick_TapEventHandler*  _onTap;

/// @brief Field _onTouchEnded, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get__onTouchEnded, put=__cordl_internal_set__onTouchEnded)) ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*  _onTouchEnded;

/// @brief Field _onTouchStarted, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__onTouchStarted, put=__cordl_internal_set__onTouchStarted)) ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*  _onTouchStarted;

/// @brief Field _onValueChanged, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get__onValueChanged, put=__cordl_internal_set__onValueChanged)) ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  _onValueChanged;

/// @brief Field _origAnchoredPosition, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__origAnchoredPosition, put=__cordl_internal_set__origAnchoredPosition)) ::UnityEngine::Vector2  _origAnchoredPosition;

/// @brief Field _origStickAnchoredPosition, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__origStickAnchoredPosition, put=__cordl_internal_set__origStickAnchoredPosition)) ::UnityEngine::Vector2  _origStickAnchoredPosition;

/// @brief Field _pointerDownIsFake, offset 0x1ea, size 0x1 
 __declspec(property(get=__cordl_internal_get__pointerDownIsFake, put=__cordl_internal_set__pointerDownIsFake)) bool  _pointerDownIsFake;

/// @brief Field _pointerId, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointerId, put=__cordl_internal_set__pointerId)) int32_t  _pointerId;

/// @brief Field _realMousePointerId, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get__realMousePointerId, put=__cordl_internal_set__realMousePointerId)) int32_t  _realMousePointerId;

/// @brief Field _returnOnRelease, offset 0x192, size 0x1 
 __declspec(property(get=__cordl_internal_get__returnOnRelease, put=__cordl_internal_set__returnOnRelease)) bool  _returnOnRelease;

/// @brief Field _returnSpeed, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get__returnSpeed, put=__cordl_internal_set__returnSpeed)) float_t  _returnSpeed;

/// @brief Field _scaleStickRange, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleStickRange, put=__cordl_internal_set__scaleStickRange)) bool  _scaleStickRange;

/// @brief Field _snapDirections, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapDirections, put=__cordl_internal_set__snapDirections)) ::Rewired::ComponentControls::TouchJoystick_SnapDirections  _snapDirections;

/// @brief Field _snapStickToTouch, offset 0x16c, size 0x1 
 __declspec(property(get=__cordl_internal_get__snapStickToTouch, put=__cordl_internal_set__snapStickToTouch)) bool  _snapStickToTouch;

/// @brief Field _stayActiveOnSwipeOut, offset 0x179, size 0x1 
 __declspec(property(get=__cordl_internal_get__stayActiveOnSwipeOut, put=__cordl_internal_set__stayActiveOnSwipeOut)) bool  _stayActiveOnSwipeOut;

/// @brief Field _stickBounds, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__stickBounds, put=__cordl_internal_set__stickBounds)) ::Rewired::ComponentControls::TouchJoystick_StickBounds  _stickBounds;

/// @brief Field _stickRange, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__stickRange, put=__cordl_internal_set__stickRange)) float_t  _stickRange;

/// @brief Field _stickTransform, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__stickTransform, put=__cordl_internal_set__stickTransform)) ::UnityW<::UnityEngine::RectTransform>  _stickTransform;

/// @brief Field _tapCustomControllerElement, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__tapCustomControllerElement, put=__cordl_internal_set__tapCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  _tapCustomControllerElement;

/// @brief Field _tapDistanceLimit, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get__tapDistanceLimit, put=__cordl_internal_set__tapDistanceLimit)) int32_t  _tapDistanceLimit;

/// @brief Field _tapTimeout, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tapTimeout, put=__cordl_internal_set__tapTimeout)) float_t  _tapTimeout;

/// @brief Field _touchRegion, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchRegion, put=__cordl_internal_set__touchRegion)) ::UnityW<::Rewired::ComponentControls::TouchRegion>  _touchRegion;

/// @brief Field _touchStartPosition, offset 0x1fc, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchStartPosition, put=__cordl_internal_set__touchStartPosition)) ::UnityEngine::Vector2  _touchStartPosition;

/// @brief Field _touchStartTime, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__touchStartTime, put=__cordl_internal_set__touchStartTime)) float_t  _touchStartTime;

/// @brief Field _useTouchRegionOnly, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTouchRegionOnly, put=__cordl_internal_set__useTouchRegionOnly)) bool  _useTouchRegionOnly;

/// @brief Field _useXAxis, offset 0x1a5, size 0x1 
 __declspec(property(get=__cordl_internal_get__useXAxis, put=__cordl_internal_set__useXAxis)) bool  _useXAxis;

/// @brief Field _useYAxis, offset 0x1a6, size 0x1 
 __declspec(property(get=__cordl_internal_get__useYAxis, put=__cordl_internal_set__useYAxis)) bool  _useYAxis;

/// @brief Field _verticalAxisCustomControllerElement, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__verticalAxisCustomControllerElement, put=__cordl_internal_set__verticalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _verticalAxisCustomControllerElement;

/// @brief Field _workingTouchRegion, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__workingTouchRegion, put=__cordl_internal_set__workingTouchRegion)) ::UnityW<::Rewired::ComponentControls::TouchRegion>  _workingTouchRegion;

 __declspec(property(get=get_activateOnSwipeIn, put=set_activateOnSwipeIn)) bool  activateOnSwipeIn;

 __declspec(property(get=get_allowTap, put=set_allowTap)) bool  allowTap;

 __declspec(property(get=get_animateOnMoveToTouch, put=set_animateOnMoveToTouch)) bool  animateOnMoveToTouch;

 __declspec(property(get=get_animateOnReturn, put=set_animateOnReturn)) bool  animateOnReturn;

 __declspec(property(get=get_axesToUse, put=set_axesToUse)) ::Rewired::ComponentControls::TouchJoystick_AxisDirection  axesToUse;

 __declspec(property(get=get_axis2DCalibration)) ::Rewired::Axis2DCalibration*  axis2DCalibration;

/// @brief Field cCnNRaCSlQTwdmFxZsJZyLiptpER, offset 0x1e9, size 0x1 
 __declspec(property(get=__cordl_internal_get_cCnNRaCSlQTwdmFxZsJZyLiptpER, put=__cordl_internal_set_cCnNRaCSlQTwdmFxZsJZyLiptpER)) bool  cCnNRaCSlQTwdmFxZsJZyLiptpER;

 __declspec(property(get=get_centerStickOnRelease, put=set_centerStickOnRelease)) bool  centerStickOnRelease;

 __declspec(property(get=get_deadZoneType)) ::Rewired::Axis2DCalibration*  deadZoneType;

 __declspec(property(get=get_digitalModeDeadZone, put=set_digitalModeDeadZone)) float_t  digitalModeDeadZone;

 __declspec(property(get=get_followTouchPosition, put=set_followTouchPosition)) bool  followTouchPosition;

 __declspec(property(get=HmUTTEddObvYFXrgScprWqqtOWXA, put=fdropTfsfgTuKcClWuvmfhuXtRPI)) ::Rewired::ComponentControls::TouchJoystick_StickBounds  fzJSsJVxLDEJDPaCfoArXaepKFjI;

 __declspec(property(get=get_hasPointer)) bool  hasPointer;

 __declspec(property(get=get_horizontalAxisCalibration)) ::Rewired::AxisCalibration*  horizontalAxisCalibration;

 __declspec(property(get=get_horizontalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  horizontalAxisCustomControllerElement;

 __declspec(property(get=lqEZBZrhjGaFlaMLfWzwHXJIQOlY)) bool  iJhRJwEtpsdwllMPlupOsHqdrJwH;

 __declspec(property(get=get_joystickMode, put=set_joystickMode)) ::Rewired::ComponentControls::TouchJoystick_JoystickMode  joystickMode;

 __declspec(property(get=get_manageRaycasting, put=set_manageRaycasting)) bool  manageRaycasting;

 __declspec(property(get=get_moveToTouchPosition, put=set_moveToTouchPosition)) bool  moveToTouchPosition;

 __declspec(property(get=get_moveToTouchSpeed, put=set_moveToTouchSpeed)) float_t  moveToTouchSpeed;

 __declspec(property(get=vhTloSfAJaGVFVBjYMKRyBmTKzZr)) int32_t  oilHmlKVFrRZKxAdUgGcosqpDkIcA;

 __declspec(property(get=qFGOjQiZUaIindbZzkoFeGpbPbKQ)) ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  orPgdUXFxEfYngVFiHjchxOHPxOBb;

 __declspec(property(get=psbejzeGNotnOqVuXsvVUjTDvdUb)) ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  pFmGAHcKeaZFjsXguZDEwMNkDqYZA;

 __declspec(property(get=get_pointerId, put=set_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_returnOnRelease, put=set_returnOnRelease)) bool  returnOnRelease;

 __declspec(property(get=get_returnSpeed, put=set_returnSpeed)) float_t  returnSpeed;

 __declspec(property(get=get_scaleStickRange, put=set_scaleStickRange)) bool  scaleStickRange;

 __declspec(property(get=get_snapDirections, put=set_snapDirections)) ::Rewired::ComponentControls::TouchJoystick_SnapDirections  snapDirections;

 __declspec(property(get=get_snapStickToTouch, put=set_snapStickToTouch)) bool  snapStickToTouch;

 __declspec(property(get=get_stayActiveOnSwipeOut, put=set_stayActiveOnSwipeOut)) bool  stayActiveOnSwipeOut;

 __declspec(property(get=get_stickRange, put=set_stickRange)) float_t  stickRange;

 __declspec(property(get=get_stickTransform, put=set_stickTransform)) ::UnityW<::UnityEngine::RectTransform>  stickTransform;

 __declspec(property(get=get_tapCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  tapCustomControllerElement;

 __declspec(property(get=get_tapDistanceLimit, put=set_tapDistanceLimit)) int32_t  tapDistanceLimit;

 __declspec(property(get=get_tapTimeout, put=set_tapTimeout)) float_t  tapTimeout;

 __declspec(property(get=get_touchRegion, put=set_touchRegion)) ::UnityW<::Rewired::ComponentControls::TouchRegion>  touchRegion;

 __declspec(property(get=get_useTouchRegionOnly, put=set_useTouchRegionOnly)) bool  useTouchRegionOnly;

 __declspec(property(get=get_verticalAxisCalibration)) ::Rewired::AxisCalibration*  verticalAxisCalibration;

 __declspec(property(get=get_verticalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  verticalAxisCustomControllerElement;

 __declspec(property(get=RVDgKoXCQYzloAXxNVsckVcjMJEI)) ::UnityW<::UnityEngine::RectTransform>  xfkBpIcksOqZMSbLgocEacwdzwdGB;

/// @brief Method Awake, addr 0x1818e8b10, size 0x100, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CKaCdeZpXsDlfGYCNfKpjpsKpWkFb, addr 0x1818e8c10, size 0xd0, virtual false, abstract: false, final false
inline void CKaCdeZpXsDlfGYCNfKpjpsKpWkFb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ClearValue, addr 0x1818e8ce0, size 0x2b0, virtual true, abstract: false, final false
inline void ClearValue() ;

/// @brief Method CsJWJzxgzPwawrktXenRsaYFuRtj, addr 0x1818e8f90, size 0xf0, virtual false, abstract: false, final false
inline void CsJWJzxgzPwawrktXenRsaYFuRtj(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method DUJJznEzOmPNPDBJJbOSHLWrWbmiA, addr 0x1818e9080, size 0x50, virtual true, abstract: false, final false
inline bool DUJJznEzOmPNPDBJJbOSHLWrWbmiA() ;

/// @brief Method DhLIAqkRhhbwXhGqecCnsmjXEkadA, addr 0x1818e90d0, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* DhLIAqkRhhbwXhGqecCnsmjXEkadA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method EXfJpsCERvxwMxupozHxGeUCrazl, addr 0x1818e91b0, size 0x1b0, virtual false, abstract: false, final false
inline void EXfJpsCERvxwMxupozHxGeUCrazl() ;

/// @brief Method EqeTihVBstfpJdPUZrBsmahUVlVMA, addr 0x1818e9360, size 0x1f0, virtual false, abstract: false, final false
inline void EqeTihVBstfpJdPUZrBsmahUVlVMA() ;

/// @brief Method FDDZodvOxBrQUJFeTMPtCmJmcteL, addr 0x1818e9550, size 0x40, virtual true, abstract: false, final false
inline void FDDZodvOxBrQUJFeTMPtCmJmcteL() ;

/// @brief Method GetRawValue, addr 0x1818e9590, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetRawValue() ;

/// @brief Method GetValue, addr 0x1818e95d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetValue() ;

/// @brief Method GfxKrWMovyqeySKQCZnqEUnZPFww, addr 0x1818e9610, size 0xe0, virtual false, abstract: false, final false
inline void GfxKrWMovyqeySKQCZnqEUnZPFww() ;

/// @brief Method HmUTTEddObvYFXrgScprWqqtOWXA, addr 0x1818e96f0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchJoystick_StickBounds HmUTTEddObvYFXrgScprWqqtOWXA() ;

/// @brief Method IfpQhRfdnUMrKAGXcCKZXtnTNANr, addr 0x1818e9700, size 0x40, virtual false, abstract: false, final false
inline bool IfpQhRfdnUMrKAGXcCKZXtnTNANr() ;

/// @brief Method JJiFvxbpySFwSZhSseXoeBxJZgGJB, addr 0x1818e9740, size 0xd0, virtual false, abstract: false, final false
inline void JJiFvxbpySFwSZhSseXoeBxJZgGJB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JKObouIgFGzuZJcGYPiETuKuyXTbA, addr 0x1818e9810, size 0xd0, virtual true, abstract: false, final false
inline void JKObouIgFGzuZJcGYPiETuKuyXTbA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JMVcMPcagZojYMzjnYdZXkFdjkTB, addr 0x1818e98e0, size 0xd0, virtual true, abstract: false, final false
inline void JMVcMPcagZojYMzjnYdZXkFdjkTB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method KmncMOdcGDRyHfjjBPVQYRdojcfPA, addr 0x1818e99b0, size 0xd0, virtual false, abstract: false, final false
inline void KmncMOdcGDRyHfjjBPVQYRdojcfPA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method KzFLBIHNWVwCEtAerTSVrOvpIWED, addr 0x1818e9a80, size 0x100, virtual true, abstract: false, final false
inline void KzFLBIHNWVwCEtAerTSVrOvpIWED() ;

/// @brief Method LIIZgolMbnKGJNPZveQjPbiUgASt, addr 0x1818e9b80, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LIIZgolMbnKGJNPZveQjPbiUgASt(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method LRpluAZMAdaCDIJHgKMhlycGyHceA, addr 0x1818e9c10, size 0xe0, virtual false, abstract: false, final false
inline void LRpluAZMAdaCDIJHgKMhlycGyHceA() ;

/// @brief Method MuASHFByHfjlrYFXXqYlOxbLSWlS, addr 0x1818e9cf0, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* MuASHFByHfjlrYFXXqYlOxbLSWlS(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NVzVaKJxUSDICvjWHpvpiRzLbmYi, addr 0x1818e9e50, size 0xe0, virtual false, abstract: false, final false
inline void NVzVaKJxUSDICvjWHpvpiRzLbmYi(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ComponentControls::TouchJoystick* New_ctor() ;

/// @brief Method NunEULiJULeVBEPlNWeZWopSqBFIA, addr 0x1818e9f30, size 0x120, virtual true, abstract: false, final false
inline void NunEULiJULeVBEPlNWeZWopSqBFIA() ;

/// @brief Method OnDisable, addr 0x1818ea050, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818ea0b0, size 0x30, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1818ea0e0, size 0x40, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PmyXRNPdKxDWeVHYdhijDPNWbPQgA, addr 0x1818ea120, size 0x1b0, virtual false, abstract: false, final false
inline void PmyXRNPdKxDWeVHYdhijDPNWbPQgA(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QfHFdSeiRaKlgIfNwdaQjKEchUnHc, addr 0x1818ea2d0, size 0xc0, virtual false, abstract: false, final false
inline void QfHFdSeiRaKlgIfNwdaQjKEchUnHc(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method QmSGJJCNmNzRKOZKdsOecWZSOCaCA, addr 0x1818ea390, size 0xe0, virtual false, abstract: false, final false
inline void QmSGJJCNmNzRKOZKdsOecWZSOCaCA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QpbePnTvsZNydjvpaQiBdBzHNjkE, addr 0x1818ea470, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* QpbePnTvsZNydjvpaQiBdBzHNjkE(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RNEiiGkTVenLfNnVDYAUoJeEcBFDA, addr 0x1818ea590, size 0x240, virtual false, abstract: false, final false
inline void RNEiiGkTVenLfNnVDYAUoJeEcBFDA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method RVDgKoXCQYzloAXxNVsckVcjMJEI, addr 0x1818ea7d0, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> RVDgKoXCQYzloAXxNVsckVcjMJEI() ;

/// @brief Method ReturnToDefaultPosition, addr 0x1818ea8b0, size 0x60, virtual false, abstract: false, final false
inline void ReturnToDefaultPosition() ;

/// @brief Method ReturnToDefaultPosition, addr 0x1818ea840, size 0x70, virtual false, abstract: false, final false
inline void ReturnToDefaultPosition(bool  instant) ;

/// @brief Method RkxQtTTDFwyeizkRQwyVCYYwHTo, addr 0x1818ea910, size 0xa0, virtual true, abstract: false, final false
inline bool RkxQtTTDFwyeizkRQwyVCYYwHTo(::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RzTIBHhIkfOdEInzrVQiIbEpxIHw, addr 0x1818ea9b0, size 0x120, virtual false, abstract: false, final false
inline void RzTIBHhIkfOdEInzrVQiIbEpxIHw(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method SetDefaultPosition, addr 0x1818eaad0, size 0x80, virtual false, abstract: false, final false
inline void SetDefaultPosition() ;

/// @brief Method SetRawValue, addr 0x1818eab50, size 0x250, virtual false, abstract: false, final false
inline void SetRawValue(::UnityEngine::Vector2  value) ;

/// @brief Method TIBJLUMjLlBBZxQwaKwyLwuKJInw, addr 0x1818eada0, size 0xd0, virtual true, abstract: false, final false
inline void TIBJLUMjLlBBZxQwaKwyLwuKJInw(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TpmCedgzQBCJthskUeDBXNrQnMRI, addr 0x1818eae70, size 0x10, virtual false, abstract: false, final false
inline void TpmCedgzQBCJthskUeDBXNrQnMRI(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method UIsEZHBSCqWkBnrKijhNchYFhhpMc, addr 0x1818eae80, size 0x2f0, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* UIsEZHBSCqWkBnrKijhNchYFhhpMc(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method VQGbbEotQPadjrALObzVDMQpvodbA, addr 0x1818e8c10, size 0xd0, virtual false, abstract: false, final false
inline void VQGbbEotQPadjrALObzVDMQpvodbA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VmUoLUIkEsGrzMFobhATCWKTkFPB, addr 0x1818eb170, size 0x40, virtual false, abstract: false, final false
inline bool VmUoLUIkEsGrzMFobhATCWKTkFPB() ;

/// @brief Method VwZqWPBoEdrhUycSXftWYijMMeSN, addr 0x1818e98e0, size 0xd0, virtual true, abstract: false, final false
inline void VwZqWPBoEdrhUycSXftWYijMMeSN(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VwcBAgQDZdRNtDDzHDnUNgmckUlp, addr 0x1818eb1b0, size 0x440, virtual false, abstract: false, final false
inline void VwcBAgQDZdRNtDDzHDnUNgmckUlp(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method XCEYSalDmTqsEkjolTYVVPFGITKB, addr 0x1818eb5f0, size 0xf0, virtual true, abstract: false, final false
inline void XCEYSalDmTqsEkjolTYVVPFGITKB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZotBvjUzWWBTQhpzhStPksSAqmeG, addr 0x1818eb6e0, size 0xb0, virtual false, abstract: false, final false
inline void ZotBvjUzWWBTQhpzhStPksSAqmeG(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr bool const& __cordl_internal_get_CSVbDncOCvRIzqyDMCNArskcVwED() const;

constexpr bool& __cordl_internal_get_CSVbDncOCvRIzqyDMCNArskcVwED() ;

constexpr float_t const& __cordl_internal_get___calculatedStickRange_cachedValue() const;

constexpr float_t& __cordl_internal_get___calculatedStickRange_cachedValue() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get___fakePointerEventData() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get___fakePointerEventData() ;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* const& __cordl_internal_get___moveEndedDelegate() const;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*& __cordl_internal_get___moveEndedDelegate() ;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* const& __cordl_internal_get___moveStartedDelegate() const;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*& __cordl_internal_get___moveStartedDelegate() ;

constexpr bool const& __cordl_internal_get__activateOnSwipeIn() const;

constexpr bool& __cordl_internal_get__activateOnSwipeIn() ;

constexpr bool const& __cordl_internal_get__allowTap() const;

constexpr bool& __cordl_internal_get__allowTap() ;

constexpr bool const& __cordl_internal_get__animateOnMoveToTouch() const;

constexpr bool& __cordl_internal_get__animateOnMoveToTouch() ;

constexpr bool const& __cordl_internal_get__animateOnReturn() const;

constexpr bool& __cordl_internal_get__animateOnReturn() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection const& __cordl_internal_get__axesToUse() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_AxisDirection& __cordl_internal_get__axesToUse() ;

constexpr ::Rewired::Internal::StandaloneAxis2D* const& __cordl_internal_get__axis2D() const;

constexpr ::Rewired::Internal::StandaloneAxis2D*& __cordl_internal_get__axis2D() ;

constexpr int32_t const& __cordl_internal_get__calculatedStickRange_lastUpdatedFrame() const;

constexpr int32_t& __cordl_internal_get__calculatedStickRange_lastUpdatedFrame() ;

constexpr bool const& __cordl_internal_get__centerStickOnRelease() const;

constexpr bool& __cordl_internal_get__centerStickOnRelease() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__coroutineMove() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__coroutineMove() ;

constexpr float_t const& __cordl_internal_get__digitalModeDeadZone() const;

constexpr float_t& __cordl_internal_get__digitalModeDeadZone() ;

constexpr bool const& __cordl_internal_get__followTouchPosition() const;

constexpr bool& __cordl_internal_get__followTouchPosition() ;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* const& __cordl_internal_get__hierarchyStickPositionChangedHandlers() const;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*& __cordl_internal_get__hierarchyStickPositionChangedHandlers() ;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* const& __cordl_internal_get__hierarchyValueChangedHandlers() const;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*& __cordl_internal_get__hierarchyValueChangedHandlers() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__horizontalAxisCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__horizontalAxisCustomControllerElement() ;

constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc* const& __cordl_internal_get__imageRaycastHelper() const;

constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*& __cordl_internal_get__imageRaycastHelper() ;

constexpr bool const& __cordl_internal_get__isEligibleForTap() const;

constexpr bool& __cordl_internal_get__isEligibleForTap() ;

constexpr bool const& __cordl_internal_get__isMovedFromDefaultPosition() const;

constexpr bool& __cordl_internal_get__isMovedFromDefaultPosition() ;

constexpr bool const& __cordl_internal_get__isMoving() const;

constexpr bool& __cordl_internal_get__isMoving() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode const& __cordl_internal_get__joystickMode() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_JoystickMode& __cordl_internal_get__joystickMode() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB const& __cordl_internal_get__lastClaimSource() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB& __cordl_internal_get__lastClaimSource() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__lastPressAnchoredPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__lastPressAnchoredPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__lastPressStartingValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__lastPressStartingValue() ;

constexpr int32_t const& __cordl_internal_get__lastTapFrame() const;

constexpr int32_t& __cordl_internal_get__lastTapFrame() ;

constexpr bool const& __cordl_internal_get__manageRaycasting() const;

constexpr bool& __cordl_internal_get__manageRaycasting() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl const& __cordl_internal_get__moveDirection() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl& __cordl_internal_get__moveDirection() ;

constexpr bool const& __cordl_internal_get__moveToTouchPosition() const;

constexpr bool& __cordl_internal_get__moveToTouchPosition() ;

constexpr float_t const& __cordl_internal_get__moveToTouchSpeed() const;

constexpr float_t& __cordl_internal_get__moveToTouchSpeed() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler* const& __cordl_internal_get__onStickPositionChanged() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*& __cordl_internal_get__onStickPositionChanged() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_TapEventHandler* const& __cordl_internal_get__onTap() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_TapEventHandler*& __cordl_internal_get__onTap() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler* const& __cordl_internal_get__onTouchEnded() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*& __cordl_internal_get__onTouchEnded() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler* const& __cordl_internal_get__onTouchStarted() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*& __cordl_internal_get__onTouchStarted() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler* const& __cordl_internal_get__onValueChanged() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*& __cordl_internal_get__onValueChanged() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__origAnchoredPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__origAnchoredPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__origStickAnchoredPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__origStickAnchoredPosition() ;

constexpr bool const& __cordl_internal_get__pointerDownIsFake() const;

constexpr bool& __cordl_internal_get__pointerDownIsFake() ;

constexpr int32_t const& __cordl_internal_get__pointerId() const;

constexpr int32_t& __cordl_internal_get__pointerId() ;

constexpr int32_t const& __cordl_internal_get__realMousePointerId() const;

constexpr int32_t& __cordl_internal_get__realMousePointerId() ;

constexpr bool const& __cordl_internal_get__returnOnRelease() const;

constexpr bool& __cordl_internal_get__returnOnRelease() ;

constexpr float_t const& __cordl_internal_get__returnSpeed() const;

constexpr float_t& __cordl_internal_get__returnSpeed() ;

constexpr bool const& __cordl_internal_get__scaleStickRange() const;

constexpr bool& __cordl_internal_get__scaleStickRange() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections const& __cordl_internal_get__snapDirections() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_SnapDirections& __cordl_internal_get__snapDirections() ;

constexpr bool const& __cordl_internal_get__snapStickToTouch() const;

constexpr bool& __cordl_internal_get__snapStickToTouch() ;

constexpr bool const& __cordl_internal_get__stayActiveOnSwipeOut() const;

constexpr bool& __cordl_internal_get__stayActiveOnSwipeOut() ;

constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds const& __cordl_internal_get__stickBounds() const;

constexpr ::Rewired::ComponentControls::TouchJoystick_StickBounds& __cordl_internal_get__stickBounds() ;

constexpr float_t const& __cordl_internal_get__stickRange() const;

constexpr float_t& __cordl_internal_get__stickRange() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__stickTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__stickTransform() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* const& __cordl_internal_get__tapCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*& __cordl_internal_get__tapCustomControllerElement() ;

constexpr int32_t const& __cordl_internal_get__tapDistanceLimit() const;

constexpr int32_t& __cordl_internal_get__tapDistanceLimit() ;

constexpr float_t const& __cordl_internal_get__tapTimeout() const;

constexpr float_t& __cordl_internal_get__tapTimeout() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& __cordl_internal_get__touchRegion() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& __cordl_internal_get__touchRegion() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__touchStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__touchStartPosition() ;

constexpr float_t const& __cordl_internal_get__touchStartTime() const;

constexpr float_t& __cordl_internal_get__touchStartTime() ;

constexpr bool const& __cordl_internal_get__useTouchRegionOnly() const;

constexpr bool& __cordl_internal_get__useTouchRegionOnly() ;

constexpr bool const& __cordl_internal_get__useXAxis() const;

constexpr bool& __cordl_internal_get__useXAxis() ;

constexpr bool const& __cordl_internal_get__useYAxis() const;

constexpr bool& __cordl_internal_get__useYAxis() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__verticalAxisCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__verticalAxisCustomControllerElement() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& __cordl_internal_get__workingTouchRegion() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& __cordl_internal_get__workingTouchRegion() ;

constexpr bool const& __cordl_internal_get_cCnNRaCSlQTwdmFxZsJZyLiptpER() const;

constexpr bool& __cordl_internal_get_cCnNRaCSlQTwdmFxZsJZyLiptpER() ;

constexpr void __cordl_internal_set_CSVbDncOCvRIzqyDMCNArskcVwED(bool  value) ;

constexpr void __cordl_internal_set___calculatedStickRange_cachedValue(float_t  value) ;

constexpr void __cordl_internal_set___fakePointerEventData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set___moveEndedDelegate(::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  value) ;

constexpr void __cordl_internal_set___moveStartedDelegate(::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  value) ;

constexpr void __cordl_internal_set__activateOnSwipeIn(bool  value) ;

constexpr void __cordl_internal_set__allowTap(bool  value) ;

constexpr void __cordl_internal_set__animateOnMoveToTouch(bool  value) ;

constexpr void __cordl_internal_set__animateOnReturn(bool  value) ;

constexpr void __cordl_internal_set__axesToUse(::Rewired::ComponentControls::TouchJoystick_AxisDirection  value) ;

constexpr void __cordl_internal_set__axis2D(::Rewired::Internal::StandaloneAxis2D*  value) ;

constexpr void __cordl_internal_set__calculatedStickRange_lastUpdatedFrame(int32_t  value) ;

constexpr void __cordl_internal_set__centerStickOnRelease(bool  value) ;

constexpr void __cordl_internal_set__coroutineMove(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set__digitalModeDeadZone(float_t  value) ;

constexpr void __cordl_internal_set__followTouchPosition(bool  value) ;

constexpr void __cordl_internal_set__hierarchyStickPositionChangedHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__hierarchyValueChangedHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__horizontalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set__imageRaycastHelper(::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  value) ;

constexpr void __cordl_internal_set__isEligibleForTap(bool  value) ;

constexpr void __cordl_internal_set__isMovedFromDefaultPosition(bool  value) ;

constexpr void __cordl_internal_set__isMoving(bool  value) ;

constexpr void __cordl_internal_set__joystickMode(::Rewired::ComponentControls::TouchJoystick_JoystickMode  value) ;

constexpr void __cordl_internal_set__lastClaimSource(::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  value) ;

constexpr void __cordl_internal_set__lastPressAnchoredPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__lastPressStartingValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__lastTapFrame(int32_t  value) ;

constexpr void __cordl_internal_set__manageRaycasting(bool  value) ;

constexpr void __cordl_internal_set__moveDirection(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  value) ;

constexpr void __cordl_internal_set__moveToTouchPosition(bool  value) ;

constexpr void __cordl_internal_set__moveToTouchSpeed(float_t  value) ;

constexpr void __cordl_internal_set__onStickPositionChanged(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__onTap(::Rewired::ComponentControls::TouchJoystick_TapEventHandler*  value) ;

constexpr void __cordl_internal_set__onTouchEnded(::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*  value) ;

constexpr void __cordl_internal_set__onTouchStarted(::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*  value) ;

constexpr void __cordl_internal_set__onValueChanged(::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__origAnchoredPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__origStickAnchoredPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__pointerDownIsFake(bool  value) ;

constexpr void __cordl_internal_set__pointerId(int32_t  value) ;

constexpr void __cordl_internal_set__realMousePointerId(int32_t  value) ;

constexpr void __cordl_internal_set__returnOnRelease(bool  value) ;

constexpr void __cordl_internal_set__returnSpeed(float_t  value) ;

constexpr void __cordl_internal_set__scaleStickRange(bool  value) ;

constexpr void __cordl_internal_set__snapDirections(::Rewired::ComponentControls::TouchJoystick_SnapDirections  value) ;

constexpr void __cordl_internal_set__snapStickToTouch(bool  value) ;

constexpr void __cordl_internal_set__stayActiveOnSwipeOut(bool  value) ;

constexpr void __cordl_internal_set__stickBounds(::Rewired::ComponentControls::TouchJoystick_StickBounds  value) ;

constexpr void __cordl_internal_set__stickRange(float_t  value) ;

constexpr void __cordl_internal_set__stickTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__tapCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  value) ;

constexpr void __cordl_internal_set__tapDistanceLimit(int32_t  value) ;

constexpr void __cordl_internal_set__tapTimeout(float_t  value) ;

constexpr void __cordl_internal_set__touchRegion(::UnityW<::Rewired::ComponentControls::TouchRegion>  value) ;

constexpr void __cordl_internal_set__touchStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__touchStartTime(float_t  value) ;

constexpr void __cordl_internal_set__useTouchRegionOnly(bool  value) ;

constexpr void __cordl_internal_set__useXAxis(bool  value) ;

constexpr void __cordl_internal_set__useYAxis(bool  value) ;

constexpr void __cordl_internal_set__verticalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set__workingTouchRegion(::UnityW<::Rewired::ComponentControls::TouchRegion>  value) ;

constexpr void __cordl_internal_set_cCnNRaCSlQTwdmFxZsJZyLiptpER(bool  value) ;

/// @brief Method .ctor, addr 0x1818eb790, size 0x290, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_StickPositionChangedEvent, addr 0x1818eba20, size 0x30, virtual false, abstract: false, final false
inline void add_StickPositionChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method add_TapEvent, addr 0x1818eba50, size 0x30, virtual false, abstract: false, final false
inline void add_TapEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_TouchDownEvent, addr 0x1818eba80, size 0x30, virtual false, abstract: false, final false
inline void add_TouchDownEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_TouchUpEvent, addr 0x1818ebab0, size 0x30, virtual false, abstract: false, final false
inline void add_TouchUpEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_ValueChangedEvent, addr 0x1818ebae0, size 0x30, virtual false, abstract: false, final false
inline void add_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method blsHMoQbVkFnnQCikqQuLENCSOfH, addr 0x1818ebb10, size 0x20, virtual false, abstract: false, final false
inline void blsHMoQbVkFnnQCikqQuLENCSOfH() ;

/// @brief Method butMBaunfHkGCpdKEzCPMHyNRyuu, addr 0x1818ebb30, size 0xe0, virtual false, abstract: false, final false
inline void butMBaunfHkGCpdKEzCPMHyNRyuu(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method dEnBOxJiYrtklEiVxClZOGZigKmM, addr 0x1818ebc10, size 0x120, virtual false, abstract: false, final false
inline void dEnBOxJiYrtklEiVxClZOGZigKmM(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method dsiBMupFxlfdDxxnVPAkDqtVacNAA, addr 0x1818ebd30, size 0x70, virtual true, abstract: false, final false
inline void dsiBMupFxlfdDxxnVPAkDqtVacNAA() ;

/// @brief Method eDnATMezupCRiGrnftuwDMkbfJeSc, addr 0x180481ba0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::StandaloneAxis2D* eDnATMezupCRiGrnftuwDMkbfJeSc() ;

/// @brief Method eMZgghmayRUaQdKClFwivkHuFjzl, addr 0x1818ebda0, size 0x70, virtual false, abstract: false, final false
inline void eMZgghmayRUaQdKClFwivkHuFjzl(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fdropTfsfgTuKcClWuvmfhuXtRPI, addr 0x1818ebe10, size 0x30, virtual false, abstract: false, final false
inline void fdropTfsfgTuKcClWuvmfhuXtRPI(::Rewired::ComponentControls::TouchJoystick_StickBounds  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method flzFDIBilHplowalVdVWqITFAbdYA, addr 0x1818ebe40, size 0xd0, virtual false, abstract: false, final false
inline void flzFDIBilHplowalVdVWqITFAbdYA(::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace) ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* getStaticF___stickPositionChangedHandlerDelegate() ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* getStaticF___valueChangedHandlerDelegate() ;

/// @brief Method get_activateOnSwipeIn, addr 0x1818ebf10, size 0x10, virtual false, abstract: false, final false
inline bool get_activateOnSwipeIn() ;

/// @brief Method get_allowTap, addr 0x1818ebf20, size 0x10, virtual false, abstract: false, final false
inline bool get_allowTap() ;

/// @brief Method get_animateOnMoveToTouch, addr 0x1818ebf30, size 0x10, virtual false, abstract: false, final false
inline bool get_animateOnMoveToTouch() ;

/// @brief Method get_animateOnReturn, addr 0x1818ebf40, size 0x10, virtual false, abstract: false, final false
inline bool get_animateOnReturn() ;

/// @brief Method get_axesToUse, addr 0x1818ebf50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchJoystick_AxisDirection get_axesToUse() ;

/// @brief Method get_axis2DCalibration, addr 0x1818ebf60, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Axis2DCalibration* get_axis2DCalibration() ;

/// @brief Method get_centerStickOnRelease, addr 0x1818ebf80, size 0x10, virtual false, abstract: false, final false
inline bool get_centerStickOnRelease() ;

/// @brief Method get_deadZoneType, addr 0x1818ebf60, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Axis2DCalibration* get_deadZoneType() ;

/// @brief Method get_digitalModeDeadZone, addr 0x1818ebf90, size 0x10, virtual false, abstract: false, final false
inline float_t get_digitalModeDeadZone() ;

/// @brief Method get_followTouchPosition, addr 0x1818ebfa0, size 0x10, virtual false, abstract: false, final false
inline bool get_followTouchPosition() ;

/// @brief Method get_hasPointer, addr 0x1818ebfb0, size 0x10, virtual false, abstract: false, final false
inline bool get_hasPointer() ;

/// @brief Method get_horizontalAxisCalibration, addr 0x1818ebfc0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_horizontalAxisCalibration() ;

/// @brief Method get_horizontalAxisCustomControllerElement, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_horizontalAxisCustomControllerElement() ;

/// @brief Method get_joystickMode, addr 0x181454230, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchJoystick_JoystickMode get_joystickMode() ;

/// @brief Method get_manageRaycasting, addr 0x1818ebff0, size 0x10, virtual false, abstract: false, final false
inline bool get_manageRaycasting() ;

/// @brief Method get_moveToTouchPosition, addr 0x1818ec000, size 0x10, virtual false, abstract: false, final false
inline bool get_moveToTouchPosition() ;

/// @brief Method get_moveToTouchSpeed, addr 0x1818ec010, size 0x10, virtual false, abstract: false, final false
inline float_t get_moveToTouchSpeed() ;

/// @brief Method get_pointerId, addr 0x1818ec020, size 0x10, virtual false, abstract: false, final false
inline int32_t get_pointerId() ;

/// @brief Method get_returnOnRelease, addr 0x1818ec030, size 0x10, virtual false, abstract: false, final false
inline bool get_returnOnRelease() ;

/// @brief Method get_returnSpeed, addr 0x1818ec040, size 0x10, virtual false, abstract: false, final false
inline float_t get_returnSpeed() ;

/// @brief Method get_scaleStickRange, addr 0x1818e3af0, size 0x10, virtual false, abstract: false, final false
inline bool get_scaleStickRange() ;

/// @brief Method get_snapDirections, addr 0x1818ec050, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchJoystick_SnapDirections get_snapDirections() ;

/// @brief Method get_snapStickToTouch, addr 0x1818e3b50, size 0x10, virtual false, abstract: false, final false
inline bool get_snapStickToTouch() ;

/// @brief Method get_stayActiveOnSwipeOut, addr 0x1818ec060, size 0x50, virtual false, abstract: false, final false
inline bool get_stayActiveOnSwipeOut() ;

/// @brief Method get_stickRange, addr 0x1818ec0b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_stickRange() ;

/// @brief Method get_stickTransform, addr 0x180474c20, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_stickTransform() ;

/// @brief Method get_tapCustomControllerElement, addr 0x180474c30, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* get_tapCustomControllerElement() ;

/// @brief Method get_tapDistanceLimit, addr 0x1818ec0c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_tapDistanceLimit() ;

/// @brief Method get_tapTimeout, addr 0x1818ec0d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_tapTimeout() ;

/// @brief Method get_touchRegion, addr 0x180345c40, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::ComponentControls::TouchRegion> get_touchRegion() ;

/// @brief Method get_useTouchRegionOnly, addr 0x1818ec0e0, size 0x10, virtual false, abstract: false, final false
inline bool get_useTouchRegionOnly() ;

/// @brief Method get_verticalAxisCalibration, addr 0x1818ec0f0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_verticalAxisCalibration() ;

/// @brief Method get_verticalAxisCustomControllerElement, addr 0x1803370f0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_verticalAxisCustomControllerElement() ;

/// @brief Method gocGnBjlwdMTsQNGHQSIJTwRCJhKA, addr 0x1818ec120, size 0x1c0, virtual false, abstract: false, final false
inline void gocGnBjlwdMTsQNGHQSIJTwRCJhKA(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ipnzsmMdRLwsYqbXSaBaLIDzvIko, addr 0x1818ec2e0, size 0x1e0, virtual false, abstract: false, final false
inline void ipnzsmMdRLwsYqbXSaBaLIDzvIko(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method jsyFhRHrWcamsRuoLvNjmGQPTwQS, addr 0x1818ec4c0, size 0x4f0, virtual false, abstract: false, final false
inline void jsyFhRHrWcamsRuoLvNjmGQPTwQS(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method lPSjTJKCDKmIkqbetHnEExrtbrWU, addr 0x1818ec9b0, size 0x2c0, virtual false, abstract: false, final false
inline void lPSjTJKCDKmIkqbetHnEExrtbrWU(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method lXMCiHPRWYAljHDvkXKRsMvpBcLwA, addr 0x1818ecc70, size 0xb0, virtual false, abstract: false, final false
inline void lXMCiHPRWYAljHDvkXKRsMvpBcLwA(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method llQDQAiVEkXANzeOdxkKumcuozWK, addr 0x1818ecd20, size 0x150, virtual false, abstract: false, final false
inline void llQDQAiVEkXANzeOdxkKumcuozWK() ;

/// @brief Method lqEZBZrhjGaFlaMLfWzwHXJIQOlY, addr 0x1818ece70, size 0x20, virtual false, abstract: false, final false
inline bool lqEZBZrhjGaFlaMLfWzwHXJIQOlY() ;

/// @brief Method lzaLXdaFMpKNkzDnHgPAIuGVeAHv, addr 0x1818ece90, size 0x1d0, virtual true, abstract: false, final false
inline void lzaLXdaFMpKNkzDnHgPAIuGVeAHv() ;

/// @brief Method nkyfjLmszqxZCQFPikpkDaRyeFNC, addr 0x1818ed060, size 0x2c0, virtual true, abstract: false, final false
inline void nkyfjLmszqxZCQFPikpkDaRyeFNC() ;

/// @brief Method oFsAoXAGkBrgaVoZlAngYdDPKKbHb, addr 0x1818ed320, size 0xd0, virtual true, abstract: false, final false
inline void oFsAoXAGkBrgaVoZlAngYdDPKKbHb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pOwaYPzEALfOXHMkgtNCUDGVbazH, addr 0x1818ed3f0, size 0x70, virtual true, abstract: false, final false
inline void pOwaYPzEALfOXHMkgtNCUDGVbazH() ;

/// @brief Method pTVORZYoFZOgrlUulNIvAgwUyysp, addr 0x1818ed460, size 0x390, virtual false, abstract: false, final false
inline void pTVORZYoFZOgrlUulNIvAgwUyysp(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method psbejzeGNotnOqVuXsvVUjTDvdUb, addr 0x1818ed7f0, size 0x70, virtual false, abstract: false, final false
inline ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* psbejzeGNotnOqVuXsvVUjTDvdUb() ;

/// @brief Method qFGOjQiZUaIindbZzkoFeGpbPbKQ, addr 0x1818ed860, size 0x70, virtual false, abstract: false, final false
inline ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>* qFGOjQiZUaIindbZzkoFeGpbPbKQ() ;

/// @brief Method qLLdlOBgAQHTArUzRjZzrASRDaVcb, addr 0x1818ed8d0, size 0xd0, virtual false, abstract: false, final false
inline void qLLdlOBgAQHTArUzRjZzrASRDaVcb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method remove_StickPositionChangedEvent, addr 0x1818ed9a0, size 0x30, virtual false, abstract: false, final false
inline void remove_StickPositionChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method remove_TapEvent, addr 0x1818ed9d0, size 0x30, virtual false, abstract: false, final false
inline void remove_TapEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_TouchDownEvent, addr 0x1818eda00, size 0x30, virtual false, abstract: false, final false
inline void remove_TouchDownEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_TouchUpEvent, addr 0x1818eda30, size 0x30, virtual false, abstract: false, final false
inline void remove_TouchUpEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_ValueChangedEvent, addr 0x1818eda60, size 0x30, virtual false, abstract: false, final false
inline void remove_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method rkvlxWjAScQCQbaBPdkgzHevIesv, addr 0x1818eda90, size 0x60, virtual false, abstract: false, final false
inline void rkvlxWjAScQCQbaBPdkgzHevIesv() ;

/// @brief Method sPxPOzEgwJFjYbEByXyaPZFElhevA, addr 0x1818edaf0, size 0x50, virtual false, abstract: false, final false
inline bool sPxPOzEgwJFjYbEByXyaPZFElhevA(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF___stickPositionChangedHandlerDelegate(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  value) ;

static inline void setStaticF___valueChangedHandlerDelegate(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  value) ;

/// @brief Method set_activateOnSwipeIn, addr 0x1818edb40, size 0x30, virtual false, abstract: false, final false
inline void set_activateOnSwipeIn(bool  value) ;

/// @brief Method set_allowTap, addr 0x1818edb70, size 0x30, virtual false, abstract: false, final false
inline void set_allowTap(bool  value) ;

/// @brief Method set_animateOnMoveToTouch, addr 0x1818edba0, size 0x30, virtual false, abstract: false, final false
inline void set_animateOnMoveToTouch(bool  value) ;

/// @brief Method set_animateOnReturn, addr 0x1818edbd0, size 0x30, virtual false, abstract: false, final false
inline void set_animateOnReturn(bool  value) ;

/// @brief Method set_axesToUse, addr 0x1818edc00, size 0x40, virtual false, abstract: false, final false
inline void set_axesToUse(::Rewired::ComponentControls::TouchJoystick_AxisDirection  value) ;

/// @brief Method set_centerStickOnRelease, addr 0x1818edc40, size 0x30, virtual false, abstract: false, final false
inline void set_centerStickOnRelease(bool  value) ;

/// @brief Method set_digitalModeDeadZone, addr 0x1818edc70, size 0x50, virtual false, abstract: false, final false
inline void set_digitalModeDeadZone(float_t  value) ;

/// @brief Method set_followTouchPosition, addr 0x1818edcc0, size 0x30, virtual false, abstract: false, final false
inline void set_followTouchPosition(bool  value) ;

/// @brief Method set_joystickMode, addr 0x1818edcf0, size 0x30, virtual false, abstract: false, final false
inline void set_joystickMode(::Rewired::ComponentControls::TouchJoystick_JoystickMode  value) ;

/// @brief Method set_manageRaycasting, addr 0x1818edd20, size 0x60, virtual false, abstract: false, final false
inline void set_manageRaycasting(bool  value) ;

/// @brief Method set_moveToTouchPosition, addr 0x1818edd80, size 0x30, virtual false, abstract: false, final false
inline void set_moveToTouchPosition(bool  value) ;

/// @brief Method set_moveToTouchSpeed, addr 0x1818eddb0, size 0x60, virtual false, abstract: false, final false
inline void set_moveToTouchSpeed(float_t  value) ;

/// @brief Method set_pointerId, addr 0x1818ede10, size 0x10, virtual false, abstract: false, final false
inline void set_pointerId(int32_t  value) ;

/// @brief Method set_returnOnRelease, addr 0x1818ede20, size 0x30, virtual false, abstract: false, final false
inline void set_returnOnRelease(bool  value) ;

/// @brief Method set_returnSpeed, addr 0x1818ede50, size 0x60, virtual false, abstract: false, final false
inline void set_returnSpeed(float_t  value) ;

/// @brief Method set_scaleStickRange, addr 0x1818e48d0, size 0x30, virtual false, abstract: false, final false
inline void set_scaleStickRange(bool  value) ;

/// @brief Method set_snapDirections, addr 0x1818edeb0, size 0x30, virtual false, abstract: false, final false
inline void set_snapDirections(::Rewired::ComponentControls::TouchJoystick_SnapDirections  value) ;

/// @brief Method set_snapStickToTouch, addr 0x1818edee0, size 0x30, virtual false, abstract: false, final false
inline void set_snapStickToTouch(bool  value) ;

/// @brief Method set_stayActiveOnSwipeOut, addr 0x1818edf10, size 0x30, virtual false, abstract: false, final false
inline void set_stayActiveOnSwipeOut(bool  value) ;

/// @brief Method set_stickRange, addr 0x1818edf40, size 0x60, virtual false, abstract: false, final false
inline void set_stickRange(float_t  value) ;

/// @brief Method set_stickTransform, addr 0x1818edfa0, size 0x60, virtual false, abstract: false, final false
inline void set_stickTransform(::UnityEngine::RectTransform*  value) ;

/// @brief Method set_tapDistanceLimit, addr 0x1818ee000, size 0x50, virtual false, abstract: false, final false
inline void set_tapDistanceLimit(int32_t  value) ;

/// @brief Method set_tapTimeout, addr 0x1818ee050, size 0x50, virtual false, abstract: false, final false
inline void set_tapTimeout(float_t  value) ;

/// @brief Method set_touchRegion, addr 0x1818ee0a0, size 0x60, virtual false, abstract: false, final false
inline void set_touchRegion(::Rewired::ComponentControls::TouchRegion*  value) ;

/// @brief Method set_useTouchRegionOnly, addr 0x1818ee100, size 0x30, virtual false, abstract: false, final false
inline void set_useTouchRegionOnly(bool  value) ;

/// @brief Method tDRVkyXEpcpbmhuEvJpaRdPwAxOr, addr 0x1818ee130, size 0x70, virtual false, abstract: false, final false
inline void tDRVkyXEpcpbmhuEvJpaRdPwAxOr() ;

/// @brief Method tnDtUpZiHsfpSvWWKCdyEMHenlAb, addr 0x1818ee1a0, size 0x390, virtual false, abstract: false, final false
inline float_t tnDtUpZiHsfpSvWWKCdyEMHenlAb() ;

/// @brief Method txgaLaLaLWMgvEKJTevECZBudTkK, addr 0x1818ee530, size 0xf0, virtual true, abstract: false, final false
inline void txgaLaLaLWMgvEKJTevECZBudTkK(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method uBoXEsxpsUESsdXExZlSiJgSJiih, addr 0x1818ee620, size 0x250, virtual false, abstract: false, final false
inline void uBoXEsxpsUESsdXExZlSiJgSJiih(::Rewired::ComponentControls::TouchJoystick_AxisDirection  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method uDMEZSeNIJbqXUqxSBRbcjBxrfus, addr 0x1818ee870, size 0x30, virtual true, abstract: false, final false
inline bool uDMEZSeNIJbqXUqxSBRbcjBxrfus() ;

/// @brief Method vhTloSfAJaGVFVBjYMKRyBmTKzZr, addr 0x1818ee8a0, size 0x30, virtual false, abstract: false, final false
inline int32_t vhTloSfAJaGVFVBjYMKRyBmTKzZr() ;

/// @brief Method vtAesEHPGNcqdqRfFPNnhNFzWcci, addr 0x1818eb6e0, size 0xb0, virtual false, abstract: false, final false
inline void vtAesEHPGNcqdqRfFPNnhNFzWcci(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method wEfQoOOIgCZpgdCOFBpoPkhQrUWs, addr 0x1818ee8d0, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>* wEfQoOOIgCZpgdCOFBpoPkhQrUWs() ;

/// @brief Method wHPEazPzaibbzlTnmGNWDyFXXzfA, addr 0x1818ee9d0, size 0x130, virtual false, abstract: false, final false
inline void wHPEazPzaibbzlTnmGNWDyFXXzfA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method wbWiphUAApvTAEHUQORuqnWveFrD, addr 0x1818eeb00, size 0x80, virtual false, abstract: false, final false
inline void wbWiphUAApvTAEHUQORuqnWveFrD() ;

/// @brief Method yhitIOqBficQuSzNnowYHoPdQMvg, addr 0x1818eeb80, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>* yhitIOqBficQuSzNnowYHoPdQMvg() ;

/// @brief Method zfgMJjVzYKMFanTwrQdGwnoJGVCI, addr 0x1818eec80, size 0xf0, virtual false, abstract: false, final false
inline void zfgMJjVzYKMFanTwrQdGwnoJGVCI(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystick(TouchJoystick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystick(TouchJoystick const& ) = delete;

/// @brief Field MAX_MOVE_SPEED offset 0xffffffff size 0x4
static constexpr float_t  MAX_MOVE_SPEED{static_cast<float_t>(20.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2781};

/// @brief Field _horizontalAxisCustomControllerElement, offset: 0x130, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____horizontalAxisCustomControllerElement;

/// @brief Field _verticalAxisCustomControllerElement, offset: 0x138, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____verticalAxisCustomControllerElement;

/// @brief Field _tapCustomControllerElement, offset: 0x140, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  ____tapCustomControllerElement;

/// @brief Field _stickTransform, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____stickTransform;

/// @brief Field _joystickMode, offset: 0x150, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_JoystickMode  ____joystickMode;

/// @brief Field _digitalModeDeadZone, offset: 0x154, size: 0x4, def value: None
 float_t  ____digitalModeDeadZone;

/// @brief Field _stickRange, offset: 0x158, size: 0x4, def value: None
 float_t  ____stickRange;

/// @brief Field _scaleStickRange, offset: 0x15c, size: 0x1, def value: None
 bool  ____scaleStickRange;

/// @brief Field _stickBounds, offset: 0x160, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_StickBounds  ____stickBounds;

/// @brief Field _axesToUse, offset: 0x164, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_AxisDirection  ____axesToUse;

/// @brief Field _snapDirections, offset: 0x168, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_SnapDirections  ____snapDirections;

/// @brief Field _snapStickToTouch, offset: 0x16c, size: 0x1, def value: None
 bool  ____snapStickToTouch;

/// @brief Field _centerStickOnRelease, offset: 0x16d, size: 0x1, def value: None
 bool  ____centerStickOnRelease;

/// @brief Field _axis2D, offset: 0x170, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis2D*  ____axis2D;

/// @brief Field _activateOnSwipeIn, offset: 0x178, size: 0x1, def value: None
 bool  ____activateOnSwipeIn;

/// @brief Field _stayActiveOnSwipeOut, offset: 0x179, size: 0x1, def value: None
 bool  ____stayActiveOnSwipeOut;

/// @brief Field _allowTap, offset: 0x17a, size: 0x1, def value: None
 bool  ____allowTap;

/// @brief Field _tapTimeout, offset: 0x17c, size: 0x4, def value: None
 float_t  ____tapTimeout;

/// @brief Field _tapDistanceLimit, offset: 0x180, size: 0x4, def value: None
 int32_t  ____tapDistanceLimit;

/// @brief Field _touchRegion, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchRegion>  ____touchRegion;

/// @brief Field _useTouchRegionOnly, offset: 0x190, size: 0x1, def value: None
 bool  ____useTouchRegionOnly;

/// @brief Field _moveToTouchPosition, offset: 0x191, size: 0x1, def value: None
 bool  ____moveToTouchPosition;

/// @brief Field _returnOnRelease, offset: 0x192, size: 0x1, def value: None
 bool  ____returnOnRelease;

/// @brief Field _followTouchPosition, offset: 0x193, size: 0x1, def value: None
 bool  ____followTouchPosition;

/// @brief Field _animateOnMoveToTouch, offset: 0x194, size: 0x1, def value: None
 bool  ____animateOnMoveToTouch;

/// @brief Field _moveToTouchSpeed, offset: 0x198, size: 0x4, def value: None
 float_t  ____moveToTouchSpeed;

/// @brief Field _animateOnReturn, offset: 0x19c, size: 0x1, def value: None
 bool  ____animateOnReturn;

/// @brief Field _returnSpeed, offset: 0x1a0, size: 0x4, def value: None
 float_t  ____returnSpeed;

/// @brief Field _manageRaycasting, offset: 0x1a4, size: 0x1, def value: None
 bool  ____manageRaycasting;

/// @brief Field _useXAxis, offset: 0x1a5, size: 0x1, def value: None
 bool  ____useXAxis;

/// @brief Field _useYAxis, offset: 0x1a6, size: 0x1, def value: None
 bool  ____useYAxis;

/// @brief Field _hierarchyValueChangedHandlers, offset: 0x1a8, size: 0x8, def value: None
 ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IValueChangedHandler*,::UnityEngine::Vector2>*  ____hierarchyValueChangedHandlers;

/// @brief Field _hierarchyStickPositionChangedHandlers, offset: 0x1b0, size: 0x8, def value: None
 ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*,::UnityEngine::Vector2>*  ____hierarchyStickPositionChangedHandlers;

/// @brief Field _workingTouchRegion, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchRegion>  ____workingTouchRegion;

/// @brief Field _origAnchoredPosition, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____origAnchoredPosition;

/// @brief Field _origStickAnchoredPosition, offset: 0x1c8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____origStickAnchoredPosition;

/// @brief Field _lastPressAnchoredPosition, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____lastPressAnchoredPosition;

/// @brief Field _isMoving, offset: 0x1d8, size: 0x1, def value: None
 bool  ____isMoving;

/// @brief Field _isMovedFromDefaultPosition, offset: 0x1d9, size: 0x1, def value: None
 bool  ____isMovedFromDefaultPosition;

/// @brief Field _moveDirection, offset: 0x1dc, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl  ____moveDirection;

/// @brief Field _pointerId, offset: 0x1e0, size: 0x4, def value: None
 int32_t  ____pointerId;

/// @brief Field _realMousePointerId, offset: 0x1e4, size: 0x4, def value: None
 int32_t  ____realMousePointerId;

/// @brief Field CSVbDncOCvRIzqyDMCNArskcVwED, offset: 0x1e8, size: 0x1, def value: None
 bool  ___CSVbDncOCvRIzqyDMCNArskcVwED;

/// @brief Field cCnNRaCSlQTwdmFxZsJZyLiptpER, offset: 0x1e9, size: 0x1, def value: None
 bool  ___cCnNRaCSlQTwdmFxZsJZyLiptpER;

/// @brief Field _pointerDownIsFake, offset: 0x1ea, size: 0x1, def value: None
 bool  ____pointerDownIsFake;

/// @brief Field _lastPressStartingValue, offset: 0x1ec, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____lastPressStartingValue;

/// @brief Field _lastClaimSource, offset: 0x1f4, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchJoystick_bMXElyGLLoDVBKdtoKzmdnvivzCIB  ____lastClaimSource;

/// @brief Field _touchStartTime, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____touchStartTime;

/// @brief Field _touchStartPosition, offset: 0x1fc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____touchStartPosition;

/// @brief Field _coroutineMove, offset: 0x208, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ____coroutineMove;

/// @brief Field _imageRaycastHelper, offset: 0x210, size: 0x8, def value: None
 ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  ____imageRaycastHelper;

/// @brief Field _calculatedStickRange_lastUpdatedFrame, offset: 0x218, size: 0x4, def value: None
 int32_t  ____calculatedStickRange_lastUpdatedFrame;

/// @brief Field _lastTapFrame, offset: 0x21c, size: 0x4, def value: None
 int32_t  ____lastTapFrame;

/// @brief Field _isEligibleForTap, offset: 0x220, size: 0x1, def value: None
 bool  ____isEligibleForTap;

/// @brief Field __calculatedStickRange_cachedValue, offset: 0x224, size: 0x4, def value: None
 float_t  _____calculatedStickRange_cachedValue;

/// @brief Field __moveStartedDelegate, offset: 0x228, size: 0x8, def value: None
 ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  _____moveStartedDelegate;

/// @brief Field __moveEndedDelegate, offset: 0x230, size: 0x8, def value: None
 ::System::Action_1<::Rewired::ComponentControls::TouchJoystick_gKtBifVxAAxRkXBYVmHQhhlLvehl>*  _____moveEndedDelegate;

/// @brief Field _onValueChanged, offset: 0x238, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  ____onValueChanged;

/// @brief Field _onStickPositionChanged, offset: 0x240, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchJoystick_ValueChangedEventHandler*  ____onStickPositionChanged;

/// @brief Field _onTouchStarted, offset: 0x248, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchJoystick_TouchStartedEventHandler*  ____onTouchStarted;

/// @brief Field _onTouchEnded, offset: 0x250, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchJoystick_TouchEndedEventHandler*  ____onTouchEnded;

/// @brief Field _onTap, offset: 0x258, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchJoystick_TapEventHandler*  ____onTap;

/// @brief Field __fakePointerEventData, offset: 0x260, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  _____fakePointerEventData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____horizontalAxisCustomControllerElement) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____verticalAxisCustomControllerElement) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____tapCustomControllerElement) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____stickTransform) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____joystickMode) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____digitalModeDeadZone) == 0x154, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____stickRange) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____scaleStickRange) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____stickBounds) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____axesToUse) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____snapDirections) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____snapStickToTouch) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____centerStickOnRelease) == 0x16d, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____axis2D) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____activateOnSwipeIn) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____stayActiveOnSwipeOut) == 0x179, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____allowTap) == 0x17a, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____tapTimeout) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____tapDistanceLimit) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____touchRegion) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____useTouchRegionOnly) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____moveToTouchPosition) == 0x191, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____returnOnRelease) == 0x192, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____followTouchPosition) == 0x193, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____animateOnMoveToTouch) == 0x194, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____moveToTouchSpeed) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____animateOnReturn) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____returnSpeed) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____manageRaycasting) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____useXAxis) == 0x1a5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____useYAxis) == 0x1a6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____hierarchyValueChangedHandlers) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____hierarchyStickPositionChangedHandlers) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____workingTouchRegion) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____origAnchoredPosition) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____origStickAnchoredPosition) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____lastPressAnchoredPosition) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____isMoving) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____isMovedFromDefaultPosition) == 0x1d9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____moveDirection) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____pointerId) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____realMousePointerId) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ___CSVbDncOCvRIzqyDMCNArskcVwED) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ___cCnNRaCSlQTwdmFxZsJZyLiptpER) == 0x1e9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____pointerDownIsFake) == 0x1ea, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____lastPressStartingValue) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____lastClaimSource) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____touchStartTime) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____touchStartPosition) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____coroutineMove) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____imageRaycastHelper) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____calculatedStickRange_lastUpdatedFrame) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____lastTapFrame) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____isEligibleForTap) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, _____calculatedStickRange_cachedValue) == 0x224, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, _____moveStartedDelegate) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, _____moveEndedDelegate) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____onValueChanged) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____onStickPositionChanged) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____onTouchStarted) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____onTouchEnded) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, ____onTap) == 0x258, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchJoystick, _____fakePointerEventData) == 0x260, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchJoystick) == 0x268, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
