#pragma once
// IWYU pragma private; include "kcp2k/KcpTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KcpTransport)
namespace Mirror {
class PortTransport;
}
namespace Mirror {
struct TransportError;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Uri;
}
namespace kcp2k {
struct ErrorCode;
}
namespace kcp2k {
struct KcpChannel;
}
namespace kcp2k {
class KcpClient;
}
namespace kcp2k {
class KcpConfig;
}
namespace kcp2k {
struct KcpServerConnection;
}
namespace kcp2k {
class KcpServer;
}
namespace kcp2k {
class KcpTransport___c;
}
// Forward declare root types
namespace kcp2k {
class KcpTransport;
}
namespace kcp2k {
class KcpTransport___c;
}
// Write type traits
MARK_REF_T(::kcp2k::KcpTransport*);
MARK_REF_T(::kcp2k::KcpTransport___c*);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpTransport*, "kcp2k", "KcpTransport");
DEFINE_IL2CPP_CLASS(::kcp2k::KcpTransport___c*, "kcp2k", "KcpTransport/<>c");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpTransport/<>c
class CORDL_TYPE KcpTransport___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::kcp2k::KcpTransport___c*  __9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::System::Action_1<::StringW>*  __9__29_0;

/// @brief Field <>9__51_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__51_0, put=setStaticF___9__51_0)) ::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*  __9__51_0;

/// @brief Field <>9__52_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_0, put=setStaticF___9__52_0)) ::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*  __9__52_0;

/// @brief Field <>9__53_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_0, put=setStaticF___9__53_0)) ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  __9__53_0;

/// @brief Field <>9__54_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_0, put=setStaticF___9__54_0)) ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  __9__54_0;

/// @brief Field <>9__55_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__55_0, put=setStaticF___9__55_0)) ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  __9__55_0;

/// @brief Field <>9__56_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_0, put=setStaticF___9__56_0)) ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  __9__56_0;

static inline ::kcp2k::KcpTransport___c* New_ctor() ;

/// @brief Method <Awake>b__29_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _Awake_b__29_0(::StringW  _) ;

/// @brief Method <GetAverageMaxReceiveRate>b__52_0, addr 0x18158e830, size 0x20, virtual false, abstract: false, final false
inline int64_t _GetAverageMaxReceiveRate_b__52_0(::kcp2k::KcpServerConnection  conn) ;

/// @brief Method <GetAverageMaxSendRate>b__51_0, addr 0x18158e850, size 0x20, virtual false, abstract: false, final false
inline int64_t _GetAverageMaxSendRate_b__51_0(::kcp2k::KcpServerConnection  conn) ;

/// @brief Method <GetTotalReceiveBuffer>b__56_0, addr 0x18158e870, size 0x20, virtual false, abstract: false, final false
inline int32_t _GetTotalReceiveBuffer_b__56_0(::kcp2k::KcpServerConnection  conn) ;

/// @brief Method <GetTotalReceiveQueue>b__54_0, addr 0x18158e890, size 0x20, virtual false, abstract: false, final false
inline int32_t _GetTotalReceiveQueue_b__54_0(::kcp2k::KcpServerConnection  conn) ;

/// @brief Method <GetTotalSendBuffer>b__55_0, addr 0x18158e8b0, size 0x20, virtual false, abstract: false, final false
inline int32_t _GetTotalSendBuffer_b__55_0(::kcp2k::KcpServerConnection  conn) ;

/// @brief Method <GetTotalSendQueue>b__53_0, addr 0x18158e8d0, size 0x20, virtual false, abstract: false, final false
inline int32_t _GetTotalSendQueue_b__53_0(::kcp2k::KcpServerConnection  conn) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::kcp2k::KcpTransport___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__29_0() ;

static inline ::System::Func_2<::kcp2k::KcpServerConnection,int64_t>* getStaticF___9__51_0() ;

static inline ::System::Func_2<::kcp2k::KcpServerConnection,int64_t>* getStaticF___9__52_0() ;

static inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* getStaticF___9__53_0() ;

static inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* getStaticF___9__54_0() ;

static inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* getStaticF___9__55_0() ;

static inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* getStaticF___9__56_0() ;

