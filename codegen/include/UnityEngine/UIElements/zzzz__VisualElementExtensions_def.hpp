#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VisualElementExtensions)
namespace UnityEngine::UIElements {
class IManipulator;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualElementExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElementExtensions*, "UnityEngine.UIElements", "VisualElementExtensions");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementExtensions
class CORDL_TYPE VisualElementExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method AddManipulator, addr 0x182414100, size 0x20, virtual false, abstract: false, final false
static inline void AddManipulator(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::UIElements::IManipulator*  manipulator) ;

/// @brief Method ChangeCoordinatesTo, addr 0x182414120, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Ray ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement*  src, ::UnityEngine::UIElements::VisualElement*  dest, ::UnityEngine::Ray  ray) ;

/// @brief Method ChangeCoordinatesTo, addr 0x182414210, size 0x3a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement*  src, ::UnityEngine::UIElements::VisualElement*  dest, ::UnityEngine::Rect  rect) ;

/// @brief Method ChangeCoordinatesTo, addr 0x182414190, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement*  src, ::UnityEngine::UIElements::VisualElement*  dest, ::UnityEngine::Vector2  point) ;

/// @brief Method ChangeCoordinatesTo_2D, addr 0x18240d0f0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ChangeCoordinatesTo_2D(::UnityEngine::UIElements::VisualElement*  src, ::UnityEngine::UIElements::VisualElement*  dest, ::UnityEngine::Vector2  point) ;

/// @brief Method ChangeCoordinatesTo_3D, addr 0x18240d1a0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ChangeCoordinatesTo_3D(::UnityEngine::UIElements::VisualElement*  src, ::UnityEngine::UIElements::VisualElement*  dest, ::UnityEngine::Vector2  point) ;

/// @brief Method IntersectLocalRay, addr 0x1824145b0, size 0x130, virtual false, abstract: false, final false
static inline bool IntersectLocalRay(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::Ray  localRay, ::by_ref<::UnityEngine::Vector3>  localPoint) ;

/// @brief Method IntersectWorldRay, addr 0x1824146e0, size 0x320, virtual false, abstract: false, final false
static inline bool IntersectWorldRay(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::Ray  worldRay, ::by_ref<float_t>  distance, ::by_ref<::UnityEngine::Vector3>  localPoint) ;

/// @brief Method LocalToWorld, addr 0x182414a70, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Ray LocalToWorld(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::Ray  r) ;

/// @brief Method LocalToWorld, addr 0x182414a00, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 LocalToWorld(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::Vector2  p) ;

/// @brief Method RemoveManipulator, addr 0x182414c10, size 0x20, virtual false, abstract: false, final false
static inline void RemoveManipulator(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::UIElements::IManipulator*  manipulator) ;

/// @brief Method StretchToParentSize, addr 0x182414c30, size 0x370, virtual false, abstract: false, final false
static inline void StretchToParentSize(::UnityEngine::UIElements::VisualElement*  elem) ;

/// @brief Method TransformRay, addr 0x182414fa0, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Ray TransformRay(::UnityEngine::Matrix4x4  m, ::UnityEngine::Ray  ray) ;

/// @brief Method WorldToLocal, addr 0x182415230, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Ray WorldToLocal(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::Ray  r) ;

/// @brief Method WorldToLocal, addr 0x1824151d0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect WorldToLocal(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::Rect  r) ;

/// @brief Method WorldToLocal, addr 0x1824153d0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 WorldToLocal(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::Vector2  p) ;

/// @brief Method WorldToLocal3D, addr 0x182415120, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WorldToLocal3D(::UnityEngine::UIElements::VisualElement*  ele, ::UnityEngine::Vector3  p) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualElementExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementExtensions(VisualElementExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementExtensions(VisualElementExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualElementExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
