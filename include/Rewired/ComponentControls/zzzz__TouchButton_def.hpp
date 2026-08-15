#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchButton.hpp"
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
CORDL_MODULE_EXPORT(TouchButton)
namespace GlobalNamespace {
class DqFEdekqxKkWYIisdJDTEhuknscCc;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForFloat;
}
namespace Rewired::ComponentControls {
class TouchButton_AxisValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_ButtonDownEventHandler;
}
namespace Rewired::ComponentControls {
struct TouchButton_ButtonType;
}
namespace Rewired::ComponentControls {
class TouchButton_ButtonUpEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_ButtonValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA;
}
namespace Rewired::ComponentControls {
struct TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO;
}
namespace Rewired::ComponentControls {
struct TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP;
}
namespace Rewired::ComponentControls {
class TouchRegion;
}
namespace Rewired::Internal {
class StandaloneAxis;
}
namespace Rewired::Utils::UI {
struct PositionType;
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
struct TouchButton_ButtonType;
}
namespace Rewired::ComponentControls {
struct TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO;
}
namespace Rewired::ComponentControls {
struct TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP;
}
namespace Rewired::ComponentControls {
class TouchButton;
}
namespace Rewired::ComponentControls {
class TouchButton_AxisValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_ButtonDownEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_ButtonUpEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_ButtonValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::TouchButton_ButtonType);
MARK_VAL_T(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO);
MARK_VAL_T(::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP);
MARK_REF_T(::Rewired::ComponentControls::TouchButton*);
MARK_REF_T(::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_ButtonType, "Rewired.ComponentControls", "TouchButton/ButtonType");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO, "Rewired.ComponentControls", "TouchButton/ptveuPOBpmaNEXcHnQGLtBtLeyuO");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP, "Rewired.ComponentControls", "TouchButton/vrpWJBPlivNOUKrRiolsfmSSMUeP");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton*, "Rewired.ComponentControls", "TouchButton");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*, "Rewired.ComponentControls", "TouchButton/AxisValueChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*, "Rewired.ComponentControls", "TouchButton/ButtonDownEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*, "Rewired.ComponentControls", "TouchButton/ButtonUpEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*, "Rewired.ComponentControls", "TouchButton/ButtonValueChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*, "Rewired.ComponentControls", "TouchButton/bxRUXlHWvXPpqkPcUCAzHEkHtKKA");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchButton/ButtonType
struct CORDL_TYPE TouchButton_ButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchButton_ButtonType_Unwrapped
enum struct __TouchButton_ButtonType_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x0),
__E_ToggleSwitch = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchButton_ButtonType_Unwrapped () const noexcept {
return static_cast<__TouchButton_ButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_ButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchButton_ButtonType(int32_t  value__) noexcept;

/// @brief Field Standard value: I32(0)
static ::Rewired::ComponentControls::TouchButton_ButtonType const Standard;

/// @brief Field ToggleSwitch value: I32(1)
static ::Rewired::ComponentControls::TouchButton_ButtonType const ToggleSwitch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2746};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchButton_ButtonType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchButton_ButtonType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchButton/ptveuPOBpmaNEXcHnQGLtBtLeyuO
struct CORDL_TYPE TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO_Unwrapped
enum struct __TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TowardTouch = static_cast<int32_t>(0x1),
__E_TowardHome = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO_Unwrapped () const noexcept {
return static_cast<__TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const None;

/// @brief Field TowardHome value: I32(2)
static ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const TowardHome;

/// @brief Field TowardTouch value: I32(1)
static ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const TowardTouch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2747};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchButton/vrpWJBPlivNOUKrRiolsfmSSMUeP
struct CORDL_TYPE TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP_Unwrapped
enum struct __TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_TouchRegion = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP_Unwrapped () const noexcept {
return static_cast<__TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP const Local;

/// @brief Field TouchRegion value: I32(1)
static ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP const TouchRegion;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2748};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchButton/AxisValueChangedEventHandler
class CORDL_TYPE TouchButton_AxisValueChangedEventHandler : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_AxisValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_AxisValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchButton_AxisValueChangedEventHandler(TouchButton_AxisValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_AxisValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchButton_AxisValueChangedEventHandler(TouchButton_AxisValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchButton/ButtonValueChangedEventHandler
class CORDL_TYPE TouchButton_ButtonValueChangedEventHandler : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_ButtonValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_ButtonValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchButton_ButtonValueChangedEventHandler(TouchButton_ButtonValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_ButtonValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchButton_ButtonValueChangedEventHandler(TouchButton_ButtonValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchButton/ButtonDownEventHandler
class CORDL_TYPE TouchButton_ButtonDownEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_ButtonDownEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_ButtonDownEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchButton_ButtonDownEventHandler(TouchButton_ButtonDownEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_ButtonDownEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchButton_ButtonDownEventHandler(TouchButton_ButtonDownEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchButton/ButtonUpEventHandler
class CORDL_TYPE TouchButton_ButtonUpEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchButton_ButtonUpEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_ButtonUpEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchButton_ButtonUpEventHandler(TouchButton_ButtonUpEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_ButtonUpEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchButton_ButtonUpEventHandler(TouchButton_ButtonUpEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchButton::ptveuPOBpmaNEXcHnQGLtBtLeyuO, Rewired.Utils.UI.PositionType, System.Object, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchButton/bxRUXlHWvXPpqkPcUCAzHEkHtKKA
class CORDL_TYPE TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA : public ::System::Object {
public:
// Declarations
/// @brief Field GQRpHjTgJEjVRAhWTHyGXCpBprrLA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_GQRpHjTgJEjVRAhWTHyGXCpBprrLA, put=__cordl_internal_set_GQRpHjTgJEjVRAhWTHyGXCpBprrLA)) float_t  GQRpHjTgJEjVRAhWTHyGXCpBprrLA;

/// @brief Field HfoaCRrmtHTrnhflybFEiEWiqHVIb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HfoaCRrmtHTrnhflybFEiEWiqHVIb, put=__cordl_internal_set_HfoaCRrmtHTrnhflybFEiEWiqHVIb)) ::UnityW<::Rewired::ComponentControls::TouchButton>  HfoaCRrmtHTrnhflybFEiEWiqHVIb;

/// @brief Field MAVNjuUEsJkFXnGQqhaXcqLHsjYs, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_MAVNjuUEsJkFXnGQqhaXcqLHsjYs, put=__cordl_internal_set_MAVNjuUEsJkFXnGQqhaXcqLHsjYs)) float_t  MAVNjuUEsJkFXnGQqhaXcqLHsjYs;

/// @brief Field PYjGPUDrpIQqsynobAUJDvbdAXrnA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PYjGPUDrpIQqsynobAUJDvbdAXrnA, put=__cordl_internal_set_PYjGPUDrpIQqsynobAUJDvbdAXrnA)) ::System::Object*  PYjGPUDrpIQqsynobAUJDvbdAXrnA;

/// @brief Field PllHVyaRPVJOAPLGYVtwXmErOnoo, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PllHVyaRPVJOAPLGYVtwXmErOnoo, put=__cordl_internal_set_PllHVyaRPVJOAPLGYVtwXmErOnoo)) ::Rewired::Utils::UI::PositionType  PllHVyaRPVJOAPLGYVtwXmErOnoo;

/// @brief Field PqrYSKTSlYwuFeneXebMZOJScUzBA, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PqrYSKTSlYwuFeneXebMZOJScUzBA, put=__cordl_internal_set_PqrYSKTSlYwuFeneXebMZOJScUzBA)) ::UnityW<::UnityEngine::RectTransform>  PqrYSKTSlYwuFeneXebMZOJScUzBA;

/// @brief Field RWoyjQUeuqLmyxphrcQRJGfbsslA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_RWoyjQUeuqLmyxphrcQRJGfbsslA, put=__cordl_internal_set_RWoyjQUeuqLmyxphrcQRJGfbsslA)) float_t  RWoyjQUeuqLmyxphrcQRJGfbsslA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field ZeMFOOeCPQaftiNOJUNmHBNVvXjYb, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb, put=__cordl_internal_set_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb)) ::UnityEngine::Vector2  ZeMFOOeCPQaftiNOJUNmHBNVvXjYb;

/// @brief Field iosBeIEUDWaQBgmWwdgZIZerZIZd, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_iosBeIEUDWaQBgmWwdgZIZerZIZd, put=__cordl_internal_set_iosBeIEUDWaQBgmWwdgZIZerZIZd)) ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  iosBeIEUDWaQBgmWwdgZIZerZIZd;

/// @brief Field rbjIbabcFFNoOAPnnmoWEKgZRlDt, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rbjIbabcFFNoOAPnnmoWEKgZRlDt, put=__cordl_internal_set_rbjIbabcFFNoOAPnnmoWEKgZRlDt)) ::UnityEngine::Vector2  rbjIbabcFFNoOAPnnmoWEKgZRlDt;

/// @brief Field xdAImxnzGYCbPivMeDDfBzHZzmLG, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_xdAImxnzGYCbPivMeDDfBzHZzmLG, put=__cordl_internal_set_xdAImxnzGYCbPivMeDDfBzHZzmLG)) int32_t  xdAImxnzGYCbPivMeDDfBzHZzmLG;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1818eed70, size 0x280, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1810edc40, size 0x3e50, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr float_t const& __cordl_internal_get_GQRpHjTgJEjVRAhWTHyGXCpBprrLA() const;

constexpr float_t& __cordl_internal_get_GQRpHjTgJEjVRAhWTHyGXCpBprrLA() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchButton> const& __cordl_internal_get_HfoaCRrmtHTrnhflybFEiEWiqHVIb() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchButton>& __cordl_internal_get_HfoaCRrmtHTrnhflybFEiEWiqHVIb() ;

constexpr float_t const& __cordl_internal_get_MAVNjuUEsJkFXnGQqhaXcqLHsjYs() const;

constexpr float_t& __cordl_internal_get_MAVNjuUEsJkFXnGQqhaXcqLHsjYs() ;

constexpr ::System::Object* const& __cordl_internal_get_PYjGPUDrpIQqsynobAUJDvbdAXrnA() const;

constexpr ::System::Object*& __cordl_internal_get_PYjGPUDrpIQqsynobAUJDvbdAXrnA() ;

constexpr ::Rewired::Utils::UI::PositionType const& __cordl_internal_get_PllHVyaRPVJOAPLGYVtwXmErOnoo() const;

constexpr ::Rewired::Utils::UI::PositionType& __cordl_internal_get_PllHVyaRPVJOAPLGYVtwXmErOnoo() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_PqrYSKTSlYwuFeneXebMZOJScUzBA() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_PqrYSKTSlYwuFeneXebMZOJScUzBA() ;

constexpr float_t const& __cordl_internal_get_RWoyjQUeuqLmyxphrcQRJGfbsslA() const;

constexpr float_t& __cordl_internal_get_RWoyjQUeuqLmyxphrcQRJGfbsslA() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb() ;

constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const& __cordl_internal_get_iosBeIEUDWaQBgmWwdgZIZerZIZd() const;

constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO& __cordl_internal_get_iosBeIEUDWaQBgmWwdgZIZerZIZd() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rbjIbabcFFNoOAPnnmoWEKgZRlDt() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rbjIbabcFFNoOAPnnmoWEKgZRlDt() ;

constexpr int32_t const& __cordl_internal_get_xdAImxnzGYCbPivMeDDfBzHZzmLG() const;

constexpr int32_t& __cordl_internal_get_xdAImxnzGYCbPivMeDDfBzHZzmLG() ;

constexpr void __cordl_internal_set_GQRpHjTgJEjVRAhWTHyGXCpBprrLA(float_t  value) ;

constexpr void __cordl_internal_set_HfoaCRrmtHTrnhflybFEiEWiqHVIb(::UnityW<::Rewired::ComponentControls::TouchButton>  value) ;

constexpr void __cordl_internal_set_MAVNjuUEsJkFXnGQqhaXcqLHsjYs(float_t  value) ;

constexpr void __cordl_internal_set_PYjGPUDrpIQqsynobAUJDvbdAXrnA(::System::Object*  value) ;

constexpr void __cordl_internal_set_PllHVyaRPVJOAPLGYVtwXmErOnoo(::Rewired::Utils::UI::PositionType  value) ;

constexpr void __cordl_internal_set_PqrYSKTSlYwuFeneXebMZOJScUzBA(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_RWoyjQUeuqLmyxphrcQRJGfbsslA(float_t  value) ;

constexpr void __cordl_internal_set_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_iosBeIEUDWaQBgmWwdgZIZerZIZd(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  value) ;

constexpr void __cordl_internal_set_rbjIbabcFFNoOAPnnmoWEKgZRlDt(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_xdAImxnzGYCbPivMeDDfBzHZzmLG(int32_t  value) ;

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
constexpr TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA(TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA(TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2753};

/// @brief Field xdAImxnzGYCbPivMeDDfBzHZzmLG, offset: 0x10, size: 0x4, def value: None
 int32_t  ___xdAImxnzGYCbPivMeDDfBzHZzmLG;

/// @brief Field PYjGPUDrpIQqsynobAUJDvbdAXrnA, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___PYjGPUDrpIQqsynobAUJDvbdAXrnA;

/// @brief Field GQRpHjTgJEjVRAhWTHyGXCpBprrLA, offset: 0x20, size: 0x4, def value: None
 float_t  ___GQRpHjTgJEjVRAhWTHyGXCpBprrLA;

/// @brief Field HfoaCRrmtHTrnhflybFEiEWiqHVIb, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchButton>  ___HfoaCRrmtHTrnhflybFEiEWiqHVIb;

/// @brief Field PllHVyaRPVJOAPLGYVtwXmErOnoo, offset: 0x30, size: 0x4, def value: None
 ::Rewired::Utils::UI::PositionType  ___PllHVyaRPVJOAPLGYVtwXmErOnoo;

/// @brief Field ZeMFOOeCPQaftiNOJUNmHBNVvXjYb, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ZeMFOOeCPQaftiNOJUNmHBNVvXjYb;

/// @brief Field iosBeIEUDWaQBgmWwdgZIZerZIZd, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  ___iosBeIEUDWaQBgmWwdgZIZerZIZd;

/// @brief Field PqrYSKTSlYwuFeneXebMZOJScUzBA, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___PqrYSKTSlYwuFeneXebMZOJScUzBA;

/// @brief Field rbjIbabcFFNoOAPnnmoWEKgZRlDt, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rbjIbabcFFNoOAPnnmoWEKgZRlDt;

/// @brief Field RWoyjQUeuqLmyxphrcQRJGfbsslA, offset: 0x50, size: 0x4, def value: None
 float_t  ___RWoyjQUeuqLmyxphrcQRJGfbsslA;

/// @brief Field MAVNjuUEsJkFXnGQqhaXcqLHsjYs, offset: 0x54, size: 0x4, def value: None
 float_t  ___MAVNjuUEsJkFXnGQqhaXcqLHsjYs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___xdAImxnzGYCbPivMeDDfBzHZzmLG) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___PYjGPUDrpIQqsynobAUJDvbdAXrnA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___GQRpHjTgJEjVRAhWTHyGXCpBprrLA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___HfoaCRrmtHTrnhflybFEiEWiqHVIb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___PllHVyaRPVJOAPLGYVtwXmErOnoo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___ZeMFOOeCPQaftiNOJUNmHBNVvXjYb) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___iosBeIEUDWaQBgmWwdgZIZerZIZd) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___PqrYSKTSlYwuFeneXebMZOJScUzBA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___rbjIbabcFFNoOAPnnmoWEKgZRlDt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___RWoyjQUeuqLmyxphrcQRJGfbsslA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA, ___MAVNjuUEsJkFXnGQqhaXcqLHsjYs) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA) == 0x58, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchButton::ButtonType, Rewired.ComponentControls.TouchButton::ptveuPOBpmaNEXcHnQGLtBtLeyuO, Rewired.ComponentControls.TouchInteractable, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchButton
class CORDL_TYPE TouchButton : public ::Rewired::ComponentControls::TouchInteractable {
public:
// Declarations
using AxisValueChangedEventHandler = ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler;

using ButtonDownEventHandler = ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler;

using ButtonType = ::Rewired::ComponentControls::TouchButton_ButtonType;

using ButtonUpEventHandler = ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler;

using ButtonValueChangedEventHandler = ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler;

using bxRUXlHWvXPpqkPcUCAzHEkHtKKA = ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA;

using ptveuPOBpmaNEXcHnQGLtBtLeyuO = ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO;

using vrpWJBPlivNOUKrRiolsfmSSMUeP = ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP;

/// @brief Field CrKDQVhWHnUuszAGrNTsGOQGTRSK, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_CrKDQVhWHnUuszAGrNTsGOQGTRSK, put=__cordl_internal_set_CrKDQVhWHnUuszAGrNTsGOQGTRSK)) bool  CrKDQVhWHnUuszAGrNTsGOQGTRSK;

/// @brief Field GFUjkiJAPccoTHafrcoTLXXyLKisA, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_GFUjkiJAPccoTHafrcoTLXXyLKisA, put=__cordl_internal_set_GFUjkiJAPccoTHafrcoTLXXyLKisA)) int32_t  GFUjkiJAPccoTHafrcoTLXXyLKisA;

/// @brief Field LGJqEglDamnDKXwRRGCPjDjSbsdFA, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_LGJqEglDamnDKXwRRGCPjDjSbsdFA, put=__cordl_internal_set_LGJqEglDamnDKXwRRGCPjDjSbsdFA)) ::System::Collections::IEnumerator*  LGJqEglDamnDKXwRRGCPjDjSbsdFA;

/// @brief Field NhKElCpetxNCUlHJcEosefscFbSgA, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_NhKElCpetxNCUlHJcEosefscFbSgA, put=__cordl_internal_set_NhKElCpetxNCUlHJcEosefscFbSgA)) ::UnityEngine::Vector2  NhKElCpetxNCUlHJcEosefscFbSgA;

/// @brief Field SJiPfcdUrTqBocEWYAURLqixvoMi, offset 0x198, size 0x1 
 __declspec(property(get=__cordl_internal_get_SJiPfcdUrTqBocEWYAURLqixvoMi, put=__cordl_internal_set_SJiPfcdUrTqBocEWYAURLqixvoMi)) bool  SJiPfcdUrTqBocEWYAURLqixvoMi;

/// @brief Field TlvlJaddKKbOaAlZuZvtmgdTxbkP, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_TlvlJaddKKbOaAlZuZvtmgdTxbkP, put=__cordl_internal_set_TlvlJaddKKbOaAlZuZvtmgdTxbkP)) ::UnityW<::Rewired::ComponentControls::TouchRegion>  TlvlJaddKKbOaAlZuZvtmgdTxbkP;

/// @brief Field UoydxhjZbDDSFlKwEebrWtsscPFZ, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_UoydxhjZbDDSFlKwEebrWtsscPFZ, put=__cordl_internal_set_UoydxhjZbDDSFlKwEebrWtsscPFZ)) ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  UoydxhjZbDDSFlKwEebrWtsscPFZ;

/// @brief Field WkPVctNiKBEUnMeRreXWHwmxaEttA, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WkPVctNiKBEUnMeRreXWHwmxaEttA, put=__cordl_internal_set_WkPVctNiKBEUnMeRreXWHwmxaEttA)) ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  WkPVctNiKBEUnMeRreXWHwmxaEttA;

/// @brief Field _activateOnSwipeIn, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateOnSwipeIn, put=__cordl_internal_set__activateOnSwipeIn)) bool  _activateOnSwipeIn;

/// @brief Field _animateOnMoveToTouch, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateOnMoveToTouch, put=__cordl_internal_set__animateOnMoveToTouch)) bool  _animateOnMoveToTouch;

/// @brief Field _animateOnReturn, offset 0x164, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateOnReturn, put=__cordl_internal_set__animateOnReturn)) bool  _animateOnReturn;

/// @brief Field _axis, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::Rewired::Internal::StandaloneAxis*  _axis;

/// @brief Field _buttonType, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonType, put=__cordl_internal_set__buttonType)) ::Rewired::ComponentControls::TouchButton_ButtonType  _buttonType;

/// @brief Field _digitalAxisGravity, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__digitalAxisGravity, put=__cordl_internal_set__digitalAxisGravity)) float_t  _digitalAxisGravity;

/// @brief Field _digitalAxisSensitivity, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get__digitalAxisSensitivity, put=__cordl_internal_set__digitalAxisSensitivity)) float_t  _digitalAxisSensitivity;

/// @brief Field _followTouchPosition, offset 0x15b, size 0x1 
 __declspec(property(get=__cordl_internal_get__followTouchPosition, put=__cordl_internal_set__followTouchPosition)) bool  _followTouchPosition;

/// @brief Field _manageRaycasting, offset 0x16c, size 0x1 
 __declspec(property(get=__cordl_internal_get__manageRaycasting, put=__cordl_internal_set__manageRaycasting)) bool  _manageRaycasting;

/// @brief Field _moveToTouchPosition, offset 0x159, size 0x1 
 __declspec(property(get=__cordl_internal_get__moveToTouchPosition, put=__cordl_internal_set__moveToTouchPosition)) bool  _moveToTouchPosition;

/// @brief Field _moveToTouchSpeed, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveToTouchSpeed, put=__cordl_internal_set__moveToTouchSpeed)) float_t  _moveToTouchSpeed;

/// @brief Field _onAxisValueChanged, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAxisValueChanged, put=__cordl_internal_set__onAxisValueChanged)) ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*  _onAxisValueChanged;

/// @brief Field _onButtonDown, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onButtonDown, put=__cordl_internal_set__onButtonDown)) ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*  _onButtonDown;

/// @brief Field _onButtonUp, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onButtonUp, put=__cordl_internal_set__onButtonUp)) ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*  _onButtonUp;

/// @brief Field _onButtonValueChanged, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onButtonValueChanged, put=__cordl_internal_set__onButtonValueChanged)) ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*  _onButtonValueChanged;

/// @brief Field _returnOnRelease, offset 0x15a, size 0x1 
 __declspec(property(get=__cordl_internal_get__returnOnRelease, put=__cordl_internal_set__returnOnRelease)) bool  _returnOnRelease;

/// @brief Field _returnSpeed, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__returnSpeed, put=__cordl_internal_set__returnSpeed)) float_t  _returnSpeed;

/// @brief Field _stayActiveOnSwipeOut, offset 0x13d, size 0x1 
 __declspec(property(get=__cordl_internal_get__stayActiveOnSwipeOut, put=__cordl_internal_set__stayActiveOnSwipeOut)) bool  _stayActiveOnSwipeOut;

/// @brief Field _targetCustomControllerElement, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetCustomControllerElement, put=__cordl_internal_set__targetCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _targetCustomControllerElement;

/// @brief Field _touchRegion, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchRegion, put=__cordl_internal_set__touchRegion)) ::UnityW<::Rewired::ComponentControls::TouchRegion>  _touchRegion;

/// @brief Field _useDigitalAxisSimulation, offset 0x13e, size 0x1 
 __declspec(property(get=__cordl_internal_get__useDigitalAxisSimulation, put=__cordl_internal_set__useDigitalAxisSimulation)) bool  _useDigitalAxisSimulation;

/// @brief Field _useTouchRegionOnly, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTouchRegionOnly, put=__cordl_internal_set__useTouchRegionOnly)) bool  _useTouchRegionOnly;

 __declspec(property(get=get_activateOnSwipeIn, put=set_activateOnSwipeIn)) bool  activateOnSwipeIn;

 __declspec(property(get=get_animateOnMoveToTouch, put=set_animateOnMoveToTouch)) bool  animateOnMoveToTouch;

 __declspec(property(get=get_animateOnReturn, put=set_animateOnReturn)) bool  animateOnReturn;

 __declspec(property(get=get_axis)) ::Rewired::Internal::StandaloneAxis*  axis;

 __declspec(property(get=kujDScPMbjvAAskxvBQIBBacelSG)) float_t  axisValue;

 __declspec(property(get=JNzbdWXJfvmKcIdquoOTfpMfpEiR)) float_t  axisValuePrev;

 __declspec(property(get=get_buttonType, put=set_buttonType)) ::Rewired::ComponentControls::TouchButton_ButtonType  buttonType;

 __declspec(property(get=utgmQLnUzMrGecPWTEvyAUzydRAhA)) bool  buttonValue;

 __declspec(property(get=VoBxjyPojqjFbhubHnmLNMViLfLkA)) bool  buttonValuePrev;

/// @brief Field dUEDBZgloiqjavslIAVAgiUUpJjxA, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dUEDBZgloiqjavslIAVAgiUUpJjxA, put=__cordl_internal_set_dUEDBZgloiqjavslIAVAgiUUpJjxA)) ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  dUEDBZgloiqjavslIAVAgiUUpJjxA;

 __declspec(property(get=get_digitalAxisGravity, put=set_digitalAxisGravity)) float_t  digitalAxisGravity;

 __declspec(property(get=get_digitalAxisSensitivity, put=set_digitalAxisSensitivity)) float_t  digitalAxisSensitivity;

 __declspec(property(get=bgeAqpSfAoTpquDkiqTgIPBcYqzn)) int32_t  effectivePointerId;

 __declspec(property(get=get_followTouchPosition, put=set_followTouchPosition)) bool  followTouchPosition;

/// @brief Field glNAKokVyEYlZaSfJDSaqeSRnqPbA, offset 0x189, size 0x1 
 __declspec(property(get=__cordl_internal_get_glNAKokVyEYlZaSfJDSaqeSRnqPbA, put=__cordl_internal_set_glNAKokVyEYlZaSfJDSaqeSRnqPbA)) bool  glNAKokVyEYlZaSfJDSaqeSRnqPbA;

 __declspec(property(get=get_hasPointer)) bool  hasPointer;

/// @brief Field lArjqERgvpUmUCEjEfTwjjGcmMop, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lArjqERgvpUmUCEjEfTwjjGcmMop, put=__cordl_internal_set_lArjqERgvpUmUCEjEfTwjjGcmMop)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  lArjqERgvpUmUCEjEfTwjjGcmMop;

/// @brief Field mOrzvUlvAelHMFzTweVMBmzMthcy, offset 0x199, size 0x1 
 __declspec(property(get=__cordl_internal_get_mOrzvUlvAelHMFzTweVMBmzMthcy, put=__cordl_internal_set_mOrzvUlvAelHMFzTweVMBmzMthcy)) bool  mOrzvUlvAelHMFzTweVMBmzMthcy;

 __declspec(property(get=get_manageRaycasting, put=set_manageRaycasting)) bool  manageRaycasting;

 __declspec(property(get=VXmUGUUEQSHCURGfaIisZoaJDEqHA)) ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  moveEndedDelegate;

 __declspec(property(get=JySFkEkVVduzDXgyUYPVtNNlQmMe)) ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  moveStartedDelegate;

 __declspec(property(get=get_moveToTouchPosition, put=set_moveToTouchPosition)) bool  moveToTouchPosition;

 __declspec(property(get=get_moveToTouchSpeed, put=set_moveToTouchSpeed)) float_t  moveToTouchSpeed;

 __declspec(property(get=get_pointerId, put=set_pointerId)) int32_t  pointerId;

/// @brief Field pzOEGaOFBNjcAGJpxiorpVdSvPjg, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_pzOEGaOFBNjcAGJpxiorpVdSvPjg, put=__cordl_internal_set_pzOEGaOFBNjcAGJpxiorpVdSvPjg)) int32_t  pzOEGaOFBNjcAGJpxiorpVdSvPjg;

/// @brief Field qkXXIRgRVWhIwrNAiHibhFbgJHcSA, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_qkXXIRgRVWhIwrNAiHibhFbgJHcSA, put=__cordl_internal_set_qkXXIRgRVWhIwrNAiHibhFbgJHcSA)) float_t  qkXXIRgRVWhIwrNAiHibhFbgJHcSA;

 __declspec(property(get=get_returnOnRelease, put=set_returnOnRelease)) bool  returnOnRelease;

 __declspec(property(get=get_returnSpeed, put=set_returnSpeed)) float_t  returnSpeed;

 __declspec(property(get=get_stayActiveOnSwipeOut, put=set_stayActiveOnSwipeOut)) bool  stayActiveOnSwipeOut;

 __declspec(property(get=get_targetCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  targetCustomControllerElement;

 __declspec(property(get=get_touchRegion, put=set_touchRegion)) ::UnityW<::Rewired::ComponentControls::TouchRegion>  touchRegion;

/// @brief Field ubKZVAJMqkHzVwwBssfMWBwzebzGA, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ubKZVAJMqkHzVwwBssfMWBwzebzGA, put=__cordl_internal_set_ubKZVAJMqkHzVwwBssfMWBwzebzGA)) ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  ubKZVAJMqkHzVwwBssfMWBwzebzGA;

 __declspec(property(get=get_useDigitalAxisSimulation, put=set_useDigitalAxisSimulation)) bool  useDigitalAxisSimulation;

 __declspec(property(get=get_useTouchRegionOnly, put=set_useTouchRegionOnly)) bool  useTouchRegionOnly;

/// @brief Field xCUllGGLBTbuNwwggDnZAAmFYqQq, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_xCUllGGLBTbuNwwggDnZAAmFYqQq, put=__cordl_internal_set_xCUllGGLBTbuNwwggDnZAAmFYqQq)) float_t  xCUllGGLBTbuNwwggDnZAAmFYqQq;

/// @brief Method Awake, addr 0x1818e1010, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BedXhkXxXaXcxKODRdfjnbbpRId, addr 0x1818e10a0, size 0xd0, virtual false, abstract: false, final false
inline void BedXhkXxXaXcxKODRdfjnbbpRId(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ClearValue, addr 0x1818e1170, size 0x130, virtual true, abstract: false, final false
inline void ClearValue() ;

/// @brief Method EMLfkYoKeETYuJDTOAcykWcHpgpPA, addr 0x1818e12a0, size 0xe0, virtual false, abstract: false, final false
inline void EMLfkYoKeETYuJDTOAcykWcHpgpPA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method FZIcSDqtWPzSfBwoVsLbuiAlqHVB, addr 0x1818e1380, size 0x1b0, virtual false, abstract: false, final false
inline void FZIcSDqtWPzSfBwoVsLbuiAlqHVB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method FjcrSoCtFPSZYzNOSNvyRipjaqxEA, addr 0x1818e1530, size 0x80, virtual false, abstract: false, final false
inline void FjcrSoCtFPSZYzNOSNvyRipjaqxEA() ;

/// @brief Method HEQJNGBYVIPvbYFlhsyjQXTKclkr, addr 0x1818e15b0, size 0x50, virtual false, abstract: false, final false
inline void HEQJNGBYVIPvbYFlhsyjQXTKclkr() ;

/// @brief Method HfCwPZUYYOAAuSVVBEBjdKZGZMCb, addr 0x1818e1600, size 0x90, virtual false, abstract: false, final false
inline void HfCwPZUYYOAAuSVVBEBjdKZGZMCb(float_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method IsPressed, addr 0x1818e1690, size 0x70, virtual true, abstract: false, final false
inline bool IsPressed() ;

/// @brief Method IsThisOrTouchRegionGameObject, addr 0x1818e1700, size 0xa0, virtual true, abstract: false, final false
inline bool IsThisOrTouchRegionGameObject(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method JNzbdWXJfvmKcIdquoOTfpMfpEiR, addr 0x1818e17a0, size 0x40, virtual false, abstract: false, final false
inline float_t JNzbdWXJfvmKcIdquoOTfpMfpEiR() ;

/// @brief Method JySFkEkVVduzDXgyUYPVtNNlQmMe, addr 0x1818e17e0, size 0x70, virtual false, abstract: false, final false
inline ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* JySFkEkVVduzDXgyUYPVtNNlQmMe() ;

/// @brief Method NZaMximVLZoBicfcNRUNUCLYQItx, addr 0x1818e1850, size 0x200, virtual false, abstract: false, final false
inline void NZaMximVLZoBicfcNRUNUCLYQItx() ;

static inline ::Rewired::ComponentControls::TouchButton* New_ctor() ;

/// @brief Method OnClear, addr 0x1818e1a50, size 0x120, virtual true, abstract: false, final false
inline void OnClear() ;

/// @brief Method OnCustomControllerUpdate, addr 0x1818e1b70, size 0xa0, virtual true, abstract: false, final false
inline void OnCustomControllerUpdate() ;

/// @brief Method OnDisable, addr 0x1818e1c10, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818e1c50, size 0x60, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInitialize, addr 0x1818e1cb0, size 0x20, virtual true, abstract: false, final false
inline bool OnInitialize() ;

/// @brief Method OnPointerDown, addr 0x1818e1cd0, size 0xd0, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x1818e1da0, size 0xf0, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x1818e1e90, size 0xf0, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x1818e1f80, size 0xd0, virtual true, abstract: false, final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSetProperty, addr 0x1818e2050, size 0x60, virtual true, abstract: false, final false
inline void OnSetProperty() ;

/// @brief Method OnSubscribeEvents, addr 0x1818e20b0, size 0x130, virtual true, abstract: false, final false
inline void OnSubscribeEvents() ;

/// @brief Method OnUnsubscribeEvents, addr 0x1818e21e0, size 0x130, virtual true, abstract: false, final false
inline void OnUnsubscribeEvents() ;

/// @brief Method OnUpdate, addr 0x1818e2310, size 0x80, virtual true, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method OnValidate, addr 0x1818e2390, size 0x60, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OoAQNhBmVMSHFAmPSjoGiEFhDaYG, addr 0x1818e23f0, size 0x40, virtual false, abstract: false, final false
inline void OoAQNhBmVMSHFAmPSjoGiEFhDaYG() ;

/// @brief Method OteOYIpajuFSzHVIMamKhQObMZOrb, addr 0x1818e2430, size 0x150, virtual false, abstract: false, final false
inline void OteOYIpajuFSzHVIMamKhQObMZOrb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OwmFIICDsOllwcCjeiclaskmwgPWB, addr 0x1818e2580, size 0x50, virtual false, abstract: false, final false
inline bool OwmFIICDsOllwcCjeiclaskmwgPWB(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PVrGJqryzvCcteUEJSBkiCtjEZLaA, addr 0x1818e25d0, size 0x20, virtual false, abstract: false, final false
inline void PVrGJqryzvCcteUEJSBkiCtjEZLaA() ;

/// @brief Method Reset, addr 0x1818e25f0, size 0x80, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ReturnToDefaultPosition, addr 0x1818e26e0, size 0x60, virtual false, abstract: false, final false
inline void ReturnToDefaultPosition() ;

/// @brief Method ReturnToDefaultPosition, addr 0x1818e2670, size 0x70, virtual false, abstract: false, final false
inline void ReturnToDefaultPosition(bool  instant) ;

/// @brief Method SetDefaultPosition, addr 0x1818e2740, size 0x80, virtual false, abstract: false, final false
inline void SetDefaultPosition() ;

/// @brief Method SetRawValue, addr 0x1818e27c0, size 0x30, virtual false, abstract: false, final false
inline void SetRawValue(float_t  value) ;

/// @brief Method SwrdhubagidbxAtKbtxWZmnRJUGlA, addr 0x1818e27f0, size 0xc0, virtual false, abstract: false, final false
inline void SwrdhubagidbxAtKbtxWZmnRJUGlA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method TwRgqOGFAqxFTdOpNxOgABVKnVZq, addr 0x1818e28b0, size 0x40, virtual false, abstract: false, final false
inline bool TwRgqOGFAqxFTdOpNxOgABVKnVZq() ;

/// @brief Method UCLHnBwPQttIRcmgzjjIrKfHCEkI, addr 0x1818e28f0, size 0xe0, virtual false, abstract: false, final false
inline void UCLHnBwPQttIRcmgzjjIrKfHCEkI(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VXmUGUUEQSHCURGfaIisZoaJDEqHA, addr 0x1818e29d0, size 0x70, virtual false, abstract: false, final false
inline ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* VXmUGUUEQSHCURGfaIisZoaJDEqHA() ;

/// @brief Method VoBxjyPojqjFbhubHnmLNMViLfLkA, addr 0x1818e2a40, size 0x30, virtual false, abstract: false, final false
inline bool VoBxjyPojqjFbhubHnmLNMViLfLkA() ;

/// @brief Method WOHiDSxDcZEtIpTJHINIchjhqTyp, addr 0x1818e2a70, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* WOHiDSxDcZEtIpTJHINIchjhqTyp(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method WZlsldGNrFoxFNZTkfYHpLDBJJrD, addr 0x1818e2b90, size 0x340, virtual false, abstract: false, final false
inline void WZlsldGNrFoxFNZTkfYHpLDBJJrD(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method XVAPKPgoBZASJFOmzqlIvLojgfNRA, addr 0x1818e2ed0, size 0x40, virtual false, abstract: false, final false
inline bool XVAPKPgoBZASJFOmzqlIvLojgfNRA() ;

/// @brief Method YvyVOcLZdYNTclMyqCPIPjZZVyjo, addr 0x1818e2f10, size 0xe0, virtual false, abstract: false, final false
inline void YvyVOcLZdYNTclMyqCPIPjZZVyjo() ;

/// @brief Method ZixoPXNjgDGduSRfAqHojyGDpyVC, addr 0x1818e2ff0, size 0x2f0, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* ZixoPXNjgDGduSRfAqHojyGDpyVC(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr bool const& __cordl_internal_get_CrKDQVhWHnUuszAGrNTsGOQGTRSK() const;

constexpr bool& __cordl_internal_get_CrKDQVhWHnUuszAGrNTsGOQGTRSK() ;

constexpr int32_t const& __cordl_internal_get_GFUjkiJAPccoTHafrcoTLXXyLKisA() const;

constexpr int32_t& __cordl_internal_get_GFUjkiJAPccoTHafrcoTLXXyLKisA() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_LGJqEglDamnDKXwRRGCPjDjSbsdFA() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_LGJqEglDamnDKXwRRGCPjDjSbsdFA() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_NhKElCpetxNCUlHJcEosefscFbSgA() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_NhKElCpetxNCUlHJcEosefscFbSgA() ;

constexpr bool const& __cordl_internal_get_SJiPfcdUrTqBocEWYAURLqixvoMi() const;

constexpr bool& __cordl_internal_get_SJiPfcdUrTqBocEWYAURLqixvoMi() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& __cordl_internal_get_TlvlJaddKKbOaAlZuZvtmgdTxbkP() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& __cordl_internal_get_TlvlJaddKKbOaAlZuZvtmgdTxbkP() ;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* const& __cordl_internal_get_UoydxhjZbDDSFlKwEebrWtsscPFZ() const;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*& __cordl_internal_get_UoydxhjZbDDSFlKwEebrWtsscPFZ() ;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* const& __cordl_internal_get_WkPVctNiKBEUnMeRreXWHwmxaEttA() const;

constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*& __cordl_internal_get_WkPVctNiKBEUnMeRreXWHwmxaEttA() ;

constexpr bool const& __cordl_internal_get__activateOnSwipeIn() const;

constexpr bool& __cordl_internal_get__activateOnSwipeIn() ;

constexpr bool const& __cordl_internal_get__animateOnMoveToTouch() const;

constexpr bool& __cordl_internal_get__animateOnMoveToTouch() ;

constexpr bool const& __cordl_internal_get__animateOnReturn() const;

constexpr bool& __cordl_internal_get__animateOnReturn() ;

constexpr ::Rewired::Internal::StandaloneAxis* const& __cordl_internal_get__axis() const;

constexpr ::Rewired::Internal::StandaloneAxis*& __cordl_internal_get__axis() ;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonType const& __cordl_internal_get__buttonType() const;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonType& __cordl_internal_get__buttonType() ;

constexpr float_t const& __cordl_internal_get__digitalAxisGravity() const;

constexpr float_t& __cordl_internal_get__digitalAxisGravity() ;

constexpr float_t const& __cordl_internal_get__digitalAxisSensitivity() const;

constexpr float_t& __cordl_internal_get__digitalAxisSensitivity() ;

constexpr bool const& __cordl_internal_get__followTouchPosition() const;

constexpr bool& __cordl_internal_get__followTouchPosition() ;

constexpr bool const& __cordl_internal_get__manageRaycasting() const;

constexpr bool& __cordl_internal_get__manageRaycasting() ;

constexpr bool const& __cordl_internal_get__moveToTouchPosition() const;

constexpr bool& __cordl_internal_get__moveToTouchPosition() ;

constexpr float_t const& __cordl_internal_get__moveToTouchSpeed() const;

constexpr float_t& __cordl_internal_get__moveToTouchSpeed() ;

constexpr ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler* const& __cordl_internal_get__onAxisValueChanged() const;

constexpr ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*& __cordl_internal_get__onAxisValueChanged() ;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler* const& __cordl_internal_get__onButtonDown() const;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*& __cordl_internal_get__onButtonDown() ;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler* const& __cordl_internal_get__onButtonUp() const;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*& __cordl_internal_get__onButtonUp() ;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler* const& __cordl_internal_get__onButtonValueChanged() const;

constexpr ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*& __cordl_internal_get__onButtonValueChanged() ;

constexpr bool const& __cordl_internal_get__returnOnRelease() const;

constexpr bool& __cordl_internal_get__returnOnRelease() ;

constexpr float_t const& __cordl_internal_get__returnSpeed() const;

constexpr float_t& __cordl_internal_get__returnSpeed() ;

constexpr bool const& __cordl_internal_get__stayActiveOnSwipeOut() const;

constexpr bool& __cordl_internal_get__stayActiveOnSwipeOut() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__targetCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__targetCustomControllerElement() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& __cordl_internal_get__touchRegion() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& __cordl_internal_get__touchRegion() ;

constexpr bool const& __cordl_internal_get__useDigitalAxisSimulation() const;

constexpr bool& __cordl_internal_get__useDigitalAxisSimulation() ;

constexpr bool const& __cordl_internal_get__useTouchRegionOnly() const;

constexpr bool& __cordl_internal_get__useTouchRegionOnly() ;

constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc* const& __cordl_internal_get_dUEDBZgloiqjavslIAVAgiUUpJjxA() const;

constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*& __cordl_internal_get_dUEDBZgloiqjavslIAVAgiUUpJjxA() ;

constexpr bool const& __cordl_internal_get_glNAKokVyEYlZaSfJDSaqeSRnqPbA() const;

constexpr bool& __cordl_internal_get_glNAKokVyEYlZaSfJDSaqeSRnqPbA() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_lArjqERgvpUmUCEjEfTwjjGcmMop() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_lArjqERgvpUmUCEjEfTwjjGcmMop() ;

constexpr bool const& __cordl_internal_get_mOrzvUlvAelHMFzTweVMBmzMthcy() const;

constexpr bool& __cordl_internal_get_mOrzvUlvAelHMFzTweVMBmzMthcy() ;

constexpr int32_t const& __cordl_internal_get_pzOEGaOFBNjcAGJpxiorpVdSvPjg() const;

constexpr int32_t& __cordl_internal_get_pzOEGaOFBNjcAGJpxiorpVdSvPjg() ;

constexpr float_t const& __cordl_internal_get_qkXXIRgRVWhIwrNAiHibhFbgJHcSA() const;

constexpr float_t& __cordl_internal_get_qkXXIRgRVWhIwrNAiHibhFbgJHcSA() ;

constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const& __cordl_internal_get_ubKZVAJMqkHzVwwBssfMWBwzebzGA() const;

constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO& __cordl_internal_get_ubKZVAJMqkHzVwwBssfMWBwzebzGA() ;

constexpr float_t const& __cordl_internal_get_xCUllGGLBTbuNwwggDnZAAmFYqQq() const;

constexpr float_t& __cordl_internal_get_xCUllGGLBTbuNwwggDnZAAmFYqQq() ;

constexpr void __cordl_internal_set_CrKDQVhWHnUuszAGrNTsGOQGTRSK(bool  value) ;

constexpr void __cordl_internal_set_GFUjkiJAPccoTHafrcoTLXXyLKisA(int32_t  value) ;

constexpr void __cordl_internal_set_LGJqEglDamnDKXwRRGCPjDjSbsdFA(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_NhKElCpetxNCUlHJcEosefscFbSgA(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_SJiPfcdUrTqBocEWYAURLqixvoMi(bool  value) ;

constexpr void __cordl_internal_set_TlvlJaddKKbOaAlZuZvtmgdTxbkP(::UnityW<::Rewired::ComponentControls::TouchRegion>  value) ;

constexpr void __cordl_internal_set_UoydxhjZbDDSFlKwEebrWtsscPFZ(::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  value) ;

constexpr void __cordl_internal_set_WkPVctNiKBEUnMeRreXWHwmxaEttA(::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  value) ;

constexpr void __cordl_internal_set__activateOnSwipeIn(bool  value) ;

constexpr void __cordl_internal_set__animateOnMoveToTouch(bool  value) ;

constexpr void __cordl_internal_set__animateOnReturn(bool  value) ;

constexpr void __cordl_internal_set__axis(::Rewired::Internal::StandaloneAxis*  value) ;

constexpr void __cordl_internal_set__buttonType(::Rewired::ComponentControls::TouchButton_ButtonType  value) ;

constexpr void __cordl_internal_set__digitalAxisGravity(float_t  value) ;

constexpr void __cordl_internal_set__digitalAxisSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__followTouchPosition(bool  value) ;

constexpr void __cordl_internal_set__manageRaycasting(bool  value) ;

constexpr void __cordl_internal_set__moveToTouchPosition(bool  value) ;

constexpr void __cordl_internal_set__moveToTouchSpeed(float_t  value) ;

constexpr void __cordl_internal_set__onAxisValueChanged(::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__onButtonDown(::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*  value) ;

constexpr void __cordl_internal_set__onButtonUp(::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*  value) ;

constexpr void __cordl_internal_set__onButtonValueChanged(::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__returnOnRelease(bool  value) ;

constexpr void __cordl_internal_set__returnSpeed(float_t  value) ;

constexpr void __cordl_internal_set__stayActiveOnSwipeOut(bool  value) ;

constexpr void __cordl_internal_set__targetCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set__touchRegion(::UnityW<::Rewired::ComponentControls::TouchRegion>  value) ;

constexpr void __cordl_internal_set__useDigitalAxisSimulation(bool  value) ;

constexpr void __cordl_internal_set__useTouchRegionOnly(bool  value) ;

constexpr void __cordl_internal_set_dUEDBZgloiqjavslIAVAgiUUpJjxA(::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  value) ;

constexpr void __cordl_internal_set_glNAKokVyEYlZaSfJDSaqeSRnqPbA(bool  value) ;

constexpr void __cordl_internal_set_lArjqERgvpUmUCEjEfTwjjGcmMop(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_mOrzvUlvAelHMFzTweVMBmzMthcy(bool  value) ;

constexpr void __cordl_internal_set_pzOEGaOFBNjcAGJpxiorpVdSvPjg(int32_t  value) ;

constexpr void __cordl_internal_set_qkXXIRgRVWhIwrNAiHibhFbgJHcSA(float_t  value) ;

constexpr void __cordl_internal_set_ubKZVAJMqkHzVwwBssfMWBwzebzGA(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  value) ;

constexpr void __cordl_internal_set_xCUllGGLBTbuNwwggDnZAAmFYqQq(float_t  value) ;

/// @brief Method .ctor, addr 0x1818e32e0, size 0x230, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AxisValueChangedEvent, addr 0x1818e3510, size 0x30, virtual false, abstract: false, final false
inline void add_AxisValueChangedEvent(::UnityEngine::Events::UnityAction_1<float_t>*  value) ;

/// @brief Method add_ButtonDownEvent, addr 0x1818e3540, size 0x30, virtual false, abstract: false, final false
inline void add_ButtonDownEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_ButtonUpEvent, addr 0x1818e3570, size 0x30, virtual false, abstract: false, final false
inline void add_ButtonUpEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_ButtonValueChangedEvent, addr 0x1818e35a0, size 0x30, virtual false, abstract: false, final false
inline void add_ButtonValueChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// @brief Method bgeAqpSfAoTpquDkiqTgIPBcYqzn, addr 0x1818e35d0, size 0x30, virtual false, abstract: false, final false
inline int32_t bgeAqpSfAoTpquDkiqTgIPBcYqzn() ;

/// @brief Method cLpXkFqwrFnLVHpTjuqEqxkjUp, addr 0x1818e3600, size 0xd0, virtual false, abstract: false, final false
inline void cLpXkFqwrFnLVHpTjuqEqxkjUp(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method cbKjkHqVSDKteAKmdfJxHRPJHiqk, addr 0x1818e36d0, size 0x120, virtual false, abstract: false, final false
inline void cbKjkHqVSDKteAKmdfJxHRPJHiqk() ;

/// @brief Method eTYcagUYSqAzgvihGwtlDdWezZdv, addr 0x1818e37f0, size 0x60, virtual false, abstract: false, final false
inline void eTYcagUYSqAzgvihGwtlDdWezZdv() ;

/// @brief Method facgCiPlJwfBtefDBGPumHysCusDA, addr 0x1818e3850, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* facgCiPlJwfBtefDBGPumHysCusDA(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method fbJiuOEgGgDaLvsPUKeviuqHokFmB, addr 0x1818e38d0, size 0x10, virtual false, abstract: false, final false
inline void fbJiuOEgGgDaLvsPUKeviuqHokFmB(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gAnxMrXztHBTFjxkzGLIpzkRoMIR, addr 0x1818e38e0, size 0x210, virtual false, abstract: false, final false
inline void gAnxMrXztHBTFjxkzGLIpzkRoMIR(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_activateOnSwipeIn, addr 0x180497740, size 0x10, virtual false, abstract: false, final false
inline bool get_activateOnSwipeIn() ;

/// @brief Method get_animateOnMoveToTouch, addr 0x1818e3af0, size 0x10, virtual false, abstract: false, final false
inline bool get_animateOnMoveToTouch() ;

/// @brief Method get_animateOnReturn, addr 0x1818e3b00, size 0x10, virtual false, abstract: false, final false
inline bool get_animateOnReturn() ;

/// @brief Method get_axis, addr 0x180474c20, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::StandaloneAxis* get_axis() ;

/// @brief Method get_buttonType, addr 0x1805d3800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchButton_ButtonType get_buttonType() ;

/// @brief Method get_digitalAxisGravity, addr 0x1818e3b10, size 0x10, virtual false, abstract: false, final false
inline float_t get_digitalAxisGravity() ;

/// @brief Method get_digitalAxisSensitivity, addr 0x1818e3b20, size 0x10, virtual false, abstract: false, final false
inline float_t get_digitalAxisSensitivity() ;

/// @brief Method get_followTouchPosition, addr 0x1818e3b30, size 0x10, virtual false, abstract: false, final false
inline bool get_followTouchPosition() ;

/// @brief Method get_hasPointer, addr 0x1818e3b40, size 0x10, virtual false, abstract: false, final false
inline bool get_hasPointer() ;

/// @brief Method get_manageRaycasting, addr 0x1818e3b50, size 0x10, virtual false, abstract: false, final false
inline bool get_manageRaycasting() ;

/// @brief Method get_moveToTouchPosition, addr 0x1818e3b60, size 0x10, virtual false, abstract: false, final false
inline bool get_moveToTouchPosition() ;

/// @brief Method get_moveToTouchSpeed, addr 0x1818e3b70, size 0x10, virtual false, abstract: false, final false
inline float_t get_moveToTouchSpeed() ;

/// @brief Method get_pointerId, addr 0x1818e3b80, size 0x10, virtual false, abstract: false, final false
inline int32_t get_pointerId() ;

/// @brief Method get_returnOnRelease, addr 0x1818e3b90, size 0x10, virtual false, abstract: false, final false
inline bool get_returnOnRelease() ;

/// @brief Method get_returnSpeed, addr 0x1818e3ba0, size 0x10, virtual false, abstract: false, final false
inline float_t get_returnSpeed() ;

/// @brief Method get_stayActiveOnSwipeOut, addr 0x1818e3bb0, size 0x50, virtual false, abstract: false, final false
inline bool get_stayActiveOnSwipeOut() ;

/// @brief Method get_targetCustomControllerElement, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_targetCustomControllerElement() ;

/// @brief Method get_touchRegion, addr 0x180474c10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::ComponentControls::TouchRegion> get_touchRegion() ;

/// @brief Method get_useDigitalAxisSimulation, addr 0x1818e3c00, size 0x10, virtual false, abstract: false, final false
inline bool get_useDigitalAxisSimulation() ;

/// @brief Method get_useTouchRegionOnly, addr 0x1818e3c10, size 0x10, virtual false, abstract: false, final false
inline bool get_useTouchRegionOnly() ;

/// @brief Method hsxHaDUnNbWzBTPtMMKnVdwYslke, addr 0x1818e3c20, size 0x120, virtual false, abstract: false, final false
inline void hsxHaDUnNbWzBTPtMMKnVdwYslke(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method iySYfOAetXhJQBywABPhtLABHKbO, addr 0x1818e3d40, size 0x120, virtual false, abstract: false, final false
inline void iySYfOAetXhJQBywABPhtLABHKbO(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jHIorQXMwYsWtnroBOmxBhZwDqUy, addr 0x1818e3e60, size 0x60, virtual false, abstract: false, final false
inline void jHIorQXMwYsWtnroBOmxBhZwDqUy(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kujDScPMbjvAAskxvBQIBBacelSG, addr 0x1818e3ec0, size 0x40, virtual false, abstract: false, final false
inline float_t kujDScPMbjvAAskxvBQIBBacelSG() ;

/// @brief Method mxAyjRwmchZklyoKYFolyvxhQgGD, addr 0x1818e3f00, size 0x70, virtual false, abstract: false, final false
inline void mxAyjRwmchZklyoKYFolyvxhQgGD(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pgNjDEQdsmjuDKKMeiVxJuXzCCVFA, addr 0x1818e3f70, size 0xf0, virtual false, abstract: false, final false
inline void pgNjDEQdsmjuDKKMeiVxJuXzCCVFA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method pyDNVNHGaiyZoFNEMqDJMUKArdEc, addr 0x1818e4060, size 0x100, virtual false, abstract: false, final false
inline void pyDNVNHGaiyZoFNEMqDJMUKArdEc() ;

/// @brief Method qyKRKAMGCqlaBnJXSdZCBEQNoVrKA, addr 0x1818e4160, size 0x220, virtual false, abstract: false, final false
inline void qyKRKAMGCqlaBnJXSdZCBEQNoVrKA() ;

/// @brief Method rCutgovtWyrzIKsgiZYvJNWvhQg, addr 0x1818e4380, size 0x90, virtual false, abstract: false, final false
inline void rCutgovtWyrzIKsgiZYvJNWvhQg() ;

/// @brief Method rFMyvpDDHAmDMrUylJLBDGQzgxrj, addr 0x1818e4410, size 0x120, virtual false, abstract: false, final false
inline void rFMyvpDDHAmDMrUylJLBDGQzgxrj(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method remove_AxisValueChangedEvent, addr 0x1818e4530, size 0x30, virtual false, abstract: false, final false
inline void remove_AxisValueChangedEvent(::UnityEngine::Events::UnityAction_1<float_t>*  value) ;

/// @brief Method remove_ButtonDownEvent, addr 0x1818e4560, size 0x30, virtual false, abstract: false, final false
inline void remove_ButtonDownEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_ButtonUpEvent, addr 0x1818e4590, size 0x30, virtual false, abstract: false, final false
inline void remove_ButtonUpEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_ButtonValueChangedEvent, addr 0x1818e45c0, size 0x30, virtual false, abstract: false, final false
inline void remove_ButtonValueChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// @brief Method riuFeUreUIBJUTRhzfXhBWsaddTCA, addr 0x1818e45f0, size 0x1e0, virtual false, abstract: false, final false
inline void riuFeUreUIBJUTRhzfXhBWsaddTCA(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ruJgCKfZamhgzFwvutgYEmBuhjZT, addr 0x1818e47d0, size 0xd0, virtual false, abstract: false, final false
inline void ruJgCKfZamhgzFwvutgYEmBuhjZT(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_activateOnSwipeIn, addr 0x1818e48a0, size 0x30, virtual false, abstract: false, final false
inline void set_activateOnSwipeIn(bool  value) ;

/// @brief Method set_animateOnMoveToTouch, addr 0x1818e48d0, size 0x30, virtual false, abstract: false, final false
inline void set_animateOnMoveToTouch(bool  value) ;

/// @brief Method set_animateOnReturn, addr 0x1818e4900, size 0x30, virtual false, abstract: false, final false
inline void set_animateOnReturn(bool  value) ;

/// @brief Method set_buttonType, addr 0x1818e4930, size 0x30, virtual false, abstract: false, final false
inline void set_buttonType(::Rewired::ComponentControls::TouchButton_ButtonType  value) ;

/// @brief Method set_digitalAxisGravity, addr 0x1818e4960, size 0x30, virtual false, abstract: false, final false
inline void set_digitalAxisGravity(float_t  value) ;

/// @brief Method set_digitalAxisSensitivity, addr 0x1818e4990, size 0x30, virtual false, abstract: false, final false
inline void set_digitalAxisSensitivity(float_t  value) ;

/// @brief Method set_followTouchPosition, addr 0x1818e49c0, size 0x30, virtual false, abstract: false, final false
inline void set_followTouchPosition(bool  value) ;

/// @brief Method set_manageRaycasting, addr 0x1818e49f0, size 0x60, virtual false, abstract: false, final false
inline void set_manageRaycasting(bool  value) ;

/// @brief Method set_moveToTouchPosition, addr 0x1818e4a50, size 0x30, virtual false, abstract: false, final false
inline void set_moveToTouchPosition(bool  value) ;

/// @brief Method set_moveToTouchSpeed, addr 0x1818e4a80, size 0x60, virtual false, abstract: false, final false
inline void set_moveToTouchSpeed(float_t  value) ;

/// @brief Method set_pointerId, addr 0x1818e4ae0, size 0x10, virtual false, abstract: false, final false
inline void set_pointerId(int32_t  value) ;

/// @brief Method set_returnOnRelease, addr 0x1818e4af0, size 0x30, virtual false, abstract: false, final false
inline void set_returnOnRelease(bool  value) ;

/// @brief Method set_returnSpeed, addr 0x1818e4b20, size 0x60, virtual false, abstract: false, final false
inline void set_returnSpeed(float_t  value) ;

/// @brief Method set_stayActiveOnSwipeOut, addr 0x1818e4b80, size 0x30, virtual false, abstract: false, final false
inline void set_stayActiveOnSwipeOut(bool  value) ;

/// @brief Method set_touchRegion, addr 0x1818e4bb0, size 0x60, virtual false, abstract: false, final false
inline void set_touchRegion(::Rewired::ComponentControls::TouchRegion*  value) ;

/// @brief Method set_useDigitalAxisSimulation, addr 0x1818e4c10, size 0x30, virtual false, abstract: false, final false
inline void set_useDigitalAxisSimulation(bool  value) ;

/// @brief Method set_useTouchRegionOnly, addr 0x1818e4c40, size 0x30, virtual false, abstract: false, final false
inline void set_useTouchRegionOnly(bool  value) ;

/// @brief Method svPDNlSfIcuFBufhNXdsoiXvikok, addr 0x1818e4c70, size 0x40, virtual false, abstract: false, final false
inline void svPDNlSfIcuFBufhNXdsoiXvikok() ;

/// @brief Method tNggSnZmYarwnrhAKdCyCQSeNSSJ, addr 0x1818e4cb0, size 0xf0, virtual false, abstract: false, final false
inline void tNggSnZmYarwnrhAKdCyCQSeNSSJ(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method tbRAYSaJrrjSXEXFlWNjbiRfGnCKc, addr 0x1818e4da0, size 0x170, virtual false, abstract: false, final false
inline void tbRAYSaJrrjSXEXFlWNjbiRfGnCKc() ;

/// @brief Method utgmQLnUzMrGecPWTEvyAUzydRAhA, addr 0x1818e4f10, size 0x30, virtual false, abstract: false, final false
inline bool utgmQLnUzMrGecPWTEvyAUzydRAhA() ;

/// @brief Method wYBoXYVOpjyUWTPNZSqBBARuImwd, addr 0x1818e4f40, size 0xe0, virtual false, abstract: false, final false
inline void wYBoXYVOpjyUWTPNZSqBBARuImwd(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method xhqffxUVwOJpwOhwfYTUbXxHwsof, addr 0x1818e5020, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* xhqffxUVwOJpwOhwfYTUbXxHwsof(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zfMdnqFIsicXxmUvkUjQBwEoJmuX, addr 0x1818e5180, size 0x50, virtual false, abstract: false, final false
inline void zfMdnqFIsicXxmUvkUjQBwEoJmuX() ;

/// @brief Method zxHJGFnMtSFDAjJVDsKfjeedpbVmA, addr 0x1818e51d0, size 0x50, virtual false, abstract: false, final false
inline void zxHJGFnMtSFDAjJVDsKfjeedpbVmA(bool  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchButton(TouchButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchButton(TouchButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2754};

/// @brief Field ygEOfhVrTMHuQhpMvjmHJZZJBEHq offset 0xffffffff size 0x4
static constexpr float_t  ygEOfhVrTMHuQhpMvjmHJZZJBEHq{static_cast<float_t>(20.0f)};

/// @brief Field _targetCustomControllerElement, offset: 0x130, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____targetCustomControllerElement;

/// @brief Field _buttonType, offset: 0x138, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchButton_ButtonType  ____buttonType;

/// @brief Field _activateOnSwipeIn, offset: 0x13c, size: 0x1, def value: None
 bool  ____activateOnSwipeIn;

/// @brief Field _stayActiveOnSwipeOut, offset: 0x13d, size: 0x1, def value: None
 bool  ____stayActiveOnSwipeOut;

/// @brief Field _useDigitalAxisSimulation, offset: 0x13e, size: 0x1, def value: None
 bool  ____useDigitalAxisSimulation;

/// @brief Field _digitalAxisGravity, offset: 0x140, size: 0x4, def value: None
 float_t  ____digitalAxisGravity;

/// @brief Field _digitalAxisSensitivity, offset: 0x144, size: 0x4, def value: None
 float_t  ____digitalAxisSensitivity;

/// @brief Field _axis, offset: 0x148, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis*  ____axis;

/// @brief Field _touchRegion, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchRegion>  ____touchRegion;

/// @brief Field _useTouchRegionOnly, offset: 0x158, size: 0x1, def value: None
 bool  ____useTouchRegionOnly;

/// @brief Field _moveToTouchPosition, offset: 0x159, size: 0x1, def value: None
 bool  ____moveToTouchPosition;

/// @brief Field _returnOnRelease, offset: 0x15a, size: 0x1, def value: None
 bool  ____returnOnRelease;

/// @brief Field _followTouchPosition, offset: 0x15b, size: 0x1, def value: None
 bool  ____followTouchPosition;

/// @brief Field _animateOnMoveToTouch, offset: 0x15c, size: 0x1, def value: None
 bool  ____animateOnMoveToTouch;

/// @brief Field _moveToTouchSpeed, offset: 0x160, size: 0x4, def value: None
 float_t  ____moveToTouchSpeed;

/// @brief Field _animateOnReturn, offset: 0x164, size: 0x1, def value: None
 bool  ____animateOnReturn;

/// @brief Field _returnSpeed, offset: 0x168, size: 0x4, def value: None
 float_t  ____returnSpeed;

/// @brief Field _manageRaycasting, offset: 0x16c, size: 0x1, def value: None
 bool  ____manageRaycasting;

/// @brief Field qkXXIRgRVWhIwrNAiHibhFbgJHcSA, offset: 0x170, size: 0x4, def value: None
 float_t  ___qkXXIRgRVWhIwrNAiHibhFbgJHcSA;

/// @brief Field xCUllGGLBTbuNwwggDnZAAmFYqQq, offset: 0x174, size: 0x4, def value: None
 float_t  ___xCUllGGLBTbuNwwggDnZAAmFYqQq;

/// @brief Field TlvlJaddKKbOaAlZuZvtmgdTxbkP, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchRegion>  ___TlvlJaddKKbOaAlZuZvtmgdTxbkP;

/// @brief Field NhKElCpetxNCUlHJcEosefscFbSgA, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___NhKElCpetxNCUlHJcEosefscFbSgA;

/// @brief Field CrKDQVhWHnUuszAGrNTsGOQGTRSK, offset: 0x188, size: 0x1, def value: None
 bool  ___CrKDQVhWHnUuszAGrNTsGOQGTRSK;

/// @brief Field glNAKokVyEYlZaSfJDSaqeSRnqPbA, offset: 0x189, size: 0x1, def value: None
 bool  ___glNAKokVyEYlZaSfJDSaqeSRnqPbA;

/// @brief Field ubKZVAJMqkHzVwwBssfMWBwzebzGA, offset: 0x18c, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  ___ubKZVAJMqkHzVwwBssfMWBwzebzGA;

/// @brief Field pzOEGaOFBNjcAGJpxiorpVdSvPjg, offset: 0x190, size: 0x4, def value: None
 int32_t  ___pzOEGaOFBNjcAGJpxiorpVdSvPjg;

/// @brief Field GFUjkiJAPccoTHafrcoTLXXyLKisA, offset: 0x194, size: 0x4, def value: None
 int32_t  ___GFUjkiJAPccoTHafrcoTLXXyLKisA;

/// @brief Field SJiPfcdUrTqBocEWYAURLqixvoMi, offset: 0x198, size: 0x1, def value: None
 bool  ___SJiPfcdUrTqBocEWYAURLqixvoMi;

/// @brief Field mOrzvUlvAelHMFzTweVMBmzMthcy, offset: 0x199, size: 0x1, def value: None
 bool  ___mOrzvUlvAelHMFzTweVMBmzMthcy;

/// @brief Field LGJqEglDamnDKXwRRGCPjDjSbsdFA, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___LGJqEglDamnDKXwRRGCPjDjSbsdFA;

/// @brief Field dUEDBZgloiqjavslIAVAgiUUpJjxA, offset: 0x1a8, size: 0x8, def value: None
 ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  ___dUEDBZgloiqjavslIAVAgiUUpJjxA;

/// @brief Field WkPVctNiKBEUnMeRreXWHwmxaEttA, offset: 0x1b0, size: 0x8, def value: None
 ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  ___WkPVctNiKBEUnMeRreXWHwmxaEttA;

/// @brief Field UoydxhjZbDDSFlKwEebrWtsscPFZ, offset: 0x1b8, size: 0x8, def value: None
 ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  ___UoydxhjZbDDSFlKwEebrWtsscPFZ;

/// @brief Field _onAxisValueChanged, offset: 0x1c0, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*  ____onAxisValueChanged;

/// @brief Field _onButtonValueChanged, offset: 0x1c8, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*  ____onButtonValueChanged;

/// @brief Field _onButtonDown, offset: 0x1d0, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*  ____onButtonDown;

/// @brief Field _onButtonUp, offset: 0x1d8, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*  ____onButtonUp;

/// @brief Field lArjqERgvpUmUCEjEfTwjjGcmMop, offset: 0x1e0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  ___lArjqERgvpUmUCEjEfTwjjGcmMop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____targetCustomControllerElement) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____buttonType) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____activateOnSwipeIn) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____stayActiveOnSwipeOut) == 0x13d, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____useDigitalAxisSimulation) == 0x13e, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____digitalAxisGravity) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____digitalAxisSensitivity) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____axis) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____touchRegion) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____useTouchRegionOnly) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____moveToTouchPosition) == 0x159, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____returnOnRelease) == 0x15a, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____followTouchPosition) == 0x15b, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____animateOnMoveToTouch) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____moveToTouchSpeed) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____animateOnReturn) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____returnSpeed) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____manageRaycasting) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___qkXXIRgRVWhIwrNAiHibhFbgJHcSA) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___xCUllGGLBTbuNwwggDnZAAmFYqQq) == 0x174, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___TlvlJaddKKbOaAlZuZvtmgdTxbkP) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___NhKElCpetxNCUlHJcEosefscFbSgA) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___CrKDQVhWHnUuszAGrNTsGOQGTRSK) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___glNAKokVyEYlZaSfJDSaqeSRnqPbA) == 0x189, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___ubKZVAJMqkHzVwwBssfMWBwzebzGA) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___pzOEGaOFBNjcAGJpxiorpVdSvPjg) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___GFUjkiJAPccoTHafrcoTLXXyLKisA) == 0x194, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___SJiPfcdUrTqBocEWYAURLqixvoMi) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___mOrzvUlvAelHMFzTweVMBmzMthcy) == 0x199, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___LGJqEglDamnDKXwRRGCPjDjSbsdFA) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___dUEDBZgloiqjavslIAVAgiUUpJjxA) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___WkPVctNiKBEUnMeRreXWHwmxaEttA) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___UoydxhjZbDDSFlKwEebrWtsscPFZ) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____onAxisValueChanged) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____onButtonValueChanged) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____onButtonDown) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ____onButtonUp) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchButton, ___lArjqERgvpUmUCEjEfTwjjGcmMop) == 0x1e0, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchButton) == 0x1e8, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