static inline void setStaticF___9(::kcp2k::KcpTransport___c*  value) ;

static inline void setStaticF___9__29_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__51_0(::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*  value) ;

static inline void setStaticF___9__52_0(::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*  value) ;

static inline void setStaticF___9__53_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value) ;

static inline void setStaticF___9__54_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value) ;

static inline void setStaticF___9__55_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value) ;

static inline void setStaticF___9__56_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KcpTransport___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpTransport___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpTransport___c(KcpTransport___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpTransport___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpTransport___c(KcpTransport___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::kcp2k::KcpTransport___c) == 0x10, "Size mismatch!");

} // namespace end def kcp2k
// Dependencies Mirror.Transport
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpTransport
class CORDL_TYPE KcpTransport : public ::Mirror::Transport {
public:
// Declarations
using __c = ::kcp2k::KcpTransport___c;

/// @brief Field CongestionWindow, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_CongestionWindow, put=__cordl_internal_set_CongestionWindow)) bool  CongestionWindow;

/// @brief Field DualMode, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_DualMode, put=__cordl_internal_set_DualMode)) bool  DualMode;

/// @brief Field FastResend, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_FastResend, put=__cordl_internal_set_FastResend)) int32_t  FastResend;

/// @brief Field Interval, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_Interval, put=__cordl_internal_set_Interval)) uint32_t  Interval;

/// @brief Field MaxRetransmit, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRetransmit, put=__cordl_internal_set_MaxRetransmit)) uint32_t  MaxRetransmit;

/// @brief Field MaximizeSocketBuffers, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_MaximizeSocketBuffers, put=__cordl_internal_set_MaximizeSocketBuffers)) bool  MaximizeSocketBuffers;

/// @brief Field NoDelay, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get_NoDelay, put=__cordl_internal_set_NoDelay)) bool  NoDelay;

