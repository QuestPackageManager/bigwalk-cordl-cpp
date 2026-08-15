#pragma once
// IWYU pragma private; include "UnityEngine/ScrollViewState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScrollViewState)
// Forward declare root types
namespace UnityEngine {
class ScrollViewState;
}
// Write type traits
MARK_REF_T(::UnityEngine::ScrollViewState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ScrollViewState*, "UnityEngine", "ScrollViewState");
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScrollViewState
class CORDL_TYPE ScrollViewState : public ::System::Object {
public:
// Declarations
/// @brief Field apply, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_apply, put=__cordl_internal_set_apply)) bool  apply;

/// @brief Field isDuringTouchScroll, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDuringTouchScroll, put=__cordl_internal_set_isDuringTouchScroll)) bool  isDuringTouchScroll;

/// @brief Field position, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Rect  position;

/// @brief Field previousTimeSinceStartup, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousTimeSinceStartup, put=__cordl_internal_set_previousTimeSinceStartup)) float_t  previousTimeSinceStartup;

/// @brief Field scrollPosition, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrollPosition, put=__cordl_internal_set_scrollPosition)) ::UnityEngine::Vector2  scrollPosition;

/// @brief Field touchScrollStartMousePosition, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchScrollStartMousePosition, put=__cordl_internal_set_touchScrollStartMousePosition)) ::UnityEngine::Vector2  touchScrollStartMousePosition;

/// @brief Field touchScrollStartPosition, offset 0x54, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchScrollStartPosition, put=__cordl_internal_set_touchScrollStartPosition)) ::UnityEngine::Vector2  touchScrollStartPosition;

/// @brief Field velocity, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector2  velocity;

/// @brief Field viewRect, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_viewRect, put=__cordl_internal_set_viewRect)) ::UnityEngine::Rect  viewRect;

/// @brief Field visibleRect, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_visibleRect, put=__cordl_internal_set_visibleRect)) ::UnityEngine::Rect  visibleRect;

static inline ::UnityEngine::ScrollViewState* New_ctor() ;

constexpr bool const& __cordl_internal_get_apply() const;

constexpr bool& __cordl_internal_get_apply() ;

constexpr bool const& __cordl_internal_get_isDuringTouchScroll() const;

constexpr bool& __cordl_internal_get_isDuringTouchScroll() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_position() ;

constexpr float_t const& __cordl_internal_get_previousTimeSinceStartup() const;

constexpr float_t& __cordl_internal_get_previousTimeSinceStartup() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_touchScrollStartMousePosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_touchScrollStartMousePosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_touchScrollStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_touchScrollStartPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_velocity() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_viewRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_viewRect() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_visibleRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_visibleRect() ;

constexpr void __cordl_internal_set_apply(bool  value) ;

constexpr void __cordl_internal_set_isDuringTouchScroll(bool  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_previousTimeSinceStartup(float_t  value) ;

constexpr void __cordl_internal_set_scrollPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_touchScrollStartMousePosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_touchScrollStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_viewRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_visibleRect(::UnityEngine::Rect  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollViewState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollViewState(ScrollViewState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollViewState(ScrollViewState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19104};

/// @brief Field position, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  ___position;

/// @brief Field visibleRect, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rect  ___visibleRect;

/// @brief Field viewRect, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  ___viewRect;

/// @brief Field scrollPosition, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scrollPosition;

/// @brief Field apply, offset: 0x48, size: 0x1, def value: None
 bool  ___apply;

/// @brief Field isDuringTouchScroll, offset: 0x49, size: 0x1, def value: None
 bool  ___isDuringTouchScroll;

/// @brief Field touchScrollStartMousePosition, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___touchScrollStartMousePosition;

/// @brief Field touchScrollStartPosition, offset: 0x54, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___touchScrollStartPosition;

/// @brief Field velocity, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___velocity;

/// @brief Field previousTimeSinceStartup, offset: 0x64, size: 0x4, def value: None
 float_t  ___previousTimeSinceStartup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ScrollViewState, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___visibleRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___viewRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___scrollPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___apply) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___isDuringTouchScroll) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___touchScrollStartMousePosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___touchScrollStartPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___velocity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ScrollViewState, ___previousTimeSinceStartup) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ScrollViewState) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine
