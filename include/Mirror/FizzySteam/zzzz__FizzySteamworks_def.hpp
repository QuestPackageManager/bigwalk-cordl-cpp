#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/FizzySteamworks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "Steamworks/zzzz__EP2PSend_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FizzySteamworks)
namespace Mirror::FizzySteam {
class IClient;
}
namespace Mirror::FizzySteam {
class IServer;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::FizzySteam {
class FizzySteamworks;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::FizzySteamworks*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::FizzySteamworks*, "Mirror.FizzySteam", "FizzySteamworks");
// Dependencies Mirror.Transport, Steamworks.EP2PSend
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.FizzySteamworks
class CORDL_TYPE FizzySteamworks : public ::Mirror::Transport {
public:
// Declarations
/// @brief Field AllowSteamRelay, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowSteamRelay, put=__cordl_internal_set_AllowSteamRelay)) bool  AllowSteamRelay;

/// @brief Field Channels, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Channels, put=__cordl_internal_set_Channels)) ::ArrayW<::Steamworks::EP2PSend>  Channels;

/// @brief Field Timeout, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_Timeout, put=__cordl_internal_set_Timeout)) int32_t  Timeout;

/// @brief Field UseNextGenSteamNetworking, offset 0x7d, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseNextGenSteamNetworking, put=__cordl_internal_set_UseNextGenSteamNetworking)) bool  UseNextGenSteamNetworking;

/// @brief Field client, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_client, put=setStaticF_client)) ::Mirror::FizzySteam::IClient*  client;

/// @brief Field server, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_server, put=setStaticF_server)) ::Mirror::FizzySteam::IServer*  server;

/// @brief Method Available, addr 0x18062afc0, size 0x20, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method ClientActive, addr 0x18062afe0, size 0x20, virtual false, abstract: false, final false
inline bool ClientActive() ;

/// @brief Method ClientConnect, addr 0x18062b0b0, size 0x200, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x18062b000, size 0xb0, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x18062b2b0, size 0x30, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x18062b2e0, size 0x30, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x18062b310, size 0x40, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x18062b350, size 0x40, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x18062b390, size 0x100, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x18062b490, size 0x70, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method InitRelayNetworkAccess, addr 0x18062b500, size 0x20, virtual false, abstract: false, final false
inline void InitRelayNetworkAccess() ;

static inline ::Mirror::FizzySteam::FizzySteamworks* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18062b520, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x18062b540, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ServerActive, addr 0x18062b560, size 0x20, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x18062b580, size 0xd0, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x18062b650, size 0x40, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x18062b690, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x18062b770, size 0x40, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0x18062b7b0, size 0x130, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x18062b8e0, size 0x1d0, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x18062bab0, size 0x50, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x18062bb00, size 0x70, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x18062bb70, size 0xe0, virtual true, abstract: false, final false
inline void Shutdown() ;

constexpr bool const& __cordl_internal_get_AllowSteamRelay() const;

constexpr bool& __cordl_internal_get_AllowSteamRelay() ;

constexpr ::ArrayW<::Steamworks::EP2PSend> const& __cordl_internal_get_Channels() const;

constexpr ::ArrayW<::Steamworks::EP2PSend>& __cordl_internal_get_Channels() ;

constexpr int32_t const& __cordl_internal_get_Timeout() const;

constexpr int32_t& __cordl_internal_get_Timeout() ;

constexpr bool const& __cordl_internal_get_UseNextGenSteamNetworking() const;

constexpr bool& __cordl_internal_get_UseNextGenSteamNetworking() ;

constexpr void __cordl_internal_set_AllowSteamRelay(bool  value) ;

constexpr void __cordl_internal_set_Channels(::ArrayW<::Steamworks::EP2PSend>  value) ;

constexpr void __cordl_internal_set_Timeout(int32_t  value) ;

constexpr void __cordl_internal_set_UseNextGenSteamNetworking(bool  value) ;

/// @brief Method .ctor, addr 0x18062bc50, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::FizzySteam::IClient* getStaticF_client() ;

static inline ::Mirror::FizzySteam::IServer* getStaticF_server() ;

static inline void setStaticF_client(::Mirror::FizzySteam::IClient*  value) ;

static inline void setStaticF_server(::Mirror::FizzySteam::IServer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FizzySteamworks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FizzySteamworks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FizzySteamworks(FizzySteamworks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FizzySteamworks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FizzySteamworks(FizzySteamworks const& ) = delete;

/// @brief Field STEAM_SCHEME offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAM_SCHEME{u"steam"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20891};

/// @brief Field Channels, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::Steamworks::EP2PSend>  ___Channels;

/// @brief Field Timeout, offset: 0x78, size: 0x4, def value: None
 int32_t  ___Timeout;

/// @brief Field AllowSteamRelay, offset: 0x7c, size: 0x1, def value: None
 bool  ___AllowSteamRelay;

/// @brief Field UseNextGenSteamNetworking, offset: 0x7d, size: 0x1, def value: None
 bool  ___UseNextGenSteamNetworking;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::FizzySteamworks, ___Channels) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::FizzySteamworks, ___Timeout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::FizzySteamworks, ___AllowSteamRelay) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::FizzySteamworks, ___UseNextGenSteamNetworking) == 0x7d, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::FizzySteamworks) == 0x80, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
