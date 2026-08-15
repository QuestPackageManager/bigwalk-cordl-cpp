#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveableHomeName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveableHomeName)
// Forward declare root types
namespace GlobalNamespace {
struct SaveableHomeName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SaveableHomeName);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveableHomeName, "", "SaveableHomeName");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SaveableHomeName
struct CORDL_TYPE SaveableHomeName {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SaveableHomeName_Unwrapped
enum struct __SaveableHomeName_Unwrapped : int32_t {
__E_notSavable = static_cast<int32_t>(0x0),
__E_monoument0Slot0 = static_cast<int32_t>(0x64),
__E_monoument0Slot1 = static_cast<int32_t>(0x65),
__E_monoument0Slot2 = static_cast<int32_t>(0x66),
__E_monoument0Slot3 = static_cast<int32_t>(0x67),
__E_monoument0Slot4 = static_cast<int32_t>(0x68),
__E_monoument0Slot5 = static_cast<int32_t>(0x69),
__E_monoument0Slot6 = static_cast<int32_t>(0x6a),
__E_monoument0Slot7 = static_cast<int32_t>(0x6b),
__E_monoument0Slot8 = static_cast<int32_t>(0x6c),
__E_monoument1Slot0 = static_cast<int32_t>(0x6e),
__E_monoument1Slot1 = static_cast<int32_t>(0x6f),
__E_monoument1Slot2 = static_cast<int32_t>(0x70),
__E_monoument1Slot3 = static_cast<int32_t>(0x71),
__E_monoument1Slot4 = static_cast<int32_t>(0x72),
__E_monoument1Slot5 = static_cast<int32_t>(0x73),
__E_monoument1Slot6 = static_cast<int32_t>(0x74),
__E_monoument1Slot7 = static_cast<int32_t>(0x75),
__E_monoument1Slot8 = static_cast<int32_t>(0x76),
__E_monoument2Slot0 = static_cast<int32_t>(0x78),
__E_monoument2Slot1 = static_cast<int32_t>(0x79),
__E_monoument2Slot2 = static_cast<int32_t>(0x7a),
__E_monoument2Slot3 = static_cast<int32_t>(0x7b),
__E_monoument2Slot4 = static_cast<int32_t>(0x7c),
__E_monoument2Slot5 = static_cast<int32_t>(0x7d),
__E_monoument2Slot6 = static_cast<int32_t>(0x7e),
__E_monoument2Slot7 = static_cast<int32_t>(0x7f),
__E_monoument2Slot8 = static_cast<int32_t>(0x80),
__E_monoument3Slot0 = static_cast<int32_t>(0x82),
__E_monoument3Slot1 = static_cast<int32_t>(0x83),
__E_monoument3Slot2 = static_cast<int32_t>(0x84),
__E_monoument3Slot3 = static_cast<int32_t>(0x85),
__E_monoument3Slot4 = static_cast<int32_t>(0x86),
__E_monoument3Slot5 = static_cast<int32_t>(0x87),
__E_monoument3Slot6 = static_cast<int32_t>(0x88),
__E_monoument3Slot7 = static_cast<int32_t>(0x89),
__E_monoument3Slot8 = static_cast<int32_t>(0x8a),
__E_monoumentFinalSlot0 = static_cast<int32_t>(0x8c),
__E_monoumentFinalSlot1 = static_cast<int32_t>(0x8d),
__E_monoumentFinalSlot2 = static_cast<int32_t>(0x8e),
__E_monoumentFinalSlot3 = static_cast<int32_t>(0x8f),
__E_monoumentFinalSlot4 = static_cast<int32_t>(0x90),
__E_monoumentFinalSlot5 = static_cast<int32_t>(0x91),
__E_monoumentFinalSlot6 = static_cast<int32_t>(0x92),
__E_monoumentFinalSlot7 = static_cast<int32_t>(0x93),
__E_monoumentFinalSlot8 = static_cast<int32_t>(0x94),
__E_monoumentIntroSlot0 = static_cast<int32_t>(0x96),
__E_monoumentIntroSlot1 = static_cast<int32_t>(0x97),
__E_monoumentIntroSlot2 = static_cast<int32_t>(0x98),
__E_monoumentIntroSlot3 = static_cast<int32_t>(0x99),
__E_monoumentIntroSlot4 = static_cast<int32_t>(0x9a),
__E_monoumentIntroSlot5 = static_cast<int32_t>(0x9b),
__E_monoumentIntroSlot6 = static_cast<int32_t>(0x9c),
__E_monoumentIntroSlot7 = static_cast<int32_t>(0x9d),
__E_monoumentOverflowSlot0 = static_cast<int32_t>(0xa0),
__E_monoumentOverflowSlot1 = static_cast<int32_t>(0xa1),
__E_monoumentOverflowSlot2 = static_cast<int32_t>(0xa2),
__E_monoumentOverflowSlot3 = static_cast<int32_t>(0xa3),
__E_monoumentOverflowSlot4 = static_cast<int32_t>(0xa4),
__E_monoumentOverflowSlot5 = static_cast<int32_t>(0xa5),
__E_monoumentOverflowSlot6 = static_cast<int32_t>(0xa6),
__E_monoumentOverflowSlot7 = static_cast<int32_t>(0xa7),
__E_monoumentOverflowSlot8 = static_cast<int32_t>(0xa8),
__E_monoumentOverflowSlot9 = static_cast<int32_t>(0xa9),
__E_monoumentOverflowSlot10 = static_cast<int32_t>(0xaa),
__E_monoumentOverflowSlot11 = static_cast<int32_t>(0xab),
__E_monoumentOverflowSlot12 = static_cast<int32_t>(0xac),
__E_monoumentOverflowSlot13 = static_cast<int32_t>(0xad),
__E_monoumentOverflowSlot14 = static_cast<int32_t>(0xae),
__E_monoumentOverflowSlot15 = static_cast<int32_t>(0xaf),
__E_monoumentOverflowSlot16 = static_cast<int32_t>(0xb0),
__E_monoumentOverflowSlot17 = static_cast<int32_t>(0xb1),
__E_bigKeyPlinthIntro = static_cast<int32_t>(0xd2),
__E_bigKeyPlinthMapRoom = static_cast<int32_t>(0xdc),
__E_bigKeyPlinthTrain = static_cast<int32_t>(0xdd),
__E_bigKeyPlinthSkiLift = static_cast<int32_t>(0xde),
__E_bigKeyPlinthTunnels = static_cast<int32_t>(0xdf),
__E_bigKeyPlinthEnding = static_cast<int32_t>(0xe0),
__E_bigKeyPlinthGoodbye2 = static_cast<int32_t>(0xe1),
__E_tileThief0 = static_cast<int32_t>(0x19a),
__E_tileThief1 = static_cast<int32_t>(0x19b),
__E_tileThief2 = static_cast<int32_t>(0x19c),
__E_tileThief3 = static_cast<int32_t>(0x19d),
__E_valetCabinFever = static_cast<int32_t>(0x3ea),
__E_valetHighButton = static_cast<int32_t>(0x3f4),
__E_valetFielding = static_cast<int32_t>(0x408),
__E_valetCannonBall = static_cast<int32_t>(0x412),
__E_valetInvisibleInk = static_cast<int32_t>(0x41c),
__E_valetTrapRoom = static_cast<int32_t>(0x426),
__E_valetMediumSimPress = static_cast<int32_t>(0x430),
__E_valetEasySimPress = static_cast<int32_t>(0x43a),
__E_valetRingRoom = static_cast<int32_t>(0x444),
__E_valetBunker = static_cast<int32_t>(0x44e),
__E_valetHighPegBoard = static_cast<int32_t>(0x458),
__E_valetFirstPegBoard = static_cast<int32_t>(0x462),
__E_valetObby = static_cast<int32_t>(0x46c),
__E_valetCarousel = static_cast<int32_t>(0x476),
__E_valetCoordinates = static_cast<int32_t>(0x480),
__E_valetTelescopeToBox = static_cast<int32_t>(0x48a),
__E_valetObservationRoom = static_cast<int32_t>(0x494),
__E_valetWindowLabyrinth = static_cast<int32_t>(0x49e),
__E_valetMagiciansTrick = static_cast<int32_t>(0x4a8),
__E_valetButtonBoothChallenge = static_cast<int32_t>(0x4b2),
__E_valetBasketball = static_cast<int32_t>(0x4bc),
__E_valetConcert = static_cast<int32_t>(0x4c6),
__E_valetIndoorSemaphore = static_cast<int32_t>(0x4d0),
__E_valetOpticalTelegraph = static_cast<int32_t>(0x4da),
__E_valetPoetAndPreist = static_cast<int32_t>(0x4e4),
__E_valetTileSoup = static_cast<int32_t>(0x4ee),
__E_valetMemoryBombs = static_cast<int32_t>(0x4f8),
__E_valetPanopticon = static_cast<int32_t>(0x502),
__E_valetMaypole = static_cast<int32_t>(0x50c),
__E_valetBlindfoldCircus = static_cast<int32_t>(0x516),
__E_valetMessengerRun = static_cast<int32_t>(0x520),
__E_valetHotPotato = static_cast<int32_t>(0x52a),
__E_valetTileThief = static_cast<int32_t>(0x534),
__E_valetCharadesRooms = static_cast<int32_t>(0x53e),
__E_valetMicrophoneArray = static_cast<int32_t>(0x548),
__E_valetPointersParadise = static_cast<int32_t>(0x55c),
__E_valetCoordinatesHolding = static_cast<int32_t>(0x566),
__E_valetEggHunt = static_cast<int32_t>(0x570),
__E_valetTellerWindow = static_cast<int32_t>(0x57a),
__E_valetSignalFlags = static_cast<int32_t>(0x584),
__E_valetCabinFeverLong = static_cast<int32_t>(0x58e),
__E_valetBreadcrumbLoop = static_cast<int32_t>(0x598),
__E_valetScoutBombs = static_cast<int32_t>(0x5a2),
__E_valetScoutTiles = static_cast<int32_t>(0x5ac),
__E_valetScoutCounting = static_cast<int32_t>(0x5b6),
__E_valetCenturionSong = static_cast<int32_t>(0x5c0),
__E_valetMusicalHoliday = static_cast<int32_t>(0x5ca),
__E_valetKickUpPits = static_cast<int32_t>(0x5d4),
__E_valetSingerAndSelector = static_cast<int32_t>(0x5de),
__E_valetDancerAndSelector = static_cast<int32_t>(0x5e8),
__E_valetSpeedObby = static_cast<int32_t>(0x5f2),
__E_valetBlindfoldCatwalk = static_cast<int32_t>(0x5fc),
__E_valetBlindfoldFishtrap = static_cast<int32_t>(0x606),
__E_valetPerspectiveCounting = static_cast<int32_t>(0x610),
__E_valetCenturionSeance = static_cast<int32_t>(0x61a),
__E_valetFlareRun = static_cast<int32_t>(0x624),
__E_valetCannonballCommute = static_cast<int32_t>(0x62e),
__E_valetPoetAndPontiff = static_cast<int32_t>(0x638),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SaveableHomeName_Unwrapped () const noexcept {
return static_cast<__SaveableHomeName_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SaveableHomeName() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SaveableHomeName(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field bigKeyPlinthEnding value: I32(224)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthEnding;

/// @brief Field bigKeyPlinthGoodbye2 value: I32(225)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthGoodbye2;

/// @brief Field bigKeyPlinthIntro value: I32(210)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthIntro;

/// @brief Field bigKeyPlinthMapRoom value: I32(220)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthMapRoom;

/// @brief Field bigKeyPlinthSkiLift value: I32(222)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthSkiLift;

/// @brief Field bigKeyPlinthTrain value: I32(221)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthTrain;

/// @brief Field bigKeyPlinthTunnels value: I32(223)
static ::GlobalNamespace::SaveableHomeName const bigKeyPlinthTunnels;

/// @brief Field monoument0Slot0 value: I32(100)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot0;

/// @brief Field monoument0Slot1 value: I32(101)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot1;

/// @brief Field monoument0Slot2 value: I32(102)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot2;

/// @brief Field monoument0Slot3 value: I32(103)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot3;

/// @brief Field monoument0Slot4 value: I32(104)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot4;

/// @brief Field monoument0Slot5 value: I32(105)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot5;

/// @brief Field monoument0Slot6 value: I32(106)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot6;

/// @brief Field monoument0Slot7 value: I32(107)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot7;

/// @brief Field monoument0Slot8 value: I32(108)
static ::GlobalNamespace::SaveableHomeName const monoument0Slot8;

/// @brief Field monoument1Slot0 value: I32(110)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot0;

/// @brief Field monoument1Slot1 value: I32(111)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot1;

/// @brief Field monoument1Slot2 value: I32(112)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot2;

/// @brief Field monoument1Slot3 value: I32(113)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot3;

/// @brief Field monoument1Slot4 value: I32(114)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot4;

/// @brief Field monoument1Slot5 value: I32(115)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot5;

/// @brief Field monoument1Slot6 value: I32(116)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot6;

/// @brief Field monoument1Slot7 value: I32(117)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot7;

/// @brief Field monoument1Slot8 value: I32(118)
static ::GlobalNamespace::SaveableHomeName const monoument1Slot8;

/// @brief Field monoument2Slot0 value: I32(120)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot0;

/// @brief Field monoument2Slot1 value: I32(121)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot1;

/// @brief Field monoument2Slot2 value: I32(122)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot2;

/// @brief Field monoument2Slot3 value: I32(123)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot3;

/// @brief Field monoument2Slot4 value: I32(124)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot4;

/// @brief Field monoument2Slot5 value: I32(125)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot5;

/// @brief Field monoument2Slot6 value: I32(126)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot6;

/// @brief Field monoument2Slot7 value: I32(127)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot7;

/// @brief Field monoument2Slot8 value: I32(128)
static ::GlobalNamespace::SaveableHomeName const monoument2Slot8;

/// @brief Field monoument3Slot0 value: I32(130)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot0;

/// @brief Field monoument3Slot1 value: I32(131)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot1;

/// @brief Field monoument3Slot2 value: I32(132)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot2;

/// @brief Field monoument3Slot3 value: I32(133)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot3;

/// @brief Field monoument3Slot4 value: I32(134)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot4;

/// @brief Field monoument3Slot5 value: I32(135)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot5;

/// @brief Field monoument3Slot6 value: I32(136)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot6;

/// @brief Field monoument3Slot7 value: I32(137)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot7;

/// @brief Field monoument3Slot8 value: I32(138)
static ::GlobalNamespace::SaveableHomeName const monoument3Slot8;

/// @brief Field monoumentFinalSlot0 value: I32(140)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot0;

/// @brief Field monoumentFinalSlot1 value: I32(141)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot1;

/// @brief Field monoumentFinalSlot2 value: I32(142)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot2;

/// @brief Field monoumentFinalSlot3 value: I32(143)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot3;

/// @brief Field monoumentFinalSlot4 value: I32(144)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot4;

/// @brief Field monoumentFinalSlot5 value: I32(145)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot5;

/// @brief Field monoumentFinalSlot6 value: I32(146)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot6;

/// @brief Field monoumentFinalSlot7 value: I32(147)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot7;

/// @brief Field monoumentFinalSlot8 value: I32(148)
static ::GlobalNamespace::SaveableHomeName const monoumentFinalSlot8;

/// @brief Field monoumentIntroSlot0 value: I32(150)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot0;

/// @brief Field monoumentIntroSlot1 value: I32(151)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot1;

/// @brief Field monoumentIntroSlot2 value: I32(152)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot2;

/// @brief Field monoumentIntroSlot3 value: I32(153)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot3;

/// @brief Field monoumentIntroSlot4 value: I32(154)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot4;

/// @brief Field monoumentIntroSlot5 value: I32(155)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot5;

/// @brief Field monoumentIntroSlot6 value: I32(156)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot6;

/// @brief Field monoumentIntroSlot7 value: I32(157)
static ::GlobalNamespace::SaveableHomeName const monoumentIntroSlot7;

/// @brief Field monoumentOverflowSlot0 value: I32(160)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot0;

/// @brief Field monoumentOverflowSlot1 value: I32(161)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot1;

/// @brief Field monoumentOverflowSlot10 value: I32(170)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot10;

/// @brief Field monoumentOverflowSlot11 value: I32(171)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot11;

/// @brief Field monoumentOverflowSlot12 value: I32(172)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot12;

/// @brief Field monoumentOverflowSlot13 value: I32(173)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot13;

/// @brief Field monoumentOverflowSlot14 value: I32(174)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot14;

/// @brief Field monoumentOverflowSlot15 value: I32(175)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot15;

/// @brief Field monoumentOverflowSlot16 value: I32(176)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot16;

/// @brief Field monoumentOverflowSlot17 value: I32(177)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot17;

/// @brief Field monoumentOverflowSlot2 value: I32(162)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot2;

/// @brief Field monoumentOverflowSlot3 value: I32(163)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot3;

/// @brief Field monoumentOverflowSlot4 value: I32(164)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot4;

/// @brief Field monoumentOverflowSlot5 value: I32(165)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot5;

/// @brief Field monoumentOverflowSlot6 value: I32(166)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot6;

/// @brief Field monoumentOverflowSlot7 value: I32(167)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot7;

/// @brief Field monoumentOverflowSlot8 value: I32(168)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot8;

/// @brief Field monoumentOverflowSlot9 value: I32(169)
static ::GlobalNamespace::SaveableHomeName const monoumentOverflowSlot9;

/// @brief Field notSavable value: I32(0)
static ::GlobalNamespace::SaveableHomeName const notSavable;

/// @brief Field tileThief0 value: I32(410)
static ::GlobalNamespace::SaveableHomeName const tileThief0;

/// @brief Field tileThief1 value: I32(411)
static ::GlobalNamespace::SaveableHomeName const tileThief1;

/// @brief Field tileThief2 value: I32(412)
static ::GlobalNamespace::SaveableHomeName const tileThief2;

/// @brief Field tileThief3 value: I32(413)
static ::GlobalNamespace::SaveableHomeName const tileThief3;

/// @brief Field valetBasketball value: I32(1212)
static ::GlobalNamespace::SaveableHomeName const valetBasketball;

/// @brief Field valetBlindfoldCatwalk value: I32(1532)
static ::GlobalNamespace::SaveableHomeName const valetBlindfoldCatwalk;

/// @brief Field valetBlindfoldCircus value: I32(1302)
static ::GlobalNamespace::SaveableHomeName const valetBlindfoldCircus;

/// @brief Field valetBlindfoldFishtrap value: I32(1542)
static ::GlobalNamespace::SaveableHomeName const valetBlindfoldFishtrap;

/// @brief Field valetBreadcrumbLoop value: I32(1432)
static ::GlobalNamespace::SaveableHomeName const valetBreadcrumbLoop;

/// @brief Field valetBunker value: I32(1102)
static ::GlobalNamespace::SaveableHomeName const valetBunker;

/// @brief Field valetButtonBoothChallenge value: I32(1202)
static ::GlobalNamespace::SaveableHomeName const valetButtonBoothChallenge;

/// @brief Field valetCabinFever value: I32(1002)
static ::GlobalNamespace::SaveableHomeName const valetCabinFever;

/// @brief Field valetCabinFeverLong value: I32(1422)
static ::GlobalNamespace::SaveableHomeName const valetCabinFeverLong;

/// @brief Field valetCannonBall value: I32(1042)
static ::GlobalNamespace::SaveableHomeName const valetCannonBall;

/// @brief Field valetCannonballCommute value: I32(1582)
static ::GlobalNamespace::SaveableHomeName const valetCannonballCommute;

/// @brief Field valetCarousel value: I32(1142)
static ::GlobalNamespace::SaveableHomeName const valetCarousel;

/// @brief Field valetCenturionSeance value: I32(1562)
static ::GlobalNamespace::SaveableHomeName const valetCenturionSeance;

/// @brief Field valetCenturionSong value: I32(1472)
static ::GlobalNamespace::SaveableHomeName const valetCenturionSong;

/// @brief Field valetCharadesRooms value: I32(1342)
static ::GlobalNamespace::SaveableHomeName const valetCharadesRooms;

/// @brief Field valetConcert value: I32(1222)
static ::GlobalNamespace::SaveableHomeName const valetConcert;

/// @brief Field valetCoordinates value: I32(1152)
static ::GlobalNamespace::SaveableHomeName const valetCoordinates;

/// @brief Field valetCoordinatesHolding value: I32(1382)
static ::GlobalNamespace::SaveableHomeName const valetCoordinatesHolding;

/// @brief Field valetDancerAndSelector value: I32(1512)
static ::GlobalNamespace::SaveableHomeName const valetDancerAndSelector;

/// @brief Field valetEasySimPress value: I32(1082)
static ::GlobalNamespace::SaveableHomeName const valetEasySimPress;

/// @brief Field valetEggHunt value: I32(1392)
static ::GlobalNamespace::SaveableHomeName const valetEggHunt;

/// @brief Field valetFielding value: I32(1032)
static ::GlobalNamespace::SaveableHomeName const valetFielding;

/// @brief Field valetFirstPegBoard value: I32(1122)
static ::GlobalNamespace::SaveableHomeName const valetFirstPegBoard;

/// @brief Field valetFlareRun value: I32(1572)
static ::GlobalNamespace::SaveableHomeName const valetFlareRun;

/// @brief Field valetHighButton value: I32(1012)
static ::GlobalNamespace::SaveableHomeName const valetHighButton;

/// @brief Field valetHighPegBoard value: I32(1112)
static ::GlobalNamespace::SaveableHomeName const valetHighPegBoard;

/// @brief Field valetHotPotato value: I32(1322)
static ::GlobalNamespace::SaveableHomeName const valetHotPotato;

/// @brief Field valetIndoorSemaphore value: I32(1232)
static ::GlobalNamespace::SaveableHomeName const valetIndoorSemaphore;

/// @brief Field valetInvisibleInk value: I32(1052)
static ::GlobalNamespace::SaveableHomeName const valetInvisibleInk;

/// @brief Field valetKickUpPits value: I32(1492)
static ::GlobalNamespace::SaveableHomeName const valetKickUpPits;

/// @brief Field valetMagiciansTrick value: I32(1192)
static ::GlobalNamespace::SaveableHomeName const valetMagiciansTrick;

/// @brief Field valetMaypole value: I32(1292)
static ::GlobalNamespace::SaveableHomeName const valetMaypole;

/// @brief Field valetMediumSimPress value: I32(1072)
static ::GlobalNamespace::SaveableHomeName const valetMediumSimPress;

/// @brief Field valetMemoryBombs value: I32(1272)
static ::GlobalNamespace::SaveableHomeName const valetMemoryBombs;

/// @brief Field valetMessengerRun value: I32(1312)
static ::GlobalNamespace::SaveableHomeName const valetMessengerRun;

/// @brief Field valetMicrophoneArray value: I32(1352)
static ::GlobalNamespace::SaveableHomeName const valetMicrophoneArray;

/// @brief Field valetMusicalHoliday value: I32(1482)
static ::GlobalNamespace::SaveableHomeName const valetMusicalHoliday;

/// @brief Field valetObby value: I32(1132)
static ::GlobalNamespace::SaveableHomeName const valetObby;

/// @brief Field valetObservationRoom value: I32(1172)
static ::GlobalNamespace::SaveableHomeName const valetObservationRoom;

/// @brief Field valetOpticalTelegraph value: I32(1242)
static ::GlobalNamespace::SaveableHomeName const valetOpticalTelegraph;

/// @brief Field valetPanopticon value: I32(1282)
static ::GlobalNamespace::SaveableHomeName const valetPanopticon;

/// @brief Field valetPerspectiveCounting value: I32(1552)
static ::GlobalNamespace::SaveableHomeName const valetPerspectiveCounting;

/// @brief Field valetPoetAndPontiff value: I32(1592)
static ::GlobalNamespace::SaveableHomeName const valetPoetAndPontiff;

/// @brief Field valetPoetAndPreist value: I32(1252)
static ::GlobalNamespace::SaveableHomeName const valetPoetAndPreist;

/// @brief Field valetPointersParadise value: I32(1372)
static ::GlobalNamespace::SaveableHomeName const valetPointersParadise;

/// @brief Field valetRingRoom value: I32(1092)
static ::GlobalNamespace::SaveableHomeName const valetRingRoom;

/// @brief Field valetScoutBombs value: I32(1442)
static ::GlobalNamespace::SaveableHomeName const valetScoutBombs;

/// @brief Field valetScoutCounting value: I32(1462)
static ::GlobalNamespace::SaveableHomeName const valetScoutCounting;

/// @brief Field valetScoutTiles value: I32(1452)
static ::GlobalNamespace::SaveableHomeName const valetScoutTiles;

/// @brief Field valetSignalFlags value: I32(1412)
static ::GlobalNamespace::SaveableHomeName const valetSignalFlags;

/// @brief Field valetSingerAndSelector value: I32(1502)
static ::GlobalNamespace::SaveableHomeName const valetSingerAndSelector;

/// @brief Field valetSpeedObby value: I32(1522)
static ::GlobalNamespace::SaveableHomeName const valetSpeedObby;

/// @brief Field valetTelescopeToBox value: I32(1162)
static ::GlobalNamespace::SaveableHomeName const valetTelescopeToBox;

/// @brief Field valetTellerWindow value: I32(1402)
static ::GlobalNamespace::SaveableHomeName const valetTellerWindow;

/// @brief Field valetTileSoup value: I32(1262)
static ::GlobalNamespace::SaveableHomeName const valetTileSoup;

/// @brief Field valetTileThief value: I32(1332)
static ::GlobalNamespace::SaveableHomeName const valetTileThief;

/// @brief Field valetTrapRoom value: I32(1062)
static ::GlobalNamespace::SaveableHomeName const valetTrapRoom;

/// @brief Field valetWindowLabyrinth value: I32(1182)
static ::GlobalNamespace::SaveableHomeName const valetWindowLabyrinth;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveableHomeName, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveableHomeName) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
