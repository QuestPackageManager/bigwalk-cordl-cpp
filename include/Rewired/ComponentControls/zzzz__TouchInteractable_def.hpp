#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__TouchControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchInteractable)
namespace GlobalNamespace {
template<typename T,typename TArgs>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2;
}
namespace GlobalNamespace {
template<typename THandler,typename TValue>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2;
}
namespace Rewired::ComponentControls {
class TouchInteractable_IInteractionStateTransitionHandler;
}
namespace Rewired::ComponentControls {
class TouchInteractable_InteractionStateTransitionArgs;
}
namespace Rewired::ComponentControls {
class TouchInteractable_InteractionStateTransitionEventHandler;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_InteractionState;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_MouseButtonFlags;
}
namespace Rewired::ComponentControls {
class TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_TransitionTypeFlags;
}
namespace Rewired::ComponentControls {
class TouchInteractable_VisibilityChangedEventHandler;
}
namespace Rewired::UI {
class IVisibilityChangedHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
struct EventTriggerType;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
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
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::UI {
class AnimationTriggers;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::ComponentControls {
struct TouchInteractable_InteractionState;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_MouseButtonFlags;
}
namespace Rewired::ComponentControls {
struct TouchInteractable_TransitionTypeFlags;
}
namespace Rewired::ComponentControls {
class TouchInteractable;
}
namespace Rewired::ComponentControls {
class TouchInteractable_IInteractionStateTransitionHandler;
}
namespace Rewired::ComponentControls {
class TouchInteractable_InteractionStateTransitionArgs;
}
namespace Rewired::ComponentControls {
class TouchInteractable_InteractionStateTransitionEventHandler;
}
namespace Rewired::ComponentControls {
class TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI;
}
namespace Rewired::ComponentControls {
class TouchInteractable_VisibilityChangedEventHandler;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::TouchInteractable_InteractionState);
MARK_VAL_T(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags);
MARK_VAL_T(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags);
MARK_REF_T(::Rewired::ComponentControls::TouchInteractable*);
MARK_REF_T(::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*);
MARK_REF_T(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*);
MARK_REF_T(::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_InteractionState, "Rewired.ComponentControls", "TouchInteractable/InteractionState");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags, "Rewired.ComponentControls", "TouchInteractable/MouseButtonFlags");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags, "Rewired.ComponentControls", "TouchInteractable/TransitionTypeFlags");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable*, "Rewired.ComponentControls", "TouchInteractable");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*, "Rewired.ComponentControls", "TouchInteractable/IInteractionStateTransitionHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*, "Rewired.ComponentControls", "TouchInteractable/InteractionStateTransitionArgs");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*, "Rewired.ComponentControls", "TouchInteractable/InteractionStateTransitionEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*, "Rewired.ComponentControls", "TouchInteractable/RbXGPCUqEszCWBsBjmUmczrRfKEI");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*, "Rewired.ComponentControls", "TouchInteractable/VisibilityChangedEventHandler");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchInteractable/InteractionState
struct CORDL_TYPE TouchInteractable_InteractionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchInteractable_InteractionState_Unwrapped
enum struct __TouchInteractable_InteractionState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Highlighted = static_cast<int32_t>(0x1),
__E_Pressed = static_cast<int32_t>(0x2),
__E_Disabled = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchInteractable_InteractionState_Unwrapped () const noexcept {
return static_cast<__TouchInteractable_InteractionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_InteractionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchInteractable_InteractionState(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(3)
static ::Rewired::ComponentControls::TouchInteractable_InteractionState const Disabled;

/// @brief Field Highlighted value: I32(1)
static ::Rewired::ComponentControls::TouchInteractable_InteractionState const Highlighted;

/// @brief Field Normal value: I32(0)
static ::Rewired::ComponentControls::TouchInteractable_InteractionState const Normal;

/// @brief Field Pressed value: I32(2)
static ::Rewired::ComponentControls::TouchInteractable_InteractionState const Pressed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable_InteractionState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_InteractionState) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchInteractable/TransitionTypeFlags
struct CORDL_TYPE TouchInteractable_TransitionTypeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchInteractable_TransitionTypeFlags_Unwrapped
enum struct __TouchInteractable_TransitionTypeFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ColorTint = static_cast<int32_t>(0x1),
__E_SpriteSwap = static_cast<int32_t>(0x2),
__E_Animation = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchInteractable_TransitionTypeFlags_Unwrapped () const noexcept {
return static_cast<__TouchInteractable_TransitionTypeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_TransitionTypeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchInteractable_TransitionTypeFlags(int32_t  value__) noexcept;

/// @brief Field Animation value: I32(4)
static ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const Animation;

/// @brief Field ColorTint value: I32(1)
static ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const ColorTint;

/// @brief Field None value: I32(0)
static ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const None;

/// @brief Field SpriteSwap value: I32(2)
static ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const SpriteSwap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchInteractable/MouseButtonFlags
struct CORDL_TYPE TouchInteractable_MouseButtonFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchInteractable_MouseButtonFlags_Unwrapped
enum struct __TouchInteractable_MouseButtonFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LeftButton = static_cast<int32_t>(0x1),
__E_RightButton = static_cast<int32_t>(0x2),
__E_MiddleButton = static_cast<int32_t>(0x4),
__E_AnyButton = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchInteractable_MouseButtonFlags_Unwrapped () const noexcept {
return static_cast<__TouchInteractable_MouseButtonFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_MouseButtonFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchInteractable_MouseButtonFlags(int32_t  value__) noexcept;

/// @brief Field AnyButton value: I32(-1)
static ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const AnyButton;

/// @brief Field LeftButton value: I32(1)
static ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const LeftButton;

/// @brief Field MiddleButton value: I32(4)
static ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const MiddleButton;

/// @brief Field None value: I32(0)
static ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const None;

/// @brief Field RightButton value: I32(2)
static ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const RightButton;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchInteractable/InteractionStateTransitionEventHandler
class CORDL_TYPE TouchInteractable_InteractionStateTransitionEventHandler : public ::UnityEngine::Events::UnityEvent_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_InteractionStateTransitionEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_InteractionStateTransitionEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchInteractable_InteractionStateTransitionEventHandler(TouchInteractable_InteractionStateTransitionEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_InteractionStateTransitionEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractable_InteractionStateTransitionEventHandler(TouchInteractable_InteractionStateTransitionEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2760};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchInteractable/VisibilityChangedEventHandler
class CORDL_TYPE TouchInteractable_VisibilityChangedEventHandler : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_VisibilityChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_VisibilityChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchInteractable_VisibilityChangedEventHandler(TouchInteractable_VisibilityChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_VisibilityChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractable_VisibilityChangedEventHandler(TouchInteractable_VisibilityChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchInteractable::InteractionState, System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchInteractable/InteractionStateTransitionArgs
class CORDL_TYPE TouchInteractable_InteractionStateTransitionArgs : public ::System::Object {
public:
// Declarations
/// @brief Field BGciUKSkBKoLUOJsaQsTZpJEEHFX, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_BGciUKSkBKoLUOJsaQsTZpJEEHFX, put=__cordl_internal_set_BGciUKSkBKoLUOJsaQsTZpJEEHFX)) float_t  BGciUKSkBKoLUOJsaQsTZpJEEHFX;

/// @brief Field NEGupuRLdWSzpNserzbOeTdhTmPB, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NEGupuRLdWSzpNserzbOeTdhTmPB, put=__cordl_internal_set_NEGupuRLdWSzpNserzbOeTdhTmPB)) ::UnityW<::Rewired::ComponentControls::TouchInteractable>  NEGupuRLdWSzpNserzbOeTdhTmPB;

/// @brief Field YiHUoLdHFYWhBaVMZrYlDYemkVTB, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_YiHUoLdHFYWhBaVMZrYlDYemkVTB, put=__cordl_internal_set_YiHUoLdHFYWhBaVMZrYlDYemkVTB)) ::Rewired::ComponentControls::TouchInteractable_InteractionState  YiHUoLdHFYWhBaVMZrYlDYemkVTB;

 __declspec(property(get=get_duration)) float_t  duration;

 __declspec(property(get=get_sender)) ::UnityW<::Rewired::ComponentControls::TouchInteractable>  sender;

 __declspec(property(get=get_state)) ::Rewired::ComponentControls::TouchInteractable_InteractionState  state;

static inline ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* New_ctor() ;

constexpr float_t const& __cordl_internal_get_BGciUKSkBKoLUOJsaQsTZpJEEHFX() const;

constexpr float_t& __cordl_internal_get_BGciUKSkBKoLUOJsaQsTZpJEEHFX() ;

constexpr ::UnityW<::Rewired::ComponentControls::TouchInteractable> const& __cordl_internal_get_NEGupuRLdWSzpNserzbOeTdhTmPB() const;

constexpr ::UnityW<::Rewired::ComponentControls::TouchInteractable>& __cordl_internal_get_NEGupuRLdWSzpNserzbOeTdhTmPB() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState const& __cordl_internal_get_YiHUoLdHFYWhBaVMZrYlDYemkVTB() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState& __cordl_internal_get_YiHUoLdHFYWhBaVMZrYlDYemkVTB() ;

constexpr void __cordl_internal_set_BGciUKSkBKoLUOJsaQsTZpJEEHFX(float_t  value) ;

constexpr void __cordl_internal_set_NEGupuRLdWSzpNserzbOeTdhTmPB(::UnityW<::Rewired::ComponentControls::TouchInteractable>  value) ;

constexpr void __cordl_internal_set_YiHUoLdHFYWhBaVMZrYlDYemkVTB(::Rewired::ComponentControls::TouchInteractable_InteractionState  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_duration, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_sender, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::ComponentControls::TouchInteractable> get_sender() ;

/// @brief Method get_state, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchInteractable_InteractionState get_state() ;

/// @brief Method qybrtWRIKLwpCTsKOELOhIQJikzQA, addr 0x1818d9b30, size 0x40, virtual false, abstract: false, final false
inline void qybrtWRIKLwpCTsKOELOhIQJikzQA(::Rewired::ComponentControls::TouchInteractable*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_InteractionStateTransitionArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_InteractionStateTransitionArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchInteractable_InteractionStateTransitionArgs(TouchInteractable_InteractionStateTransitionArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_InteractionStateTransitionArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractable_InteractionStateTransitionArgs(TouchInteractable_InteractionStateTransitionArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2762};

/// @brief Field NEGupuRLdWSzpNserzbOeTdhTmPB, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::TouchInteractable>  ___NEGupuRLdWSzpNserzbOeTdhTmPB;

/// @brief Field YiHUoLdHFYWhBaVMZrYlDYemkVTB, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchInteractable_InteractionState  ___YiHUoLdHFYWhBaVMZrYlDYemkVTB;

/// @brief Field BGciUKSkBKoLUOJsaQsTZpJEEHFX, offset: 0x1c, size: 0x4, def value: None
 float_t  ___BGciUKSkBKoLUOJsaQsTZpJEEHFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs, ___NEGupuRLdWSzpNserzbOeTdhTmPB) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs, ___YiHUoLdHFYWhBaVMZrYlDYemkVTB) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs, ___BGciUKSkBKoLUOJsaQsTZpJEEHFX) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs) == 0x20, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchInteractable/IInteractionStateTransitionHandler
class CORDL_TYPE TouchInteractable_IInteractionStateTransitionHandler {
public:
// Declarations
/// @brief Method OnInteractionStateTransition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnInteractionStateTransition(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  data) ;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_IInteractionStateTransitionHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractable_IInteractionStateTransitionHandler(TouchInteractable_IInteractionStateTransitionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ComponentControls
// Dependencies System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchInteractable/RbXGPCUqEszCWBsBjmUmczrRfKEI
class CORDL_TYPE TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*  __9;

/// @brief Field <>9__152_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__152_0, put=setStaticF___9__152_0)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  __9__152_0;

static inline ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI* getStaticF___9() ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* getStaticF___9__152_0() ;

static inline void setStaticF___9(::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI*  value) ;

static inline void setStaticF___9__152_0(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value) ;

/// @brief Method tieQAMjjEthjZsoTBCCVFNpmchCu, addr 0x1818ded80, size 0xa0, virtual false, abstract: false, final false
inline void tieQAMjjEthjZsoTBCCVFNpmchCu(::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI(TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI(TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI) == 0x10, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchControl, Rewired.ComponentControls.TouchInteractable::InteractionState, Rewired.ComponentControls.TouchInteractable::MouseButtonFlags, Rewired.ComponentControls.TouchInteractable::TransitionTypeFlags, UnityEngine.UI.ColorBlock, UnityEngine.UI.SpriteState
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchInteractable
class CORDL_TYPE TouchInteractable : public ::Rewired::ComponentControls::TouchControl {
public:
// Declarations
using IInteractionStateTransitionHandler = ::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler;

using InteractionState = ::Rewired::ComponentControls::TouchInteractable_InteractionState;

using InteractionStateTransitionArgs = ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs;

using InteractionStateTransitionEventHandler = ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler;

using MouseButtonFlags = ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags;

using RbXGPCUqEszCWBsBjmUmczrRfKEI = ::Rewired::ComponentControls::TouchInteractable_RbXGPCUqEszCWBsBjmUmczrRfKEI;

using TransitionTypeFlags = ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags;

using VisibilityChangedEventHandler = ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler;

 __declspec(property(get=qAFlpwKRFhDPixahWvmlHDQzVODs)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  KwgCqRkgslrJlLhiplTmQnKGIOlkA;

 __declspec(property(get=ultWWmNvByuMUEaPtmnJJmnsxwlo)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*  YjyyQemIUMVmYdLrZyPOHbMasJPQ;

/// @brief Field __hierarchyInteractionStateTransitionHandlers, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get___hierarchyInteractionStateTransitionHandlers, put=__cordl_internal_set___hierarchyInteractionStateTransitionHandlers)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  __hierarchyInteractionStateTransitionHandlers;

/// @brief Field __hierarchyVisibilityChangedHandlers, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get___hierarchyVisibilityChangedHandlers, put=__cordl_internal_set___hierarchyVisibilityChangedHandlers)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*  __hierarchyVisibilityChangedHandlers;

/// @brief Field __interactionStateTransitionHandlerDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___interactionStateTransitionHandlerDelegate, put=setStaticF___interactionStateTransitionHandlerDelegate)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  __interactionStateTransitionHandlerDelegate;

/// @brief Field _allowSendingEvents, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowSendingEvents, put=__cordl_internal_set__allowSendingEvents)) bool  _allowSendingEvents;

/// @brief Field _allowedMouseButtons, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowedMouseButtons, put=__cordl_internal_set__allowedMouseButtons)) ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _allowedMouseButtons;

/// @brief Field _canvasGroupCache, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasGroupCache, put=__cordl_internal_set__canvasGroupCache)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  _canvasGroupCache;

/// @brief Field _groupsAllowInteraction, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__groupsAllowInteraction, put=__cordl_internal_set__groupsAllowInteraction)) bool  _groupsAllowInteraction;

/// @brief Field _hideWhenIdle, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideWhenIdle, put=__cordl_internal_set__hideWhenIdle)) bool  _hideWhenIdle;

/// @brief Field _interactable, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__interactable, put=__cordl_internal_set__interactable)) bool  _interactable;

/// @brief Field _interactionState, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__interactionState, put=__cordl_internal_set__interactionState)) ::Rewired::ComponentControls::TouchInteractable_InteractionState  _interactionState;

/// @brief Field _onInteractionStateChangedToDisabled, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInteractionStateChangedToDisabled, put=__cordl_internal_set__onInteractionStateChangedToDisabled)) ::UnityEngine::Events::UnityEvent*  _onInteractionStateChangedToDisabled;

/// @brief Field _onInteractionStateChangedToHighlighted, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInteractionStateChangedToHighlighted, put=__cordl_internal_set__onInteractionStateChangedToHighlighted)) ::UnityEngine::Events::UnityEvent*  _onInteractionStateChangedToHighlighted;

/// @brief Field _onInteractionStateChangedToNormal, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInteractionStateChangedToNormal, put=__cordl_internal_set__onInteractionStateChangedToNormal)) ::UnityEngine::Events::UnityEvent*  _onInteractionStateChangedToNormal;

/// @brief Field _onInteractionStateChangedToPressed, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInteractionStateChangedToPressed, put=__cordl_internal_set__onInteractionStateChangedToPressed)) ::UnityEngine::Events::UnityEvent*  _onInteractionStateChangedToPressed;

/// @brief Field _onInteractionStateTransition, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInteractionStateTransition, put=__cordl_internal_set__onInteractionStateTransition)) ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*  _onInteractionStateTransition;

/// @brief Field _onVisibilityChanged, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onVisibilityChanged, put=__cordl_internal_set__onVisibilityChanged)) ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*  _onVisibilityChanged;

/// @brief Field _targetGraphic, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetGraphic, put=__cordl_internal_set__targetGraphic)) ::UnityW<::UnityEngine::UI::Graphic>  _targetGraphic;

/// @brief Field _transitionAnimationTriggers, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__transitionAnimationTriggers, put=__cordl_internal_set__transitionAnimationTriggers)) ::UnityEngine::UI::AnimationTriggers*  _transitionAnimationTriggers;

/// @brief Field _transitionArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__transitionArgs, put=setStaticF__transitionArgs)) ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  _transitionArgs;

/// @brief Field _transitionColorTint, offset 0x4c, size 0x58 
 __declspec(property(get=__cordl_internal_get__transitionColorTint, put=__cordl_internal_set__transitionColorTint)) ::UnityEngine::UI::ColorBlock  _transitionColorTint;

/// @brief Field _transitionSpriteState, offset 0xa8, size 0x20 
 __declspec(property(get=__cordl_internal_get__transitionSpriteState, put=__cordl_internal_set__transitionSpriteState)) ::UnityEngine::UI::SpriteState  _transitionSpriteState;

/// @brief Field _transitionType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionType, put=__cordl_internal_set__transitionType)) ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  _transitionType;

/// @brief Field _varWatch_interactable, offset 0x11b, size 0x1 
 __declspec(property(get=__cordl_internal_get__varWatch_interactable, put=__cordl_internal_set__varWatch_interactable)) bool  _varWatch_interactable;

/// @brief Field _varWatch_visible, offset 0x11a, size 0x1 
 __declspec(property(get=__cordl_internal_get__varWatch_visible, put=__cordl_internal_set__varWatch_visible)) bool  _varWatch_visible;

/// @brief Field _visible, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__visible, put=__cordl_internal_set__visible)) bool  _visible;

 __declspec(property(get=get_allowedMouseButtons, put=set_allowedMouseButtons)) ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  allowedMouseButtons;

 __declspec(property(get=get_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field heWJxJgtZAnRpqSlrYVrQHjiCChC, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_heWJxJgtZAnRpqSlrYVrQHjiCChC, put=__cordl_internal_set_heWJxJgtZAnRpqSlrYVrQHjiCChC)) bool  heWJxJgtZAnRpqSlrYVrQHjiCChC;

 __declspec(property(get=get_hideWhenIdle, put=set_hideWhenIdle)) bool  hideWhenIdle;

 __declspec(property(get=get_image, put=set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

 __declspec(property(get=get_interactable, put=set_interactable)) bool  interactable;

 __declspec(property(get=get_interactionState)) ::Rewired::ComponentControls::TouchInteractable_InteractionState  interactionState;

/// @brief Field lxUrVYijZiqXNKaGDvjGmHxRYniR, offset 0x119, size 0x1 
 __declspec(property(get=__cordl_internal_get_lxUrVYijZiqXNKaGDvjGmHxRYniR, put=__cordl_internal_set_lxUrVYijZiqXNKaGDvjGmHxRYniR)) bool  lxUrVYijZiqXNKaGDvjGmHxRYniR;

 __declspec(property(get=get_targetGraphic, put=set_targetGraphic)) ::UnityW<::UnityEngine::UI::Graphic>  targetGraphic;

 __declspec(property(get=get_transitionAnimationTriggers, put=set_transitionAnimationTriggers)) ::UnityEngine::UI::AnimationTriggers*  transitionAnimationTriggers;

 __declspec(property(get=get_transitionColorTint, put=set_transitionColorTint)) ::UnityEngine::UI::ColorBlock  transitionColorTint;

 __declspec(property(get=get_transitionSpriteState, put=set_transitionSpriteState)) ::UnityEngine::UI::SpriteState  transitionSpriteState;

 __declspec(property(get=get_transitionType, put=set_transitionType)) ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  transitionType;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method Awake, addr 0x1818e5bb0, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CBuuCFOHkpLZMsCYubVIvIpeXufT, addr 0x1818e5c30, size 0xc0, virtual false, abstract: false, final false
inline void CBuuCFOHkpLZMsCYubVIvIpeXufT() ;

/// @brief Method CnEVeldVBQIqFbkavkduxxJwKZCN, addr 0x1818e5cf0, size 0x120, virtual false, abstract: false, final false
inline bool CnEVeldVBQIqFbkavkduxxJwKZCN(bool  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GSupZqWmHsIYQdJrbByAiTJlhsfs, addr 0x1818e5e10, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchInteractable_InteractionState GSupZqWmHsIYQdJrbByAiTJlhsfs(::UnityEngine::EventSystems::BaseEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GWoGuiTtAIYBKqgmDazMhQihwjdlA, addr 0x1818e5e70, size 0x10, virtual false, abstract: false, final false
static inline bool GWoGuiTtAIYBKqgmDazMhQihwjdlA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HZqwKPixWhRIYGxGgCMQwHFeQKOn, addr 0x1818e5e80, size 0x40, virtual false, abstract: false, final false
static inline int32_t HZqwKPixWhRIYGxGgCMQwHFeQKOn(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IlbTTySBJptmUMCsnhyvlbnpckZg, addr 0x1818e5ec0, size 0xc0, virtual false, abstract: false, final false
static inline int32_t IlbTTySBJptmUMCsnhyvlbnpckZg(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IsInteractable, addr 0x1818e5f80, size 0x20, virtual false, abstract: false, final false
inline bool IsInteractable() ;

/// @brief Method JWReTMSLZmaKifCAODpHjJObDTPiB, addr 0x1818e5fa0, size 0x410, virtual false, abstract: false, final false
inline void JWReTMSLZmaKifCAODpHjJObDTPiB(::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method KyBnQvbByCsGDSWCzbHRTzIYymGj, addr 0x1818e63b0, size 0xc0, virtual false, abstract: false, final false
inline void KyBnQvbByCsGDSWCzbHRTzIYymGj(::UnityEngine::Color  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method MglUtfcHSirIwkBLFifcfDnRkGnIb, addr 0x1818e6470, size 0x60, virtual false, abstract: false, final false
inline void MglUtfcHSirIwkBLFifcfDnRkGnIb(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NTRgCGnsWjAdPXLpyShrydIwRPTQ, addr 0x1818e64d0, size 0x80, virtual false, abstract: false, final false
static inline bool NTRgCGnsWjAdPXLpyShrydIwRPTQ(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ComponentControls::TouchInteractable* New_ctor() ;

/// @brief Method OiCvLuimbMPNPOZQhYVPpnObdKHJ, addr 0x1818e6550, size 0x80, virtual false, abstract: false, final false
inline void OiCvLuimbMPNPOZQhYVPpnObdKHJ() ;

/// @brief Method OleHBJpGvEHnDsoBIACcFXCOznWJ, addr 0x1818e65d0, size 0xa0, virtual true, abstract: false, final false
inline void OleHBJpGvEHnDsoBIACcFXCOznWJ() ;

/// @brief Method OnBeginDrag, addr 0x1818e6670, size 0x50, virtual true, abstract: false, final false
inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnCanvasGroupChanged, addr 0x1818e66c0, size 0x1f0, virtual true, abstract: false, final false
inline void OnCanvasGroupChanged() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0x1818e68b0, size 0x10, virtual true, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0x1818e68c0, size 0xf0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrag, addr 0x1818e6670, size 0x50, virtual true, abstract: false, final false
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnEnable, addr 0x1818e69b0, size 0x150, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEndDrag, addr 0x1818e6670, size 0x50, virtual true, abstract: false, final false
inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerDown, addr 0x1818e6b00, size 0xb0, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x1818e6bb0, size 0xc0, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x1818e6c70, size 0xc0, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x1818e6d30, size 0xb0, virtual true, abstract: false, final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnValidate, addr 0x1818e6de0, size 0x220, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x1818e7000, size 0x50, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RjGorUBnrFeQpMCHqVXaafTENktF, addr 0x1818e7050, size 0xc0, virtual false, abstract: false, final false
inline void RjGorUBnrFeQpMCHqVXaafTENktF(::UnityEngine::Sprite*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method THrdhkLNYiSATDvjdwzTrjvLHZNn, addr 0x1818e7110, size 0x40, virtual true, abstract: false, final false
inline bool THrdhkLNYiSATDvjdwzTrjvLHZNn() ;

/// @brief Method UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag, addr 0x1818e7150, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IDragHandler.OnDrag, addr 0x1818e7170, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IDragHandler_OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IEndDragHandler.OnEndDrag, addr 0x1818e7190, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown, addr 0x1818e71b0, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter, addr 0x1818e71d0, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit, addr 0x1818e71f0, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp, addr 0x1818e7210, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method VaTEtFbbZbokoDQLZWwzdhCaJxm, addr 0x1818e7230, size 0x10, virtual false, abstract: false, final false
inline void VaTEtFbbZbokoDQLZWwzdhCaJxm() ;

/// @brief Method WDiPBsdQdJomVFuInQBBZOrpthqx, addr 0x1818e7240, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WDiPBsdQdJomVFuInQBBZOrpthqx(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method WJcCRPwiBzPjDJRGUMoDSSCUGhte, addr 0x1818e7320, size 0x10, virtual false, abstract: false, final false
inline void WJcCRPwiBzPjDJRGUMoDSSCUGhte(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XGmWGTaLhDTHqtlgZCmGsjpPZzpK, addr 0x1818e7330, size 0x10, virtual true, abstract: false, final false
inline void XGmWGTaLhDTHqtlgZCmGsjpPZzpK() ;

/// @brief Method ZglaseTvoANcWuzhjcxcPMJNdHoT, addr 0x1818e7340, size 0x130, virtual false, abstract: false, final false
static inline bool ZglaseTvoANcWuzhjcxcPMJNdHoT(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb, addr 0x1818e7470, size 0xa0, virtual false, abstract: false, final false
static inline bool ZwZTTHTJJxdhkIcPaGOWhEMjpxXmb(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace_param_1, ::UnityEngine::EventSystems::EventTriggerType  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* const& __cordl_internal_get___hierarchyInteractionStateTransitionHandlers() const;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*& __cordl_internal_get___hierarchyInteractionStateTransitionHandlers() ;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>* const& __cordl_internal_get___hierarchyVisibilityChangedHandlers() const;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*& __cordl_internal_get___hierarchyVisibilityChangedHandlers() ;

constexpr bool const& __cordl_internal_get__allowSendingEvents() const;

constexpr bool& __cordl_internal_get__allowSendingEvents() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags const& __cordl_internal_get__allowedMouseButtons() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags& __cordl_internal_get__allowedMouseButtons() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& __cordl_internal_get__canvasGroupCache() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get__canvasGroupCache() ;

constexpr bool const& __cordl_internal_get__groupsAllowInteraction() const;

constexpr bool& __cordl_internal_get__groupsAllowInteraction() ;

constexpr bool const& __cordl_internal_get__hideWhenIdle() const;

constexpr bool& __cordl_internal_get__hideWhenIdle() ;

constexpr bool const& __cordl_internal_get__interactable() const;

constexpr bool& __cordl_internal_get__interactable() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState const& __cordl_internal_get__interactionState() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionState& __cordl_internal_get__interactionState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onInteractionStateChangedToDisabled() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onInteractionStateChangedToDisabled() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onInteractionStateChangedToHighlighted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onInteractionStateChangedToHighlighted() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onInteractionStateChangedToNormal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onInteractionStateChangedToNormal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onInteractionStateChangedToPressed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onInteractionStateChangedToPressed() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler* const& __cordl_internal_get__onInteractionStateTransition() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*& __cordl_internal_get__onInteractionStateTransition() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler* const& __cordl_internal_get__onVisibilityChanged() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*& __cordl_internal_get__onVisibilityChanged() ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__targetGraphic() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__targetGraphic() ;

constexpr ::UnityEngine::UI::AnimationTriggers* const& __cordl_internal_get__transitionAnimationTriggers() const;

constexpr ::UnityEngine::UI::AnimationTriggers*& __cordl_internal_get__transitionAnimationTriggers() ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get__transitionColorTint() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get__transitionColorTint() ;

constexpr ::UnityEngine::UI::SpriteState const& __cordl_internal_get__transitionSpriteState() const;

constexpr ::UnityEngine::UI::SpriteState& __cordl_internal_get__transitionSpriteState() ;

constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags const& __cordl_internal_get__transitionType() const;

constexpr ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags& __cordl_internal_get__transitionType() ;

constexpr bool const& __cordl_internal_get__varWatch_interactable() const;

constexpr bool& __cordl_internal_get__varWatch_interactable() ;

constexpr bool const& __cordl_internal_get__varWatch_visible() const;

constexpr bool& __cordl_internal_get__varWatch_visible() ;

constexpr bool const& __cordl_internal_get__visible() const;

constexpr bool& __cordl_internal_get__visible() ;

constexpr bool const& __cordl_internal_get_heWJxJgtZAnRpqSlrYVrQHjiCChC() const;

constexpr bool& __cordl_internal_get_heWJxJgtZAnRpqSlrYVrQHjiCChC() ;

constexpr bool const& __cordl_internal_get_lxUrVYijZiqXNKaGDvjGmHxRYniR() const;

constexpr bool& __cordl_internal_get_lxUrVYijZiqXNKaGDvjGmHxRYniR() ;

constexpr void __cordl_internal_set___hierarchyInteractionStateTransitionHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value) ;

constexpr void __cordl_internal_set___hierarchyVisibilityChangedHandlers(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*  value) ;

constexpr void __cordl_internal_set__allowSendingEvents(bool  value) ;

constexpr void __cordl_internal_set__allowedMouseButtons(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  value) ;

constexpr void __cordl_internal_set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  value) ;

constexpr void __cordl_internal_set__groupsAllowInteraction(bool  value) ;

constexpr void __cordl_internal_set__hideWhenIdle(bool  value) ;

constexpr void __cordl_internal_set__interactable(bool  value) ;

constexpr void __cordl_internal_set__interactionState(::Rewired::ComponentControls::TouchInteractable_InteractionState  value) ;

constexpr void __cordl_internal_set__onInteractionStateChangedToDisabled(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onInteractionStateChangedToHighlighted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onInteractionStateChangedToNormal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onInteractionStateChangedToPressed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onInteractionStateTransition(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*  value) ;

constexpr void __cordl_internal_set__onVisibilityChanged(::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__targetGraphic(::UnityW<::UnityEngine::UI::Graphic>  value) ;

constexpr void __cordl_internal_set__transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

constexpr void __cordl_internal_set__transitionColorTint(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set__transitionSpriteState(::UnityEngine::UI::SpriteState  value) ;

constexpr void __cordl_internal_set__transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value) ;

constexpr void __cordl_internal_set__varWatch_interactable(bool  value) ;

constexpr void __cordl_internal_set__varWatch_visible(bool  value) ;

constexpr void __cordl_internal_set__visible(bool  value) ;

constexpr void __cordl_internal_set_heWJxJgtZAnRpqSlrYVrQHjiCChC(bool  value) ;

constexpr void __cordl_internal_set_lxUrVYijZiqXNKaGDvjGmHxRYniR(bool  value) ;

/// @brief Method .ctor, addr 0x1818e7550, size 0x230, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_InteractionStateChangedToDisabled, addr 0x1818e7780, size 0x30, virtual false, abstract: false, final false
inline void add_InteractionStateChangedToDisabled(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_InteractionStateChangedToHighlighted, addr 0x1818e77b0, size 0x30, virtual false, abstract: false, final false
inline void add_InteractionStateChangedToHighlighted(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_InteractionStateChangedToNormal, addr 0x1818e77e0, size 0x30, virtual false, abstract: false, final false
inline void add_InteractionStateChangedToNormal(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_InteractionStateChangedToPressed, addr 0x1818e7810, size 0x30, virtual false, abstract: false, final false
inline void add_InteractionStateChangedToPressed(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_InteractionStateSetEvent, addr 0x1818e7840, size 0x30, virtual false, abstract: false, final false
inline void add_InteractionStateSetEvent(::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value) ;

/// @brief Method add_VisibilityChangedEvent, addr 0x1818e7870, size 0x30, virtual false, abstract: false, final false
inline void add_VisibilityChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// @brief Method cydDTOonMDdvOaBPfzzgEUQwOGDqA, addr 0x1818e78a0, size 0x80, virtual false, abstract: false, final false
inline void cydDTOonMDdvOaBPfzzgEUQwOGDqA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method dEpudvGMUiTOuSgixfQegEsdHCJR, addr 0x1818e7920, size 0x80, virtual false, abstract: false, final false
inline void dEpudvGMUiTOuSgixfQegEsdHCJR() ;

/// @brief Method dnZxqHiYPsMEllOLjaAjiPpDIDTI, addr 0x1818e79a0, size 0x20, virtual false, abstract: false, final false
static inline bool dnZxqHiYPsMEllOLjaAjiPpDIDTI(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* getStaticF___interactionStateTransitionHandlerDelegate() ;

static inline ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* getStaticF__transitionArgs() ;

/// @brief Method get_allowedMouseButtons, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags get_allowedMouseButtons() ;

/// @brief Method get_animator, addr 0x1818e79c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> get_animator() ;

/// @brief Method get_hideWhenIdle, addr 0x1818e79f0, size 0x10, virtual false, abstract: false, final false
inline bool get_hideWhenIdle() ;

/// @brief Method get_image, addr 0x1818e7a00, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Image> get_image() ;

/// @brief Method get_interactable, addr 0x180391c90, size 0x10, virtual false, abstract: false, final false
inline bool get_interactable() ;

/// @brief Method get_interactionState, addr 0x1818e7a50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchInteractable_InteractionState get_interactionState() ;

/// @brief Method get_targetGraphic, addr 0x1803b2f10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Graphic> get_targetGraphic() ;

/// @brief Method get_transitionAnimationTriggers, addr 0x1803223b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UI::AnimationTriggers* get_transitionAnimationTriggers() ;

/// @brief Method get_transitionColorTint, addr 0x1818e7a60, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::UI::ColorBlock get_transitionColorTint() ;

/// @brief Method get_transitionSpriteState, addr 0x1818e7aa0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::UI::SpriteState get_transitionSpriteState() ;

/// @brief Method get_transitionType, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags get_transitionType() ;

/// @brief Method get_visible, addr 0x180391c80, size 0x10, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method hfiNIKZNrCJWGYGGarqccGJOfFzF, addr 0x1818e7ac0, size 0x100, virtual false, abstract: false, final false
inline void hfiNIKZNrCJWGYGGarqccGJOfFzF() ;

/// @brief Method hoAeJBInAxINkeqRaGvyOkGLMfYqA, addr 0x1818e7bc0, size 0x240, virtual false, abstract: false, final false
inline void hoAeJBInAxINkeqRaGvyOkGLMfYqA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// @brief Method jhwblaxEbkhdqzLJjHdhHiHDcYhCA, addr 0x1818e7e00, size 0x30, virtual false, abstract: false, final false
inline bool jhwblaxEbkhdqzLJjHdhHiHDcYhCA(::Rewired::ComponentControls::TouchInteractable_InteractionState  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kkCclCYOkWZVeTnmHThMaDFHgsOcA, addr 0x1818e7e30, size 0x1d0, virtual false, abstract: false, final false
inline bool kkCclCYOkWZVeTnmHThMaDFHgsOcA(::UnityEngine::EventSystems::BaseEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nMrQXCCUIeVGgANkKgFBGJIYXKxE, addr 0x1818e8000, size 0x50, virtual false, abstract: false, final false
static inline bool nMrQXCCUIeVGgANkKgFBGJIYXKxE(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pCUzRQbpcYNYVJDMkEQOqvHFhjtc, addr 0x1818e8050, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* pCUzRQbpcYNYVJDMkEQOqvHFhjtc() ;

/// @brief Method qAFlpwKRFhDPixahWvmlHDQzVODs, addr 0x1818e8170, size 0x190, virtual false, abstract: false, final false
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>* qAFlpwKRFhDPixahWvmlHDQzVODs() ;

/// @brief Method remove_InteractionStateChangedToDisabled, addr 0x1818e8300, size 0x30, virtual false, abstract: false, final false
inline void remove_InteractionStateChangedToDisabled(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_InteractionStateChangedToHighlighted, addr 0x1818e8330, size 0x30, virtual false, abstract: false, final false
inline void remove_InteractionStateChangedToHighlighted(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_InteractionStateChangedToNormal, addr 0x1818e8360, size 0x30, virtual false, abstract: false, final false
inline void remove_InteractionStateChangedToNormal(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_InteractionStateChangedToPressed, addr 0x1818e8390, size 0x30, virtual false, abstract: false, final false
inline void remove_InteractionStateChangedToPressed(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_InteractionStateSetEvent, addr 0x1818e83c0, size 0x30, virtual false, abstract: false, final false
inline void remove_InteractionStateSetEvent(::UnityEngine::Events::UnityAction_1<::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value) ;

/// @brief Method remove_VisibilityChangedEvent, addr 0x1818e83f0, size 0x30, virtual false, abstract: false, final false
inline void remove_VisibilityChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// @brief Method rjbbQJIPyxgONxRsqEviKmujbff, addr 0x1818e8420, size 0x30, virtual false, abstract: false, final false
static inline bool rjbbQJIPyxgONxRsqEviKmujbff(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method sYWgVjYVPopMXhNacgbAfnzJKUOAA, addr 0x1818e8450, size 0x1b0, virtual false, abstract: false, final false
inline void sYWgVjYVPopMXhNacgbAfnzJKUOAA() ;

static inline void setStaticF___interactionStateTransitionHandlerDelegate(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  value) ;

static inline void setStaticF__transitionArgs(::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*  value) ;

/// @brief Method set_allowedMouseButtons, addr 0x1818e8600, size 0x20, virtual false, abstract: false, final false
inline void set_allowedMouseButtons(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  value) ;

/// @brief Method set_hideWhenIdle, addr 0x1818e8620, size 0x20, virtual false, abstract: false, final false
inline void set_hideWhenIdle(bool  value) ;

/// @brief Method set_image, addr 0x1818e8640, size 0x60, virtual false, abstract: false, final false
inline void set_image(::UnityEngine::UI::Image*  value) ;

/// @brief Method set_interactable, addr 0x1818e86a0, size 0x20, virtual false, abstract: false, final false
inline void set_interactable(bool  value) ;

/// @brief Method set_targetGraphic, addr 0x1818e8640, size 0x60, virtual false, abstract: false, final false
inline void set_targetGraphic(::UnityEngine::UI::Graphic*  value) ;

/// @brief Method set_transitionAnimationTriggers, addr 0x1818e86c0, size 0x50, virtual false, abstract: false, final false
inline void set_transitionAnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

/// @brief Method set_transitionColorTint, addr 0x1818e8710, size 0x50, virtual false, abstract: false, final false
inline void set_transitionColorTint(::UnityEngine::UI::ColorBlock  value) ;

/// @brief Method set_transitionSpriteState, addr 0x1818e8760, size 0x80, virtual false, abstract: false, final false
inline void set_transitionSpriteState(::UnityEngine::UI::SpriteState  value) ;

/// @brief Method set_transitionType, addr 0x1818e87e0, size 0x20, virtual false, abstract: false, final false
inline void set_transitionType(::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  value) ;

/// @brief Method set_visible, addr 0x1818e8800, size 0x90, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

/// @brief Method uawGHGsNDaczyEGtCBhrbrVnMIIYA, addr 0x1818e8890, size 0x90, virtual false, abstract: false, final false
inline void uawGHGsNDaczyEGtCBhrbrVnMIIYA(::UnityEngine::EventSystems::BaseEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ultWWmNvByuMUEaPtmnJJmnsxwlo, addr 0x1818e8920, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>* ultWWmNvByuMUEaPtmnJJmnsxwlo() ;

/// @brief Method unVqhTTcGkoUxjGUDMaVsUSLHzIA, addr 0x1818e89d0, size 0x70, virtual false, abstract: false, final false
static inline bool unVqhTTcGkoUxjGUDMaVsUSLHzIA(::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method xCrGfuGCCKcPXQnzMbafEeHmiUuEA, addr 0x1818e8a40, size 0xa0, virtual false, abstract: false, final false
inline void xCrGfuGCCKcPXQnzMbafEeHmiUuEA() ;

/// @brief Method xvteqdEEdOSHHRDfPDsGCHAwMxZXA, addr 0x1818e8ae0, size 0x30, virtual true, abstract: false, final false
inline bool xvteqdEEdOSHHRDfPDsGCHAwMxZXA(::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchInteractable(TouchInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchInteractable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchInteractable(TouchInteractable const& ) = delete;

/// @brief Field MAX_MOUSE_BUTTONS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MOUSE_BUTTONS{static_cast<int32_t>(0x3)};

/// @brief Field POINTER_ID_MOUSE_LEFT_BUTTON offset 0xffffffff size 0x4
static constexpr int32_t  POINTER_ID_MOUSE_LEFT_BUTTON{static_cast<int32_t>(0xffffffff)};

/// @brief Field POINTER_ID_MOUSE_MIDDLE_BUTTON offset 0xffffffff size 0x4
static constexpr int32_t  POINTER_ID_MOUSE_MIDDLE_BUTTON{static_cast<int32_t>(0xfffffffd)};

/// @brief Field POINTER_ID_MOUSE_RIGHT_BUTTON offset 0xffffffff size 0x4
static constexpr int32_t  POINTER_ID_MOUSE_RIGHT_BUTTON{static_cast<int32_t>(0xfffffffe)};

/// @brief Field POINTER_ID_NULL offset 0xffffffff size 0x4
static constexpr int32_t  POINTER_ID_NULL{static_cast<int32_t>(0x80000000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2765};

/// @brief Field _interactable, offset: 0x40, size: 0x1, def value: None
 bool  ____interactable;

/// @brief Field _visible, offset: 0x41, size: 0x1, def value: None
 bool  ____visible;

/// @brief Field _hideWhenIdle, offset: 0x42, size: 0x1, def value: None
 bool  ____hideWhenIdle;

/// @brief Field _allowedMouseButtons, offset: 0x44, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags  ____allowedMouseButtons;

/// @brief Field _transitionType, offset: 0x48, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags  ____transitionType;

/// @brief Field _transitionColorTint, offset: 0x4c, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ____transitionColorTint;

/// @brief Field _transitionSpriteState, offset: 0xa8, size: 0x20, def value: None
 ::UnityEngine::UI::SpriteState  ____transitionSpriteState;

/// @brief Field _transitionAnimationTriggers, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::UI::AnimationTriggers*  ____transitionAnimationTriggers;

/// @brief Field _targetGraphic, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ____targetGraphic;

/// @brief Field _onInteractionStateTransition, offset: 0xd8, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler*  ____onInteractionStateTransition;

/// @brief Field _onVisibilityChanged, offset: 0xe0, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler*  ____onVisibilityChanged;

/// @brief Field _onInteractionStateChangedToNormal, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onInteractionStateChangedToNormal;

/// @brief Field _onInteractionStateChangedToHighlighted, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onInteractionStateChangedToHighlighted;

/// @brief Field _onInteractionStateChangedToPressed, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onInteractionStateChangedToPressed;

/// @brief Field _onInteractionStateChangedToDisabled, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onInteractionStateChangedToDisabled;

/// @brief Field _canvasGroupCache, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  ____canvasGroupCache;

/// @brief Field _groupsAllowInteraction, offset: 0x110, size: 0x1, def value: None
 bool  ____groupsAllowInteraction;

/// @brief Field _interactionState, offset: 0x114, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchInteractable_InteractionState  ____interactionState;

/// @brief Field heWJxJgtZAnRpqSlrYVrQHjiCChC, offset: 0x118, size: 0x1, def value: None
 bool  ___heWJxJgtZAnRpqSlrYVrQHjiCChC;

/// @brief Field lxUrVYijZiqXNKaGDvjGmHxRYniR, offset: 0x119, size: 0x1, def value: None
 bool  ___lxUrVYijZiqXNKaGDvjGmHxRYniR;

/// @brief Field _varWatch_visible, offset: 0x11a, size: 0x1, def value: None
 bool  ____varWatch_visible;

/// @brief Field _varWatch_interactable, offset: 0x11b, size: 0x1, def value: None
 bool  ____varWatch_interactable;

/// @brief Field _allowSendingEvents, offset: 0x11c, size: 0x1, def value: None
 bool  ____allowSendingEvents;

/// @brief Field __hierarchyVisibilityChangedHandlers, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::UI::IVisibilityChangedHandler*,bool>*  _____hierarchyVisibilityChangedHandlers;

/// @brief Field __hierarchyInteractionStateTransitionHandlers, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler*,::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs*>*  _____hierarchyInteractionStateTransitionHandlers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____interactable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____visible) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____hideWhenIdle) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____allowedMouseButtons) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____transitionType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____transitionColorTint) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____transitionSpriteState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____transitionAnimationTriggers) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____targetGraphic) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____onInteractionStateTransition) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____onVisibilityChanged) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____onInteractionStateChangedToNormal) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____onInteractionStateChangedToHighlighted) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____onInteractionStateChangedToPressed) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____onInteractionStateChangedToDisabled) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____canvasGroupCache) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____groupsAllowInteraction) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____interactionState) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ___heWJxJgtZAnRpqSlrYVrQHjiCChC) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ___lxUrVYijZiqXNKaGDvjGmHxRYniR) == 0x119, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____varWatch_visible) == 0x11a, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____varWatch_interactable) == 0x11b, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, ____allowSendingEvents) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, _____hierarchyVisibilityChangedHandlers) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchInteractable, _____hierarchyInteractionStateTransitionHandlers) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchInteractable) == 0x130, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
