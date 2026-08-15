#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerMoveEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerMoveEvent)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PointerMoveEvent*);
MARK_REF_T(::UnityEngine::UIElements::PointerMoveEvent___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerMoveEvent*, "UnityEngine.UIElements", "PointerMoveEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerMoveEvent___c*, "UnityEngine.UIElements", "PointerMoveEvent/<>c");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerMoveEvent/<>c
class CORDL_TYPE PointerMoveEvent___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::PointerMoveEvent___c*  __9;

static inline ::UnityEngine::UIElements::PointerMoveEvent___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x1824d7ad0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::PointerMoveEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::PointerMoveEvent___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::PointerMoveEvent___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerMoveEvent___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerMoveEvent___c(PointerMoveEvent___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerMoveEvent___c(PointerMoveEvent___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3660};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PointerMoveEvent___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerMoveEvent
class CORDL_TYPE PointerMoveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerMoveEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::PointerMoveEvent___c;

/// @brief Field <isHandledByDraggable>k__BackingField, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHandledByDraggable_k__BackingField, put=__cordl_internal_set__isHandledByDraggable_k__BackingField)) bool  _isHandledByDraggable_k__BackingField;

 __declspec(property(get=get_isHandledByDraggable, put=set_isHandledByDraggable)) bool  isHandledByDraggable;

 __declspec(property(get=get_isPointerDown)) bool  isPointerDown;

 __declspec(property(get=get_isPointerUp)) bool  isPointerUp;

/// @brief Method Dispatch, addr 0x180cbd620, size 0x1fc0, virtual true, abstract: false, final false
inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method GetPooledCompatibilityMouseEvent, addr 0x1824d5e70, size 0xf0, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::IMouseEvent* GetPooledCompatibilityMouseEvent() ;

/// @brief Method Init, addr 0x1824d5f60, size 0x30, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x1824d5f90, size 0x20, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerMoveEvent* New_ctor() ;

/// @brief Method PostDispatch, addr 0x1824d5fb0, size 0x50, virtual true, abstract: false, final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method PreDispatch, addr 0x1824d44a0, size 0x10, virtual true, abstract: false, final false
inline void PreDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

constexpr bool const& __cordl_internal_get__isHandledByDraggable_k__BackingField() const;

constexpr bool& __cordl_internal_get__isHandledByDraggable_k__BackingField() ;

constexpr void __cordl_internal_set__isHandledByDraggable_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x1824d6080, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isHandledByDraggable, addr 0x1803716c0, size 0x10, virtual false, abstract: false, final false
inline bool get_isHandledByDraggable() ;

/// @brief Method get_isPointerDown, addr 0x1824d60b0, size 0x30, virtual false, abstract: false, final false
inline bool get_isPointerDown() ;

/// @brief Method get_isPointerUp, addr 0x1824d60e0, size 0x30, virtual false, abstract: false, final false
inline bool get_isPointerUp() ;

/// @brief Method set_isHandledByDraggable, addr 0x1817d7060, size 0x10, virtual false, abstract: false, final false
inline void set_isHandledByDraggable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerMoveEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerMoveEvent(PointerMoveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerMoveEvent(PointerMoveEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3661};

/// @brief Field <isHandledByDraggable>k__BackingField, offset: 0x114, size: 0x1, def value: None
 bool  ____isHandledByDraggable_k__BackingField;

/// @brief Size padding 0x128 - 0x118 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerMoveEvent, ____isHandledByDraggable_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PointerMoveEvent) == 0x128, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
