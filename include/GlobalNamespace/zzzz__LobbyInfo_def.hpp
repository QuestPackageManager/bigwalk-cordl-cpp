#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsInfo_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LobbyInfo)
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LobbyInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyInfo*, "", "LobbyInfo");
// Dependencies Epic.OnlineServices.Lobby.LobbyDetailsInfo, PlayEveryWare.EpicOnlineServices.PlatformManager::Platform, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyInfo
class CORDL_TYPE LobbyInfo : public ::System::Object {
public:
// Declarations
/// @brief Field WorldOwnerPlatformID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WorldOwnerPlatformID, put=__cordl_internal_set_WorldOwnerPlatformID)) ::StringW  WorldOwnerPlatformID;

/// @brief Field WorldOwnerUserName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WorldOwnerUserName, put=__cordl_internal_set_WorldOwnerUserName)) ::StringW  WorldOwnerUserName;

/// @brief Field crossplay, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_crossplay, put=__cordl_internal_set_crossplay)) bool  crossplay;

/// @brief Field detailsInfo, offset 0x58, size 0x38 
 __declspec(property(get=__cordl_internal_get_detailsInfo, put=__cordl_internal_set_detailsInfo)) ::Epic::OnlineServices::Lobby::LobbyDetailsInfo  detailsInfo;

/// @brief Field hostId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostId, put=__cordl_internal_set_hostId)) ::Epic::OnlineServices::ProductUserId*  hostId;

/// @brief Field isHost, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHost, put=__cordl_internal_set_isHost)) bool  isHost;

/// @brief Field joinCode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinCode, put=__cordl_internal_set_joinCode)) ::StringW  joinCode;

/// @brief Field lobbyDetails, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyDetails, put=__cordl_internal_set_lobbyDetails)) ::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyDetails;

/// @brief Field platform, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform;

/// @brief Field platformID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformID, put=__cordl_internal_set_platformID)) ::StringW  platformID;

/// @brief Field userName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_userName, put=__cordl_internal_set_userName)) ::StringW  userName;

/// @brief Field worldName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldName, put=__cordl_internal_set_worldName)) ::StringW  worldName;

static inline ::GlobalNamespace::LobbyInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_WorldOwnerPlatformID() const;

constexpr ::StringW& __cordl_internal_get_WorldOwnerPlatformID() ;

constexpr ::StringW const& __cordl_internal_get_WorldOwnerUserName() const;

constexpr ::StringW& __cordl_internal_get_WorldOwnerUserName() ;

constexpr bool const& __cordl_internal_get_crossplay() const;

constexpr bool& __cordl_internal_get_crossplay() ;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsInfo const& __cordl_internal_get_detailsInfo() const;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsInfo& __cordl_internal_get_detailsInfo() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_hostId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_hostId() ;

constexpr bool const& __cordl_internal_get_isHost() const;

constexpr bool& __cordl_internal_get_isHost() ;

constexpr ::StringW const& __cordl_internal_get_joinCode() const;

constexpr ::StringW& __cordl_internal_get_joinCode() ;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetails* const& __cordl_internal_get_lobbyDetails() const;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetails*& __cordl_internal_get_lobbyDetails() ;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& __cordl_internal_get_platform() const;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& __cordl_internal_get_platform() ;

constexpr ::StringW const& __cordl_internal_get_platformID() const;

constexpr ::StringW& __cordl_internal_get_platformID() ;

constexpr ::StringW const& __cordl_internal_get_userName() const;

constexpr ::StringW& __cordl_internal_get_userName() ;

constexpr ::StringW const& __cordl_internal_get_worldName() const;

constexpr ::StringW& __cordl_internal_get_worldName() ;

constexpr void __cordl_internal_set_WorldOwnerPlatformID(::StringW  value) ;

constexpr void __cordl_internal_set_WorldOwnerUserName(::StringW  value) ;

constexpr void __cordl_internal_set_crossplay(bool  value) ;

constexpr void __cordl_internal_set_detailsInfo(::Epic::OnlineServices::Lobby::LobbyDetailsInfo  value) ;

constexpr void __cordl_internal_set_hostId(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_isHost(bool  value) ;

constexpr void __cordl_internal_set_joinCode(::StringW  value) ;

constexpr void __cordl_internal_set_lobbyDetails(::Epic::OnlineServices::Lobby::LobbyDetails*  value) ;

constexpr void __cordl_internal_set_platform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

constexpr void __cordl_internal_set_platformID(::StringW  value) ;

constexpr void __cordl_internal_set_userName(::StringW  value) ;

constexpr void __cordl_internal_set_worldName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyInfo(LobbyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyInfo(LobbyInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18983};

/// @brief Field platformID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___platformID;

/// @brief Field userName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___userName;

/// @brief Field hostId, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___hostId;

/// @brief Field isHost, offset: 0x28, size: 0x1, def value: None
 bool  ___isHost;

/// @brief Field WorldOwnerUserName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___WorldOwnerUserName;

/// @brief Field WorldOwnerPlatformID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___WorldOwnerPlatformID;

/// @brief Field worldName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___worldName;

/// @brief Field joinCode, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___joinCode;

/// @brief Field crossplay, offset: 0x50, size: 0x1, def value: None
 bool  ___crossplay;

/// @brief Field platform, offset: 0x54, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  ___platform;

/// @brief Field detailsInfo, offset: 0x58, size: 0x38, def value: None
 ::Epic::OnlineServices::Lobby::LobbyDetailsInfo  ___detailsInfo;

/// @brief Field lobbyDetails, offset: 0x90, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbyDetails*  ___lobbyDetails;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___platformID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___hostId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___isHost) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___WorldOwnerUserName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___WorldOwnerPlatformID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___worldName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___joinCode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___crossplay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___platform) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___detailsInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyInfo, ___lobbyDetails) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyInfo) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
