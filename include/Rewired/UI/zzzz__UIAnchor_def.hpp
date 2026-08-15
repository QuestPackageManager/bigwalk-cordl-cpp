#pragma once
// IWYU pragma private; include "Rewired/UI/UIAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(UIAnchor)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::UI {
struct UIAnchor;
}
// Write type traits
MARK_VAL_T(::Rewired::UI::UIAnchor);
DEFINE_IL2CPP_CLASS(::Rewired::UI::UIAnchor, "Rewired.UI", "UIAnchor");
// Dependencies UnityEngine.Vector2
namespace Rewired::UI {
// Is value type: true
// CS Name: Rewired.UI.UIAnchor
struct CORDL_TYPE UIAnchor {
public:
// Declarations
/// @brief Method .ctor, addr 0x181912d80, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181912d30, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_BottomCenter, addr 0x181912dd0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_BottomCenter() ;

/// @brief Method get_BottomHStretch, addr 0x181912df0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_BottomHStretch() ;

/// @brief Method get_BottomLeft, addr 0x181912e10, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_BottomLeft() ;

/// @brief Method get_BottomRight, addr 0x181912e20, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_BottomRight() ;

/// @brief Method get_CenterVStretch, addr 0x181912e40, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_CenterVStretch() ;

/// @brief Method get_LeftVStretch, addr 0x181912e60, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_LeftVStretch() ;

/// @brief Method get_MiddleCenter, addr 0x181912e80, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_MiddleCenter() ;

/// @brief Method get_MiddleHStretch, addr 0x181912eb0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_MiddleHStretch() ;

/// @brief Method get_MiddleLeft, addr 0x181912ee0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_MiddleLeft() ;

/// @brief Method get_MiddleRight, addr 0x181912f00, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_MiddleRight() ;

/// @brief Method get_RightVStretch, addr 0x181912f30, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_RightVStretch() ;

/// @brief Method get_Stretch, addr 0x181912f50, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_Stretch() ;

/// @brief Method get_TopCenter, addr 0x181912f70, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_TopCenter() ;

/// @brief Method get_TopHStretch, addr 0x181912fa0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_TopHStretch() ;

/// @brief Method get_TopLeft, addr 0x181912fd0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_TopLeft() ;

/// @brief Method get_TopRight, addr 0x181912ff0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIAnchor get_TopRight() ;

// Ctor Parameters []
// @brief default ctor
constexpr UIAnchor() ;

// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr UIAnchor(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field min, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  min;

/// @brief Field max, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UI::UIAnchor, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::UI::UIAnchor, max) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::UI::UIAnchor) == 0x10, "Size mismatch!");

} // namespace end def Rewired::UI
