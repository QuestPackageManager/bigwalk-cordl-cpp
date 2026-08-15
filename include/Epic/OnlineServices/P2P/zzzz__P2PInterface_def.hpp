#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/P2PInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(P2PInterface)
namespace Epic::OnlineServices::P2P {
struct AcceptConnectionOptions;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyIncomingPacketQueueFullOptions;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionClosedOptions;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionEstablishedOptions;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionInterruptedOptions;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionRequestOptions;
}
namespace Epic::OnlineServices::P2P {
struct ClearPacketQueueOptions;
}
namespace Epic::OnlineServices::P2P {
struct CloseConnectionOptions;
}
namespace Epic::OnlineServices::P2P {
struct CloseConnectionsOptions;
}
namespace Epic::OnlineServices::P2P {
struct GetNATTypeOptions;
}
namespace Epic::OnlineServices::P2P {
struct GetNextReceivedPacketSizeOptions;
}
namespace Epic::OnlineServices::P2P {
struct GetPacketQueueInfoOptions;
}
namespace Epic::OnlineServices::P2P {
struct GetPortRangeOptions;
}
namespace Epic::OnlineServices::P2P {
struct GetRelayControlOptions;
}
namespace Epic::OnlineServices::P2P {
struct NATType;
}
namespace Epic::OnlineServices::P2P {
class OnIncomingConnectionRequestCallback;
}
namespace Epic::OnlineServices::P2P {
class OnIncomingPacketQueueFullCallback;
}
namespace Epic::OnlineServices::P2P {
class OnPeerConnectionEstablishedCallback;
}
namespace Epic::OnlineServices::P2P {
class OnPeerConnectionInterruptedCallback;
}
namespace Epic::OnlineServices::P2P {
class OnQueryNATTypeCompleteCallback;
}
namespace Epic::OnlineServices::P2P {
class OnRemoteConnectionClosedCallback;
}
namespace Epic::OnlineServices::P2P {
struct PacketQueueInfo;
}
namespace Epic::OnlineServices::P2P {
struct QueryNATTypeOptions;
}
namespace Epic::OnlineServices::P2P {
struct ReceivePacketOptions;
}
namespace Epic::OnlineServices::P2P {
struct RelayControl;
}
namespace Epic::OnlineServices::P2P {
struct SendPacketOptions;
}
namespace Epic::OnlineServices::P2P {
struct SetPacketQueueSizeOptions;
}
namespace Epic::OnlineServices::P2P {
struct SetPortRangeOptions;
}
namespace Epic::OnlineServices::P2P {
struct SetRelayControlOptions;
}
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
class P2PInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::P2P::P2PInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::P2PInterface*, "Epic.OnlineServices.P2P", "P2PInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::P2P {
// Is value type: false
// CS Name: Epic.OnlineServices.P2P.P2PInterface
class CORDL_TYPE P2PInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AcceptConnection, addr 0x1805317e0, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AcceptConnection(::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptions>  options) ;

/// @brief Method AddNotifyIncomingPacketQueueFull, addr 0x1805318b0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyIncomingPacketQueueFull(::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*  incomingPacketQueueFullHandler) ;

/// @brief Method AddNotifyPeerConnectionClosed, addr 0x180531aa0, size 0x270, virtual false, abstract: false, final false
inline uint64_t AddNotifyPeerConnectionClosed(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*  connectionClosedHandler) ;

/// @brief Method AddNotifyPeerConnectionEstablished, addr 0x180531d10, size 0x270, virtual false, abstract: false, final false
inline uint64_t AddNotifyPeerConnectionEstablished(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*  connectionEstablishedHandler) ;

/// @brief Method AddNotifyPeerConnectionInterrupted, addr 0x180531f80, size 0x270, virtual false, abstract: false, final false
inline uint64_t AddNotifyPeerConnectionInterrupted(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionInterruptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallback*  connectionInterruptedHandler) ;

/// @brief Method AddNotifyPeerConnectionRequest, addr 0x1805321f0, size 0x270, virtual false, abstract: false, final false
inline uint64_t AddNotifyPeerConnectionRequest(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*  connectionRequestHandler) ;

/// @brief Method ClearPacketQueue, addr 0x180532460, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ClearPacketQueue(::by_ref<::Epic::OnlineServices::P2P::ClearPacketQueueOptions>  options) ;

/// @brief Method CloseConnection, addr 0x180532530, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CloseConnection(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionOptions>  options) ;

/// @brief Method CloseConnections, addr 0x180532600, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CloseConnections(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>  options) ;

/// @brief Method GetNATType, addr 0x1805326c0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetNATType(::by_ref<::Epic::OnlineServices::P2P::GetNATTypeOptions>  options, ::by_ref<::Epic::OnlineServices::P2P::NATType>  outNATType) ;

