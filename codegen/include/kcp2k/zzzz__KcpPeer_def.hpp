#pragma once
// IWYU pragma private; include "kcp2k/KcpPeer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
#include "kcp2k/zzzz__KcpState_def.hpp"
CORDL_MODULE_EXPORT(KcpPeer)
namespace System::Diagnostics {
class Stopwatch;
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
struct KcpHeader;
}
namespace kcp2k {
class Kcp;
}
// Forward declare root types
namespace kcp2k {
class KcpPeer;
}
// Write type traits
MARK_REF_T(::kcp2k::KcpPeer*);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpPeer*, "kcp2k", "KcpPeer");
// Dependencies System.Object, kcp2k.KcpState
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpPeer
class CORDL_TYPE KcpPeer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MaxReceiveRate)) uint32_t  MaxReceiveRate;

 __declspec(property(get=get_MaxSendRate)) uint32_t  MaxSendRate;

/// @brief Field OnAuthenticated, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAuthenticated, put=__cordl_internal_set_OnAuthenticated)) ::System::Action*  OnAuthenticated;

/// @brief Field OnData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnData, put=__cordl_internal_set_OnData)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData;

/// @brief Field OnDisconnected, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action*  OnDisconnected;

/// @brief Field OnError, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnError, put=__cordl_internal_set_OnError)) ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError;

/// @brief Field RawSend, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RawSend, put=__cordl_internal_set_RawSend)) ::System::Action_1<::System::ArraySegment_1<uint8_t>>*  RawSend;

 __declspec(property(get=get_ReceiveBufferCount)) int32_t  ReceiveBufferCount;

 __declspec(property(get=get_ReceiveQueueCount)) int32_t  ReceiveQueueCount;

 __declspec(property(get=get_SendBufferCount)) int32_t  SendBufferCount;

 __declspec(property(get=get_SendQueueCount)) int32_t  SendQueueCount;

/// @brief Field cookie, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_cookie, put=__cordl_internal_set_cookie)) uint32_t  cookie;

/// @brief Field kcp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_kcp, put=__cordl_internal_set_kcp)) ::kcp2k::Kcp*  kcp;

/// @brief Field kcpMessageBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_kcpMessageBuffer, put=__cordl_internal_set_kcpMessageBuffer)) ::ArrayW<uint8_t>  kcpMessageBuffer;

/// @brief Field kcpSendBuffer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_kcpSendBuffer, put=__cordl_internal_set_kcpSendBuffer)) ::ArrayW<uint8_t>  kcpSendBuffer;

/// @brief Field lastPingTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPingTime, put=__cordl_internal_set_lastPingTime)) uint32_t  lastPingTime;

/// @brief Field lastReceiveTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReceiveTime, put=__cordl_internal_set_lastReceiveTime)) uint32_t  lastReceiveTime;

/// @brief Field rawSendBuffer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawSendBuffer, put=__cordl_internal_set_rawSendBuffer)) ::ArrayW<uint8_t>  rawSendBuffer;

/// @brief Field receivedCookie, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_receivedCookie, put=__cordl_internal_set_receivedCookie)) ::ArrayW<uint8_t>  receivedCookie;

/// @brief Field reliableMax, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_reliableMax, put=__cordl_internal_set_reliableMax)) int32_t  reliableMax;

/// @brief Field state, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::kcp2k::KcpState  state;

/// @brief Field timeout, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) int32_t  timeout;

/// @brief Field unreliableMax, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_unreliableMax, put=__cordl_internal_set_unreliableMax)) int32_t  unreliableMax;

/// @brief Field watch, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_watch, put=__cordl_internal_set_watch)) ::System::Diagnostics::Stopwatch*  watch;

/// @brief Method Disconnect, addr 0x18144dea0, size 0xc0, virtual false, abstract: false, final false
inline void Disconnect() ;

/// @brief Method HandleChoked, addr 0x18144df60, size 0x2a0, virtual false, abstract: false, final false
inline void HandleChoked() ;

/// @brief Method HandleDeadLink, addr 0x18144e200, size 0x90, virtual false, abstract: false, final false
inline void HandleDeadLink() ;

/// @brief Method HandlePing, addr 0x18144e290, size 0x50, virtual false, abstract: false, final false
inline void HandlePing(uint32_t  time) ;

/// @brief Method HandleTimeout, addr 0x18144e2e0, size 0x90, virtual false, abstract: false, final false
inline void HandleTimeout(uint32_t  time) ;

static inline ::kcp2k::KcpPeer* New_ctor(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  output, ::System::Action*  OnAuthenticated, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config, uint32_t  cookie) ;

/// @brief Method OnRawInputReliable, addr 0x18144e370, size 0xf0, virtual false, abstract: false, final false
inline void OnRawInputReliable(::System::ArraySegment_1<uint8_t>  message) ;

/// @brief Method OnRawInputUnreliable, addr 0x18144e460, size 0xa0, virtual false, abstract: false, final false
inline void OnRawInputUnreliable(::System::ArraySegment_1<uint8_t>  message) ;

/// @brief Method RawInput, addr 0x18144e500, size 0x340, virtual false, abstract: false, final false
inline void RawInput(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method RawSendReliable, addr 0x18144e840, size 0xe0, virtual false, abstract: false, final false
inline void RawSendReliable(::ArrayW<uint8_t>  data, int32_t  length) ;

/// @brief Method ReceiveNextReliable, addr 0x18144e920, size 0x1e0, virtual false, abstract: false, final false
inline bool ReceiveNextReliable(::by_ref<::kcp2k::KcpHeader>  header, ::by_ref<::System::ArraySegment_1<uint8_t>>  message) ;

/// @brief Method ReliableMaxMessageSize, addr 0x18144eb10, size 0x20, virtual false, abstract: false, final false
static inline int32_t ReliableMaxMessageSize(int32_t  mtu, uint32_t  rcv_wnd) ;

/// @brief Method ReliableMaxMessageSize_Unconstrained, addr 0x18144eb00, size 0x10, virtual false, abstract: false, final false
static inline int32_t ReliableMaxMessageSize_Unconstrained(int32_t  mtu, uint32_t  rcv_wnd) ;

/// @brief Method SendData, addr 0x18144eb30, size 0x220, virtual false, abstract: false, final false
inline void SendData(::System::ArraySegment_1<uint8_t>  data, ::kcp2k::KcpChannel  channel) ;

/// @brief Method SendDisconnect, addr 0x18144ed50, size 0x30, virtual false, abstract: false, final false
inline void SendDisconnect() ;

/// @brief Method SendHandshake, addr 0x18144ed80, size 0xd0, virtual false, abstract: false, final false
inline void SendHandshake() ;

/// @brief Method SendPing, addr 0x18144ee50, size 0x30, virtual false, abstract: false, final false
inline void SendPing() ;

/// @brief Method SendReliable, addr 0x18144ee80, size 0x180, virtual false, abstract: false, final false
inline void SendReliable(::kcp2k::KcpHeader  header, ::System::ArraySegment_1<uint8_t>  content) ;

/// @brief Method SendUnreliable, addr 0x18144f000, size 0x190, virtual false, abstract: false, final false
inline void SendUnreliable(::System::ArraySegment_1<uint8_t>  message) ;

/// @brief Method TickIncoming, addr 0x18144f5d0, size 0xe0, virtual false, abstract: false, final false
inline void TickIncoming() ;

/// @brief Method TickIncoming_Authenticated, addr 0x18144f190, size 0x210, virtual false, abstract: false, final false
inline void TickIncoming_Authenticated(uint32_t  time) ;

/// @brief Method TickIncoming_Connected, addr 0x18144f3a0, size 0x230, virtual false, abstract: false, final false
inline void TickIncoming_Connected(uint32_t  time) ;

/// @brief Method TickOutgoing, addr 0x18144f6b0, size 0x120, virtual false, abstract: false, final false
inline void TickOutgoing() ;

/// @brief Method UnreliableMaxMessageSize, addr 0x18144f7d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t UnreliableMaxMessageSize(int32_t  mtu) ;

constexpr ::System::Action* const& __cordl_internal_get_OnAuthenticated() const;

constexpr ::System::Action*& __cordl_internal_get_OnAuthenticated() ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>* const& __cordl_internal_get_OnData() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*& __cordl_internal_get_OnData() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnDisconnected() ;

constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>* const& __cordl_internal_get_OnError() const;

constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>*& __cordl_internal_get_OnError() ;

constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_RawSend() const;

constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_RawSend() ;

constexpr uint32_t const& __cordl_internal_get_cookie() const;

constexpr uint32_t& __cordl_internal_get_cookie() ;

constexpr ::kcp2k::Kcp* const& __cordl_internal_get_kcp() const;

constexpr ::kcp2k::Kcp*& __cordl_internal_get_kcp() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_kcpMessageBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_kcpMessageBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_kcpSendBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_kcpSendBuffer() ;

constexpr uint32_t const& __cordl_internal_get_lastPingTime() const;

constexpr uint32_t& __cordl_internal_get_lastPingTime() ;

constexpr uint32_t const& __cordl_internal_get_lastReceiveTime() const;

constexpr uint32_t& __cordl_internal_get_lastReceiveTime() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rawSendBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rawSendBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_receivedCookie() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_receivedCookie() ;

constexpr int32_t const& __cordl_internal_get_reliableMax() const;

constexpr int32_t& __cordl_internal_get_reliableMax() ;

constexpr ::kcp2k::KcpState const& __cordl_internal_get_state() const;

constexpr ::kcp2k::KcpState& __cordl_internal_get_state() ;

constexpr int32_t const& __cordl_internal_get_timeout() const;

constexpr int32_t& __cordl_internal_get_timeout() ;

constexpr int32_t const& __cordl_internal_get_unreliableMax() const;

constexpr int32_t& __cordl_internal_get_unreliableMax() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_watch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_watch() ;

constexpr void __cordl_internal_set_OnAuthenticated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnData(::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnError(::System::Action_2<::kcp2k::ErrorCode,::StringW>*  value) ;

constexpr void __cordl_internal_set_RawSend(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_cookie(uint32_t  value) ;

constexpr void __cordl_internal_set_kcp(::kcp2k::Kcp*  value) ;

constexpr void __cordl_internal_set_kcpMessageBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_kcpSendBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_lastPingTime(uint32_t  value) ;

constexpr void __cordl_internal_set_lastReceiveTime(uint32_t  value) ;

constexpr void __cordl_internal_set_rawSendBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_receivedCookie(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_reliableMax(int32_t  value) ;

constexpr void __cordl_internal_set_state(::kcp2k::KcpState  value) ;

constexpr void __cordl_internal_set_timeout(int32_t  value) ;

constexpr void __cordl_internal_set_unreliableMax(int32_t  value) ;

constexpr void __cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x18144f7e0, size 0x2f0, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  output, ::System::Action*  OnAuthenticated, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config, uint32_t  cookie) ;

/// @brief Method get_MaxReceiveRate, addr 0x18144fad0, size 0x40, virtual false, abstract: false, final false
inline uint32_t get_MaxReceiveRate() ;

/// @brief Method get_MaxSendRate, addr 0x18144fb10, size 0x40, virtual false, abstract: false, final false
inline uint32_t get_MaxSendRate() ;

/// @brief Method get_ReceiveBufferCount, addr 0x18144fb50, size 0x30, virtual false, abstract: false, final false
inline int32_t get_ReceiveBufferCount() ;

/// @brief Method get_ReceiveQueueCount, addr 0x18144fb80, size 0x30, virtual false, abstract: false, final false
inline int32_t get_ReceiveQueueCount() ;

/// @brief Method get_SendBufferCount, addr 0x18144fbb0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_SendBufferCount() ;

/// @brief Method get_SendQueueCount, addr 0x18144fbe0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_SendQueueCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KcpPeer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpPeer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpPeer(KcpPeer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpPeer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpPeer(KcpPeer const& ) = delete;

/// @brief Field CHANNEL_HEADER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  CHANNEL_HEADER_SIZE{static_cast<int32_t>(0x1)};

/// @brief Field COOKIE_HEADER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  COOKIE_HEADER_SIZE{static_cast<int32_t>(0x4)};

/// @brief Field DEFAULT_TIMEOUT offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_TIMEOUT{static_cast<int32_t>(0x2710)};

/// @brief Field METADATA_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  METADATA_SIZE{static_cast<int32_t>(0x5)};

/// @brief Field PING_INTERVAL offset 0xffffffff size 0x4
static constexpr int32_t  PING_INTERVAL{static_cast<int32_t>(0x3e8)};

/// @brief Field QueueDisconnectThreshold offset 0xffffffff size 0x4
static constexpr int32_t  QueueDisconnectThreshold{static_cast<int32_t>(0x2710)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20873};

/// @brief Field kcp, offset: 0x10, size: 0x8, def value: None
 ::kcp2k::Kcp*  ___kcp;

/// @brief Field cookie, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___cookie;

/// @brief Field receivedCookie, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___receivedCookie;

/// @brief Field RawSend, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::ArraySegment_1<uint8_t>>*  ___RawSend;

/// @brief Field state, offset: 0x30, size: 0x4, def value: None
 ::kcp2k::KcpState  ___state;

/// @brief Field OnAuthenticated, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnAuthenticated;

/// @brief Field OnData, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  ___OnData;

/// @brief Field OnDisconnected, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnDisconnected;

/// @brief Field OnError, offset: 0x50, size: 0x8, def value: None
 ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  ___OnError;

/// @brief Field timeout, offset: 0x58, size: 0x4, def value: None
 int32_t  ___timeout;

/// @brief Field lastReceiveTime, offset: 0x5c, size: 0x4, def value: None
 uint32_t  ___lastReceiveTime;

/// @brief Field watch, offset: 0x60, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___watch;

/// @brief Field kcpMessageBuffer, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___kcpMessageBuffer;

/// @brief Field kcpSendBuffer, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___kcpSendBuffer;

/// @brief Field rawSendBuffer, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rawSendBuffer;

/// @brief Field lastPingTime, offset: 0x80, size: 0x4, def value: None
 uint32_t  ___lastPingTime;

/// @brief Field unreliableMax, offset: 0x84, size: 0x4, def value: None
 int32_t  ___unreliableMax;

/// @brief Field reliableMax, offset: 0x88, size: 0x4, def value: None
 int32_t  ___reliableMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpPeer, ___kcp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___cookie) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___receivedCookie) == 0x20, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___RawSend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___state) == 0x30, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___OnAuthenticated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___OnData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___OnDisconnected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___OnError) == 0x50, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___timeout) == 0x58, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___lastReceiveTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___watch) == 0x60, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___kcpMessageBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___kcpSendBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___rawSendBuffer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___lastPingTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___unreliableMax) == 0x84, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpPeer, ___reliableMax) == 0x88, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpPeer) == 0x90, "Size mismatch!");

} // namespace end def kcp2k
