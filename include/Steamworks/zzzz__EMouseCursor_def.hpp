#pragma once
// IWYU pragma private; include "Steamworks/EMouseCursor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EMouseCursor)
// Forward declare root types
namespace Steamworks {
struct EMouseCursor;
}
// Write type traits
MARK_VAL_T(::Steamworks::EMouseCursor);
DEFINE_IL2CPP_CLASS(::Steamworks::EMouseCursor, "Steamworks", "EMouseCursor");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EMouseCursor
struct CORDL_TYPE EMouseCursor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EMouseCursor_Unwrapped
enum struct __EMouseCursor_Unwrapped : int32_t {
__E_dc_user = static_cast<int32_t>(0x0),
__E_dc_none = static_cast<int32_t>(0x1),
__E_dc_arrow = static_cast<int32_t>(0x2),
__E_dc_ibeam = static_cast<int32_t>(0x3),
__E_dc_hourglass = static_cast<int32_t>(0x4),
__E_dc_waitarrow = static_cast<int32_t>(0x5),
__E_dc_crosshair = static_cast<int32_t>(0x6),
__E_dc_up = static_cast<int32_t>(0x7),
__E_dc_sizenw = static_cast<int32_t>(0x8),
__E_dc_sizese = static_cast<int32_t>(0x9),
__E_dc_sizene = static_cast<int32_t>(0xa),
__E_dc_sizesw = static_cast<int32_t>(0xb),
__E_dc_sizew = static_cast<int32_t>(0xc),
__E_dc_sizee = static_cast<int32_t>(0xd),
__E_dc_sizen = static_cast<int32_t>(0xe),
__E_dc_sizes = static_cast<int32_t>(0xf),
__E_dc_sizewe = static_cast<int32_t>(0x10),
__E_dc_sizens = static_cast<int32_t>(0x11),
__E_dc_sizeall = static_cast<int32_t>(0x12),
__E_dc_no = static_cast<int32_t>(0x13),
__E_dc_hand = static_cast<int32_t>(0x14),
__E_dc_blank = static_cast<int32_t>(0x15),
__E_dc_middle_pan = static_cast<int32_t>(0x16),
__E_dc_north_pan = static_cast<int32_t>(0x17),
__E_dc_north_east_pan = static_cast<int32_t>(0x18),
__E_dc_east_pan = static_cast<int32_t>(0x19),
__E_dc_south_east_pan = static_cast<int32_t>(0x1a),
__E_dc_south_pan = static_cast<int32_t>(0x1b),
__E_dc_south_west_pan = static_cast<int32_t>(0x1c),
__E_dc_west_pan = static_cast<int32_t>(0x1d),
__E_dc_north_west_pan = static_cast<int32_t>(0x1e),
__E_dc_alias = static_cast<int32_t>(0x1f),
__E_dc_cell = static_cast<int32_t>(0x20),
__E_dc_colresize = static_cast<int32_t>(0x21),
__E_dc_copycur = static_cast<int32_t>(0x22),
__E_dc_verticaltext = static_cast<int32_t>(0x23),
__E_dc_rowresize = static_cast<int32_t>(0x24),
__E_dc_zoomin = static_cast<int32_t>(0x25),
__E_dc_zoomout = static_cast<int32_t>(0x26),
__E_dc_help = static_cast<int32_t>(0x27),
__E_dc_custom = static_cast<int32_t>(0x28),
__E_dc_last = static_cast<int32_t>(0x29),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EMouseCursor_Unwrapped () const noexcept {
return static_cast<__EMouseCursor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EMouseCursor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EMouseCursor(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field dc_alias value: I32(31)
static ::Steamworks::EMouseCursor const dc_alias;

/// @brief Field dc_arrow value: I32(2)
static ::Steamworks::EMouseCursor const dc_arrow;

/// @brief Field dc_blank value: I32(21)
static ::Steamworks::EMouseCursor const dc_blank;

/// @brief Field dc_cell value: I32(32)
static ::Steamworks::EMouseCursor const dc_cell;

/// @brief Field dc_colresize value: I32(33)
static ::Steamworks::EMouseCursor const dc_colresize;

/// @brief Field dc_copycur value: I32(34)
static ::Steamworks::EMouseCursor const dc_copycur;

/// @brief Field dc_crosshair value: I32(6)
static ::Steamworks::EMouseCursor const dc_crosshair;

/// @brief Field dc_custom value: I32(40)
static ::Steamworks::EMouseCursor const dc_custom;

/// @brief Field dc_east_pan value: I32(25)
static ::Steamworks::EMouseCursor const dc_east_pan;

/// @brief Field dc_hand value: I32(20)
static ::Steamworks::EMouseCursor const dc_hand;

/// @brief Field dc_help value: I32(39)
static ::Steamworks::EMouseCursor const dc_help;

/// @brief Field dc_hourglass value: I32(4)
static ::Steamworks::EMouseCursor const dc_hourglass;

/// @brief Field dc_ibeam value: I32(3)
static ::Steamworks::EMouseCursor const dc_ibeam;

/// @brief Field dc_last value: I32(41)
static ::Steamworks::EMouseCursor const dc_last;

/// @brief Field dc_middle_pan value: I32(22)
static ::Steamworks::EMouseCursor const dc_middle_pan;

/// @brief Field dc_no value: I32(19)
static ::Steamworks::EMouseCursor const dc_no;

/// @brief Field dc_none value: I32(1)
static ::Steamworks::EMouseCursor const dc_none;

/// @brief Field dc_north_east_pan value: I32(24)
static ::Steamworks::EMouseCursor const dc_north_east_pan;

/// @brief Field dc_north_pan value: I32(23)
static ::Steamworks::EMouseCursor const dc_north_pan;

/// @brief Field dc_north_west_pan value: I32(30)
static ::Steamworks::EMouseCursor const dc_north_west_pan;

/// @brief Field dc_rowresize value: I32(36)
static ::Steamworks::EMouseCursor const dc_rowresize;

/// @brief Field dc_sizeall value: I32(18)
static ::Steamworks::EMouseCursor const dc_sizeall;

/// @brief Field dc_sizee value: I32(13)
static ::Steamworks::EMouseCursor const dc_sizee;

/// @brief Field dc_sizen value: I32(14)
static ::Steamworks::EMouseCursor const dc_sizen;

/// @brief Field dc_sizene value: I32(10)
static ::Steamworks::EMouseCursor const dc_sizene;

/// @brief Field dc_sizens value: I32(17)
static ::Steamworks::EMouseCursor const dc_sizens;

/// @brief Field dc_sizenw value: I32(8)
static ::Steamworks::EMouseCursor const dc_sizenw;

/// @brief Field dc_sizes value: I32(15)
static ::Steamworks::EMouseCursor const dc_sizes;

/// @brief Field dc_sizese value: I32(9)
static ::Steamworks::EMouseCursor const dc_sizese;

/// @brief Field dc_sizesw value: I32(11)
static ::Steamworks::EMouseCursor const dc_sizesw;

/// @brief Field dc_sizew value: I32(12)
static ::Steamworks::EMouseCursor const dc_sizew;

/// @brief Field dc_sizewe value: I32(16)
static ::Steamworks::EMouseCursor const dc_sizewe;

/// @brief Field dc_south_east_pan value: I32(26)
static ::Steamworks::EMouseCursor const dc_south_east_pan;

/// @brief Field dc_south_pan value: I32(27)
static ::Steamworks::EMouseCursor const dc_south_pan;

/// @brief Field dc_south_west_pan value: I32(28)
static ::Steamworks::EMouseCursor const dc_south_west_pan;

/// @brief Field dc_up value: I32(7)
static ::Steamworks::EMouseCursor const dc_up;

/// @brief Field dc_user value: I32(0)
static ::Steamworks::EMouseCursor const dc_user;

/// @brief Field dc_verticaltext value: I32(35)
static ::Steamworks::EMouseCursor const dc_verticaltext;

/// @brief Field dc_waitarrow value: I32(5)
static ::Steamworks::EMouseCursor const dc_waitarrow;

/// @brief Field dc_west_pan value: I32(29)
static ::Steamworks::EMouseCursor const dc_west_pan;

/// @brief Field dc_zoomin value: I32(37)
static ::Steamworks::EMouseCursor const dc_zoomin;

/// @brief Field dc_zoomout value: I32(38)
static ::Steamworks::EMouseCursor const dc_zoomout;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EMouseCursor, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EMouseCursor) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
