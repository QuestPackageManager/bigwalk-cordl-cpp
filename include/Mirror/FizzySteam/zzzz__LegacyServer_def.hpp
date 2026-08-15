#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/LegacyServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/FizzySteam/zzzz__LegacyCommon_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyServer)
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
struct LegacyCommon_InternalMessages;
}
namespace Mirror::FizzySteam {
class LegacyServer___c__DisplayClass15_0;
}
namespace Mirror {
struct TransportError;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct P2PSessionRequest_t;
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
class LegacyServer;
}
namespace Mirror::FizzySteam {
class LegacyServer___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::LegacyServer*);
MARK_REF_T(::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyServer*, "Mirror.FizzySteam", "LegacyServer");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*, "Mirror.FizzySteam", "LegacyServer/<>c__DisplayClass15_0");
// Dependencies System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.LegacyServer/<>c__DisplayClass15_0
class CORDL_TYPE LegacyServer___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  transport;

static inline ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <CreateServer>b__0, addr 0x1806310c0, size 0x30, virtual false, abstract: false, final false
inline void _CreateServer_b__0(int32_t  id) ;

/// @brief Method <CreateServer>b__1, addr 0x1806310f0, size 0x30, virtual false, abstract: false, final false
inline void _CreateServer_b__1(int32_t  id) ;

