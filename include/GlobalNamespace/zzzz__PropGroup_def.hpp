#pragma once
// IWYU pragma private; include "GlobalNamespace/PropGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropGroup)
// Forward declare root types
namespace GlobalNamespace {
struct PropGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropGroup, "", "PropGroup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropGroup
struct CORDL_TYPE PropGroup {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PropGroup_Unwrapped
enum struct __PropGroup_Unwrapped : int32_t {
__E_NoPropGroup = static_cast<int32_t>(0x0),
__E_FmRadioDock = static_cast<int32_t>(0xa),
__E_SalonBrush = static_cast<int32_t>(0xf),
__E_WallHook = static_cast<int32_t>(0x10),
__E_TimerBall = static_cast<int32_t>(0x11),
__E_CannonFireable = static_cast<int32_t>(0x12),
__E_RewardGourd = static_cast<int32_t>(0x13),
__E_TooHeavy = static_cast<int32_t>(0x14),
__E_CannonBall = static_cast<int32_t>(0x15),
__E_Blindfold = static_cast<int32_t>(0x16),
__E_StickyCurse = static_cast<int32_t>(0x17),
__E_Backpack = static_cast<int32_t>(0x18),
__E_GoesInBackpack = static_cast<int32_t>(0x19),
__E_SalonBrushWithColor = static_cast<int32_t>(0x1a),
__E_BuoyHolder = static_cast<int32_t>(0x1b),
__E_PackHanger = static_cast<int32_t>(0x1c),
__E_OracleToken = static_cast<int32_t>(0x1d),
__E_WearHolster = static_cast<int32_t>(0x1e),
__E_GoesInHolster = static_cast<int32_t>(0x1f),
__E_BigKey = static_cast<int32_t>(0x20),
__E_GourdParcel = static_cast<int32_t>(0x21),
__E_GourdParcelCutter = static_cast<int32_t>(0x22),
__E_BigKeyEnding = static_cast<int32_t>(0x23),
__E_BigKeyComplete = static_cast<int32_t>(0x24),
__E_BigKeyEndingComplete = static_cast<int32_t>(0x25),
__E_BigKeyOverflow = static_cast<int32_t>(0x26),
__E_PoseLimitSmall = static_cast<int32_t>(0x28),
__E_PoseLimitMedium = static_cast<int32_t>(0x29),
__E_PoseLimitBig = static_cast<int32_t>(0x2a),
__E_PoseLimitAimable = static_cast<int32_t>(0x2b),
__E_PoseLimitGoggles = static_cast<int32_t>(0x2c),
__E_CorpseGrasper = static_cast<int32_t>(0x3c),
__E_PegTile = static_cast<int32_t>(0x4f),
__E_PegTileBlank = static_cast<int32_t>(0x6b),
__E_PegTileRound = static_cast<int32_t>(0x6f),
__E_PegTileA1 = static_cast<int32_t>(0x79),
__E_PegTileA2 = static_cast<int32_t>(0x7a),
__E_PegTileA3 = static_cast<int32_t>(0x7b),
__E_PegTileA4 = static_cast<int32_t>(0x7c),
__E_PegTileA5 = static_cast<int32_t>(0x7d),
__E_PegTileA6 = static_cast<int32_t>(0x7e),
__E_PegTileA7 = static_cast<int32_t>(0x7f),
__E_PegTileA8 = static_cast<int32_t>(0x80),
__E_PegTileA9 = static_cast<int32_t>(0x81),
__E_PegTileB1 = static_cast<int32_t>(0x83),
__E_PegTileB2 = static_cast<int32_t>(0x84),
__E_PegTileB3 = static_cast<int32_t>(0x85),
__E_PegTileB4 = static_cast<int32_t>(0x86),
__E_PegTileB5 = static_cast<int32_t>(0x87),
__E_PegTileB6 = static_cast<int32_t>(0x88),
__E_PegTileB7 = static_cast<int32_t>(0x89),
__E_PegTileB8 = static_cast<int32_t>(0x8a),
__E_PegTileB9 = static_cast<int32_t>(0x8b),
__E_PegTileC1 = static_cast<int32_t>(0x8d),
__E_PegTileC2 = static_cast<int32_t>(0x8e),
__E_PegTileC3 = static_cast<int32_t>(0x8f),
__E_PegTileC4 = static_cast<int32_t>(0x90),
__E_PegTileC5 = static_cast<int32_t>(0x91),
__E_PegTileC6 = static_cast<int32_t>(0x92),
__E_PegTileC7 = static_cast<int32_t>(0x93),
__E_PegTileC8 = static_cast<int32_t>(0x94),
__E_PegTileC9 = static_cast<int32_t>(0x95),
__E_PegTileD1 = static_cast<int32_t>(0x97),
__E_PegTileD2 = static_cast<int32_t>(0x98),
__E_PegTileD3 = static_cast<int32_t>(0x99),
__E_PegTileD4 = static_cast<int32_t>(0x9a),
__E_PegTileD5 = static_cast<int32_t>(0x9b),
__E_PegTileD6 = static_cast<int32_t>(0x9c),
__E_PegTileD7 = static_cast<int32_t>(0x9d),
__E_PegTileD8 = static_cast<int32_t>(0x9e),
__E_PegTileD9 = static_cast<int32_t>(0x9f),
__E_PegTileCircle1 = static_cast<int32_t>(0xa1),
__E_PegTileCircle2 = static_cast<int32_t>(0xa2),
__E_PegTileCircle3 = static_cast<int32_t>(0xa3),
__E_PegTileCircle4 = static_cast<int32_t>(0xa4),
__E_PegTileCircle5 = static_cast<int32_t>(0xa5),
__E_PegTileCircle6 = static_cast<int32_t>(0xa6),
__E_PegTileCircle7 = static_cast<int32_t>(0xa7),
__E_PegTileCircle8 = static_cast<int32_t>(0xa8),
__E_PegTileCircle9 = static_cast<int32_t>(0xa9),
__E_PegTilePriestA1 = static_cast<int32_t>(0xc9),
__E_PegTilePriestA2 = static_cast<int32_t>(0xca),
__E_PegTilePriestA3 = static_cast<int32_t>(0xcb),
__E_PegTilePriestA4 = static_cast<int32_t>(0xcc),
__E_PegTilePriestA5 = static_cast<int32_t>(0xcd),
__E_PegTilePriestA6 = static_cast<int32_t>(0xce),
__E_PegTilePriestA7 = static_cast<int32_t>(0xcf),
__E_PegTilePriestA8 = static_cast<int32_t>(0xd0),
__E_PegTilePriestA9 = static_cast<int32_t>(0xd1),
__E_PegTilePriestB1 = static_cast<int32_t>(0xd3),
__E_PegTilePriestB2 = static_cast<int32_t>(0xd4),
__E_PegTilePriestB3 = static_cast<int32_t>(0xd5),
__E_PegTilePriestB4 = static_cast<int32_t>(0xd6),
__E_PegTilePriestB5 = static_cast<int32_t>(0xd7),
__E_PegTilePriestB6 = static_cast<int32_t>(0xd8),
__E_PegTilePriestB7 = static_cast<int32_t>(0xd9),
__E_PegTilePriestB8 = static_cast<int32_t>(0xda),
__E_PegTilePriestB9 = static_cast<int32_t>(0xdb),
__E_PegTilePriestC1 = static_cast<int32_t>(0xdd),
__E_PegTilePriestC2 = static_cast<int32_t>(0xde),
__E_PegTilePriestC3 = static_cast<int32_t>(0xdf),
__E_PegTilePriestC4 = static_cast<int32_t>(0xe0),
__E_PegTilePriestC5 = static_cast<int32_t>(0xe1),
__E_PegTilePriestC6 = static_cast<int32_t>(0xe2),
__E_PegTilePriestC7 = static_cast<int32_t>(0xe3),
__E_PegTilePriestC8 = static_cast<int32_t>(0xe4),
__E_PegTilePriestC9 = static_cast<int32_t>(0xe5),
__E_PegTilePriestD1 = static_cast<int32_t>(0xe7),
__E_PegTilePriestD2 = static_cast<int32_t>(0xe8),
__E_PegTilePriestD3 = static_cast<int32_t>(0xe9),
__E_PegTilePriestD4 = static_cast<int32_t>(0xea),
__E_PegTilePriestD5 = static_cast<int32_t>(0xeb),
__E_PegTilePriestD6 = static_cast<int32_t>(0xec),
__E_PegTilePriestD7 = static_cast<int32_t>(0xed),
__E_PegTilePriestD8 = static_cast<int32_t>(0xee),
__E_PegTilePriestD9 = static_cast<int32_t>(0xef),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropGroup_Unwrapped () const noexcept {
return static_cast<__PropGroup_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PropGroup() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropGroup(int32_t  value__) noexcept;

/// @brief Field Backpack value: I32(24)
static ::GlobalNamespace::PropGroup const Backpack;

/// @brief Field BigKey value: I32(32)
static ::GlobalNamespace::PropGroup const BigKey;

/// @brief Field BigKeyComplete value: I32(36)
static ::GlobalNamespace::PropGroup const BigKeyComplete;

/// @brief Field BigKeyEnding value: I32(35)
static ::GlobalNamespace::PropGroup const BigKeyEnding;

/// @brief Field BigKeyEndingComplete value: I32(37)
static ::GlobalNamespace::PropGroup const BigKeyEndingComplete;

/// @brief Field BigKeyOverflow value: I32(38)
static ::GlobalNamespace::PropGroup const BigKeyOverflow;

/// @brief Field Blindfold value: I32(22)
static ::GlobalNamespace::PropGroup const Blindfold;

/// @brief Field BuoyHolder value: I32(27)
static ::GlobalNamespace::PropGroup const BuoyHolder;

/// @brief Field CannonBall value: I32(21)
static ::GlobalNamespace::PropGroup const CannonBall;

/// @brief Field CannonFireable value: I32(18)
static ::GlobalNamespace::PropGroup const CannonFireable;

/// @brief Field CorpseGrasper value: I32(60)
static ::GlobalNamespace::PropGroup const CorpseGrasper;

/// @brief Field FmRadioDock value: I32(10)
static ::GlobalNamespace::PropGroup const FmRadioDock;

/// @brief Field GoesInBackpack value: I32(25)
static ::GlobalNamespace::PropGroup const GoesInBackpack;

/// @brief Field GoesInHolster value: I32(31)
static ::GlobalNamespace::PropGroup const GoesInHolster;

/// @brief Field GourdParcel value: I32(33)
static ::GlobalNamespace::PropGroup const GourdParcel;

/// @brief Field GourdParcelCutter value: I32(34)
static ::GlobalNamespace::PropGroup const GourdParcelCutter;

/// @brief Field NoPropGroup value: I32(0)
static ::GlobalNamespace::PropGroup const NoPropGroup;

/// @brief Field OracleToken value: I32(29)
static ::GlobalNamespace::PropGroup const OracleToken;

/// @brief Field PackHanger value: I32(28)
static ::GlobalNamespace::PropGroup const PackHanger;

/// @brief Field PegTile value: I32(79)
static ::GlobalNamespace::PropGroup const PegTile;

/// @brief Field PegTileA1 value: I32(121)
static ::GlobalNamespace::PropGroup const PegTileA1;

/// @brief Field PegTileA2 value: I32(122)
static ::GlobalNamespace::PropGroup const PegTileA2;

/// @brief Field PegTileA3 value: I32(123)
static ::GlobalNamespace::PropGroup const PegTileA3;

/// @brief Field PegTileA4 value: I32(124)
static ::GlobalNamespace::PropGroup const PegTileA4;

/// @brief Field PegTileA5 value: I32(125)
static ::GlobalNamespace::PropGroup const PegTileA5;

/// @brief Field PegTileA6 value: I32(126)
static ::GlobalNamespace::PropGroup const PegTileA6;

/// @brief Field PegTileA7 value: I32(127)
static ::GlobalNamespace::PropGroup const PegTileA7;

/// @brief Field PegTileA8 value: I32(128)
static ::GlobalNamespace::PropGroup const PegTileA8;

/// @brief Field PegTileA9 value: I32(129)
static ::GlobalNamespace::PropGroup const PegTileA9;

/// @brief Field PegTileB1 value: I32(131)
static ::GlobalNamespace::PropGroup const PegTileB1;

/// @brief Field PegTileB2 value: I32(132)
static ::GlobalNamespace::PropGroup const PegTileB2;

/// @brief Field PegTileB3 value: I32(133)
static ::GlobalNamespace::PropGroup const PegTileB3;

/// @brief Field PegTileB4 value: I32(134)
static ::GlobalNamespace::PropGroup const PegTileB4;

/// @brief Field PegTileB5 value: I32(135)
static ::GlobalNamespace::PropGroup const PegTileB5;

/// @brief Field PegTileB6 value: I32(136)
static ::GlobalNamespace::PropGroup const PegTileB6;

/// @brief Field PegTileB7 value: I32(137)
static ::GlobalNamespace::PropGroup const PegTileB7;

/// @brief Field PegTileB8 value: I32(138)
static ::GlobalNamespace::PropGroup const PegTileB8;

/// @brief Field PegTileB9 value: I32(139)
static ::GlobalNamespace::PropGroup const PegTileB9;

/// @brief Field PegTileBlank value: I32(107)
static ::GlobalNamespace::PropGroup const PegTileBlank;

/// @brief Field PegTileC1 value: I32(141)
static ::GlobalNamespace::PropGroup const PegTileC1;

/// @brief Field PegTileC2 value: I32(142)
static ::GlobalNamespace::PropGroup const PegTileC2;

/// @brief Field PegTileC3 value: I32(143)
static ::GlobalNamespace::PropGroup const PegTileC3;

/// @brief Field PegTileC4 value: I32(144)
static ::GlobalNamespace::PropGroup const PegTileC4;

/// @brief Field PegTileC5 value: I32(145)
static ::GlobalNamespace::PropGroup const PegTileC5;

/// @brief Field PegTileC6 value: I32(146)
static ::GlobalNamespace::PropGroup const PegTileC6;

/// @brief Field PegTileC7 value: I32(147)
static ::GlobalNamespace::PropGroup const PegTileC7;

/// @brief Field PegTileC8 value: I32(148)
static ::GlobalNamespace::PropGroup const PegTileC8;

/// @brief Field PegTileC9 value: I32(149)
static ::GlobalNamespace::PropGroup const PegTileC9;

/// @brief Field PegTileCircle1 value: I32(161)
static ::GlobalNamespace::PropGroup const PegTileCircle1;

/// @brief Field PegTileCircle2 value: I32(162)
static ::GlobalNamespace::PropGroup const PegTileCircle2;

/// @brief Field PegTileCircle3 value: I32(163)
static ::GlobalNamespace::PropGroup const PegTileCircle3;

/// @brief Field PegTileCircle4 value: I32(164)
static ::GlobalNamespace::PropGroup const PegTileCircle4;

/// @brief Field PegTileCircle5 value: I32(165)
static ::GlobalNamespace::PropGroup const PegTileCircle5;

/// @brief Field PegTileCircle6 value: I32(166)
static ::GlobalNamespace::PropGroup const PegTileCircle6;

/// @brief Field PegTileCircle7 value: I32(167)
static ::GlobalNamespace::PropGroup const PegTileCircle7;

/// @brief Field PegTileCircle8 value: I32(168)
static ::GlobalNamespace::PropGroup const PegTileCircle8;

/// @brief Field PegTileCircle9 value: I32(169)
static ::GlobalNamespace::PropGroup const PegTileCircle9;

/// @brief Field PegTileD1 value: I32(151)
static ::GlobalNamespace::PropGroup const PegTileD1;

/// @brief Field PegTileD2 value: I32(152)
static ::GlobalNamespace::PropGroup const PegTileD2;

/// @brief Field PegTileD3 value: I32(153)
static ::GlobalNamespace::PropGroup const PegTileD3;

/// @brief Field PegTileD4 value: I32(154)
static ::GlobalNamespace::PropGroup const PegTileD4;

/// @brief Field PegTileD5 value: I32(155)
static ::GlobalNamespace::PropGroup const PegTileD5;

/// @brief Field PegTileD6 value: I32(156)
static ::GlobalNamespace::PropGroup const PegTileD6;

/// @brief Field PegTileD7 value: I32(157)
static ::GlobalNamespace::PropGroup const PegTileD7;

/// @brief Field PegTileD8 value: I32(158)
static ::GlobalNamespace::PropGroup const PegTileD8;

/// @brief Field PegTileD9 value: I32(159)
static ::GlobalNamespace::PropGroup const PegTileD9;

/// @brief Field PegTilePriestA1 value: I32(201)
static ::GlobalNamespace::PropGroup const PegTilePriestA1;

/// @brief Field PegTilePriestA2 value: I32(202)
static ::GlobalNamespace::PropGroup const PegTilePriestA2;

/// @brief Field PegTilePriestA3 value: I32(203)
static ::GlobalNamespace::PropGroup const PegTilePriestA3;

/// @brief Field PegTilePriestA4 value: I32(204)
static ::GlobalNamespace::PropGroup const PegTilePriestA4;

/// @brief Field PegTilePriestA5 value: I32(205)
static ::GlobalNamespace::PropGroup const PegTilePriestA5;

/// @brief Field PegTilePriestA6 value: I32(206)
static ::GlobalNamespace::PropGroup const PegTilePriestA6;

/// @brief Field PegTilePriestA7 value: I32(207)
static ::GlobalNamespace::PropGroup const PegTilePriestA7;

/// @brief Field PegTilePriestA8 value: I32(208)
static ::GlobalNamespace::PropGroup const PegTilePriestA8;

/// @brief Field PegTilePriestA9 value: I32(209)
static ::GlobalNamespace::PropGroup const PegTilePriestA9;

/// @brief Field PegTilePriestB1 value: I32(211)
static ::GlobalNamespace::PropGroup const PegTilePriestB1;

/// @brief Field PegTilePriestB2 value: I32(212)
static ::GlobalNamespace::PropGroup const PegTilePriestB2;

/// @brief Field PegTilePriestB3 value: I32(213)
static ::GlobalNamespace::PropGroup const PegTilePriestB3;

/// @brief Field PegTilePriestB4 value: I32(214)
static ::GlobalNamespace::PropGroup const PegTilePriestB4;

/// @brief Field PegTilePriestB5 value: I32(215)
static ::GlobalNamespace::PropGroup const PegTilePriestB5;

/// @brief Field PegTilePriestB6 value: I32(216)
static ::GlobalNamespace::PropGroup const PegTilePriestB6;

/// @brief Field PegTilePriestB7 value: I32(217)
static ::GlobalNamespace::PropGroup const PegTilePriestB7;

/// @brief Field PegTilePriestB8 value: I32(218)
static ::GlobalNamespace::PropGroup const PegTilePriestB8;

/// @brief Field PegTilePriestB9 value: I32(219)
static ::GlobalNamespace::PropGroup const PegTilePriestB9;

/// @brief Field PegTilePriestC1 value: I32(221)
static ::GlobalNamespace::PropGroup const PegTilePriestC1;

/// @brief Field PegTilePriestC2 value: I32(222)
static ::GlobalNamespace::PropGroup const PegTilePriestC2;

/// @brief Field PegTilePriestC3 value: I32(223)
static ::GlobalNamespace::PropGroup const PegTilePriestC3;

/// @brief Field PegTilePriestC4 value: I32(224)
static ::GlobalNamespace::PropGroup const PegTilePriestC4;

/// @brief Field PegTilePriestC5 value: I32(225)
static ::GlobalNamespace::PropGroup const PegTilePriestC5;

/// @brief Field PegTilePriestC6 value: I32(226)
static ::GlobalNamespace::PropGroup const PegTilePriestC6;

/// @brief Field PegTilePriestC7 value: I32(227)
static ::GlobalNamespace::PropGroup const PegTilePriestC7;

/// @brief Field PegTilePriestC8 value: I32(228)
static ::GlobalNamespace::PropGroup const PegTilePriestC8;

/// @brief Field PegTilePriestC9 value: I32(229)
static ::GlobalNamespace::PropGroup const PegTilePriestC9;

/// @brief Field PegTilePriestD1 value: I32(231)
static ::GlobalNamespace::PropGroup const PegTilePriestD1;

/// @brief Field PegTilePriestD2 value: I32(232)
static ::GlobalNamespace::PropGroup const PegTilePriestD2;

/// @brief Field PegTilePriestD3 value: I32(233)
static ::GlobalNamespace::PropGroup const PegTilePriestD3;

/// @brief Field PegTilePriestD4 value: I32(234)
static ::GlobalNamespace::PropGroup const PegTilePriestD4;

/// @brief Field PegTilePriestD5 value: I32(235)
static ::GlobalNamespace::PropGroup const PegTilePriestD5;

/// @brief Field PegTilePriestD6 value: I32(236)
static ::GlobalNamespace::PropGroup const PegTilePriestD6;

/// @brief Field PegTilePriestD7 value: I32(237)
static ::GlobalNamespace::PropGroup const PegTilePriestD7;

/// @brief Field PegTilePriestD8 value: I32(238)
static ::GlobalNamespace::PropGroup const PegTilePriestD8;

/// @brief Field PegTilePriestD9 value: I32(239)
static ::GlobalNamespace::PropGroup const PegTilePriestD9;

/// @brief Field PegTileRound value: I32(111)
static ::GlobalNamespace::PropGroup const PegTileRound;

/// @brief Field PoseLimitAimable value: I32(43)
static ::GlobalNamespace::PropGroup const PoseLimitAimable;

/// @brief Field PoseLimitBig value: I32(42)
static ::GlobalNamespace::PropGroup const PoseLimitBig;

/// @brief Field PoseLimitGoggles value: I32(44)
static ::GlobalNamespace::PropGroup const PoseLimitGoggles;

/// @brief Field PoseLimitMedium value: I32(41)
static ::GlobalNamespace::PropGroup const PoseLimitMedium;

/// @brief Field PoseLimitSmall value: I32(40)
static ::GlobalNamespace::PropGroup const PoseLimitSmall;

/// @brief Field RewardGourd value: I32(19)
static ::GlobalNamespace::PropGroup const RewardGourd;

/// @brief Field SalonBrush value: I32(15)
static ::GlobalNamespace::PropGroup const SalonBrush;

/// @brief Field SalonBrushWithColor value: I32(26)
static ::GlobalNamespace::PropGroup const SalonBrushWithColor;

/// @brief Field StickyCurse value: I32(23)
static ::GlobalNamespace::PropGroup const StickyCurse;

/// @brief Field TimerBall value: I32(17)
static ::GlobalNamespace::PropGroup const TimerBall;

/// @brief Field TooHeavy value: I32(20)
static ::GlobalNamespace::PropGroup const TooHeavy;

/// @brief Field WallHook value: I32(16)
static ::GlobalNamespace::PropGroup const WallHook;

/// @brief Field WearHolster value: I32(30)
static ::GlobalNamespace::PropGroup const WearHolster;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropGroup, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropGroup) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
