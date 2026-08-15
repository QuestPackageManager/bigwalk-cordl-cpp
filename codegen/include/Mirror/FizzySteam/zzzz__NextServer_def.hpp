#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/NextServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/FizzySteam/zzzz__NextCommon_def.hpp"
#include "Steamworks/zzzz__HSteamListenSocket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NextServer)
namespace Mirror::FizzySteam {
template<typename T1,typename T2>
class BidirectionalDictionary_2;
}
namespace Mirror::FizzySteam {
class FizzySteamworks;
}
namespace Mirror::FizzySteam {
class IServer;
}
namespace Mirror::FizzySteam {
class NextServer___c__DisplayClass19_0;
}
namespace Mirror {
struct TransportError;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct HSteamNetConnection;
}
namespace Steamworks {
struct SteamNetConnectionStatusChangedCallback_t;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
// Forward declare root types
namespace Mirror::FizzySteam {
class NextServer;
}
namespace Mirror::FizzySteam {
class NextServer___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::NextServer*);
MARK_REF_T(::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextServer*, "Mirror.FizzySteam", "NextServer");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*, "Mirror.FizzySteam", "NextServer/<>c__DisplayClass19_0");
// Dependencies System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.NextServer/<>c__DisplayClass19_0
class CORDL_TYPE NextServer___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  transport;

static inline ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <CreateServer>b__0, addr 0x1806310c0, size 0x30, virtual false, abstract: false, final false
inline void _CreateServer_b__0(int32_t  id) ;

/// @brief Method <CreateServer>b__1, addr 0x1806310f0, size 0x30, virtual false, abstract: false, final false
inline void _CreateServer_b__1(int32_t  id) ;

/// @brief Method <CreateServer>b__2, addr 0x180631120, size 0x80, virtual false, abstract: false, final false
inline void _CreateServer_b__2(int32_t  id, ::ArrayW<uint8_t>  data, int32_t  ch) ;

/// @brief Method <CreateServer>b__3, addr 0x1806311a0, size 0x40, virtual false, abstract: false, final false
inline void _CreateServer_b__3(int32_t  id, ::Mirror::TransportError  error, ::StringW  reason) ;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextServer___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextServer___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NextServer___c__DisplayClass19_0(NextServer___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextServer___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextServer___c__DisplayClass19_0(NextServer___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20907};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::NextServer___c__DisplayClass19_0, ___transport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::NextServer___c__DisplayClass19_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies Mirror.FizzySteam.NextCommon, Steamworks.HSteamListenSocket
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.NextServer
class CORDL_TYPE NextServer : public ::Mirror::FizzySteam::NextCommon {
public:
// Declarations
using __c__DisplayClass19_0 = ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0;

/// @brief Field OnConnected, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action_1<int32_t>*  OnConnected;

/// @brief Field OnDisconnected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action_1<int32_t>*  OnDisconnected;

/// @brief Field OnReceivedData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedData, put=__cordl_internal_set_OnReceivedData)) ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  OnReceivedData;

/// @brief Field OnReceivedError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedError, put=__cordl_internal_set_OnReceivedError)) ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  OnReceivedError;

/// @brief Field c_onConnectionChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_c_onConnectionChange, put=__cordl_internal_set_c_onConnectionChange)) ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  c_onConnectionChange;

/// @brief Field connToMirrorID, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_connToMirrorID, put=__cordl_internal_set_connToMirrorID)) ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>*  connToMirrorID;

/// @brief Field listenSocket, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_listenSocket, put=__cordl_internal_set_listenSocket)) ::Steamworks::HSteamListenSocket  listenSocket;

/// @brief Field maxConnections, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConnections, put=__cordl_internal_set_maxConnections)) int32_t  maxConnections;

/// @brief Field nextConnectionID, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextConnectionID, put=__cordl_internal_set_nextConnectionID)) int32_t  nextConnectionID;

/// @brief Field steamIDToMirrorID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamIDToMirrorID, put=__cordl_internal_set_steamIDToMirrorID)) ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  steamIDToMirrorID;

/// @brief Convert operator to "::Mirror::FizzySteam::IServer"
constexpr operator  ::Mirror::FizzySteam::IServer*() noexcept;

/// @brief Method CreateServer, addr 0x18062ef40, size 0x3a0, virtual false, abstract: false, final false
static inline ::Mirror::FizzySteam::NextServer* CreateServer(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections) ;

/// @brief Method Disconnect, addr 0x18062f2e0, size 0x120, virtual true, abstract: false, final true
inline void Disconnect(int32_t  connectionId) ;

/// @brief Method FlushData, addr 0x18062f400, size 0x180, virtual true, abstract: false, final true
inline void FlushData() ;

/// @brief Method Host, addr 0x18062f580, size 0x40, virtual false, abstract: false, final false
inline void Host() ;

/// @brief Method InternalDisconnect, addr 0x18062f5c0, size 0xd0, virtual false, abstract: false, final false
inline void InternalDisconnect(int32_t  connId, ::Steamworks::HSteamNetConnection  socket) ;

static inline ::Mirror::FizzySteam::NextServer* New_ctor(int32_t  maxConnections) ;

/// @brief Method OnConnectionStatusChanged, addr 0x18062f690, size 0x340, virtual false, abstract: false, final false
inline void OnConnectionStatusChanged(::Steamworks::SteamNetConnectionStatusChangedCallback_t  param) ;

/// @brief Method ReceiveData, addr 0x18062f9d0, size 0x1a0, virtual true, abstract: false, final true
inline void ReceiveData() ;

/// @brief Method Send, addr 0x18062fb70, size 0x190, virtual true, abstract: false, final true
inline void Send(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method ServerGetClientAddress, addr 0x18062fd00, size 0xd0, virtual true, abstract: false, final true
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method Shutdown, addr 0x18062fdd0, size 0x50, virtual true, abstract: false, final true
inline void Shutdown() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>* const& __cordl_internal_get_OnReceivedData() const;

constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*& __cordl_internal_get_OnReceivedData() ;

constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>* const& __cordl_internal_get_OnReceivedError() const;

constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*& __cordl_internal_get_OnReceivedError() ;

constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>* const& __cordl_internal_get_c_onConnectionChange() const;

constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*& __cordl_internal_get_c_onConnectionChange() ;

constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>* const& __cordl_internal_get_connToMirrorID() const;

constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>*& __cordl_internal_get_connToMirrorID() ;

constexpr ::Steamworks::HSteamListenSocket const& __cordl_internal_get_listenSocket() const;

constexpr ::Steamworks::HSteamListenSocket& __cordl_internal_get_listenSocket() ;

constexpr int32_t const& __cordl_internal_get_maxConnections() const;

constexpr int32_t& __cordl_internal_get_maxConnections() ;

constexpr int32_t const& __cordl_internal_get_nextConnectionID() const;

constexpr int32_t& __cordl_internal_get_nextConnectionID() ;

constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>* const& __cordl_internal_get_steamIDToMirrorID() const;

constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*& __cordl_internal_get_steamIDToMirrorID() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

constexpr void __cordl_internal_set_c_onConnectionChange(::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  value) ;

constexpr void __cordl_internal_set_connToMirrorID(::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>*  value) ;

constexpr void __cordl_internal_set_listenSocket(::Steamworks::HSteamListenSocket  value) ;

constexpr void __cordl_internal_set_maxConnections(int32_t  value) ;

constexpr void __cordl_internal_set_nextConnectionID(int32_t  value) ;

constexpr void __cordl_internal_set_steamIDToMirrorID(::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x18062fe20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxConnections) ;

/// @brief Method add_OnConnected, addr 0x18062fee0, size 0x90, virtual false, abstract: false, final false
inline void add_OnConnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_OnDisconnected, addr 0x18062ff70, size 0x90, virtual false, abstract: false, final false
inline void add_OnDisconnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_OnReceivedData, addr 0x180630000, size 0x90, virtual false, abstract: false, final false
inline void add_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method add_OnReceivedError, addr 0x180630090, size 0x90, virtual false, abstract: false, final false
inline void add_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

/// @brief Convert to "::Mirror::FizzySteam::IServer"
constexpr ::Mirror::FizzySteam::IServer* i___Mirror__FizzySteam__IServer() noexcept;

/// @brief Method remove_OnConnected, addr 0x180630120, size 0x90, virtual false, abstract: false, final false
inline void remove_OnConnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_OnDisconnected, addr 0x1806301b0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnDisconnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_OnReceivedData, addr 0x180630240, size 0x90, virtual false, abstract: false, final false
inline void remove_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method remove_OnReceivedError, addr 0x1806302d0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NextServer(NextServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextServer(NextServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20908};

/// @brief Field OnConnected, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnConnected;

/// @brief Field OnReceivedData, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  ___OnReceivedData;

/// @brief Field OnDisconnected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnDisconnected;

/// @brief Field OnReceivedError, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  ___OnReceivedError;

/// @brief Field connToMirrorID, offset: 0x30, size: 0x8, def value: None
 ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>*  ___connToMirrorID;

/// @brief Field steamIDToMirrorID, offset: 0x38, size: 0x8, def value: None
 ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  ___steamIDToMirrorID;

/// @brief Field maxConnections, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxConnections;

/// @brief Field nextConnectionID, offset: 0x44, size: 0x4, def value: None
 int32_t  ___nextConnectionID;

/// @brief Field listenSocket, offset: 0x48, size: 0x4, def value: None
 ::Steamworks::HSteamListenSocket  ___listenSocket;

/// @brief Field c_onConnectionChange, offset: 0x50, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  ___c_onConnectionChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___OnConnected) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___OnReceivedData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___OnDisconnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___OnReceivedError) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___connToMirrorID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___steamIDToMirrorID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___maxConnections) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___nextConnectionID) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___listenSocket) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::NextServer, ___c_onConnectionChange) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::NextServer) == 0x58, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
