#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ScreenRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScreenRect)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct ScreenRect;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::ScreenRect);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::ScreenRect, "Rewired.Utils.Classes.Data", "ScreenRect");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.ScreenRect
struct CORDL_TYPE ScreenRect {
public:
// Declarations
 __declspec(property(get=get_center)) ::UnityEngine::Vector2  center;

 __declspec(property(get=get_xMax, put=set_xMax)) float_t  xMax;

 __declspec(property(get=get_yMax, put=set_yMax)) float_t  yMax;

/// @brief Method ToString, addr 0x181957970, size 0x130, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1802d5420, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_center, addr 0x1818d6590, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_center() ;

/// @brief Method get_xMax, addr 0x1802d56b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_xMax() ;

/// @brief Method get_yMax, addr 0x1802d56d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_yMax() ;

/// @brief Method op_Implicit, addr 0x181957aa0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::ScreenRect op_Implicit___Rewired__Utils__Classes__Data__ScreenRect(::UnityEngine::Rect  o) ;

/// @brief Method op_Implicit, addr 0x181957aa0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect op_Implicit___UnityEngine__Rect(::Rewired::Utils::Classes::Data::ScreenRect  o) ;

/// @brief Method set_xMax, addr 0x1802d56f0, size 0x10, virtual false, abstract: false, final false
inline void set_xMax(float_t  value) ;

/// @brief Method set_yMax, addr 0x1802d5720, size 0x10, virtual false, abstract: false, final false
inline void set_yMax(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScreenRect() ;

// Ctor Parameters [CppParam { name: "xMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
constexpr ScreenRect(float_t  xMin, float_t  yMin, float_t  width, float_t  height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field xMin, offset: 0x0, size: 0x4, def value: None
 float_t  xMin;

/// @brief Field yMin, offset: 0x4, size: 0x4, def value: None
 float_t  yMin;

/// @brief Field width, offset: 0x8, size: 0x4, def value: None
 float_t  width;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 float_t  height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::ScreenRect, xMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::ScreenRect, yMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::ScreenRect, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::ScreenRect, height) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::ScreenRect) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
