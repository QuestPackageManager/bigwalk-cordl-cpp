#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/WebSocketClientStandAlone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__SimpleWebClient_def.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketClientStandAlone)
namespace Mirror::SimpleWeb {
class ClientHandshake;
}
namespace Mirror::SimpleWeb {
class ClientSslHelper;
}
namespace Mirror::SimpleWeb {
class Connection;
}
namespace Mirror::SimpleWeb {
struct TcpConfig;
}
namespace Mirror::SimpleWeb {
class WebSocketClientStandAlone___c__DisplayClass5_0;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class WebSocketClientStandAlone;
}
namespace Mirror::SimpleWeb {
class WebSocketClientStandAlone___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::WebSocketClientStandAlone*);
MARK_REF_T(::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::WebSocketClientStandAlone*, "Mirror.SimpleWeb", "WebSocketClientStandAlone");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*, "Mirror.SimpleWeb", "WebSocketClientStandAlone/<>c__DisplayClass5_0");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0
class CORDL_TYPE WebSocketClientStandAlone___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Mirror::SimpleWeb::WebSocketClientStandAlone*  __4__this;

/// @brief Field serverAddress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverAddress, put=__cordl_internal_set_serverAddress)) ::System::Uri*  serverAddress;

static inline ::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <Connect>b__0, addr 0x181ad6200, size 0x30, virtual false, abstract: false, final false
inline void _Connect_b__0() ;

constexpr ::Mirror::SimpleWeb::WebSocketClientStandAlone* const& __cordl_internal_get___4__this() const;

constexpr ::Mirror::SimpleWeb::WebSocketClientStandAlone*& __cordl_internal_get___4__this() ;

constexpr ::System::Uri* const& __cordl_internal_get_serverAddress() const;

constexpr ::System::Uri*& __cordl_internal_get_serverAddress() ;

constexpr void __cordl_internal_set___4__this(::Mirror::SimpleWeb::WebSocketClientStandAlone*  value) ;

constexpr void __cordl_internal_set_serverAddress(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketClientStandAlone___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketClientStandAlone___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketClientStandAlone___c__DisplayClass5_0(WebSocketClientStandAlone___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketClientStandAlone___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketClientStandAlone___c__DisplayClass5_0(WebSocketClientStandAlone___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20514};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SimpleWeb::WebSocketClientStandAlone*  _____4__this;

/// @brief Field serverAddress, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ___serverAddress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0, ___serverAddress) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies Mirror.SimpleWeb.SimpleWebClient, Mirror.SimpleWeb.TcpConfig
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.WebSocketClientStandAlone
class CORDL_TYPE WebSocketClientStandAlone : public ::Mirror::SimpleWeb::SimpleWebClient {
public:
// Declarations
using __c__DisplayClass5_0 = ::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0;

/// @brief Field conn, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::SimpleWeb::Connection*  conn;

/// @brief Field handshake, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_handshake, put=__cordl_internal_set_handshake)) ::Mirror::SimpleWeb::ClientHandshake*  handshake;

/// @brief Field sslHelper, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sslHelper, put=__cordl_internal_set_sslHelper)) ::Mirror::SimpleWeb::ClientSslHelper*  sslHelper;

/// @brief Field tcpConfig, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_tcpConfig, put=__cordl_internal_set_tcpConfig)) ::Mirror::SimpleWeb::TcpConfig  tcpConfig;

/// @brief Method AfterConnectionDisposed, addr 0x181ad6330, size 0x60, virtual false, abstract: false, final false
inline void AfterConnectionDisposed(::Mirror::SimpleWeb::Connection*  conn) ;

/// @brief Method Connect, addr 0x181ad67d0, size 0x170, virtual true, abstract: false, final false
inline void Connect(::System::Uri*  serverAddress) ;

/// @brief Method ConnectAndReceiveLoop, addr 0x181ad6390, size 0x440, virtual false, abstract: false, final false
inline void ConnectAndReceiveLoop(::System::Uri*  serverAddress) ;

/// @brief Method Disconnect, addr 0x181ad6940, size 0x30, virtual true, abstract: false, final false
inline void Disconnect() ;

static inline ::Mirror::SimpleWeb::WebSocketClientStandAlone* New_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig) ;

/// @brief Method Send, addr 0x181ad6970, size 0xe0, virtual true, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method <ConnectAndReceiveLoop>b__6_0, addr 0x181ad6a50, size 0x70, virtual false, abstract: false, final false
inline void _ConnectAndReceiveLoop_b__6_0() ;

constexpr ::Mirror::SimpleWeb::Connection* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::SimpleWeb::Connection*& __cordl_internal_get_conn() ;

constexpr ::Mirror::SimpleWeb::ClientHandshake* const& __cordl_internal_get_handshake() const;

constexpr ::Mirror::SimpleWeb::ClientHandshake*& __cordl_internal_get_handshake() ;

constexpr ::Mirror::SimpleWeb::ClientSslHelper* const& __cordl_internal_get_sslHelper() const;

constexpr ::Mirror::SimpleWeb::ClientSslHelper*& __cordl_internal_get_sslHelper() ;

constexpr ::Mirror::SimpleWeb::TcpConfig const& __cordl_internal_get_tcpConfig() const;

constexpr ::Mirror::SimpleWeb::TcpConfig& __cordl_internal_get_tcpConfig() ;

constexpr void __cordl_internal_set_conn(::Mirror::SimpleWeb::Connection*  value) ;

constexpr void __cordl_internal_set_handshake(::Mirror::SimpleWeb::ClientHandshake*  value) ;

constexpr void __cordl_internal_set_sslHelper(::Mirror::SimpleWeb::ClientSslHelper*  value) ;

constexpr void __cordl_internal_set_tcpConfig(::Mirror::SimpleWeb::TcpConfig  value) ;

/// @brief Method .ctor, addr 0x181ad6ac0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketClientStandAlone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketClientStandAlone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketClientStandAlone(WebSocketClientStandAlone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketClientStandAlone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketClientStandAlone(WebSocketClientStandAlone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20515};

/// @brief Field sslHelper, offset: 0x50, size: 0x8, def value: None
 ::Mirror::SimpleWeb::ClientSslHelper*  ___sslHelper;

/// @brief Field handshake, offset: 0x58, size: 0x8, def value: None
 ::Mirror::SimpleWeb::ClientHandshake*  ___handshake;

/// @brief Field tcpConfig, offset: 0x60, size: 0xc, def value: None
 ::Mirror::SimpleWeb::TcpConfig  ___tcpConfig;

/// @brief Field conn, offset: 0x70, size: 0x8, def value: None
 ::Mirror::SimpleWeb::Connection*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientStandAlone, ___sslHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientStandAlone, ___handshake) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientStandAlone, ___tcpConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientStandAlone, ___conn) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::WebSocketClientStandAlone) == 0x78, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
