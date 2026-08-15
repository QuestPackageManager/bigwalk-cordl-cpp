#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/IntRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntRect)
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class IntRect;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::IntRect*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::IntRect*, "Rewired.Utils.Classes.Data", "IntRect");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.IntRect
class CORDL_TYPE IntRect : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_bottom, put=set_bottom)) int32_t  bottom;

/// @brief Field height, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

 __declspec(property(get=get_left, put=set_left)) int32_t  left;

 __declspec(property(get=get_right, put=set_right)) int32_t  right;

 __declspec(property(get=get_top, put=set_top)) int32_t  top;

/// @brief Field width, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

 __declspec(property(get=get_xMax, put=set_xMax)) int32_t  xMax;

 __declspec(property(get=get_xMin, put=set_xMin)) int32_t  xMin;

/// @brief Field y, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int32_t  y;

 __declspec(property(get=get_yMax, put=set_yMax)) int32_t  yMax;

 __declspec(property(get=get_yMin, put=set_yMin)) int32_t  yMin;

/// @brief Method Clone, addr 0x181954230, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::IntRect* Clone() ;

/// @brief Method Clone, addr 0x1819541c0, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::IntRect* Clone(::Rewired::Utils::Classes::Data::IntRect*  intRect) ;

static inline ::Rewired::Utils::Classes::Data::IntRect* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::IntRect* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_y() const;

constexpr int32_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_y(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1816627c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_bottom, addr 0x181954280, size 0x10, virtual false, abstract: false, final false
inline int32_t get_bottom() ;

/// @brief Method get_left, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_left() ;

/// @brief Method get_right, addr 0x181954290, size 0x10, virtual false, abstract: false, final false
inline int32_t get_right() ;

/// @brief Method get_top, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_top() ;

/// @brief Method get_xMax, addr 0x181954290, size 0x10, virtual false, abstract: false, final false
inline int32_t get_xMax() ;

/// @brief Method get_xMin, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_xMin() ;

/// @brief Method get_yMax, addr 0x181954280, size 0x10, virtual false, abstract: false, final false
inline int32_t get_yMax() ;

/// @brief Method get_yMin, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_yMin() ;

/// @brief Method set_bottom, addr 0x1819542a0, size 0x10, virtual false, abstract: false, final false
inline void set_bottom(int32_t  value) ;

/// @brief Method set_left, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_left(int32_t  value) ;

/// @brief Method set_right, addr 0x1819542b0, size 0x10, virtual false, abstract: false, final false
inline void set_right(int32_t  value) ;

/// @brief Method set_top, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_top(int32_t  value) ;

/// @brief Method set_xMax, addr 0x1819542b0, size 0x10, virtual false, abstract: false, final false
inline void set_xMax(int32_t  value) ;

/// @brief Method set_xMin, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_xMin(int32_t  value) ;

/// @brief Method set_yMax, addr 0x1819542a0, size 0x10, virtual false, abstract: false, final false
inline void set_yMax(int32_t  value) ;

/// @brief Method set_yMin, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_yMin(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntRect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntRect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntRect(IntRect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntRect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntRect(IntRect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3043};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  ___y;

/// @brief Field width, offset: 0x18, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::IntRect, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntRect, ___y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntRect, ___width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::IntRect, ___height) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::IntRect) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
