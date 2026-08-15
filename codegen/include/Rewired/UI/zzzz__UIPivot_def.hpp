#pragma once
// IWYU pragma private; include "Rewired/UI/UIPivot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(UIPivot)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::UI {
struct UIPivot;
}
// Write type traits
MARK_VAL_T(::Rewired::UI::UIPivot);
DEFINE_IL2CPP_CLASS(::Rewired::UI::UIPivot, "Rewired.UI", "UIPivot");
// Dependencies 
namespace Rewired::UI {
// Is value type: true
// CS Name: Rewired.UI.UIPivot
struct CORDL_TYPE UIPivot {
public:
// Declarations
/// @brief Method .ctor, addr 0x181913020, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_BottomCenter, addr 0x181913050, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_BottomCenter() ;

/// @brief Method get_BottomLeft, addr 0x181913070, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_BottomLeft() ;

/// @brief Method get_BottomRight, addr 0x181913090, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_BottomRight() ;

/// @brief Method get_MiddleCenter, addr 0x1819130b0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_MiddleCenter() ;

/// @brief Method get_MiddleLeft, addr 0x1819130d0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_MiddleLeft() ;

/// @brief Method get_MiddleRight, addr 0x1819130f0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_MiddleRight() ;

/// @brief Method get_TopCenter, addr 0x181913110, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_TopCenter() ;

/// @brief Method get_TopLeft, addr 0x181913130, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_TopLeft() ;

/// @brief Method get_TopRight, addr 0x181913150, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot get_TopRight() ;

/// @brief Method op_Implicit, addr 0x181913170, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::UI::UIPivot op_Implicit___Rewired__UI__UIPivot(::UnityEngine::Vector2  x) ;

/// @brief Method op_Implicit, addr 0x181913190, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Rewired::UI::UIPivot  x) ;

// Ctor Parameters []
// @brief default ctor
constexpr UIPivot() ;

// Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }]
constexpr UIPivot(float_t  min, float_t  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field min, offset: 0x0, size: 0x4, def value: None
 float_t  min;

/// @brief Field max, offset: 0x4, size: 0x4, def value: None
 float_t  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UI::UIPivot, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::UI::UIPivot, max) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::UI::UIPivot) == 0x8, "Size mismatch!");

} // namespace end def Rewired::UI