 __declspec(property(get=get_Port, put=set_Port)) uint16_t  Port;

/// @brief Field ReceiveWindowSize, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceiveWindowSize, put=__cordl_internal_set_ReceiveWindowSize)) uint32_t  ReceiveWindowSize;

/// @brief Field RecvBufferSize, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RecvBufferSize, put=__cordl_internal_set_RecvBufferSize)) int32_t  RecvBufferSize;

/// @brief Field ReliableMaxMessageSize, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReliableMaxMessageSize, put=__cordl_internal_set_ReliableMaxMessageSize)) int32_t  ReliableMaxMessageSize;

/// @brief Field SendBufferSize, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendBufferSize, put=__cordl_internal_set_SendBufferSize)) int32_t  SendBufferSize;

/// @brief Field SendWindowSize, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendWindowSize, put=__cordl_internal_set_SendWindowSize)) uint32_t  SendWindowSize;

/// @brief Field Timeout, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_Timeout, put=__cordl_internal_set_Timeout)) int32_t  Timeout;

/// @brief Field UnreliableMaxMessageSize, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_UnreliableMaxMessageSize, put=__cordl_internal_set_UnreliableMaxMessageSize)) int32_t  UnreliableMaxMessageSize;

/// @brief Field client, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::kcp2k::KcpClient*  client;

/// @brief Field config, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::kcp2k::KcpConfig*  config;

/// @brief Field debugLog, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugLog, put=__cordl_internal_set_debugLog)) bool  debugLog;

/// @brief Field port, offset 0x70, size 0x2 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) uint16_t  port;

/// @brief Field server, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::kcp2k::KcpServer*  server;

/// @brief Field statisticsGUI, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_statisticsGUI, put=__cordl_internal_set_statisticsGUI)) bool  statisticsGUI;

/// @brief Field statisticsLog, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_statisticsLog, put=__cordl_internal_set_statisticsLog)) bool  statisticsLog;

/// @brief Convert operator to "::Mirror::PortTransport"
constexpr operator  ::Mirror::PortTransport*() noexcept;

/// @brief Method Available, addr 0x180c3e620, size 0x690, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x181585e90, size 0x490, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientConnect, addr 0x181586400, size 0x30, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x181586320, size 0xe0, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x181586430, size 0x20, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x181586450, size 0x30, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x181586480, size 0x50, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x1815864d0, size 0x30, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x181586500, size 0x80, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method FromKcpChannel, addr 0x181586580, size 0x10, virtual false, abstract: false, final false
static inline int32_t FromKcpChannel(::kcp2k::KcpChannel  channel) ;

/// @brief Method GetAverageMaxReceiveRate, addr 0x181586590, size 0x160, virtual false, abstract: false, final false
inline int64_t GetAverageMaxReceiveRate() ;

/// @brief Method GetAverageMaxSendRate, addr 0x1815866f0, size 0x160, virtual false, abstract: false, final false
inline int64_t GetAverageMaxSendRate() ;

/// @brief Method GetBatchThreshold, addr 0x181586850, size 0x30, virtual true, abstract: false, final false
inline int32_t GetBatchThreshold(int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x181586880, size 0x50, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method GetTotalReceiveBuffer, addr 0x1815868d0, size 0xf0, virtual false, abstract: false, final false
inline int64_t GetTotalReceiveBuffer() ;

/// @brief Method GetTotalReceiveQueue, addr 0x1815869c0, size 0xf0, virtual false, abstract: false, final false
inline int64_t GetTotalReceiveQueue() ;

/// @brief Method GetTotalSendBuffer, addr 0x181586ab0, size 0xf0, virtual false, abstract: false, final false
inline int64_t GetTotalSendBuffer() ;

/// @brief Method GetTotalSendQueue, addr 0x181586ba0, size 0xf0, virtual false, abstract: false, final false
inline int64_t GetTotalSendQueue() ;

static inline ::kcp2k::KcpTransport* New_ctor() ;

/// @brief Method OnGUIStatistics, addr 0x181586c90, size 0xa30, virtual true, abstract: false, final false
inline void OnGUIStatistics() ;

/// @brief Method OnLogStatistics, addr 0x1815876c0, size 0x4d0, virtual true, abstract: false, final false
inline void OnLogStatistics() ;

/// @brief Method OnValidate, addr 0x181587b90, size 0x40, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrettyBytes, addr 0x181587bd0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW PrettyBytes(int64_t  bytes) ;

/// @brief Method ServerActive, addr 0x181587cc0, size 0x30, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x181587cf0, size 0x30, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x181587d20, size 0x50, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x181587d70, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x181587e10, size 0x30, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0x181587e40, size 0xa0, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x181587ee0, size 0x40, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x181587f20, size 0x30, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x181587f50, size 0x70, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method ToKcpChannel, addr 0x181587fc0, size 0x10, virtual false, abstract: false, final false
static inline ::kcp2k::KcpChannel ToKcpChannel(int32_t  channel) ;

/// @brief Method ToString, addr 0x181587fd0, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToTransportError, addr 0x181587fe0, size 0xf0, virtual false, abstract: false, final false
static inline ::Mirror::TransportError ToTransportError(::kcp2k::ErrorCode  error) ;

/// @brief Method <Awake>b__29_1, addr 0x1815880d0, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__29_1() ;

/// @brief Method <Awake>b__29_2, addr 0x181588100, size 0x40, virtual false, abstract: false, final false
inline void _Awake_b__29_2(::System::ArraySegment_1<uint8_t>  message, ::kcp2k::KcpChannel  channel) ;

/// @brief Method <Awake>b__29_3, addr 0x181588140, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__29_3() ;

/// @brief Method <Awake>b__29_4, addr 0x181588170, size 0x50, virtual false, abstract: false, final false
inline void _Awake_b__29_4(::kcp2k::ErrorCode  error, ::StringW  reason) ;

/// @brief Method <Awake>b__29_5, addr 0x1803085a0, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__29_5(int32_t  connectionId) ;

/// @brief Method <Awake>b__29_6, addr 0x1815881c0, size 0x50, virtual false, abstract: false, final false
inline void _Awake_b__29_6(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  message, ::kcp2k::KcpChannel  channel) ;

/// @brief Method <Awake>b__29_7, addr 0x181588210, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__29_7(int32_t  connectionId) ;

/// @brief Method <Awake>b__29_8, addr 0x181588240, size 0x60, virtual false, abstract: false, final false
inline void _Awake_b__29_8(int32_t  connectionId, ::kcp2k::ErrorCode  error, ::StringW  reason) ;

constexpr bool const& __cordl_internal_get_CongestionWindow() const;

constexpr bool& __cordl_internal_get_CongestionWindow() ;

constexpr bool const& __cordl_internal_get_DualMode() const;

constexpr bool& __cordl_internal_get_DualMode() ;

constexpr int32_t const& __cordl_internal_get_FastResend() const;

constexpr int32_t& __cordl_internal_get_FastResend() ;

constexpr uint32_t const& __cordl_internal_get_Interval() const;

constexpr uint32_t& __cordl_internal_get_Interval() ;

constexpr uint32_t const& __cordl_internal_get_MaxRetransmit() const;

constexpr uint32_t& __cordl_internal_get_MaxRetransmit() ;

constexpr bool const& __cordl_internal_get_MaximizeSocketBuffers() const;

constexpr bool& __cordl_internal_get_MaximizeSocketBuffers() ;

constexpr bool const& __cordl_internal_get_NoDelay() const;

constexpr bool& __cordl_internal_get_NoDelay() ;

constexpr uint32_t const& __cordl_internal_get_ReceiveWindowSize() const;

constexpr uint32_t& __cordl_internal_get_ReceiveWindowSize() ;

constexpr int32_t const& __cordl_internal_get_RecvBufferSize() const;

constexpr int32_t& __cordl_internal_get_RecvBufferSize() ;

constexpr int32_t const& __cordl_internal_get_ReliableMaxMessageSize() const;

constexpr int32_t& __cordl_internal_get_ReliableMaxMessageSize() ;

constexpr int32_t const& __cordl_internal_get_SendBufferSize() const;

constexpr int32_t& __cordl_internal_get_SendBufferSize() ;

constexpr uint32_t const& __cordl_internal_get_SendWindowSize() const;

constexpr uint32_t& __cordl_internal_get_SendWindowSize() ;

constexpr int32_t const& __cordl_internal_get_Timeout() const;

constexpr int32_t& __cordl_internal_get_Timeout() ;

constexpr int32_t const& __cordl_internal_get_UnreliableMaxMessageSize() const;

constexpr int32_t& __cordl_internal_get_UnreliableMaxMessageSize() ;

constexpr ::kcp2k::KcpClient* const& __cordl_internal_get_client() const;

constexpr ::kcp2k::KcpClient*& __cordl_internal_get_client() ;

constexpr ::kcp2k::KcpConfig* const& __cordl_internal_get_config() const;

constexpr ::kcp2k::KcpConfig*& __cordl_internal_get_config() ;

constexpr bool const& __cordl_internal_get_debugLog() const;

constexpr bool& __cordl_internal_get_debugLog() ;

constexpr uint16_t const& __cordl_internal_get_port() const;

constexpr uint16_t& __cordl_internal_get_port() ;

constexpr ::kcp2k::KcpServer* const& __cordl_internal_get_server() const;

constexpr ::kcp2k::KcpServer*& __cordl_internal_get_server() ;

constexpr bool const& __cordl_internal_get_statisticsGUI() const;

constexpr bool& __cordl_internal_get_statisticsGUI() ;

constexpr bool const& __cordl_internal_get_statisticsLog() const;

constexpr bool& __cordl_internal_get_statisticsLog() ;

constexpr void __cordl_internal_set_CongestionWindow(bool  value) ;

constexpr void __cordl_internal_set_DualMode(bool  value) ;

constexpr void __cordl_internal_set_FastResend(int32_t  value) ;

constexpr void __cordl_internal_set_Interval(uint32_t  value) ;

constexpr void __cordl_internal_set_MaxRetransmit(uint32_t  value) ;

constexpr void __cordl_internal_set_MaximizeSocketBuffers(bool  value) ;

constexpr void __cordl_internal_set_NoDelay(bool  value) ;

constexpr void __cordl_internal_set_ReceiveWindowSize(uint32_t  value) ;

constexpr void __cordl_internal_set_RecvBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_ReliableMaxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_SendBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_SendWindowSize(uint32_t  value) ;

constexpr void __cordl_internal_set_Timeout(int32_t  value) ;

constexpr void __cordl_internal_set_UnreliableMaxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_client(::kcp2k::KcpClient*  value) ;

constexpr void __cordl_internal_set_config(::kcp2k::KcpConfig*  value) ;

constexpr void __cordl_internal_set_debugLog(bool  value) ;

constexpr void __cordl_internal_set_port(uint16_t  value) ;

constexpr void __cordl_internal_set_server(::kcp2k::KcpServer*  value) ;

constexpr void __cordl_internal_set_statisticsGUI(bool  value) ;

constexpr void __cordl_internal_set_statisticsLog(bool  value) ;

/// @brief Method .ctor, addr 0x1815882a0, size 0x60, virtual false, abstract: false, final false
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
constexpr KcpTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpTransport(KcpTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpTransport(KcpTransport const& ) = delete;

/// @brief Field MTU offset 0xffffffff size 0x4
static constexpr int32_t  MTU{static_cast<int32_t>(0x4b0)};

/// @brief Field Scheme offset 0xffffffff size 0x8
static constexpr ::ConstString  Scheme{u"kcp"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19038};

/// @brief Field port, offset: 0x70, size: 0x2, def value: None
 uint16_t  ___port;

/// @brief Field DualMode, offset: 0x72, size: 0x1, def value: None
 bool  ___DualMode;

/// @brief Field NoDelay, offset: 0x73, size: 0x1, def value: None
 bool  ___NoDelay;

/// @brief Field Interval, offset: 0x74, size: 0x4, def value: None
 uint32_t  ___Interval;

/// @brief Field Timeout, offset: 0x78, size: 0x4, def value: None
 int32_t  ___Timeout;

/// @brief Field RecvBufferSize, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___RecvBufferSize;

/// @brief Field SendBufferSize, offset: 0x80, size: 0x4, def value: None
 int32_t  ___SendBufferSize;

/// @brief Field FastResend, offset: 0x84, size: 0x4, def value: None
 int32_t  ___FastResend;

/// @brief Field CongestionWindow, offset: 0x88, size: 0x1, def value: None
 bool  ___CongestionWindow;

/// @brief Field ReceiveWindowSize, offset: 0x8c, size: 0x4, def value: None
 uint32_t  ___ReceiveWindowSize;

/// @brief Field SendWindowSize, offset: 0x90, size: 0x4, def value: None
 uint32_t  ___SendWindowSize;

/// @brief Field MaxRetransmit, offset: 0x94, size: 0x4, def value: None
 uint32_t  ___MaxRetransmit;

/// @brief Field MaximizeSocketBuffers, offset: 0x98, size: 0x1, def value: None
 bool  ___MaximizeSocketBuffers;

/// @brief Field ReliableMaxMessageSize, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___ReliableMaxMessageSize;

/// @brief Field UnreliableMaxMessageSize, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___UnreliableMaxMessageSize;

/// @brief Field config, offset: 0xa8, size: 0x8, def value: None
 ::kcp2k::KcpConfig*  ___config;

/// @brief Field server, offset: 0xb0, size: 0x8, def value: None
 ::kcp2k::KcpServer*  ___server;

/// @brief Field client, offset: 0xb8, size: 0x8, def value: None
 ::kcp2k::KcpClient*  ___client;

/// @brief Field debugLog, offset: 0xc0, size: 0x1, def value: None
 bool  ___debugLog;

/// @brief Field statisticsGUI, offset: 0xc1, size: 0x1, def value: None
 bool  ___statisticsGUI;

/// @brief Field statisticsLog, offset: 0xc2, size: 0x1, def value: None
 bool  ___statisticsLog;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpTransport, ___port) == 0x70, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___DualMode) == 0x72, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___NoDelay) == 0x73, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___Interval) == 0x74, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___Timeout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___RecvBufferSize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___SendBufferSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___FastResend) == 0x84, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___CongestionWindow) == 0x88, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___ReceiveWindowSize) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___SendWindowSize) == 0x90, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___MaxRetransmit) == 0x94, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___MaximizeSocketBuffers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___ReliableMaxMessageSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___UnreliableMaxMessageSize) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___config) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___server) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___client) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___debugLog) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___statisticsGUI) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpTransport, ___statisticsLog) == 0xc2, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpTransport) == 0xc8, "Size mismatch!");

} // namespace end def kcp2k
