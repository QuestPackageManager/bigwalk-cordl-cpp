#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/P2PInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__P2PInterface_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AcceptConnectionOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyIncomingPacketQueueFullOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionClosedOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionEstablishedOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionInterruptedOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionRequestOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ClearPacketQueueOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__CloseConnectionOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__CloseConnectionsOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetNATTypeOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetNextReceivedPacketSizeOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetPacketQueueInfoOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetPortRangeOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetRelayControlOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NATType_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnQueryNATTypeCompleteCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketQueueInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__QueryNATTypeOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ReceivePacketOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__RelayControl_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SendPacketOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPacketQueueSizeOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPortRangeOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetRelayControlOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.ReceivePacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>, ::by_ref<::Epic::OnlineServices::ProductUserId*>, ::by_ref<::Epic::OnlineServices::P2P::SocketId>, ::by_ref<uint8_t>, ::System::ArraySegment_1<uint8_t>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::P2P::P2PInterface::ReceivePacket)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x180532a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"ReceivePacket", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::ProductUserId*>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)()>(&::Epic::OnlineServices::P2P::P2PInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::P2P::P2PInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.AcceptConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::AcceptConnection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805317e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AcceptConnection", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.AddNotifyIncomingPacketQueueFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>, ::System::Object*, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*)>(&::Epic::OnlineServices::P2P::P2PInterface::AddNotifyIncomingPacketQueueFull)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805318b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyIncomingPacketQueueFull", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.AddNotifyPeerConnectionClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions>, ::System::Object*, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*)>(&::Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionClosed)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180531aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionClosed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.AddNotifyPeerConnectionEstablished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>, ::System::Object*, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*)>(&::Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionEstablished)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180531d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionEstablished", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.AddNotifyPeerConnectionInterrupted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionInterruptedOptions>, ::System::Object*, ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallback*)>(&::Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionInterrupted)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180531f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionInterrupted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionInterruptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.AddNotifyPeerConnectionRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>, ::System::Object*, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*)>(&::Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionRequest)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1805321f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionRequest", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.ClearPacketQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::ClearPacketQueueOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::ClearPacketQueue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180532460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"ClearPacketQueue", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::ClearPacketQueueOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::CloseConnection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180532530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::CloseConnectionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.CloseConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::CloseConnections)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180532600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"CloseConnections", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.GetNATType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::GetNATTypeOptions>, ::by_ref<::Epic::OnlineServices::P2P::NATType>)>(&::Epic::OnlineServices::P2P::P2PInterface::GetNATType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805326c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetNATType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetNATTypeOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::NATType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.GetNextReceivedPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::P2P::P2PInterface::GetNextReceivedPacketSize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180532700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetNextReceivedPacketSize", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.GetPacketQueueInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions>, ::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>)>(&::Epic::OnlineServices::P2P::P2PInterface::GetPacketQueueInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805327c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetPacketQueueInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.GetPortRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::GetPortRangeOptions>, ::by_ref<uint16_t>, ::by_ref<uint16_t>)>(&::Epic::OnlineServices::P2P::P2PInterface::GetPortRange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180532830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetPortRange", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetPortRangeOptions>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.GetRelayControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::GetRelayControlOptions>, ::by_ref<::Epic::OnlineServices::P2P::RelayControl>)>(&::Epic::OnlineServices::P2P::P2PInterface::GetRelayControl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180532870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetRelayControl", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetRelayControlOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::RelayControl>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.QueryNATType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::QueryNATTypeOptions>, ::System::Object*, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*)>(&::Epic::OnlineServices::P2P::P2PInterface::QueryNATType)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805328b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"QueryNATType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::QueryNATTypeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.RemoveNotifyIncomingPacketQueueFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(uint64_t)>(&::Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyIncomingPacketQueueFull)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180532d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyIncomingPacketQueueFull", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.RemoveNotifyPeerConnectionClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(uint64_t)>(&::Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionClosed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180532da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionClosed", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.RemoveNotifyPeerConnectionEstablished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(uint64_t)>(&::Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionEstablished)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180532dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionEstablished", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.RemoveNotifyPeerConnectionInterrupted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(uint64_t)>(&::Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionInterrupted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180532e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionInterrupted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.RemoveNotifyPeerConnectionRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::P2PInterface::*)(uint64_t)>(&::Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180532e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionRequest", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.SendPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::SendPacket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180532e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SendPacket", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.SetPacketQueueSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::SetPacketQueueSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180532ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SetPacketQueueSize", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.SetPortRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::SetPortRange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180532f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SetPortRange", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::P2PInterface.SetRelayControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::P2P::P2PInterface::*)(::by_ref<::Epic::OnlineServices::P2P::SetRelayControlOptions>)>(&::Epic::OnlineServices::P2P::P2PInterface::SetRelayControl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180532f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SetRelayControl", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetRelayControlOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::ReceivePacket(::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>  options, ::by_ref<::Epic::OnlineServices::ProductUserId*>  outPeerId, ::by_ref<::Epic::OnlineServices::P2P::SocketId>  outSocketId, ::by_ref<uint8_t>  outChannel, ::System::ArraySegment_1<uint8_t>  outData, ::by_ref<uint32_t>  outBytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"ReceivePacket", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::ProductUserId*>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SocketId>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPeerId, outSocketId, outChannel, outData, outBytesWritten);
}
inline void Epic::OnlineServices::P2P::P2PInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::P2PInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::AcceptConnection(::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AcceptConnection", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline uint64_t Epic::OnlineServices::P2P::P2PInterface::AddNotifyIncomingPacketQueueFull(::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*  incomingPacketQueueFullHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyIncomingPacketQueueFull", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, incomingPacketQueueFullHandler);
}
inline uint64_t Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionClosed(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*  connectionClosedHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionClosed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, connectionClosedHandler);
}
inline uint64_t Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionEstablished(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*  connectionEstablishedHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionEstablished", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, connectionEstablishedHandler);
}
inline uint64_t Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionInterrupted(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionInterruptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallback*  connectionInterruptedHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionInterrupted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionInterruptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, connectionInterruptedHandler);
}
inline uint64_t Epic::OnlineServices::P2P::P2PInterface::AddNotifyPeerConnectionRequest(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*  connectionRequestHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"AddNotifyPeerConnectionRequest", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, connectionRequestHandler);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::ClearPacketQueue(::by_ref<::Epic::OnlineServices::P2P::ClearPacketQueueOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"ClearPacketQueue", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::ClearPacketQueueOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::CloseConnection(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::CloseConnectionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::CloseConnections(::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"CloseConnections", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::GetNATType(::by_ref<::Epic::OnlineServices::P2P::GetNATTypeOptions>  options, ::by_ref<::Epic::OnlineServices::P2P::NATType>  outNATType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetNATType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetNATTypeOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::NATType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outNATType);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::GetNextReceivedPacketSize(::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>  options, ::by_ref<uint32_t>  outPacketSizeBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetNextReceivedPacketSize", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPacketSizeBytes);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::GetPacketQueueInfo(::by_ref<::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions>  options, ::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>  outPacketQueueInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetPacketQueueInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPacketQueueInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::GetPortRange(::by_ref<::Epic::OnlineServices::P2P::GetPortRangeOptions>  options, ::by_ref<uint16_t>  outPort, ::by_ref<uint16_t>  outNumAdditionalPortsToTry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetPortRange", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetPortRangeOptions>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPort, outNumAdditionalPortsToTry);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::GetRelayControl(::by_ref<::Epic::OnlineServices::P2P::GetRelayControlOptions>  options, ::by_ref<::Epic::OnlineServices::P2P::RelayControl>  outRelayControl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"GetRelayControl", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::GetRelayControlOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::RelayControl>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outRelayControl);
}
inline void Epic::OnlineServices::P2P::P2PInterface::QueryNATType(::by_ref<::Epic::OnlineServices::P2P::QueryNATTypeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"QueryNATType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::QueryNATTypeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyIncomingPacketQueueFull(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyIncomingPacketQueueFull", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionClosed(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionClosed", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionEstablished(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionEstablished", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionInterrupted(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionInterrupted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::P2P::P2PInterface::RemoveNotifyPeerConnectionRequest(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"RemoveNotifyPeerConnectionRequest", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::SendPacket(::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SendPacket", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::SetPacketQueueSize(::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SetPacketQueueSize", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::SetPortRange(::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SetPortRange", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::P2P::P2PInterface::SetRelayControl(::by_ref<::Epic::OnlineServices::P2P::SetRelayControlOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::P2PInterface*>(),
                        {"SetRelayControl", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetRelayControlOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::P2P::P2PInterface* Epic::OnlineServices::P2P::P2PInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::P2P::P2PInterface*>());
}
inline ::Epic::OnlineServices::P2P::P2PInterface* Epic::OnlineServices::P2P::P2PInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::P2P::P2PInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::P2PInterface::P2PInterface()   {
}
