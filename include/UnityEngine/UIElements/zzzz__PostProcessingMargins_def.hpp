#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PostProcessingMargins.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PostProcessingMargins)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PostProcessingMargins;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PostProcessingMargins);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PostProcessingMargins, "UnityEngine.UIElements", "PostProcessingMargins");
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PostProcessingMargins
struct CORDL_TYPE PostProcessingMargins {
public:
// Declarations
 __declspec(property(get=get_bottom, put=set_bottom)) float_t  bottom;

 __declspec(property(get=get_left, put=set_left)) float_t  left;

 __declspec(property(get=get_right, put=set_right)) float_t  right;

 __declspec(property(get=get_top, put=set_top)) float_t  top;

/// @brief Method get_bottom, addr 0x180303b30, size 0x10, virtual false, abstract: false, final false
inline float_t get_bottom() ;

/// @brief Method get_left, addr 0x1802d56c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_left() ;

/// @brief Method get_right, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_right() ;

/// @brief Method get_top, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_top() ;

/// @brief Method set_bottom, addr 0x18051eaf0, size 0x10, virtual false, abstract: false, final false
inline void set_bottom(float_t  value) ;

/// @brief Method set_left, addr 0x18051eac0, size 0x10, virtual false, abstract: false, final false
inline void set_left(float_t  value) ;

/// @brief Method set_right, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_right(float_t  value) ;

/// @brief Method set_top, addr 0x18051ead0, size 0x10, virtual false, abstract: false, final false
inline void set_top(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessingMargins() ;

// Ctor Parameters [CppParam { name: "m_Left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Bottom", ty: "float_t", modifiers: "", def_value: None }]
constexpr PostProcessingMargins(float_t  m_Left, float_t  m_Top, float_t  m_Right, float_t  m_Bottom) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3705};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Left, offset: 0x0, size: 0x4, def value: None
 float_t  m_Left;

/// @brief Field m_Top, offset: 0x4, size: 0x4, def value: None
 float_t  m_Top;

/// @brief Field m_Right, offset: 0x8, size: 0x4, def value: None
 float_t  m_Right;

/// @brief Field m_Bottom, offset: 0xc, size: 0x4, def value: None
 float_t  m_Bottom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PostProcessingMargins, m_Left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingMargins, m_Top) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingMargins, m_Right) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingMargins, m_Bottom) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PostProcessingMargins) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
