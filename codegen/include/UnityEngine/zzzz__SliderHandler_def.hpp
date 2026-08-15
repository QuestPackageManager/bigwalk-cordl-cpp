#pragma once
// IWYU pragma private; include "UnityEngine/SliderHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderHandler)
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class SliderState;
}
// Forward declare root types
namespace UnityEngine {
struct SliderHandler;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SliderHandler);
DEFINE_IL2CPP_CLASS(::UnityEngine::SliderHandler, "UnityEngine", "SliderHandler");
// Dependencies UnityEngine.Rect
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SliderHandler
struct CORDL_TYPE SliderHandler {
public:
// Declarations
/// @brief Method Clamp, addr 0x1822d5990, size 0x40, virtual false, abstract: false, final false
inline float_t Clamp(float_t  value) ;

/// @brief Method ClampedCurrentValue, addr 0x1822d59d0, size 0x40, virtual false, abstract: false, final false
inline float_t ClampedCurrentValue() ;

/// @brief Method CurrentEvent, addr 0x1822d5a40, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Event* CurrentEvent() ;

/// @brief Method CurrentEventType, addr 0x1822d5a10, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::EventType CurrentEventType() ;

/// @brief Method CurrentScrollTroughSide, addr 0x1822d5a60, size 0xa0, virtual false, abstract: false, final false
inline int32_t CurrentScrollTroughSide() ;

/// @brief Method Handle, addr 0x1822d5b00, size 0xd0, virtual false, abstract: false, final false
inline float_t Handle() ;

/// @brief Method HorizontalThumbRect, addr 0x1822d5bd0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::Rect HorizontalThumbRect() ;

/// @brief Method IsEmptySlider, addr 0x1822d5da0, size 0x20, virtual false, abstract: false, final false
inline bool IsEmptySlider() ;

/// @brief Method MaxValue, addr 0x1822d5dc0, size 0x20, virtual false, abstract: false, final false
inline float_t MaxValue() ;

/// @brief Method MinValue, addr 0x1822d5de0, size 0x20, virtual false, abstract: false, final false
inline float_t MinValue() ;

/// @brief Method MousePosition, addr 0x1822d5e00, size 0x70, virtual false, abstract: false, final false
inline float_t MousePosition() ;

/// @brief Method OnMouseDown, addr 0x1822d5e70, size 0x360, virtual false, abstract: false, final false
inline float_t OnMouseDown() ;

/// @brief Method OnMouseDrag, addr 0x1822d61d0, size 0x100, virtual false, abstract: false, final false
inline float_t OnMouseDrag() ;

/// @brief Method OnMouseUp, addr 0x1822d62d0, size 0x50, virtual false, abstract: false, final false
inline float_t OnMouseUp() ;

/// @brief Method OnRepaint, addr 0x1822d6320, size 0x430, virtual false, abstract: false, final false
inline float_t OnRepaint() ;

/// @brief Method PageMovementValue, addr 0x1822d6750, size 0x130, virtual false, abstract: false, final false
inline float_t PageMovementValue() ;

/// @brief Method PageUpMovementBound, addr 0x1822d6880, size 0x70, virtual false, abstract: false, final false
inline float_t PageUpMovementBound() ;

/// @brief Method SliderState, addr 0x1822d68f0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::SliderState* SliderState() ;

/// @brief Method StartDraggingWithValue, addr 0x1822d6970, size 0xe0, virtual false, abstract: false, final false
inline void StartDraggingWithValue(float_t  dragStartValue) ;

/// @brief Method SupportsPageMovements, addr 0x1822d6a50, size 0x50, virtual false, abstract: false, final false
inline bool SupportsPageMovements() ;

/// @brief Method ThumbExtRect, addr 0x1822d6aa0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ThumbExtRect() ;

/// @brief Method ThumbRect, addr 0x1822d6b90, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ThumbRect() ;

/// @brief Method ThumbSelectionRect, addr 0x1822d6c10, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ThumbSelectionRect() ;

/// @brief Method ThumbSize, addr 0x1822d6c80, size 0xa0, virtual false, abstract: false, final false
inline float_t ThumbSize() ;

/// @brief Method ValueForCurrentMousePosition, addr 0x1822d6d20, size 0x100, virtual false, abstract: false, final false
inline float_t ValueForCurrentMousePosition() ;

/// @brief Method ValuesPerPixel, addr 0x1822d6e20, size 0xc0, virtual false, abstract: false, final false
inline float_t ValuesPerPixel() ;

/// @brief Method VerticalThumbRect, addr 0x1822d6ee0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::Rect VerticalThumbRect() ;

/// @brief Method .ctor, addr 0x1822d70b0, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rect  position, float_t  currentValue, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, bool  horiz, int32_t  id, ::UnityEngine::GUIStyle*  thumbExtent) ;

// Ctor Parameters []
// @brief default ctor
constexpr SliderHandler() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "currentValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "slider", ty: "::UnityEngine::GUIStyle*", modifiers: "", def_value: None }, CppParam { name: "thumb", ty: "::UnityEngine::GUIStyle*", modifiers: "", def_value: None }, CppParam { name: "thumbExtent", ty: "::UnityEngine::GUIStyle*", modifiers: "", def_value: None }, CppParam { name: "horiz", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SliderHandler(::UnityEngine::Rect  position, float_t  currentValue, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, ::UnityEngine::GUIStyle*  thumbExtent, bool  horiz, int32_t  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field position, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  position;

/// @brief Field currentValue, offset: 0x10, size: 0x4, def value: None
 float_t  currentValue;

/// @brief Field size, offset: 0x14, size: 0x4, def value: None
 float_t  size;

/// @brief Field start, offset: 0x18, size: 0x4, def value: None
 float_t  start;

/// @brief Field end, offset: 0x1c, size: 0x4, def value: None
 float_t  end;

/// @brief Field slider, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  slider;

/// @brief Field thumb, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  thumb;

/// @brief Field thumbExtent, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  thumbExtent;

/// @brief Field horiz, offset: 0x38, size: 0x1, def value: None
 bool  horiz;

/// @brief Field id, offset: 0x3c, size: 0x4, def value: None
 int32_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SliderHandler, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, currentValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, size) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, end) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, slider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, thumb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, thumbExtent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, horiz) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderHandler, id) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SliderHandler) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine
