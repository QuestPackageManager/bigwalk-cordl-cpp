#pragma once
// IWYU pragma private; include "kcp2k/KcpServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
#include "kcp2k/zzzz__KcpServerConnection_def.hpp"
CORDL_MODULE_EXPORT(KcpServer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace kcp2k {
struct ErrorCode;
}
namespace kcp2k {
struct KcpChannel;
}
namespace kcp2k {
class KcpConfig;
}
namespace kcp2k {
struct KcpServerConnection;
}
namespace kcp2k {
class KcpServer___c__DisplayClass18_0;
}
// Forward declare root types
namespace kcp2k {
class KcpServer;
}
namespace kcp2k {
class KcpServer___c__DisplayClass18_0;
}
// Write type traits
MARK_REF_T(::kcp2k::KcpServer*);
MARK_REF_T(::kcp2k::KcpServer___c__DisplayClass18_0*);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpServer*, "kcp2k", "KcpServer");
DEFINE_IL2CPP_CLASS(::kcp2k::KcpServer___c__DisplayClass18_0*, "kcp2k", "KcpServer/<>c__DisplayClass18_0");
// Dependencies System.Object, kcp2k.KcpServerConnection
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpServer/<>c__DisplayClass18_0
class CORDL_TYPE KcpServer___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::kcp2k::KcpServer*  __4__this;

/// @brief Field connection, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_connection, put=__cordl_internal_set_connection)) ::kcp2k::KcpServerConnection  connection;

/// @brief Field connectionId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionId, put=__cordl_internal_set_connectionId)) int32_t  connectionId;

