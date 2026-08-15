#pragma once
// IWYU pragma private; include "Steamworks/gameserveritem_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__servernetadr_t_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(gameserveritem_t)
// Forward declare root types
namespace Steamworks {
class gameserveritem_t;
}
// Write type traits
MARK_REF_T(::Steamworks::gameserveritem_t*);
DEFINE_IL2CPP_CLASS(::Steamworks::gameserveritem_t*, "Steamworks", "gameserveritem_t");
// Dependencies Steamworks.CSteamID, Steamworks.servernetadr_t, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.gameserveritem_t
#pragma pack(push, 4)
class CORDL_TYPE gameserveritem_t : public ::System::Object {
public:
// Declarations
/// @brief Field m_NetAdr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NetAdr, put=__cordl_internal_set_m_NetAdr)) ::Steamworks::servernetadr_t  m_NetAdr;

/// @brief Field m_bDoNotRefresh, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bDoNotRefresh, put=__cordl_internal_set_m_bDoNotRefresh)) bool  m_bDoNotRefresh;

/// @brief Field m_bHadSuccessfulResponse, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bHadSuccessfulResponse, put=__cordl_internal_set_m_bHadSuccessfulResponse)) bool  m_bHadSuccessfulResponse;

/// @brief Field m_bPassword, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bPassword, put=__cordl_internal_set_m_bPassword)) bool  m_bPassword;

/// @brief Field m_bSecure, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bSecure, put=__cordl_internal_set_m_bSecure)) bool  m_bSecure;

/// @brief Field m_nAppID, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_nAppID, put=__cordl_internal_set_m_nAppID)) uint32_t  m_nAppID;

/// @brief Field m_nBotPlayers, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_nBotPlayers, put=__cordl_internal_set_m_nBotPlayers)) int32_t  m_nBotPlayers;

/// @brief Field m_nMaxPlayers, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_nMaxPlayers, put=__cordl_internal_set_m_nMaxPlayers)) int32_t  m_nMaxPlayers;

/// @brief Field m_nPing, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_nPing, put=__cordl_internal_set_m_nPing)) int32_t  m_nPing;

/// @brief Field m_nPlayers, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_nPlayers, put=__cordl_internal_set_m_nPlayers)) int32_t  m_nPlayers;

/// @brief Field m_nServerVersion, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_nServerVersion, put=__cordl_internal_set_m_nServerVersion)) int32_t  m_nServerVersion;

/// @brief Field m_steamID, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_steamID, put=__cordl_internal_set_m_steamID)) ::Steamworks::CSteamID  m_steamID;

/// @brief Field m_szGameDescription, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_szGameDescription, put=__cordl_internal_set_m_szGameDescription)) ::ArrayW<uint8_t>  m_szGameDescription;

/// @brief Field m_szGameDir, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_szGameDir, put=__cordl_internal_set_m_szGameDir)) ::ArrayW<uint8_t>  m_szGameDir;

/// @brief Field m_szGameTags, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_szGameTags, put=__cordl_internal_set_m_szGameTags)) ::ArrayW<uint8_t>  m_szGameTags;

/// @brief Field m_szMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_szMap, put=__cordl_internal_set_m_szMap)) ::ArrayW<uint8_t>  m_szMap;

/// @brief Field m_szServerName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_szServerName, put=__cordl_internal_set_m_szServerName)) ::ArrayW<uint8_t>  m_szServerName;

/// @brief Field m_ulTimeLastPlayed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ulTimeLastPlayed, put=__cordl_internal_set_m_ulTimeLastPlayed)) uint32_t  m_ulTimeLastPlayed;

/// @brief Method GetGameDescription, addr 0x1805c0d10, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetGameDescription() ;

/// @brief Method GetGameDir, addr 0x1805c0d90, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetGameDir() ;

/// @brief Method GetGameTags, addr 0x1805c0e10, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetGameTags() ;

/// @brief Method GetMap, addr 0x1805c0e90, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetMap() ;

/// @brief Method GetServerName, addr 0x1805c0f10, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GetServerName() ;

static inline ::Steamworks::gameserveritem_t* New_ctor() ;

/// @brief Method SetGameDescription, addr 0x1805c0fb0, size 0x80, virtual false, abstract: false, final false
inline void SetGameDescription(::StringW  desc) ;

/// @brief Method SetGameDir, addr 0x1805c1030, size 0x80, virtual false, abstract: false, final false
inline void SetGameDir(::StringW  dir) ;

/// @brief Method SetGameTags, addr 0x1805c10b0, size 0x80, virtual false, abstract: false, final false
inline void SetGameTags(::StringW  tags) ;

/// @brief Method SetMap, addr 0x1805c1130, size 0x80, virtual false, abstract: false, final false
inline void SetMap(::StringW  map) ;

/// @brief Method SetServerName, addr 0x1805c11b0, size 0x1910, virtual false, abstract: false, final false
inline void SetServerName(::StringW  name) ;

constexpr ::Steamworks::servernetadr_t const& __cordl_internal_get_m_NetAdr() const;

constexpr ::Steamworks::servernetadr_t& __cordl_internal_get_m_NetAdr() ;

constexpr bool const& __cordl_internal_get_m_bDoNotRefresh() const;

constexpr bool& __cordl_internal_get_m_bDoNotRefresh() ;

constexpr bool const& __cordl_internal_get_m_bHadSuccessfulResponse() const;

constexpr bool& __cordl_internal_get_m_bHadSuccessfulResponse() ;

constexpr bool const& __cordl_internal_get_m_bPassword() const;

constexpr bool& __cordl_internal_get_m_bPassword() ;

constexpr bool const& __cordl_internal_get_m_bSecure() const;

constexpr bool& __cordl_internal_get_m_bSecure() ;

constexpr uint32_t const& __cordl_internal_get_m_nAppID() const;

constexpr uint32_t& __cordl_internal_get_m_nAppID() ;

constexpr int32_t const& __cordl_internal_get_m_nBotPlayers() const;

constexpr int32_t& __cordl_internal_get_m_nBotPlayers() ;

constexpr int32_t const& __cordl_internal_get_m_nMaxPlayers() const;

constexpr int32_t& __cordl_internal_get_m_nMaxPlayers() ;

constexpr int32_t const& __cordl_internal_get_m_nPing() const;

constexpr int32_t& __cordl_internal_get_m_nPing() ;

constexpr int32_t const& __cordl_internal_get_m_nPlayers() const;

constexpr int32_t& __cordl_internal_get_m_nPlayers() ;

constexpr int32_t const& __cordl_internal_get_m_nServerVersion() const;

constexpr int32_t& __cordl_internal_get_m_nServerVersion() ;

constexpr ::Steamworks::CSteamID const& __cordl_internal_get_m_steamID() const;

constexpr ::Steamworks::CSteamID& __cordl_internal_get_m_steamID() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_szGameDescription() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_szGameDescription() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_szGameDir() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_szGameDir() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_szGameTags() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_szGameTags() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_szMap() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_szMap() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_szServerName() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_szServerName() ;

constexpr uint32_t const& __cordl_internal_get_m_ulTimeLastPlayed() const;

constexpr uint32_t& __cordl_internal_get_m_ulTimeLastPlayed() ;

constexpr void __cordl_internal_set_m_NetAdr(::Steamworks::servernetadr_t  value) ;

constexpr void __cordl_internal_set_m_bDoNotRefresh(bool  value) ;

constexpr void __cordl_internal_set_m_bHadSuccessfulResponse(bool  value) ;

constexpr void __cordl_internal_set_m_bPassword(bool  value) ;

constexpr void __cordl_internal_set_m_bSecure(bool  value) ;

constexpr void __cordl_internal_set_m_nAppID(uint32_t  value) ;

constexpr void __cordl_internal_set_m_nBotPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_m_nMaxPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_m_nPing(int32_t  value) ;

constexpr void __cordl_internal_set_m_nPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_m_nServerVersion(int32_t  value) ;

constexpr void __cordl_internal_set_m_steamID(::Steamworks::CSteamID  value) ;

constexpr void __cordl_internal_set_m_szGameDescription(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_szGameDir(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_szGameTags(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_szMap(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_szServerName(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_ulTimeLastPlayed(uint32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr gameserveritem_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "gameserveritem_t", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
gameserveritem_t(gameserveritem_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "gameserveritem_t", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
gameserveritem_t(gameserveritem_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16397};

/// @brief Field m_NetAdr, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::servernetadr_t  ___m_NetAdr;

/// @brief Field m_nPing, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_nPing;

/// @brief Field m_bHadSuccessfulResponse, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_bHadSuccessfulResponse;

/// @brief Field m_bDoNotRefresh, offset: 0x1d, size: 0x1, def value: None
 bool  ___m_bDoNotRefresh;

/// @brief Field m_szGameDir, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szGameDir;

/// @brief Field m_szMap, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szMap;

/// @brief Field m_szGameDescription, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szGameDescription;

/// @brief Field m_nAppID, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___m_nAppID;

/// @brief Field m_nPlayers, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___m_nPlayers;

/// @brief Field m_nMaxPlayers, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_nMaxPlayers;

/// @brief Field m_nBotPlayers, offset: 0x44, size: 0x4, def value: None
 int32_t  ___m_nBotPlayers;

/// @brief Field m_bPassword, offset: 0x48, size: 0x1, def value: None
 bool  ___m_bPassword;

/// @brief Field m_bSecure, offset: 0x49, size: 0x1, def value: None
 bool  ___m_bSecure;

/// @brief Field m_ulTimeLastPlayed, offset: 0x4c, size: 0x4, def value: None
 uint32_t  ___m_ulTimeLastPlayed;

/// @brief Field m_nServerVersion, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_nServerVersion;

/// @brief Field m_szServerName, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szServerName;

/// @brief Field m_szGameTags, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szGameTags;

/// @brief Field m_steamID, offset: 0x68, size: 0x8, def value: None
 ::Steamworks::CSteamID  ___m_steamID;

/// @brief Size padding 0x188 - 0x70 = 0x118, packed as 0x118
 uint8_t  _cordl_size_padding[0x118];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_NetAdr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_nPing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_bHadSuccessfulResponse) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_bDoNotRefresh) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_szGameDir) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_szMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_szGameDescription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_nAppID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_nPlayers) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_nMaxPlayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_nBotPlayers) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_bPassword) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_bSecure) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_ulTimeLastPlayed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_nServerVersion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_szServerName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_szGameTags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Steamworks::gameserveritem_t, ___m_steamID) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Steamworks::gameserveritem_t) == 0x188, "Size mismatch!");

} // namespace end def Steamworks
