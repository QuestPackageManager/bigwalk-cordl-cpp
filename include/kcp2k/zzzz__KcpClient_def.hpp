#pragma once
// IWYU pragma private; include "kcp2k/KcpClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KcpClient)
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPoint;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
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
class KcpPeer;
}
// Forward declare root types
namespace kcp2k {
class KcpClient;
}
// Write type traits
MARK_REF_T(::kcp2k::KcpClient*);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpClient*, "kcp2k", "KcpClient");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpClient
class CORDL_TYPE KcpClient : public ::System::Object {
public:
// Declarations
/// @brief Field OnConnected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action*  OnConnected;

/// @brief Field OnData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnData, put=__cordl_internal_set_OnData)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData;

/// @brief Field OnDisconnected, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action*  OnDisconnected;

/// @brief Field OnError, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnError, put=__cordl_internal_set_OnError)) ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError;

/// @brief Field config, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::kcp2k::KcpConfig*  config;

/// @brief Field connected, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_connected, put=__cordl_internal_set_connected)) bool  connected;

/// @brief Field peer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_peer, put=__cordl_internal_set_peer)) ::kcp2k::KcpPeer*  peer;

/// @brief Field rawReceiveBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawReceiveBuffer, put=__cordl_internal_set_rawReceiveBuffer)) ::ArrayW<uint8_t>  rawReceiveBuffer;

/// @brief Field remoteEndPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteEndPoint, put=__cordl_internal_set_remoteEndPoint)) ::System::Net::EndPoint*  remoteEndPoint;

/// @brief Field socket, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_socket, put=__cordl_internal_set_socket)) ::System::Net::Sockets::Socket*  socket;

/// @brief Method Connect, addr 0x18144d620, size 0x390, virtual false, abstract: false, final false
inline void Connect(::StringW  address, uint16_t  port) ;

/// @brief Method Disconnect, addr 0x18144d9b0, size 0x20, virtual false, abstract: false, final false
inline void Disconnect() ;

static inline ::kcp2k::KcpClient* New_ctor(::System::Action*  OnConnected, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config) ;

/// @brief Method RawReceive, addr 0x18144d9d0, size 0xa0, virtual true, abstract: false, final false
inline bool RawReceive(::by_ref<::System::ArraySegment_1<uint8_t>>  segment) ;

/// @brief Method RawSend, addr 0x18144da70, size 0x80, virtual true, abstract: false, final false
inline void RawSend(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Send, addr 0x18144daf0, size 0x80, virtual false, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment, ::kcp2k::KcpChannel  channel) ;

/// @brief Method Tick, addr 0x18144dc20, size 0x40, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TickIncoming, addr 0x18144db70, size 0x90, virtual true, abstract: false, final false
inline void TickIncoming() ;

/// @brief Method TickOutgoing, addr 0x18144dc00, size 0x20, virtual true, abstract: false, final false
inline void TickOutgoing() ;

/// @brief Method <Connect>g__OnAuthenticatedWrap|11_0, addr 0x18144dc60, size 0x80, virtual false, abstract: false, final false
inline void _Connect_g__OnAuthenticatedWrap_11_0() ;

/// @brief Method <Connect>g__OnDisconnectedWrap|11_1, addr 0x18144dce0, size 0xc0, virtual false, abstract: false, final false
inline void _Connect_g__OnDisconnectedWrap_11_1() ;

constexpr ::System::Action* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>* const& __cordl_internal_get_OnData() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*& __cordl_internal_get_OnData() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>* const& __cordl_internal_get_OnError() const;

constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>*& __cordl_internal_get_OnError() ;

constexpr ::kcp2k::KcpConfig* const& __cordl_internal_get_config() const;

constexpr ::kcp2k::KcpConfig*& __cordl_internal_get_config() ;

constexpr bool const& __cordl_internal_get_connected() const;

constexpr bool& __cordl_internal_get_connected() ;

constexpr ::kcp2k::KcpPeer* const& __cordl_internal_get_peer() const;

constexpr ::kcp2k::KcpPeer*& __cordl_internal_get_peer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rawReceiveBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rawReceiveBuffer() ;

constexpr ::System::Net::EndPoint* const& __cordl_internal_get_remoteEndPoint() const;

constexpr ::System::Net::EndPoint*& __cordl_internal_get_remoteEndPoint() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_socket() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_socket() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnData(::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnError(::System::Action_2<::kcp2k::ErrorCode,::StringW>*  value) ;

constexpr void __cordl_internal_set_config(::kcp2k::KcpConfig*  value) ;

constexpr void __cordl_internal_set_connected(bool  value) ;

constexpr void __cordl_internal_set_peer(::kcp2k::KcpPeer*  value) ;

constexpr void __cordl_internal_set_rawReceiveBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_remoteEndPoint(::System::Net::EndPoint*  value) ;

constexpr void __cordl_internal_set_socket(::System::Net::Sockets::Socket*  value) ;

/// @brief Method .ctor, addr 0x18144dda0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  OnConnected, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KcpClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpClient(KcpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpClient(KcpClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20869};

/// @brief Field peer, offset: 0x10, size: 0x8, def value: None
 ::kcp2k::KcpPeer*  ___peer;

/// @brief Field socket, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___socket;

/// @brief Field remoteEndPoint, offset: 0x20, size: 0x8, def value: None
 ::System::Net::EndPoint*  ___remoteEndPoint;

/// @brief Field config, offset: 0x28, size: 0x8, def value: None
 ::kcp2k::KcpConfig*  ___config;

/// @brief Field rawReceiveBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rawReceiveBuffer;

/// @brief Field OnConnected, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnConnected;

/// @brief Field OnData, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  ___OnData;

/// @brief Field OnDisconnected, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnDisconnected;

/// @brief Field OnError, offset: 0x50, size: 0x8, def value: None
 ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  ___OnError;

/// @brief Field connected, offset: 0x58, size: 0x1, def value: None
 bool  ___connected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpClient, ___peer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___socket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___remoteEndPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___config) == 0x28, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___rawReceiveBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___OnConnected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___OnData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___OnDisconnected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___OnError) == 0x50, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpClient, ___connected) == 0x58, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpClient) == 0x60, "Size mismatch!");

} // namespace end def kcp2k
