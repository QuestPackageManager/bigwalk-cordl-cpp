#pragma once
// IWYU pragma private; include "GlobalNamespace/SavableSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SavableSystem)
// Forward declare root types
namespace GlobalNamespace {
struct SavableSystem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SavableSystem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SavableSystem, "", "SavableSystem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SavableSystem
struct CORDL_TYPE SavableSystem {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SavableSystem_Unwrapped
enum struct __SavableSystem_Unwrapped : int32_t {
__E_NotSavable = static_cast<int32_t>(0x0),
__E_SpawnHubGate = static_cast<int32_t>(0xb),
__E_HubTunnel = static_cast<int32_t>(0xc),
__E_HubShortcutToSportsCreek = static_cast<int32_t>(0xd),
__E_LookoutLightRed = static_cast<int32_t>(0x15),
__E_LookoutLightGreen = static_cast<int32_t>(0x16),
__E_LookoutLightBlue = static_cast<int32_t>(0x17),
__E_LookoutLightYellow = static_cast<int32_t>(0x18),
__E_BlackTowerInteriorDoor = static_cast<int32_t>(0x1a),
__E_EndingGate = static_cast<int32_t>(0x1b),
__E_GauntletComplete = static_cast<int32_t>(0x1c),
__E_FmStationSleuthFm = static_cast<int32_t>(0x1e),
__E_FmStationKosmische = static_cast<int32_t>(0x1f),
__E_FmStationDanceFm = static_cast<int32_t>(0x20),
__E_FmStationBreathwork = static_cast<int32_t>(0x21),
__E_FmStationJourneyBeat = static_cast<int32_t>(0x22),
__E_FmStationAFJ = static_cast<int32_t>(0x23),
__E_FmStationFourthSpace = static_cast<int32_t>(0x24),
__E_FmStation7 = static_cast<int32_t>(0x25),
__E_FmStation8 = static_cast<int32_t>(0x26),
__E_FmStation9 = static_cast<int32_t>(0x27),
__E_GauntletChamber0 = static_cast<int32_t>(0x32),
__E_GauntletChamber1 = static_cast<int32_t>(0x33),
__E_GauntletChamber2 = static_cast<int32_t>(0x34),
__E_GauntletChamber3 = static_cast<int32_t>(0x35),
__E_GauntletChamber4 = static_cast<int32_t>(0x36),
__E_GauntletChamber5 = static_cast<int32_t>(0x37),
__E_GauntletChamber6 = static_cast<int32_t>(0x38),
__E_PoetAndPriestDoors = static_cast<int32_t>(0x3c),
__E_PoetAndPontiffDoors = static_cast<int32_t>(0x3d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SavableSystem_Unwrapped () const noexcept {
return static_cast<__SavableSystem_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SavableSystem() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SavableSystem(int32_t  value__) noexcept;

/// @brief Field BlackTowerInteriorDoor value: I32(26)
static ::GlobalNamespace::SavableSystem const BlackTowerInteriorDoor;

/// @brief Field EndingGate value: I32(27)
static ::GlobalNamespace::SavableSystem const EndingGate;

/// @brief Field FmStation7 value: I32(37)
static ::GlobalNamespace::SavableSystem const FmStation7;

/// @brief Field FmStation8 value: I32(38)
static ::GlobalNamespace::SavableSystem const FmStation8;

/// @brief Field FmStation9 value: I32(39)
static ::GlobalNamespace::SavableSystem const FmStation9;

/// @brief Field FmStationAFJ value: I32(35)
static ::GlobalNamespace::SavableSystem const FmStationAFJ;

/// @brief Field FmStationBreathwork value: I32(33)
static ::GlobalNamespace::SavableSystem const FmStationBreathwork;

/// @brief Field FmStationDanceFm value: I32(32)
static ::GlobalNamespace::SavableSystem const FmStationDanceFm;

/// @brief Field FmStationFourthSpace value: I32(36)
static ::GlobalNamespace::SavableSystem const FmStationFourthSpace;

/// @brief Field FmStationJourneyBeat value: I32(34)
static ::GlobalNamespace::SavableSystem const FmStationJourneyBeat;

/// @brief Field FmStationKosmische value: I32(31)
static ::GlobalNamespace::SavableSystem const FmStationKosmische;

/// @brief Field FmStationSleuthFm value: I32(30)
static ::GlobalNamespace::SavableSystem const FmStationSleuthFm;

/// @brief Field GauntletChamber0 value: I32(50)
static ::GlobalNamespace::SavableSystem const GauntletChamber0;

/// @brief Field GauntletChamber1 value: I32(51)
static ::GlobalNamespace::SavableSystem const GauntletChamber1;

/// @brief Field GauntletChamber2 value: I32(52)
static ::GlobalNamespace::SavableSystem const GauntletChamber2;

/// @brief Field GauntletChamber3 value: I32(53)
static ::GlobalNamespace::SavableSystem const GauntletChamber3;

/// @brief Field GauntletChamber4 value: I32(54)
static ::GlobalNamespace::SavableSystem const GauntletChamber4;

/// @brief Field GauntletChamber5 value: I32(55)
static ::GlobalNamespace::SavableSystem const GauntletChamber5;

/// @brief Field GauntletChamber6 value: I32(56)
static ::GlobalNamespace::SavableSystem const GauntletChamber6;

/// @brief Field GauntletComplete value: I32(28)
static ::GlobalNamespace::SavableSystem const GauntletComplete;

/// @brief Field HubShortcutToSportsCreek value: I32(13)
static ::GlobalNamespace::SavableSystem const HubShortcutToSportsCreek;

/// @brief Field HubTunnel value: I32(12)
static ::GlobalNamespace::SavableSystem const HubTunnel;

/// @brief Field LookoutLightBlue value: I32(23)
static ::GlobalNamespace::SavableSystem const LookoutLightBlue;

/// @brief Field LookoutLightGreen value: I32(22)
static ::GlobalNamespace::SavableSystem const LookoutLightGreen;

/// @brief Field LookoutLightRed value: I32(21)
static ::GlobalNamespace::SavableSystem const LookoutLightRed;

/// @brief Field LookoutLightYellow value: I32(24)
static ::GlobalNamespace::SavableSystem const LookoutLightYellow;

/// @brief Field NotSavable value: I32(0)
static ::GlobalNamespace::SavableSystem const NotSavable;

/// @brief Field PoetAndPontiffDoors value: I32(61)
static ::GlobalNamespace::SavableSystem const PoetAndPontiffDoors;

/// @brief Field PoetAndPriestDoors value: I32(60)
static ::GlobalNamespace::SavableSystem const PoetAndPriestDoors;

/// @brief Field SpawnHubGate value: I32(11)
static ::GlobalNamespace::SavableSystem const SpawnHubGate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SavableSystem, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SavableSystem) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
