#pragma once
// IWYU pragma private; include "Mirror/TelepathyTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelepathyTransport)
namespace Mirror {
class PortTransport;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Uri;
}
namespace Telepathy {
class Client;
}
namespace Telepathy {
class Server;
}
// Forward declare root types
namespace Mirror {
class TelepathyTransport;
}
// Write type traits
MARK_REF_T(::Mirror::TelepathyTransport*);
DEFINE_IL2CPP_CLASS(::Mirror::TelepathyTransport*, "Mirror", "TelepathyTransport");
// Dependencies Mirror.Transport
namespace Mirror {
// Is value type: false
// CS Name: Mirror.TelepathyTransport
class CORDL_TYPE TelepathyTransport : public ::Mirror::Transport {
public:
// Declarations
/// @brief Field NoDelay, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_NoDelay, put=__cordl_internal_set_NoDelay)) bool  NoDelay;

 __declspec(property(get=get_Port, put=set_Port)) uint16_t  Port;

/// @brief Field ReceiveTimeout, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceiveTimeout, put=__cordl_internal_set_ReceiveTimeout)) int32_t  ReceiveTimeout;

/// @brief Field SendTimeout, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendTimeout, put=__cordl_internal_set_SendTimeout)) int32_t  SendTimeout;

/// @brief Field client, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Telepathy::Client*  client;

/// @brief Field clientMaxMessageSize, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientMaxMessageSize, put=__cordl_internal_set_clientMaxMessageSize)) int32_t  clientMaxMessageSize;

/// @brief Field clientMaxReceivesPerTick, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientMaxReceivesPerTick, put=__cordl_internal_set_clientMaxReceivesPerTick)) int32_t  clientMaxReceivesPerTick;

/// @brief Field clientReceiveQueueLimit, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientReceiveQueueLimit, put=__cordl_internal_set_clientReceiveQueueLimit)) int32_t  clientReceiveQueueLimit;

/// @brief Field clientSendQueueLimit, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientSendQueueLimit, put=__cordl_internal_set_clientSendQueueLimit)) int32_t  clientSendQueueLimit;

/// @brief Field enabledCheck, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enabledCheck, put=__cordl_internal_set_enabledCheck)) ::System::Func_1<bool>*  enabledCheck;

/// @brief Field port, offset 0x70, size 0x2 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) uint16_t  port;

/// @brief Field server, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::Telepathy::Server*  server;

/// @brief Field serverMaxMessageSize, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverMaxMessageSize, put=__cordl_internal_set_serverMaxMessageSize)) int32_t  serverMaxMessageSize;

/// @brief Field serverMaxReceivesPerTick, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverMaxReceivesPerTick, put=__cordl_internal_set_serverMaxReceivesPerTick)) int32_t  serverMaxReceivesPerTick;

/// @brief Field serverReceiveQueueLimitPerConnection, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverReceiveQueueLimitPerConnection, put=__cordl_internal_set_serverReceiveQueueLimitPerConnection)) int32_t  serverReceiveQueueLimitPerConnection;

/// @brief Field serverSendQueueLimitPerConnection, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverSendQueueLimitPerConnection, put=__cordl_internal_set_serverSendQueueLimitPerConnection)) int32_t  serverSendQueueLimitPerConnection;

/// @brief Convert operator to "::Mirror::PortTransport"
constexpr operator  ::Mirror::PortTransport*() noexcept;

/// @brief Method Available, addr 0x180c3e620, size 0x690, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x18158c680, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientConnect, addr 0x18158c7e0, size 0x50, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x18158c830, size 0xe0, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x18158c910, size 0x20, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x18158c930, size 0x60, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x18158c990, size 0x40, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientSend, addr 0x18158c9d0, size 0x70, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method CreateClient, addr 0x18158ca40, size 0x190, virtual false, abstract: false, final false
inline void CreateClient() ;

/// @brief Method GetMaxPacketSize, addr 0x180371740, size 0x10, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

static inline ::Mirror::TelepathyTransport* New_ctor() ;

/// @brief Method ServerActive, addr 0x18158cbd0, size 0x20, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x18158cbf0, size 0x20, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x18158cc10, size 0x40, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x18158cc50, size 0x30, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerSend, addr 0x18158cc80, size 0x80, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x18158cd00, size 0x1b0, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x18158ceb0, size 0x40, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x18158cef0, size 0x70, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x18158cf60, size 0x80, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method ToString, addr 0x18158cfe0, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method <Awake>b__19_0, addr 0x1802dc4d0, size 0x10, virtual false, abstract: false, final false
inline bool _Awake_b__19_0() ;

/// @brief Method <CreateClient>b__21_0, addr 0x1815880d0, size 0x30, virtual false, abstract: false, final false
inline void _CreateClient_b__21_0() ;

/// @brief Method <CreateClient>b__21_1, addr 0x18158c400, size 0x40, virtual false, abstract: false, final false
inline void _CreateClient_b__21_1(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method <CreateClient>b__21_2, addr 0x18158d0d0, size 0x20, virtual false, abstract: false, final false
inline void _CreateClient_b__21_2() ;

/// @brief Method <ServerStart>b__30_0, addr 0x1803085a0, size 0x30, virtual false, abstract: false, final false
inline void _ServerStart_b__30_0(int32_t  connectionId) ;

/// @brief Method <ServerStart>b__30_1, addr 0x18158c4b0, size 0x40, virtual false, abstract: false, final false
inline void _ServerStart_b__30_1(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method <ServerStart>b__30_2, addr 0x181588210, size 0x30, virtual false, abstract: false, final false
inline void _ServerStart_b__30_2(int32_t  connectionId) ;

constexpr bool const& __cordl_internal_get_NoDelay() const;

constexpr bool& __cordl_internal_get_NoDelay() ;

constexpr int32_t const& __cordl_internal_get_ReceiveTimeout() const;

constexpr int32_t& __cordl_internal_get_ReceiveTimeout() ;

constexpr int32_t const& __cordl_internal_get_SendTimeout() const;

constexpr int32_t& __cordl_internal_get_SendTimeout() ;

constexpr ::Telepathy::Client* const& __cordl_internal_get_client() const;

constexpr ::Telepathy::Client*& __cordl_internal_get_client() ;

constexpr int32_t const& __cordl_internal_get_clientMaxMessageSize() const;

constexpr int32_t& __cordl_internal_get_clientMaxMessageSize() ;

constexpr int32_t const& __cordl_internal_get_clientMaxReceivesPerTick() const;

constexpr int32_t& __cordl_internal_get_clientMaxReceivesPerTick() ;

constexpr int32_t const& __cordl_internal_get_clientReceiveQueueLimit() const;

constexpr int32_t& __cordl_internal_get_clientReceiveQueueLimit() ;

constexpr int32_t const& __cordl_internal_get_clientSendQueueLimit() const;

constexpr int32_t& __cordl_internal_get_clientSendQueueLimit() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_enabledCheck() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_enabledCheck() ;

constexpr uint16_t const& __cordl_internal_get_port() const;

constexpr uint16_t& __cordl_internal_get_port() ;

constexpr ::Telepathy::Server* const& __cordl_internal_get_server() const;

constexpr ::Telepathy::Server*& __cordl_internal_get_server() ;

constexpr int32_t const& __cordl_internal_get_serverMaxMessageSize() const;

constexpr int32_t& __cordl_internal_get_serverMaxMessageSize() ;

constexpr int32_t const& __cordl_internal_get_serverMaxReceivesPerTick() const;

constexpr int32_t& __cordl_internal_get_serverMaxReceivesPerTick() ;

constexpr int32_t const& __cordl_internal_get_serverReceiveQueueLimitPerConnection() const;

constexpr int32_t& __cordl_internal_get_serverReceiveQueueLimitPerConnection() ;

constexpr int32_t const& __cordl_internal_get_serverSendQueueLimitPerConnection() const;

constexpr int32_t& __cordl_internal_get_serverSendQueueLimitPerConnection() ;

constexpr void __cordl_internal_set_NoDelay(bool  value) ;

constexpr void __cordl_internal_set_ReceiveTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_SendTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_client(::Telepathy::Client*  value) ;

constexpr void __cordl_internal_set_clientMaxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_clientMaxReceivesPerTick(int32_t  value) ;

constexpr void __cordl_internal_set_clientReceiveQueueLimit(int32_t  value) ;

constexpr void __cordl_internal_set_clientSendQueueLimit(int32_t  value) ;

constexpr void __cordl_internal_set_enabledCheck(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_port(uint16_t  value) ;

constexpr void __cordl_internal_set_server(::Telepathy::Server*  value) ;

constexpr void __cordl_internal_set_serverMaxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_serverMaxReceivesPerTick(int32_t  value) ;

constexpr void __cordl_internal_set_serverReceiveQueueLimitPerConnection(int32_t  value) ;

constexpr void __cordl_internal_set_serverSendQueueLimitPerConnection(int32_t  value) ;

/// @brief Method .ctor, addr 0x18158d0f0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Port, addr 0x181588300, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_Port() ;

/// @brief Convert to "::Mirror::PortTransport"
constexpr ::Mirror::PortTransport* i___Mirror__PortTransport() noexcept;

/// @brief Method set_Port, addr 0x181588310, size 0x10, virtual true, abstract: false, final true
inline void set_Port(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TelepathyTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TelepathyTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TelepathyTransport(TelepathyTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TelepathyTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TelepathyTransport(TelepathyTransport const& ) = delete;

/// @brief Field Scheme offset 0xffffffff size 0x8
static constexpr ::ConstString  Scheme{u"tcp4"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19034};

/// @brief Field port, offset: 0x70, size: 0x2, def value: None
 uint16_t  ___port;

/// @brief Field NoDelay, offset: 0x72, size: 0x1, def value: None
 bool  ___NoDelay;

/// @brief Field SendTimeout, offset: 0x74, size: 0x4, def value: None
 int32_t  ___SendTimeout;

/// @brief Field ReceiveTimeout, offset: 0x78, size: 0x4, def value: None
 int32_t  ___ReceiveTimeout;

/// @brief Field serverMaxMessageSize, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___serverMaxMessageSize;

/// @brief Field serverMaxReceivesPerTick, offset: 0x80, size: 0x4, def value: None
 int32_t  ___serverMaxReceivesPerTick;

/// @brief Field serverSendQueueLimitPerConnection, offset: 0x84, size: 0x4, def value: None
 int32_t  ___serverSendQueueLimitPerConnection;

/// @brief Field serverReceiveQueueLimitPerConnection, offset: 0x88, size: 0x4, def value: None
 int32_t  ___serverReceiveQueueLimitPerConnection;

/// @brief Field clientMaxMessageSize, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___clientMaxMessageSize;

/// @brief Field clientMaxReceivesPerTick, offset: 0x90, size: 0x4, def value: None
 int32_t  ___clientMaxReceivesPerTick;

/// @brief Field clientSendQueueLimit, offset: 0x94, size: 0x4, def value: None
 int32_t  ___clientSendQueueLimit;

/// @brief Field clientReceiveQueueLimit, offset: 0x98, size: 0x4, def value: None
 int32_t  ___clientReceiveQueueLimit;

/// @brief Field client, offset: 0xa0, size: 0x8, def value: None
 ::Telepathy::Client*  ___client;

/// @brief Field server, offset: 0xa8, size: 0x8, def value: None
 ::Telepathy::Server*  ___server;

/// @brief Field enabledCheck, offset: 0xb0, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___enabledCheck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TelepathyTransport, ___port) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___NoDelay) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___SendTimeout) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___ReceiveTimeout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___serverMaxMessageSize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___serverMaxReceivesPerTick) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___serverSendQueueLimitPerConnection) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___serverReceiveQueueLimitPerConnection) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___clientMaxMessageSize) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___clientMaxReceivesPerTick) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___clientSendQueueLimit) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___clientReceiveQueueLimit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___client) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___server) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::TelepathyTransport, ___enabledCheck) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Mirror::TelepathyTransport) == 0xb8, "Size mismatch!");

} // namespace end def Mirror
