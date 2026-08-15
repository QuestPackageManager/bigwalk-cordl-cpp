#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__Log_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleWebTransport)
namespace Mirror::SimpleWeb {
struct Log_Levels;
}
namespace Mirror::SimpleWeb {
class SimpleWebClient;
}
namespace Mirror::SimpleWeb {
class SimpleWebServer;
}
namespace Mirror::SimpleWeb {
struct TcpConfig;
}
namespace Mirror {
class PortTransport;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Exception;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class SimpleWebTransport;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SimpleWebTransport*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SimpleWebTransport*, "Mirror.SimpleWeb", "SimpleWebTransport");
// Dependencies Mirror.SimpleWeb.Log::Levels, Mirror.Transport, System.Security.Authentication.SslProtocols
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SimpleWebTransport
class CORDL_TYPE SimpleWebTransport : public ::Mirror::Transport {
public:
// Declarations
/// @brief Field ClientUseDefaultPort, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClientUseDefaultPort, put=__cordl_internal_set_ClientUseDefaultPort)) bool  ClientUseDefaultPort;

 __declspec(property(get=get_LogLevels, put=set_LogLevels)) ::Mirror::SimpleWeb::Log_Levels  LogLevels;

 __declspec(property(get=get_Port, put=set_Port)) uint16_t  Port;

 __declspec(property(get=get_TcpConfig)) ::Mirror::SimpleWeb::TcpConfig  TcpConfig;

/// @brief Field _logLevels, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__logLevels, put=__cordl_internal_set__logLevels)) ::Mirror::SimpleWeb::Log_Levels  _logLevels;

/// @brief Field batchSend, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_batchSend, put=__cordl_internal_set_batchSend)) bool  batchSend;

/// @brief Field client, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Mirror::SimpleWeb::SimpleWebClient*  client;

/// @brief Field clientMaxMessagesPerTick, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientMaxMessagesPerTick, put=__cordl_internal_set_clientMaxMessagesPerTick)) int32_t  clientMaxMessagesPerTick;

/// @brief Field clientUseWss, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientUseWss, put=__cordl_internal_set_clientUseWss)) bool  clientUseWss;

/// @brief Field handshakeMaxSize, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_handshakeMaxSize, put=__cordl_internal_set_handshakeMaxSize)) int32_t  handshakeMaxSize;

/// @brief Field maxMessageSize, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMessageSize, put=__cordl_internal_set_maxMessageSize)) int32_t  maxMessageSize;

/// @brief Field noDelay, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_noDelay, put=__cordl_internal_set_noDelay)) bool  noDelay;

/// @brief Field port, offset 0x70, size 0x2 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) uint16_t  port;

/// @brief Field receiveTimeout, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_receiveTimeout, put=__cordl_internal_set_receiveTimeout)) int32_t  receiveTimeout;

/// @brief Field sendTimeout, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendTimeout, put=__cordl_internal_set_sendTimeout)) int32_t  sendTimeout;

/// @brief Field server, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::Mirror::SimpleWeb::SimpleWebServer*  server;

/// @brief Field serverMaxMessagesPerTick, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverMaxMessagesPerTick, put=__cordl_internal_set_serverMaxMessagesPerTick)) int32_t  serverMaxMessagesPerTick;

/// @brief Field sslCertJson, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_sslCertJson, put=__cordl_internal_set_sslCertJson)) ::StringW  sslCertJson;

/// @brief Field sslEnabled, offset 0x93, size 0x1 
 __declspec(property(get=__cordl_internal_get_sslEnabled, put=__cordl_internal_set_sslEnabled)) bool  sslEnabled;

/// @brief Field sslProtocols, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sslProtocols, put=__cordl_internal_set_sslProtocols)) ::System::Security::Authentication::SslProtocols  sslProtocols;

/// @brief Field waitBeforeSend, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitBeforeSend, put=__cordl_internal_set_waitBeforeSend)) bool  waitBeforeSend;

/// @brief Convert operator to "::Mirror::PortTransport"
constexpr operator  ::Mirror::PortTransport*() noexcept;

/// @brief Method Available, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x18158b950, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientConnect, addr 0x18158b9a0, size 0xb0, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  hostname) ;

/// @brief Method ClientConnect, addr 0x18158ba50, size 0x220, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x18158bc70, size 0x20, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x18158bc90, size 0x30, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x18158bcc0, size 0x20, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientSend, addr 0x18158bce0, size 0xc0, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetClientScheme, addr 0x18158bda0, size 0x30, virtual false, abstract: false, final false
inline ::StringW GetClientScheme() ;

/// @brief Method GetMaxPacketSize, addr 0x18051e7a0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method GetServerScheme, addr 0x18158bdd0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetServerScheme() ;

static inline ::Mirror::SimpleWeb::SimpleWebTransport* New_ctor() ;

/// @brief Method OnValidate, addr 0x18158b950, size 0x50, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ServerActive, addr 0x18158bdf0, size 0x20, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x18158be10, size 0x60, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x18158be70, size 0x20, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x18158be90, size 0x30, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerSend, addr 0x18158bec0, size 0xb0, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x18158bf70, size 0x2d0, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x18158c240, size 0x70, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x18158c2b0, size 0x80, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x18158c330, size 0x80, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method <ClientConnect>b__36_0, addr 0x18158c3b0, size 0x50, virtual false, abstract: false, final false
inline void _ClientConnect_b__36_0() ;

/// @brief Method <ClientConnect>b__36_1, addr 0x18158c400, size 0x40, virtual false, abstract: false, final false
inline void _ClientConnect_b__36_1(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method <ClientConnect>b__36_2, addr 0x18158c440, size 0x70, virtual false, abstract: false, final false
inline void _ClientConnect_b__36_2(::System::Exception*  e) ;

/// @brief Method <ServerStart>b__43_0, addr 0x18158c4b0, size 0x40, virtual false, abstract: false, final false
inline void _ServerStart_b__43_0(int32_t  connId, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method <ServerStart>b__43_1, addr 0x18158c4f0, size 0x60, virtual false, abstract: false, final false
inline void _ServerStart_b__43_1(int32_t  connId, ::System::Exception*  exception) ;

constexpr bool const& __cordl_internal_get_ClientUseDefaultPort() const;

constexpr bool& __cordl_internal_get_ClientUseDefaultPort() ;

constexpr ::Mirror::SimpleWeb::Log_Levels const& __cordl_internal_get__logLevels() const;

constexpr ::Mirror::SimpleWeb::Log_Levels& __cordl_internal_get__logLevels() ;

constexpr bool const& __cordl_internal_get_batchSend() const;

constexpr bool& __cordl_internal_get_batchSend() ;

constexpr ::Mirror::SimpleWeb::SimpleWebClient* const& __cordl_internal_get_client() const;

constexpr ::Mirror::SimpleWeb::SimpleWebClient*& __cordl_internal_get_client() ;

constexpr int32_t const& __cordl_internal_get_clientMaxMessagesPerTick() const;

constexpr int32_t& __cordl_internal_get_clientMaxMessagesPerTick() ;

constexpr bool const& __cordl_internal_get_clientUseWss() const;

constexpr bool& __cordl_internal_get_clientUseWss() ;

constexpr int32_t const& __cordl_internal_get_handshakeMaxSize() const;

constexpr int32_t& __cordl_internal_get_handshakeMaxSize() ;

constexpr int32_t const& __cordl_internal_get_maxMessageSize() const;

constexpr int32_t& __cordl_internal_get_maxMessageSize() ;

constexpr bool const& __cordl_internal_get_noDelay() const;

constexpr bool& __cordl_internal_get_noDelay() ;

constexpr uint16_t const& __cordl_internal_get_port() const;

constexpr uint16_t& __cordl_internal_get_port() ;

constexpr int32_t const& __cordl_internal_get_receiveTimeout() const;

constexpr int32_t& __cordl_internal_get_receiveTimeout() ;

constexpr int32_t const& __cordl_internal_get_sendTimeout() const;

constexpr int32_t& __cordl_internal_get_sendTimeout() ;

constexpr ::Mirror::SimpleWeb::SimpleWebServer* const& __cordl_internal_get_server() const;

constexpr ::Mirror::SimpleWeb::SimpleWebServer*& __cordl_internal_get_server() ;

constexpr int32_t const& __cordl_internal_get_serverMaxMessagesPerTick() const;

constexpr int32_t& __cordl_internal_get_serverMaxMessagesPerTick() ;

constexpr ::StringW const& __cordl_internal_get_sslCertJson() const;

constexpr ::StringW& __cordl_internal_get_sslCertJson() ;

constexpr bool const& __cordl_internal_get_sslEnabled() const;

constexpr bool& __cordl_internal_get_sslEnabled() ;

constexpr ::System::Security::Authentication::SslProtocols const& __cordl_internal_get_sslProtocols() const;

constexpr ::System::Security::Authentication::SslProtocols& __cordl_internal_get_sslProtocols() ;

constexpr bool const& __cordl_internal_get_waitBeforeSend() const;

constexpr bool& __cordl_internal_get_waitBeforeSend() ;

constexpr void __cordl_internal_set_ClientUseDefaultPort(bool  value) ;

constexpr void __cordl_internal_set__logLevels(::Mirror::SimpleWeb::Log_Levels  value) ;

constexpr void __cordl_internal_set_batchSend(bool  value) ;

constexpr void __cordl_internal_set_client(::Mirror::SimpleWeb::SimpleWebClient*  value) ;

constexpr void __cordl_internal_set_clientMaxMessagesPerTick(int32_t  value) ;

constexpr void __cordl_internal_set_clientUseWss(bool  value) ;

constexpr void __cordl_internal_set_handshakeMaxSize(int32_t  value) ;

constexpr void __cordl_internal_set_maxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_noDelay(bool  value) ;

constexpr void __cordl_internal_set_port(uint16_t  value) ;

constexpr void __cordl_internal_set_receiveTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_sendTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_server(::Mirror::SimpleWeb::SimpleWebServer*  value) ;

constexpr void __cordl_internal_set_serverMaxMessagesPerTick(int32_t  value) ;

constexpr void __cordl_internal_set_sslCertJson(::StringW  value) ;

constexpr void __cordl_internal_set_sslEnabled(bool  value) ;

constexpr void __cordl_internal_set_sslProtocols(::System::Security::Authentication::SslProtocols  value) ;

constexpr void __cordl_internal_set_waitBeforeSend(bool  value) ;

/// @brief Method .ctor, addr 0x18158c550, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LogLevels, addr 0x1804081d0, size 0x10, virtual false, abstract: false, final false
inline ::Mirror::SimpleWeb::Log_Levels get_LogLevels() ;

/// @brief Method get_Port, addr 0x181588300, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_Port() ;

/// @brief Method get_TcpConfig, addr 0x18158c5f0, size 0x40, virtual false, abstract: false, final false
inline ::Mirror::SimpleWeb::TcpConfig get_TcpConfig() ;

/// @brief Convert to "::Mirror::PortTransport"
constexpr ::Mirror::PortTransport* i___Mirror__PortTransport() noexcept;

/// @brief Method set_LogLevels, addr 0x18158c630, size 0x50, virtual false, abstract: false, final false
inline void set_LogLevels(::Mirror::SimpleWeb::Log_Levels  value) ;

/// @brief Method set_Port, addr 0x181588310, size 0x10, virtual true, abstract: false, final true
inline void set_Port(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleWebTransport(SimpleWebTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleWebTransport(SimpleWebTransport const& ) = delete;

/// @brief Field NormalScheme offset 0xffffffff size 0x8
static constexpr ::ConstString  NormalScheme{u"ws"};

/// @brief Field SecureScheme offset 0xffffffff size 0x8
static constexpr ::ConstString  SecureScheme{u"wss"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19036};

/// @brief Field port, offset: 0x70, size: 0x2, def value: None
 uint16_t  ___port;

/// @brief Field ClientUseDefaultPort, offset: 0x72, size: 0x1, def value: None
 bool  ___ClientUseDefaultPort;

/// @brief Field maxMessageSize, offset: 0x74, size: 0x4, def value: None
 int32_t  ___maxMessageSize;

/// @brief Field handshakeMaxSize, offset: 0x78, size: 0x4, def value: None
 int32_t  ___handshakeMaxSize;

/// @brief Field noDelay, offset: 0x7c, size: 0x1, def value: None
 bool  ___noDelay;

/// @brief Field sendTimeout, offset: 0x80, size: 0x4, def value: None
 int32_t  ___sendTimeout;

/// @brief Field receiveTimeout, offset: 0x84, size: 0x4, def value: None
 int32_t  ___receiveTimeout;

/// @brief Field serverMaxMessagesPerTick, offset: 0x88, size: 0x4, def value: None
 int32_t  ___serverMaxMessagesPerTick;

/// @brief Field clientMaxMessagesPerTick, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___clientMaxMessagesPerTick;

/// @brief Field batchSend, offset: 0x90, size: 0x1, def value: None
 bool  ___batchSend;

/// @brief Field waitBeforeSend, offset: 0x91, size: 0x1, def value: None
 bool  ___waitBeforeSend;

/// @brief Field clientUseWss, offset: 0x92, size: 0x1, def value: None
 bool  ___clientUseWss;

/// @brief Field sslEnabled, offset: 0x93, size: 0x1, def value: None
 bool  ___sslEnabled;

/// @brief Field sslCertJson, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___sslCertJson;

/// @brief Field sslProtocols, offset: 0xa0, size: 0x4, def value: None
 ::System::Security::Authentication::SslProtocols  ___sslProtocols;

/// @brief Field _logLevels, offset: 0xa4, size: 0x4, def value: None
 ::Mirror::SimpleWeb::Log_Levels  ____logLevels;

/// @brief Field client, offset: 0xa8, size: 0x8, def value: None
 ::Mirror::SimpleWeb::SimpleWebClient*  ___client;

/// @brief Field server, offset: 0xb0, size: 0x8, def value: None
 ::Mirror::SimpleWeb::SimpleWebServer*  ___server;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___port) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___ClientUseDefaultPort) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___maxMessageSize) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___handshakeMaxSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___noDelay) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___sendTimeout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___receiveTimeout) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___serverMaxMessagesPerTick) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___clientMaxMessagesPerTick) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___batchSend) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___waitBeforeSend) == 0x91, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___clientUseWss) == 0x92, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___sslEnabled) == 0x93, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___sslCertJson) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___sslProtocols) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ____logLevels) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___client) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebTransport, ___server) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::SimpleWebTransport) == 0xb8, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
