#pragma once
// IWYU pragma private; include "Steamworks/SteamParties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamParties)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct ESteamPartyBeaconLocationData;
}
namespace Steamworks {
struct PartyBeaconID_t;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
struct SteamPartyBeaconLocation_t;
}
// Forward declare root types
namespace Steamworks {
class SteamParties;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamParties*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamParties*, "Steamworks", "SteamParties");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamParties
class CORDL_TYPE SteamParties : public ::System::Object {
public:
// Declarations
/// @brief Method CancelReservation, addr 0x1805b7660, size 0x50, virtual false, abstract: false, final false
static inline void CancelReservation(::Steamworks::PartyBeaconID_t  ulBeacon, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ChangeNumOpenSlots, addr 0x1805b76b0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t ChangeNumOpenSlots(::Steamworks::PartyBeaconID_t  ulBeacon, uint32_t  unOpenSlots) ;

/// @brief Method CreateBeacon, addr 0x1805b7700, size 0x190, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CreateBeacon(uint32_t  unOpenSlots, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>  pBeaconLocation, ::StringW  pchConnectString, ::StringW  pchMetadata) ;

/// @brief Method DestroyBeacon, addr 0x1805b7890, size 0x40, virtual false, abstract: false, final false
static inline bool DestroyBeacon(::Steamworks::PartyBeaconID_t  ulBeacon) ;

/// @brief Method GetAvailableBeaconLocations, addr 0x1805b78d0, size 0x50, virtual false, abstract: false, final false
static inline bool GetAvailableBeaconLocations(::ArrayW<::Steamworks::SteamPartyBeaconLocation_t>  pLocationList, uint32_t  uMaxNumLocations) ;

/// @brief Method GetBeaconByIndex, addr 0x1805b7920, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::PartyBeaconID_t GetBeaconByIndex(uint32_t  unIndex) ;

/// @brief Method GetBeaconDetails, addr 0x1805b7960, size 0xd0, virtual false, abstract: false, final false
static inline bool GetBeaconDetails(::Steamworks::PartyBeaconID_t  ulBeaconID, ::by_ref<::Steamworks::CSteamID>  pSteamIDBeaconOwner, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>  pLocation, ::by_ref<::StringW>  pchMetadata, int32_t  cchMetadata) ;

/// @brief Method GetBeaconLocationData, addr 0x1805b7a30, size 0xc0, virtual false, abstract: false, final false
static inline bool GetBeaconLocationData(::Steamworks::SteamPartyBeaconLocation_t  BeaconLocation, ::Steamworks::ESteamPartyBeaconLocationData  eData, ::by_ref<::StringW>  pchDataStringOut, int32_t  cchDataStringOut) ;

/// @brief Method GetNumActiveBeacons, addr 0x1805b7af0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetNumActiveBeacons() ;

/// @brief Method GetNumAvailableBeaconLocations, addr 0x1805b7b20, size 0x40, virtual false, abstract: false, final false
static inline bool GetNumAvailableBeaconLocations(::by_ref<uint32_t>  puNumLocations) ;

/// @brief Method JoinParty, addr 0x1805b7b60, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t JoinParty(::Steamworks::PartyBeaconID_t  ulBeaconID) ;

/// @brief Method OnReservationCompleted, addr 0x1805b7ba0, size 0x50, virtual false, abstract: false, final false
static inline void OnReservationCompleted(::Steamworks::PartyBeaconID_t  ulBeacon, ::Steamworks::CSteamID  steamIDUser) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamParties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamParties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamParties(SteamParties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamParties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamParties(SteamParties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamParties) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
