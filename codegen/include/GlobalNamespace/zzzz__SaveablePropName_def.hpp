#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveablePropName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveablePropName)
// Forward declare root types
namespace GlobalNamespace {
struct SaveablePropName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SaveablePropName);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveablePropName, "", "SaveablePropName");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SaveablePropName
struct CORDL_TYPE SaveablePropName {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SaveablePropName_Unwrapped
enum struct __SaveablePropName_Unwrapped : int32_t {
__E_notSavable = static_cast<int32_t>(0x0),
__E_gourdCabinFever = static_cast<int32_t>(0x64),
__E_gourdHighButton = static_cast<int32_t>(0x65),
__E_gourdFielding = static_cast<int32_t>(0x67),
__E_gourdCannonBall = static_cast<int32_t>(0x68),
__E_gourdInvisibleInk = static_cast<int32_t>(0x69),
__E_gourdTrapRoom = static_cast<int32_t>(0x6a),
__E_gourdMediumSimPress = static_cast<int32_t>(0x6b),
__E_gourdEasySimPress = static_cast<int32_t>(0x6c),
__E_gourdRingRoom = static_cast<int32_t>(0x6d),
__E_gourdBunker = static_cast<int32_t>(0x6e),
__E_gourdHighPegBoard = static_cast<int32_t>(0x6f),
__E_gourdFirstPegBoard = static_cast<int32_t>(0x70),
__E_gourdObby = static_cast<int32_t>(0x71),
__E_gourdCarousel = static_cast<int32_t>(0x72),
__E_gourdCoordinates = static_cast<int32_t>(0x73),
__E_gourdTelescopeToBox = static_cast<int32_t>(0x74),
__E_gourdObservationRoom = static_cast<int32_t>(0x75),
__E_gourdWindowLabyrinth = static_cast<int32_t>(0x76),
__E_gourdMagiciansTrick = static_cast<int32_t>(0x77),
__E_gourdButtonBoothChallenge = static_cast<int32_t>(0x78),
__E_gourdBasketball = static_cast<int32_t>(0x79),
__E_gourdConcert = static_cast<int32_t>(0x7a),
__E_gourdIndoorSemaphore = static_cast<int32_t>(0x7b),
__E_gourdOpticalTelegraph = static_cast<int32_t>(0x7c),
__E_gourdPoetAndPreist = static_cast<int32_t>(0x7d),
__E_gourdTileSoup = static_cast<int32_t>(0x7e),
__E_gourdMemoryBombs = static_cast<int32_t>(0x7f),
__E_gourdPanopticon = static_cast<int32_t>(0x80),
__E_gourdMaypole = static_cast<int32_t>(0x81),
__E_gourdBlindfoldCircus = static_cast<int32_t>(0x82),
__E_gourdMessengerRun = static_cast<int32_t>(0x83),
__E_gourdHotPotato = static_cast<int32_t>(0x84),
__E_gourdTileThief = static_cast<int32_t>(0x85),
__E_gourdCharadesRooms = static_cast<int32_t>(0x86),
__E_gourdMicrophoneArray = static_cast<int32_t>(0x87),
__E_gourdPointersParadise = static_cast<int32_t>(0x89),
__E_gourdCoordinatesHolding = static_cast<int32_t>(0x8a),
__E_gourdEggHunt = static_cast<int32_t>(0x8b),
__E_gourdTellerWindow = static_cast<int32_t>(0x8c),
__E_gourdSignalFlags = static_cast<int32_t>(0x8d),
__E_gourdCabinFeverLong = static_cast<int32_t>(0x8e),
__E_gourdBreadcrumbLoop = static_cast<int32_t>(0x8f),
__E_gourdScoutBombs = static_cast<int32_t>(0x90),
__E_gourdScoutTiles = static_cast<int32_t>(0x91),
__E_gourdScoutCounting = static_cast<int32_t>(0x92),
__E_gourdCenturonSong = static_cast<int32_t>(0x93),
__E_gourdMusicalHoliday = static_cast<int32_t>(0x94),
__E_gourdKickUpPits = static_cast<int32_t>(0x95),
__E_gourdSingerAndSelecter = static_cast<int32_t>(0x96),
__E_gourdDancerAndSelecter = static_cast<int32_t>(0x97),
__E_gourdSpeedObby = static_cast<int32_t>(0x98),
__E_gourdBlindfoldCatwalk = static_cast<int32_t>(0x99),
__E_gourdBlindfoldFishtrap = static_cast<int32_t>(0x9a),
__E_gourdPerspectiveCounting = static_cast<int32_t>(0x9b),
__E_gourdCenturionSeance = static_cast<int32_t>(0x9c),
__E_gourdFlareRun = static_cast<int32_t>(0x9d),
__E_gourdCannonballCommute = static_cast<int32_t>(0x9e),
__E_gourdPoetAndPontiff = static_cast<int32_t>(0x9f),
__E_gourdTesting00 = static_cast<int32_t>(0xc8),
__E_gourdTesting01 = static_cast<int32_t>(0xc9),
__E_gourdTesting02 = static_cast<int32_t>(0xca),
__E_gourdTesting03 = static_cast<int32_t>(0xcb),
__E_gourdTesting04 = static_cast<int32_t>(0xcc),
__E_gourdTesting05 = static_cast<int32_t>(0xcd),
__E_gourdTesting06 = static_cast<int32_t>(0xce),
__E_gourdTesting07 = static_cast<int32_t>(0xcf),
__E_gourdTesting08 = static_cast<int32_t>(0xd0),
__E_gourdTesting09 = static_cast<int32_t>(0xd1),
__E_gourdTesting10 = static_cast<int32_t>(0xd2),
__E_gourdTesting11 = static_cast<int32_t>(0xd3),
__E_gourdTesting12 = static_cast<int32_t>(0xd4),
__E_gourdTesting13 = static_cast<int32_t>(0xd5),
__E_gourdTesting14 = static_cast<int32_t>(0xd6),
__E_gourdTesting15 = static_cast<int32_t>(0xd7),
__E_gourdTesting16 = static_cast<int32_t>(0xd8),
__E_gourdTesting17 = static_cast<int32_t>(0xd9),
__E_gourdTesting18 = static_cast<int32_t>(0xda),
__E_gourdTesting19 = static_cast<int32_t>(0xdb),
__E_gourdTesting20 = static_cast<int32_t>(0xdc),
__E_gourdTesting21 = static_cast<int32_t>(0xdd),
__E_gourdTesting22 = static_cast<int32_t>(0xde),
__E_gourdTesting23 = static_cast<int32_t>(0xdf),
__E_gourdTesting24 = static_cast<int32_t>(0xe0),
__E_gourdTesting25 = static_cast<int32_t>(0xe1),
__E_gourdTesting26 = static_cast<int32_t>(0xe2),
__E_gourdTesting27 = static_cast<int32_t>(0xe3),
__E_gourdTesting28 = static_cast<int32_t>(0xe4),
__E_gourdTesting29 = static_cast<int32_t>(0xe5),
__E_gourdTesting30 = static_cast<int32_t>(0xe6),
__E_gourdTesting31 = static_cast<int32_t>(0xe7),
__E_gourdTesting32 = static_cast<int32_t>(0xe8),
__E_gourdTesting33 = static_cast<int32_t>(0xe9),
__E_gourdTesting34 = static_cast<int32_t>(0xea),
__E_gourdTesting35 = static_cast<int32_t>(0xeb),
__E_gourdTesting36 = static_cast<int32_t>(0xec),
__E_gourdTesting37 = static_cast<int32_t>(0xed),
__E_gourdTesting38 = static_cast<int32_t>(0xee),
__E_gourdTesting39 = static_cast<int32_t>(0xef),
__E_gourdSecretZoneVice = static_cast<int32_t>(0x122),
__E_bigKeyIntro = static_cast<int32_t>(0x12c),
__E_bigKeyRedZone = static_cast<int32_t>(0x12d),
__E_bigKeyGreenZone = static_cast<int32_t>(0x12e),
__E_bigKeyBlueZone = static_cast<int32_t>(0x12f),
__E_bigKeyYellowZone = static_cast<int32_t>(0x130),
__E_bigKeyBoss = static_cast<int32_t>(0x131),
__E_bigKeyOverflow = static_cast<int32_t>(0x132),
__E_bigKeyTesting0 = static_cast<int32_t>(0x136),
__E_bigKeyTesting1 = static_cast<int32_t>(0x137),
__E_bigKeyTesting2 = static_cast<int32_t>(0x138),
__E_bigKeyTesting3 = static_cast<int32_t>(0x139),
__E_bigKeyTesting4 = static_cast<int32_t>(0x13a),
__E_bigKeyTestingOverflow = static_cast<int32_t>(0x13c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SaveablePropName_Unwrapped () const noexcept {
return static_cast<__SaveablePropName_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SaveablePropName() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SaveablePropName(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field bigKeyBlueZone value: I32(303)
static ::GlobalNamespace::SaveablePropName const bigKeyBlueZone;

/// @brief Field bigKeyBoss value: I32(305)
static ::GlobalNamespace::SaveablePropName const bigKeyBoss;

/// @brief Field bigKeyGreenZone value: I32(302)
static ::GlobalNamespace::SaveablePropName const bigKeyGreenZone;

/// @brief Field bigKeyIntro value: I32(300)
static ::GlobalNamespace::SaveablePropName const bigKeyIntro;

/// @brief Field bigKeyOverflow value: I32(306)
static ::GlobalNamespace::SaveablePropName const bigKeyOverflow;

/// @brief Field bigKeyRedZone value: I32(301)
static ::GlobalNamespace::SaveablePropName const bigKeyRedZone;

/// @brief Field bigKeyTesting0 value: I32(310)
static ::GlobalNamespace::SaveablePropName const bigKeyTesting0;

/// @brief Field bigKeyTesting1 value: I32(311)
static ::GlobalNamespace::SaveablePropName const bigKeyTesting1;

/// @brief Field bigKeyTesting2 value: I32(312)
static ::GlobalNamespace::SaveablePropName const bigKeyTesting2;

/// @brief Field bigKeyTesting3 value: I32(313)
static ::GlobalNamespace::SaveablePropName const bigKeyTesting3;

/// @brief Field bigKeyTesting4 value: I32(314)
static ::GlobalNamespace::SaveablePropName const bigKeyTesting4;

/// @brief Field bigKeyTestingOverflow value: I32(316)
static ::GlobalNamespace::SaveablePropName const bigKeyTestingOverflow;

/// @brief Field bigKeyYellowZone value: I32(304)
static ::GlobalNamespace::SaveablePropName const bigKeyYellowZone;

/// @brief Field gourdBasketball value: I32(121)
static ::GlobalNamespace::SaveablePropName const gourdBasketball;

/// @brief Field gourdBlindfoldCatwalk value: I32(153)
static ::GlobalNamespace::SaveablePropName const gourdBlindfoldCatwalk;

/// @brief Field gourdBlindfoldCircus value: I32(130)
static ::GlobalNamespace::SaveablePropName const gourdBlindfoldCircus;

/// @brief Field gourdBlindfoldFishtrap value: I32(154)
static ::GlobalNamespace::SaveablePropName const gourdBlindfoldFishtrap;

/// @brief Field gourdBreadcrumbLoop value: I32(143)
static ::GlobalNamespace::SaveablePropName const gourdBreadcrumbLoop;

/// @brief Field gourdBunker value: I32(110)
static ::GlobalNamespace::SaveablePropName const gourdBunker;

/// @brief Field gourdButtonBoothChallenge value: I32(120)
static ::GlobalNamespace::SaveablePropName const gourdButtonBoothChallenge;

/// @brief Field gourdCabinFever value: I32(100)
static ::GlobalNamespace::SaveablePropName const gourdCabinFever;

/// @brief Field gourdCabinFeverLong value: I32(142)
static ::GlobalNamespace::SaveablePropName const gourdCabinFeverLong;

/// @brief Field gourdCannonBall value: I32(104)
static ::GlobalNamespace::SaveablePropName const gourdCannonBall;

/// @brief Field gourdCannonballCommute value: I32(158)
static ::GlobalNamespace::SaveablePropName const gourdCannonballCommute;

/// @brief Field gourdCarousel value: I32(114)
static ::GlobalNamespace::SaveablePropName const gourdCarousel;

/// @brief Field gourdCenturionSeance value: I32(156)
static ::GlobalNamespace::SaveablePropName const gourdCenturionSeance;

/// @brief Field gourdCenturonSong value: I32(147)
static ::GlobalNamespace::SaveablePropName const gourdCenturonSong;

/// @brief Field gourdCharadesRooms value: I32(134)
static ::GlobalNamespace::SaveablePropName const gourdCharadesRooms;

/// @brief Field gourdConcert value: I32(122)
static ::GlobalNamespace::SaveablePropName const gourdConcert;

/// @brief Field gourdCoordinates value: I32(115)
static ::GlobalNamespace::SaveablePropName const gourdCoordinates;

/// @brief Field gourdCoordinatesHolding value: I32(138)
static ::GlobalNamespace::SaveablePropName const gourdCoordinatesHolding;

/// @brief Field gourdDancerAndSelecter value: I32(151)
static ::GlobalNamespace::SaveablePropName const gourdDancerAndSelecter;

/// @brief Field gourdEasySimPress value: I32(108)
static ::GlobalNamespace::SaveablePropName const gourdEasySimPress;

/// @brief Field gourdEggHunt value: I32(139)
static ::GlobalNamespace::SaveablePropName const gourdEggHunt;

/// @brief Field gourdFielding value: I32(103)
static ::GlobalNamespace::SaveablePropName const gourdFielding;

/// @brief Field gourdFirstPegBoard value: I32(112)
static ::GlobalNamespace::SaveablePropName const gourdFirstPegBoard;

/// @brief Field gourdFlareRun value: I32(157)
static ::GlobalNamespace::SaveablePropName const gourdFlareRun;

/// @brief Field gourdHighButton value: I32(101)
static ::GlobalNamespace::SaveablePropName const gourdHighButton;

/// @brief Field gourdHighPegBoard value: I32(111)
static ::GlobalNamespace::SaveablePropName const gourdHighPegBoard;

/// @brief Field gourdHotPotato value: I32(132)
static ::GlobalNamespace::SaveablePropName const gourdHotPotato;

/// @brief Field gourdIndoorSemaphore value: I32(123)
static ::GlobalNamespace::SaveablePropName const gourdIndoorSemaphore;

/// @brief Field gourdInvisibleInk value: I32(105)
static ::GlobalNamespace::SaveablePropName const gourdInvisibleInk;

/// @brief Field gourdKickUpPits value: I32(149)
static ::GlobalNamespace::SaveablePropName const gourdKickUpPits;

/// @brief Field gourdMagiciansTrick value: I32(119)
static ::GlobalNamespace::SaveablePropName const gourdMagiciansTrick;

/// @brief Field gourdMaypole value: I32(129)
static ::GlobalNamespace::SaveablePropName const gourdMaypole;

/// @brief Field gourdMediumSimPress value: I32(107)
static ::GlobalNamespace::SaveablePropName const gourdMediumSimPress;

/// @brief Field gourdMemoryBombs value: I32(127)
static ::GlobalNamespace::SaveablePropName const gourdMemoryBombs;

/// @brief Field gourdMessengerRun value: I32(131)
static ::GlobalNamespace::SaveablePropName const gourdMessengerRun;

/// @brief Field gourdMicrophoneArray value: I32(135)
static ::GlobalNamespace::SaveablePropName const gourdMicrophoneArray;

/// @brief Field gourdMusicalHoliday value: I32(148)
static ::GlobalNamespace::SaveablePropName const gourdMusicalHoliday;

/// @brief Field gourdObby value: I32(113)
static ::GlobalNamespace::SaveablePropName const gourdObby;

/// @brief Field gourdObservationRoom value: I32(117)
static ::GlobalNamespace::SaveablePropName const gourdObservationRoom;

/// @brief Field gourdOpticalTelegraph value: I32(124)
static ::GlobalNamespace::SaveablePropName const gourdOpticalTelegraph;

/// @brief Field gourdPanopticon value: I32(128)
static ::GlobalNamespace::SaveablePropName const gourdPanopticon;

/// @brief Field gourdPerspectiveCounting value: I32(155)
static ::GlobalNamespace::SaveablePropName const gourdPerspectiveCounting;

/// @brief Field gourdPoetAndPontiff value: I32(159)
static ::GlobalNamespace::SaveablePropName const gourdPoetAndPontiff;

/// @brief Field gourdPoetAndPreist value: I32(125)
static ::GlobalNamespace::SaveablePropName const gourdPoetAndPreist;

/// @brief Field gourdPointersParadise value: I32(137)
static ::GlobalNamespace::SaveablePropName const gourdPointersParadise;

/// @brief Field gourdRingRoom value: I32(109)
static ::GlobalNamespace::SaveablePropName const gourdRingRoom;

/// @brief Field gourdScoutBombs value: I32(144)
static ::GlobalNamespace::SaveablePropName const gourdScoutBombs;

/// @brief Field gourdScoutCounting value: I32(146)
static ::GlobalNamespace::SaveablePropName const gourdScoutCounting;

/// @brief Field gourdScoutTiles value: I32(145)
static ::GlobalNamespace::SaveablePropName const gourdScoutTiles;

/// @brief Field gourdSecretZoneVice value: I32(290)
static ::GlobalNamespace::SaveablePropName const gourdSecretZoneVice;

/// @brief Field gourdSignalFlags value: I32(141)
static ::GlobalNamespace::SaveablePropName const gourdSignalFlags;

/// @brief Field gourdSingerAndSelecter value: I32(150)
static ::GlobalNamespace::SaveablePropName const gourdSingerAndSelecter;

/// @brief Field gourdSpeedObby value: I32(152)
static ::GlobalNamespace::SaveablePropName const gourdSpeedObby;

/// @brief Field gourdTelescopeToBox value: I32(116)
static ::GlobalNamespace::SaveablePropName const gourdTelescopeToBox;

/// @brief Field gourdTellerWindow value: I32(140)
static ::GlobalNamespace::SaveablePropName const gourdTellerWindow;

/// @brief Field gourdTesting00 value: I32(200)
static ::GlobalNamespace::SaveablePropName const gourdTesting00;

/// @brief Field gourdTesting01 value: I32(201)
static ::GlobalNamespace::SaveablePropName const gourdTesting01;

/// @brief Field gourdTesting02 value: I32(202)
static ::GlobalNamespace::SaveablePropName const gourdTesting02;

/// @brief Field gourdTesting03 value: I32(203)
static ::GlobalNamespace::SaveablePropName const gourdTesting03;

/// @brief Field gourdTesting04 value: I32(204)
static ::GlobalNamespace::SaveablePropName const gourdTesting04;

/// @brief Field gourdTesting05 value: I32(205)
static ::GlobalNamespace::SaveablePropName const gourdTesting05;

/// @brief Field gourdTesting06 value: I32(206)
static ::GlobalNamespace::SaveablePropName const gourdTesting06;

/// @brief Field gourdTesting07 value: I32(207)
static ::GlobalNamespace::SaveablePropName const gourdTesting07;

/// @brief Field gourdTesting08 value: I32(208)
static ::GlobalNamespace::SaveablePropName const gourdTesting08;

/// @brief Field gourdTesting09 value: I32(209)
static ::GlobalNamespace::SaveablePropName const gourdTesting09;

/// @brief Field gourdTesting10 value: I32(210)
static ::GlobalNamespace::SaveablePropName const gourdTesting10;

/// @brief Field gourdTesting11 value: I32(211)
static ::GlobalNamespace::SaveablePropName const gourdTesting11;

/// @brief Field gourdTesting12 value: I32(212)
static ::GlobalNamespace::SaveablePropName const gourdTesting12;

/// @brief Field gourdTesting13 value: I32(213)
static ::GlobalNamespace::SaveablePropName const gourdTesting13;

/// @brief Field gourdTesting14 value: I32(214)
static ::GlobalNamespace::SaveablePropName const gourdTesting14;

/// @brief Field gourdTesting15 value: I32(215)
static ::GlobalNamespace::SaveablePropName const gourdTesting15;

/// @brief Field gourdTesting16 value: I32(216)
static ::GlobalNamespace::SaveablePropName const gourdTesting16;

/// @brief Field gourdTesting17 value: I32(217)
static ::GlobalNamespace::SaveablePropName const gourdTesting17;

/// @brief Field gourdTesting18 value: I32(218)
static ::GlobalNamespace::SaveablePropName const gourdTesting18;

/// @brief Field gourdTesting19 value: I32(219)
static ::GlobalNamespace::SaveablePropName const gourdTesting19;

/// @brief Field gourdTesting20 value: I32(220)
static ::GlobalNamespace::SaveablePropName const gourdTesting20;

/// @brief Field gourdTesting21 value: I32(221)
static ::GlobalNamespace::SaveablePropName const gourdTesting21;

/// @brief Field gourdTesting22 value: I32(222)
static ::GlobalNamespace::SaveablePropName const gourdTesting22;

/// @brief Field gourdTesting23 value: I32(223)
static ::GlobalNamespace::SaveablePropName const gourdTesting23;

/// @brief Field gourdTesting24 value: I32(224)
static ::GlobalNamespace::SaveablePropName const gourdTesting24;

/// @brief Field gourdTesting25 value: I32(225)
static ::GlobalNamespace::SaveablePropName const gourdTesting25;

/// @brief Field gourdTesting26 value: I32(226)
static ::GlobalNamespace::SaveablePropName const gourdTesting26;

/// @brief Field gourdTesting27 value: I32(227)
static ::GlobalNamespace::SaveablePropName const gourdTesting27;

/// @brief Field gourdTesting28 value: I32(228)
static ::GlobalNamespace::SaveablePropName const gourdTesting28;

/// @brief Field gourdTesting29 value: I32(229)
static ::GlobalNamespace::SaveablePropName const gourdTesting29;

/// @brief Field gourdTesting30 value: I32(230)
static ::GlobalNamespace::SaveablePropName const gourdTesting30;

/// @brief Field gourdTesting31 value: I32(231)
static ::GlobalNamespace::SaveablePropName const gourdTesting31;

/// @brief Field gourdTesting32 value: I32(232)
static ::GlobalNamespace::SaveablePropName const gourdTesting32;

/// @brief Field gourdTesting33 value: I32(233)
static ::GlobalNamespace::SaveablePropName const gourdTesting33;

/// @brief Field gourdTesting34 value: I32(234)
static ::GlobalNamespace::SaveablePropName const gourdTesting34;

/// @brief Field gourdTesting35 value: I32(235)
static ::GlobalNamespace::SaveablePropName const gourdTesting35;

/// @brief Field gourdTesting36 value: I32(236)
static ::GlobalNamespace::SaveablePropName const gourdTesting36;

/// @brief Field gourdTesting37 value: I32(237)
static ::GlobalNamespace::SaveablePropName const gourdTesting37;

/// @brief Field gourdTesting38 value: I32(238)
static ::GlobalNamespace::SaveablePropName const gourdTesting38;

/// @brief Field gourdTesting39 value: I32(239)
static ::GlobalNamespace::SaveablePropName const gourdTesting39;

/// @brief Field gourdTileSoup value: I32(126)
static ::GlobalNamespace::SaveablePropName const gourdTileSoup;

/// @brief Field gourdTileThief value: I32(133)
static ::GlobalNamespace::SaveablePropName const gourdTileThief;

/// @brief Field gourdTrapRoom value: I32(106)
static ::GlobalNamespace::SaveablePropName const gourdTrapRoom;

/// @brief Field gourdWindowLabyrinth value: I32(118)
static ::GlobalNamespace::SaveablePropName const gourdWindowLabyrinth;

/// @brief Field notSavable value: I32(0)
static ::GlobalNamespace::SaveablePropName const notSavable;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveablePropName, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveablePropName) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
