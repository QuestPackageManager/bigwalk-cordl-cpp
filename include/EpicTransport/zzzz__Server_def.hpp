#pragma once
// IWYU pragma private; include "EpicTransport/Server.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "EpicTransport/zzzz__Common_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Server)
namespace Epic::OnlineServices::P2P {
struct OnIncomingConnectionRequestInfo;
}
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace EpicTransport {
template<typename T1,typename T2>
class BidirectionalDictionary_2;
}
namespace EpicTransport {
struct Common_InternalMessages;
}
namespace EpicTransport {
class EosTransport;
}
namespace EpicTransport {
class Server___c__DisplayClass16_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace EpicTransport {
class Server;
}
namespace EpicTransport {
class Server___c__DisplayClass16_0;
}
// Write type traits
MARK_REF_T(::EpicTransport::Server*);
MARK_REF_T(::EpicTransport::Server___c__DisplayClass16_0*);
DEFINE_IL2CPP_CLASS(::EpicTransport::Server*, "EpicTransport", "Server");
DEFINE_IL2CPP_CLASS(::EpicTransport::Server___c__DisplayClass16_0*, "EpicTransport", "Server/<>c__DisplayClass16_0");
// Dependencies System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Server/<>c__DisplayClass16_0
class CORDL_TYPE Server___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field transport, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::EpicTransport::EosTransport>  transport;

static inline ::EpicTransport::Server___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <CreateServer>b__0, addr 0x1806310c0, size 0x30, virtual false, abstract: false, final false
inline void _CreateServer_b__0(int32_t  id) ;

/// @brief Method <CreateServer>b__1, addr 0x1806310f0, size 0x30, virtual false, abstract: false, final false
inline void _CreateServer_b__1(int32_t  id) ;

/// @brief Method <CreateServer>b__2, addr 0x180631120, size 0x80, virtual false, abstract: false, final false
inline void _CreateServer_b__2(int32_t  id, ::ArrayW<uint8_t>  data, int32_t  channel) ;

/// @brief Method <CreateServer>b__3, addr 0x18158ea90, size 0x70, virtual false, abstract: false, final false
inline void _CreateServer_b__3(int32_t  id, ::System::Exception*  exception) ;

constexpr ::UnityW<::EpicTransport::EosTransport> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::EpicTransport::EosTransport>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_transport(::UnityW<::EpicTransport::EosTransport>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Server___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Server___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Server___c__DisplayClass16_0(Server___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Server___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Server___c__DisplayClass16_0(Server___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19057};

/// @brief Field transport, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::EpicTransport::EosTransport>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Server___c__DisplayClass16_0, ___transport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Server___c__DisplayClass16_0) == 0x18, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies EpicTransport.Common
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Server
class CORDL_TYPE Server : public ::EpicTransport::Common {
public:
// Declarations
using __c__DisplayClass16_0 = ::EpicTransport::Server___c__DisplayClass16_0;

 __declspec(property(get=get_NextConnectionId)) int32_t  NextConnectionId;

/// @brief Field OnConnected, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action_1<int32_t>*  OnConnected;

/// @brief Field OnDisconnected, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action_1<int32_t>*  OnDisconnected;

/// @brief Field OnReceivedData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedData, put=__cordl_internal_set_OnReceivedData)) ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  OnReceivedData;

/// @brief Field OnReceivedError, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReceivedError, put=__cordl_internal_set_OnReceivedError)) ::System::Action_2<int32_t,::System::Exception*>*  OnReceivedError;

/// @brief Field epicToMirrorIds, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicToMirrorIds, put=__cordl_internal_set_epicToMirrorIds)) ::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>*  epicToMirrorIds;

/// @brief Field epicToSocketIds, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicToSocketIds, put=__cordl_internal_set_epicToSocketIds)) ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>*  epicToSocketIds;

/// @brief Field maxConnections, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConnections, put=__cordl_internal_set_maxConnections)) int32_t  maxConnections;

/// @brief Field nextConnectionID, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextConnectionID, put=__cordl_internal_set_nextConnectionID)) int32_t  nextConnectionID;

/// @brief Method CreateServer, addr 0x181589b70, size 0x370, virtual false, abstract: false, final false
static inline ::EpicTransport::Server* CreateServer(::EpicTransport::EosTransport*  transport, int32_t  maxConnections) ;

/// @brief Method Disconnect, addr 0x181589ee0, size 0x150, virtual false, abstract: false, final false
inline void Disconnect(int32_t  connectionId) ;

/// @brief Method DisposeNodeQuiet, addr 0x18158a030, size 0x300, virtual false, abstract: false, final false
inline void DisposeNodeQuiet() ;

/// @brief Method GetActiveConnectionIds, addr 0x18158a330, size 0x240, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* GetActiveConnectionIds() ;

static inline ::EpicTransport::Server* New_ctor(::EpicTransport::EosTransport*  transport, int32_t  maxConnections) ;

/// @brief Method OnConnectionFailed, addr 0x18158a570, size 0xd0, virtual true, abstract: false, final false
inline void OnConnectionFailed(::Epic::OnlineServices::ProductUserId*  remoteId) ;

/// @brief Method OnNewConnection, addr 0x18158a640, size 0x300, virtual true, abstract: false, final false
inline void OnNewConnection(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  result) ;

/// @brief Method OnReceiveData, addr 0x18158a940, size 0x1a0, virtual true, abstract: false, final false
inline void OnReceiveData(::ArrayW<uint8_t>  data, ::Epic::OnlineServices::ProductUserId*  clientUserId, int32_t  channel) ;

/// @brief Method OnReceiveInternalData, addr 0x18158aae0, size 0x300, virtual true, abstract: false, final false
inline void OnReceiveInternalData(::EpicTransport::Common_InternalMessages  type, ::Epic::OnlineServices::ProductUserId*  clientUserId, ::Epic::OnlineServices::P2P::SocketId  socketId) ;

/// @brief Method SeedNextConnectionId, addr 0x18158ade0, size 0x20, virtual false, abstract: false, final false
inline void SeedNextConnectionId(int32_t  id) ;

/// @brief Method SendAll, addr 0x18158ae00, size 0x160, virtual false, abstract: false, final false
inline void SendAll(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method ServerGetClientAddress, addr 0x18158af60, size 0x100, virtual false, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method Shutdown, addr 0x18158b060, size 0x350, virtual false, abstract: false, final false
inline void Shutdown() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>* const& __cordl_internal_get_OnReceivedData() const;

constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*& __cordl_internal_get_OnReceivedData() ;

constexpr ::System::Action_2<int32_t,::System::Exception*>* const& __cordl_internal_get_OnReceivedError() const;

constexpr ::System::Action_2<int32_t,::System::Exception*>*& __cordl_internal_get_OnReceivedError() ;

constexpr ::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>* const& __cordl_internal_get_epicToMirrorIds() const;

constexpr ::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>*& __cordl_internal_get_epicToMirrorIds() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>* const& __cordl_internal_get_epicToSocketIds() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>*& __cordl_internal_get_epicToSocketIds() ;

constexpr int32_t const& __cordl_internal_get_maxConnections() const;

constexpr int32_t& __cordl_internal_get_maxConnections() ;

constexpr int32_t const& __cordl_internal_get_nextConnectionID() const;

constexpr int32_t& __cordl_internal_get_nextConnectionID() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReceivedError(::System::Action_2<int32_t,::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_epicToMirrorIds(::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>*  value) ;

constexpr void __cordl_internal_set_epicToSocketIds(::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>*  value) ;

constexpr void __cordl_internal_set_maxConnections(int32_t  value) ;

constexpr void __cordl_internal_set_nextConnectionID(int32_t  value) ;

/// @brief Method .ctor, addr 0x18158b3b0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::EpicTransport::EosTransport*  transport, int32_t  maxConnections) ;

/// @brief Method add_OnConnected, addr 0x18158b450, size 0xa0, virtual false, abstract: false, final false
inline void add_OnConnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_OnDisconnected, addr 0x18158b4f0, size 0xa0, virtual false, abstract: false, final false
inline void add_OnDisconnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_OnReceivedData, addr 0x18158b590, size 0xa0, virtual false, abstract: false, final false
inline void add_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method add_OnReceivedError, addr 0x18158b630, size 0xa0, virtual false, abstract: false, final false
inline void add_OnReceivedError(::System::Action_2<int32_t,::System::Exception*>*  value) ;

/// @brief Method get_NextConnectionId, addr 0x1803b2d50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NextConnectionId() ;

/// @brief Method remove_OnConnected, addr 0x18158b6d0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnConnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_OnDisconnected, addr 0x18158b770, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnDisconnected(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_OnReceivedData, addr 0x18158b810, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value) ;

/// @brief Method remove_OnReceivedError, addr 0x18158b8b0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnReceivedError(::System::Action_2<int32_t,::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Server() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Server", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Server(Server && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Server", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Server(Server const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19058};

/// @brief Field OnConnected, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnConnected;

/// @brief Field OnReceivedData, offset: 0x88, size: 0x8, def value: None
 ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  ___OnReceivedData;

/// @brief Field OnDisconnected, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnDisconnected;

/// @brief Field OnReceivedError, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<int32_t,::System::Exception*>*  ___OnReceivedError;

/// @brief Field epicToMirrorIds, offset: 0xa0, size: 0x8, def value: None
 ::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>*  ___epicToMirrorIds;

/// @brief Field epicToSocketIds, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>*  ___epicToSocketIds;

/// @brief Field maxConnections, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___maxConnections;

/// @brief Field nextConnectionID, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___nextConnectionID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Server, ___OnConnected) == 0x80, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___OnReceivedData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___OnDisconnected) == 0x90, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___OnReceivedError) == 0x98, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___epicToMirrorIds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___epicToSocketIds) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___maxConnections) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Server, ___nextConnectionID) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Server) == 0xb8, "Size mismatch!");

} // namespace end def EpicTransport