static inline ::kcp2k::KcpServer___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <CreateConnection>b__0, addr 0x1814531a0, size 0x50, virtual false, abstract: false, final false
inline void _CreateConnection_b__0(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method <CreateConnection>g__OnAuthenticatedWrap|1, addr 0x1814531f0, size 0x150, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnAuthenticatedWrap_1() ;

/// @brief Method <CreateConnection>g__OnDataWrap|2, addr 0x181453340, size 0x50, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnDataWrap_2(::System::ArraySegment_1<uint8_t>  message, ::kcp2k::KcpChannel  channel) ;

/// @brief Method <CreateConnection>g__OnDisconnectedWrap|3, addr 0x181453390, size 0xe0, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnDisconnectedWrap_3() ;

/// @brief Method <CreateConnection>g__OnErrorWrap|4, addr 0x181453470, size 0x50, virtual false, abstract: false, final false
inline void _CreateConnection_g__OnErrorWrap_4(::kcp2k::ErrorCode  error, ::StringW  reason) ;

constexpr ::kcp2k::KcpServer* const& __cordl_internal_get___4__this() const;

constexpr ::kcp2k::KcpServer*& __cordl_internal_get___4__this() ;

constexpr ::kcp2k::KcpServerConnection const& __cordl_internal_get_connection() const;

constexpr ::kcp2k::KcpServerConnection& __cordl_internal_get_connection() ;

constexpr int32_t const& __cordl_internal_get_connectionId() const;

constexpr int32_t& __cordl_internal_get_connectionId() ;

constexpr void __cordl_internal_set___4__this(::kcp2k::KcpServer*  value) ;

constexpr void __cordl_internal_set_connection(::kcp2k::KcpServerConnection  value) ;

constexpr void __cordl_internal_set_connectionId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KcpServer___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpServer___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpServer___c__DisplayClass18_0(KcpServer___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpServer___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpServer___c__DisplayClass18_0(KcpServer___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20874};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::kcp2k::KcpServer*  _____4__this;

/// @brief Field connectionId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___connectionId;

/// @brief Field connection, offset: 0x20, size: 0x10, def value: None
 ::kcp2k::KcpServerConnection  ___connection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpServer___c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer___c__DisplayClass18_0, ___connectionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer___c__DisplayClass18_0, ___connection) == 0x20, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpServer___c__DisplayClass18_0) == 0x30, "Size mismatch!");

} // namespace end def kcp2k
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpServer
class CORDL_TYPE KcpServer : public ::System::Object {
public:
// Declarations
using __c__DisplayClass18_0 = ::kcp2k::KcpServer___c__DisplayClass18_0;

/// @brief Field OnConnected, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action_1<int32_t>*  OnConnected;

/// @brief Field OnData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnData, put=__cordl_internal_set_OnData)) ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData;

/// @brief Field OnDisconnected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action_1<int32_t>*  OnDisconnected;

/// @brief Field OnError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnError, put=__cordl_internal_set_OnError)) ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  OnError;

/// @brief Field config, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::kcp2k::KcpConfig*  config;

/// @brief Field connections, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>*  connections;

/// @brief Field connectionsToRemove, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionsToRemove, put=__cordl_internal_set_connectionsToRemove)) ::System::Collections::Generic::HashSet_1<int32_t>*  connectionsToRemove;

/// @brief Field newClientEP, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_newClientEP, put=__cordl_internal_set_newClientEP)) ::System::Net::EndPoint*  newClientEP;

/// @brief Field rawReceiveBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawReceiveBuffer, put=__cordl_internal_set_rawReceiveBuffer)) ::ArrayW<uint8_t>  rawReceiveBuffer;

/// @brief Field socket, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_socket, put=__cordl_internal_set_socket)) ::System::Net::Sockets::Socket*  socket;

/// @brief Method CreateConnection, addr 0x18144fc90, size 0x260, virtual true, abstract: false, final false
inline ::kcp2k::KcpServerConnection CreateConnection(int32_t  connectionId) ;

/// @brief Method CreateServerSocket, addr 0x18144fef0, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Net::Sockets::Socket* CreateServerSocket(bool  DualMode, uint16_t  port) ;

/// @brief Method Disconnect, addr 0x181450090, size 0x50, virtual false, abstract: false, final false
inline void Disconnect(int32_t  connectionId) ;

/// @brief Method GetClientEndPoint, addr 0x1814500e0, size 0x90, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* GetClientEndPoint(int32_t  connectionId) ;

/// @brief Method IsActive, addr 0x180d8de60, size 0x1780, virtual true, abstract: false, final false
inline bool IsActive() ;

static inline ::kcp2k::KcpServer* New_ctor(::System::Action_1<int32_t>*  OnConnected, ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action_1<int32_t>*  OnDisconnected, ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config) ;

/// @brief Method ProcessMessage, addr 0x181450170, size 0xf0, virtual false, abstract: false, final false
inline void ProcessMessage(::System::ArraySegment_1<uint8_t>  segment, int32_t  connectionId) ;

/// @brief Method RawReceiveFrom, addr 0x181450260, size 0xd0, virtual true, abstract: false, final false
inline bool RawReceiveFrom(::by_ref<::System::ArraySegment_1<uint8_t>>  segment, ::by_ref<int32_t>  connectionId) ;

/// @brief Method RawSend, addr 0x181450330, size 0x170, virtual true, abstract: false, final false
inline void RawSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Send, addr 0x1814504a0, size 0x70, virtual false, abstract: false, final false
inline void Send(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, ::kcp2k::KcpChannel  channel) ;

/// @brief Method Start, addr 0x181450510, size 0xc0, virtual true, abstract: false, final false
inline void Start(uint16_t  port) ;

/// @brief Method Stop, addr 0x1814505d0, size 0x40, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method Tick, addr 0x1814508f0, size 0x40, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TickIncoming, addr 0x181450610, size 0x250, virtual true, abstract: false, final false
inline void TickIncoming() ;

/// @brief Method TickOutgoing, addr 0x181450860, size 0x90, virtual true, abstract: false, final false
inline void TickOutgoing() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>* const& __cordl_internal_get_OnData() const;

constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*& __cordl_internal_get_OnData() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>* const& __cordl_internal_get_OnError() const;

constexpr ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*& __cordl_internal_get_OnError() ;

constexpr ::kcp2k::KcpConfig* const& __cordl_internal_get_config() const;

constexpr ::kcp2k::KcpConfig*& __cordl_internal_get_config() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>* const& __cordl_internal_get_connections() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>*& __cordl_internal_get_connections() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_connectionsToRemove() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_connectionsToRemove() ;

constexpr ::System::Net::EndPoint* const& __cordl_internal_get_newClientEP() const;

constexpr ::System::Net::EndPoint*& __cordl_internal_get_newClientEP() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rawReceiveBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rawReceiveBuffer() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_socket() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_socket() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnData(::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnError(::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  value) ;

constexpr void __cordl_internal_set_config(::kcp2k::KcpConfig*  value) ;

constexpr void __cordl_internal_set_connections(::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>*  value) ;

constexpr void __cordl_internal_set_connectionsToRemove(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_newClientEP(::System::Net::EndPoint*  value) ;

constexpr void __cordl_internal_set_rawReceiveBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_socket(::System::Net::Sockets::Socket*  value) ;

/// @brief Method .ctor, addr 0x181450930, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<int32_t>*  OnConnected, ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action_1<int32_t>*  OnDisconnected, ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KcpServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpServer(KcpServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpServer(KcpServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20875};

/// @brief Field OnConnected, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnConnected;

/// @brief Field OnData, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  ___OnData;

/// @brief Field OnDisconnected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnDisconnected;

/// @brief Field OnError, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  ___OnError;

/// @brief Field config, offset: 0x30, size: 0x8, def value: None
 ::kcp2k::KcpConfig*  ___config;

/// @brief Field socket, offset: 0x38, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___socket;

/// @brief Field newClientEP, offset: 0x40, size: 0x8, def value: None
 ::System::Net::EndPoint*  ___newClientEP;

/// @brief Field rawReceiveBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rawReceiveBuffer;

/// @brief Field connections, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>*  ___connections;

/// @brief Field connectionsToRemove, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___connectionsToRemove;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpServer, ___OnConnected) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___OnData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___OnDisconnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___OnError) == 0x28, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___config) == 0x30, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___socket) == 0x38, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___newClientEP) == 0x40, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___rawReceiveBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___connections) == 0x50, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServer, ___connectionsToRemove) == 0x58, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpServer) == 0x60, "Size mismatch!");

} // namespace end def kcp2k
