#pragma once
// IWYU pragma private; include "Steamworks/SteamEncryptedAppTicket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamEncryptedAppTicket)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
// Forward declare root types
namespace Steamworks {
class SteamEncryptedAppTicket;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamEncryptedAppTicket*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamEncryptedAppTicket*, "Steamworks", "SteamEncryptedAppTicket");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamEncryptedAppTicket
class CORDL_TYPE SteamEncryptedAppTicket : public ::System::Object {
public:
// Declarations
/// @brief Method BDecryptTicket, addr 0x18057d6c0, size 0xf0, virtual false, abstract: false, final false
static inline bool BDecryptTicket(::ArrayW<uint8_t>  rgubTicketEncrypted, uint32_t  cubTicketEncrypted, ::ArrayW<uint8_t>  rgubTicketDecrypted, ::by_ref<uint32_t>  pcubTicketDecrypted, ::ArrayW<uint8_t>  rgubKey, int32_t  cubKey) ;

/// @brief Method BIsTicketForApp, addr 0x18057d8f0, size 0xa0, virtual false, abstract: false, final false
static inline bool BIsTicketForApp(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method BIsTicketSigned, addr 0x18057d990, size 0xc0, virtual false, abstract: false, final false
static inline bool BIsTicketSigned(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::ArrayW<uint8_t>  pubRSAKey, uint32_t  cubRSAKey) ;

/// @brief Method BUserIsVacBanned, addr 0x18057da50, size 0xa0, virtual false, abstract: false, final false
static inline bool BUserIsVacBanned(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method BUserOwnsAppInTicket, addr 0x18057daf0, size 0xa0, virtual false, abstract: false, final false
static inline bool BUserOwnsAppInTicket(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method GetTicketAppID, addr 0x18057db90, size 0x90, virtual false, abstract: false, final false
static inline uint32_t GetTicketAppID(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method GetTicketIssueTime, addr 0x18057dc20, size 0x90, virtual false, abstract: false, final false
static inline uint32_t GetTicketIssueTime(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method GetTicketSteamID, addr 0x18057dcb0, size 0xa0, virtual false, abstract: false, final false
static inline void GetTicketSteamID(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<::Steamworks::CSteamID>  psteamID) ;

/// @brief Method GetUserVariableData, addr 0x180586f10, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetUserVariableData(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<uint32_t>  pcubUserData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamEncryptedAppTicket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamEncryptedAppTicket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamEncryptedAppTicket(SteamEncryptedAppTicket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamEncryptedAppTicket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamEncryptedAppTicket(SteamEncryptedAppTicket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamEncryptedAppTicket) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