/// @brief Method <CreateServer>b__2, addr 0x180631120, size 0x80, virtual false, abstract: false, final false
inline void _CreateServer_b__2(int32_t  id, ::ArrayW<uint8_t>  data, int32_t  channel) ;

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
constexpr LegacyServer___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyServer___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyServer___c__DisplayClass15_0(LegacyServer___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyServer___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyServer___c__DisplayClass15_0(LegacyServer___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20900};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0, ___transport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies Mirror.FizzySteam.LegacyCommon
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.LegacyServer
class CORDL_TYPE LegacyServer : public ::Mirror::FizzySteam::LegacyCommon {
public:
// Declarations
using __c__DisplayClass15_0 = ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0;

/// @brief Field OnConnected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action_1<int32_t>*  OnConnected;

/// @brief Field OnDisconnected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action_1<int32_t>*  OnDisconnected;

/// @brief Field OnReceivedData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedData, put=__cordl_internal_set_OnReceivedData)) ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  OnReceivedData;

/// @brief Field OnReceivedError, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedError, put=__cordl_internal_set_OnReceivedError)) ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  OnReceivedError;

/// @brief Field maxConnections, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConnections, put=__cordl_internal_set_maxConnections)) int32_t  maxConnections;

/// @brief Field nextConnectionID, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextConnectionID, put=__cordl_internal_set_nextConnectionID)) int32_t  nextConnectionID;

/// @brief Field steamToMirrorIds, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamToMirrorIds, put=__cordl_internal_set_steamToMirrorIds)) ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  steamToMirrorIds;

/// @brief Convert operator to "::Mirror::FizzySteam::IServer"
constexpr operator  ::Mirror::FizzySteam::IServer*() noexcept;

/// @brief Method CreateServer, addr 0x18062ce50, size 0x310, virtual false, abstract: false, final false
static inline ::Mirror::FizzySteam::LegacyServer* CreateServer(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections) ;

/// @brief Method Disconnect, addr 0x18062d160, size 0xa0, virtual true, abstract: false, final true
inline void Disconnect(int32_t  connectionId) ;

/// @brief Method FlushData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void FlushData() ;

static inline ::Mirror::FizzySteam::LegacyServer* New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections) ;

/// @brief Method OnConnectionFailed, addr 0x18062d200, size 0x90, virtual true, abstract: false, final false
inline void OnConnectionFailed(::Steamworks::CSteamID  remoteId) ;

/// @brief Method OnNewConnection, addr 0x18062d290, size 0x10, virtual true, abstract: false, final false
inline void OnNewConnection(::Steamworks::P2PSessionRequest_t  result) ;

/// @brief Method OnReceiveData, addr 0x18062d2a0, size 0x110, virtual true, abstract: false, final false
inline void OnReceiveData(::ArrayW<uint8_t>  data, ::Steamworks::CSteamID  clientSteamID, int32_t  channel) ;

/// @brief Method OnReceiveInternalData, addr 0x18062d3b0, size 0x1e0, virtual true, abstract: false, final false
inline void OnReceiveInternalData(::Mirror::FizzySteam::LegacyCommon_InternalMessages  type, ::Steamworks::CSteamID  clientSteamID) ;

/// @brief Method Send, addr 0x18062d590, size 0x110, virtual true, abstract: false, final true
inline void Send(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method ServerGetClientAddress, addr 0x18062d6a0, size 0xd0, virtual true, abstract: false, final true
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method Shutdown, addr 0x18062d770, size 0x2c0, virtual true, abstract: false, final true
inline void Shutdown() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>* const& __cordl_internal_get_OnReceivedData() const;

constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*& __cordl_internal_get_OnReceivedData() ;

constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>* const& __cordl_internal_get_OnReceivedError() const;

constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*& __cordl_internal_get_OnReceivedError() ;

constexpr int32_t const& __cordl_internal_get_maxConnections() const;

constexpr int32_t& __cordl_internal_get_maxConnections() ;

constexpr int32_t const& __cordl_internal_get_nextConnectionID() const;

constexpr int32_t& __cordl_internal_get_nextConnectionID() ;

constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>* const& __cordl_internal_get_steamToMirrorIds() const;

constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*& __cordl_internal_get_steamToMirrorIds() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

constexpr void __cordl_internal_set_maxConnections(int32_t  value) ;

constexpr void __cordl_internal_set_nextConnectionID(int32_t  value) ;

constexpr void __cordl_internal_set_steamToMirrorIds(::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x18062da30, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections) ;

/// @brief Method add_OnConnected, addr 0x18062da90, size 0x90, virtual false, abstract: false, final false
inline void add_OnConnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_OnDisconnected, addr 0x18062db20, size 0x90, virtual false, abstract: false, final false
inline void add_OnDisconnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_OnReceivedData, addr 0x18062dbb0, size 0x90, virtual false, abstract: false, final false
inline void add_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method add_OnReceivedError, addr 0x18062dc40, size 0x90, virtual false, abstract: false, final false
inline void add_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

/// @brief Convert to "::Mirror::FizzySteam::IServer"
constexpr ::Mirror::FizzySteam::IServer* i___Mirror__FizzySteam__IServer() noexcept;

/// @brief Method remove_OnConnected, addr 0x18062dcd0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnConnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_OnDisconnected, addr 0x18062dd60, size 0x90, virtual false, abstract: false, final false
inline void remove_OnDisconnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_OnReceivedData, addr 0x18062ddf0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method remove_OnReceivedError, addr 0x18062de80, size 0x90, virtual false, abstract: false, final false
inline void remove_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyServer(LegacyServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyServer(LegacyServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20901};

/// @brief Field OnConnected, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnConnected;

/// @brief Field OnReceivedData, offset: 0x38, size: 0x8, def value: None
 ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  ___OnReceivedData;

/// @brief Field OnDisconnected, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnDisconnected;

/// @brief Field OnReceivedError, offset: 0x48, size: 0x8, def value: None
 ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  ___OnReceivedError;

/// @brief Field steamToMirrorIds, offset: 0x50, size: 0x8, def value: None
 ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  ___steamToMirrorIds;

/// @brief Field maxConnections, offset: 0x58, size: 0x4, def value: None
 int32_t  ___maxConnections;

/// @brief Field nextConnectionID, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___nextConnectionID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___OnConnected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___OnReceivedData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___OnDisconnected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___OnReceivedError) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___steamToMirrorIds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___maxConnections) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyServer, ___nextConnectionID) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyServer) == 0x60, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