/// @brief Method GetNextReceivedPacketSize, addr 0x180532700, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetNextReceivedPacketSize(::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>  options, ::by_ref<uint32_t>  outPacketSizeBytes) ;

/// @brief Method GetPacketQueueInfo, addr 0x1805327c0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetPacketQueueInfo(::by_ref<::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions>  options, ::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>  outPacketQueueInfo) ;

/// @brief Method GetPortRange, addr 0x180532830, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetPortRange(::by_ref<::Epic::OnlineServices::P2P::GetPortRangeOptions>  options, ::by_ref<uint16_t>  outPort, ::by_ref<uint16_t>  outNumAdditionalPortsToTry) ;

/// @brief Method GetRelayControl, addr 0x180532870, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetRelayControl(::by_ref<::Epic::OnlineServices::P2P::GetRelayControlOptions>  options, ::by_ref<::Epic::OnlineServices::P2P::RelayControl>  outRelayControl) ;

static inline ::Epic::OnlineServices::P2P::P2PInterface* New_ctor() ;

static inline ::Epic::OnlineServices::P2P::P2PInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryNATType, addr 0x1805328b0, size 0x1d0, virtual false, abstract: false, final false
inline void QueryNATType(::by_ref<::Epic::OnlineServices::P2P::QueryNATTypeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*  completionDelegate) ;

/// @brief Method ReceivePacket, addr 0x180532a80, size 0x2f0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ReceivePacket(::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>  options, ::by_ref<::Epic::OnlineServices::ProductUserId*>  outPeerId, ::by_ref<::Epic::OnlineServices::P2P::SocketId>  outSocketId, ::by_ref<uint8_t>  outChannel, ::System::ArraySegment_1<uint8_t>  outData, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method RemoveNotifyIncomingPacketQueueFull, addr 0x180532d70, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyIncomingPacketQueueFull(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyPeerConnectionClosed, addr 0x180532da0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPeerConnectionClosed(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyPeerConnectionEstablished, addr 0x180532dd0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPeerConnectionEstablished(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyPeerConnectionInterrupted, addr 0x180532e00, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPeerConnectionInterrupted(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyPeerConnectionRequest, addr 0x180532e30, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPeerConnectionRequest(uint64_t  notificationId) ;

/// @brief Method SendPacket, addr 0x180532e60, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SendPacket(::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>  options) ;

/// @brief Method SetPacketQueueSize, addr 0x180532ec0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetPacketQueueSize(::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>  options) ;

/// @brief Method SetPortRange, addr 0x180532f10, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetPortRange(::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>  options) ;

/// @brief Method SetRelayControl, addr 0x180532f60, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetRelayControl(::by_ref<::Epic::OnlineServices::P2P::SetRelayControlOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr P2PInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "P2PInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
P2PInterface(P2PInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "P2PInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
P2PInterface(P2PInterface const& ) = delete;

/// @brief Field ACCEPTCONNECTION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACCEPTCONNECTION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYINCOMINGPACKETQUEUEFULL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYINCOMINGPACKETQUEUEFULL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPEERCONNECTIONCLOSED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPEERCONNECTIONCLOSED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPEERCONNECTIONESTABLISHED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPEERCONNECTIONESTABLISHED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPEERCONNECTIONINTERRUPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPEERCONNECTIONINTERRUPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPEERCONNECTIONREQUEST_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPEERCONNECTIONREQUEST_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CLEARPACKETQUEUE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CLEARPACKETQUEUE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CLOSECONNECTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CLOSECONNECTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CLOSECONNECTION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CLOSECONNECTION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETNATTYPE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETNATTYPE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETNEXTRECEIVEDPACKETSIZE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETNEXTRECEIVEDPACKETSIZE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field GETPACKETQUEUEINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPACKETQUEUEINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPORTRANGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPORTRANGE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETRELAYCONTROL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETRELAYCONTROL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MAX_CONNECTIONS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CONNECTIONS{static_cast<int32_t>(0x20)};

/// @brief Field MAX_PACKET_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PACKET_SIZE{static_cast<int32_t>(0x492)};

/// @brief Field MAX_QUEUE_SIZE_UNLIMITED offset 0xffffffff size 0x4
static constexpr int32_t  MAX_QUEUE_SIZE_UNLIMITED{static_cast<int32_t>(0x0)};

/// @brief Field QUERYNATTYPE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYNATTYPE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RECEIVEPACKET_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RECEIVEPACKET_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field SENDPACKET_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDPACKET_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field SETPACKETQUEUESIZE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETPACKETQUEUESIZE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETPORTRANGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETPORTRANGE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETRELAYCONTROL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETRELAYCONTROL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SOCKETID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SOCKETID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SOCKETID_SOCKETNAME_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SOCKETID_SOCKETNAME_SIZE{static_cast<int32_t>(0x21)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::P2P::P2PInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
