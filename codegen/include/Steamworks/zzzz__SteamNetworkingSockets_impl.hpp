#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingSockets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingSockets_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingAvailability_def.hpp"
#include "Steamworks/zzzz__HSteamListenSocket_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "Steamworks/zzzz__HSteamNetPollGroup_def.hpp"
#include "Steamworks/zzzz__ISteamNetworkingConnectionSignaling_def.hpp"
#include "Steamworks/zzzz__ISteamNetworkingSignalingRecvContext_def.hpp"
#include "Steamworks/zzzz__SteamDatagramHostedAddress_def.hpp"
#include "Steamworks/zzzz__SteamDatagramRelayAuthTicket_def.hpp"
#include "Steamworks/zzzz__SteamNetAuthenticationStatus_t_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionRealTimeLaneStatus_t_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionRealTimeStatus_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingConfigValue_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingErrMsg_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingFakeIPResult_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIPAddr_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingMessage_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingPOPID_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreateListenSocketIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::CreateListenSocketIP)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b55c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateListenSocketIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ConnectByIPAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::ConnectByIPAddress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectByIPAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreateListenSocketP2P
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::CreateListenSocketP2P)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateListenSocketP2P", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ConnectP2P
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::ConnectP2P)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b5440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectP2P", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.AcceptConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::SteamNetworkingSockets::AcceptConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"AcceptConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, int32_t, ::StringW, bool)>(&::Steamworks::SteamNetworkingSockets::CloseConnection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805b51a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CloseListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamListenSocket)>(&::Steamworks::SteamNetworkingSockets::CloseListenSocket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b52b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CloseListenSocket", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.SetConnectionUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, int64_t)>(&::Steamworks::SteamNetworkingSockets::SetConnectionUserData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetConnectionUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::SteamNetworkingSockets::GetConnectionUserData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.SetConnectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HSteamNetConnection, ::StringW)>(&::Steamworks::SteamNetworkingSockets::SetConnectionName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805b6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetConnectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamNetworkingSockets::GetConnectionName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805b5960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.SendMessageToConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, ::System::IntPtr, uint32_t, int32_t, ::by_ref<int64_t>)>(&::Steamworks::SteamNetworkingSockets::SendMessageToConnection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b5fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SendMessageToConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.SendMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::Steamworks::SteamNetworkingMessage_t>, ::ArrayW<int64_t>)>(&::Steamworks::SteamNetworkingSockets::SendMessages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b6040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SendMessages", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingMessage_t>>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.FlushMessagesOnConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::SteamNetworkingSockets::FlushMessagesOnConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"FlushMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ReceiveMessagesOnConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamNetConnection, ::ArrayW<::System::IntPtr>, int32_t)>(&::Steamworks::SteamNetworkingSockets::ReceiveMessagesOnConnection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceiveMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetConnectionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>)>(&::Steamworks::SteamNetworkingSockets::GetConnectionInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b5910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionInfo", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetConnectionRealTimeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>, int32_t, ::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>)>(&::Steamworks::SteamNetworkingSockets::GetConnectionRealTimeStatus)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b5a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionRealTimeStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetDetailedConnectionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamNetConnection, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamNetworkingSockets::GetDetailedConnectionStatus)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805b5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetDetailedConnectionStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetListenSocketAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamListenSocket, ::by_ref<::Steamworks::SteamNetworkingIPAddr>)>(&::Steamworks::SteamNetworkingSockets::GetListenSocketAddress)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b5d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetListenSocketAddress", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreateSocketPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::HSteamNetConnection>, ::by_ref<::Steamworks::HSteamNetConnection>, bool, ::by_ref<::Steamworks::SteamNetworkingIdentity>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamNetworkingSockets::CreateSocketPair)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateSocketPair", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ConfigureConnectionLanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, int32_t, ::by_ref<int32_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamNetworkingSockets::ConfigureConnectionLanes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b52f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConfigureConnectionLanes", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamNetworkingSockets::GetIdentity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.InitAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingAvailability (*)()>(&::Steamworks::SteamNetworkingSockets::InitAuthentication)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b5da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"InitAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetAuthenticationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingAvailability (*)(::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>)>(&::Steamworks::SteamNetworkingSockets::GetAuthenticationStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetAuthenticationStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreatePollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetPollGroup (*)()>(&::Steamworks::SteamNetworkingSockets::CreatePollGroup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreatePollGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.DestroyPollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetPollGroup)>(&::Steamworks::SteamNetworkingSockets::DestroyPollGroup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"DestroyPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.SetConnectionPollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::Steamworks::HSteamNetPollGroup)>(&::Steamworks::SteamNetworkingSockets::SetConnectionPollGroup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetConnectionPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ReceiveMessagesOnPollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamNetPollGroup, ::ArrayW<::System::IntPtr>, int32_t)>(&::Steamworks::SteamNetworkingSockets::ReceiveMessagesOnPollGroup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceiveMessagesOnPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ReceivedRelayAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>)>(&::Steamworks::SteamNetworkingSockets::ReceivedRelayAuthTicket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceivedRelayAuthTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.FindRelayAuthTicketForServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>)>(&::Steamworks::SteamNetworkingSockets::FindRelayAuthTicketForServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b57d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"FindRelayAuthTicketForServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ConnectToHostedDedicatedServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::ConnectToHostedDedicatedServer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b54b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectToHostedDedicatedServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetHostedDedicatedServerPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)()>(&::Steamworks::SteamNetworkingSockets::GetHostedDedicatedServerPort)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b5c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetHostedDedicatedServerPOPID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamNetworkingPOPID (*)()>(&::Steamworks::SteamNetworkingSockets::GetHostedDedicatedServerPOPID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b5c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPOPID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetHostedDedicatedServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::by_ref<::Steamworks::SteamDatagramHostedAddress>)>(&::Steamworks::SteamNetworkingSockets::GetHostedDedicatedServerAddress)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetHostedDedicatedServerAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamDatagramHostedAddress>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreateHostedDedicatedServerListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::CreateHostedDedicatedServerListenSocket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateHostedDedicatedServerListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetGameCoordinatorServerLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::System::IntPtr, ::by_ref<int32_t>, ::System::IntPtr)>(&::Steamworks::SteamNetworkingSockets::GetGameCoordinatorServerLogin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetGameCoordinatorServerLogin", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ConnectP2PCustomSignaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>, ::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::ConnectP2PCustomSignaling)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b53c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectP2PCustomSignaling", {}, {::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ReceivedP2PCustomSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>)>(&::Steamworks::SteamNetworkingSockets::ReceivedP2PCustomSignal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceivedP2PCustomSignal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetCertificateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, ::System::IntPtr, ::by_ref<::Steamworks::SteamNetworkingErrMsg>)>(&::Steamworks::SteamNetworkingSockets::GetCertificateRequest)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetCertificateRequest", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.SetCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::Steamworks::SteamNetworkingErrMsg>)>(&::Steamworks::SteamNetworkingSockets::SetCertificate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b60a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetCertificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.ResetIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamNetworkingSockets::ResetIdentity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ResetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.RunCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamNetworkingSockets::RunCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b5f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"RunCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.BeginAsyncRequestFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Steamworks::SteamNetworkingSockets::BeginAsyncRequestFakeIP)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"BeginAsyncRequestFakeIP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>)>(&::Steamworks::SteamNetworkingSockets::GetFakeIP)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreateListenSocketP2PFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamNetworkingSockets::CreateListenSocketP2PFakeIP)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b5620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateListenSocketP2PFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.GetRemoteFakeIPForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetworkingIPAddr>)>(&::Steamworks::SteamNetworkingSockets::GetRemoteFakeIPForConnection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b5d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetRemoteFakeIPForConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingSockets.CreateFakeUDPPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::Steamworks::SteamNetworkingSockets::CreateFakeUDPPort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b5520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateFakeUDPPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HSteamListenSocket Steamworks::SteamNetworkingSockets::CreateListenSocketIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  localAddress, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateListenSocketIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, localAddress, nOptions, pOptions);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamNetworkingSockets::ConnectByIPAddress(::by_ref<::Steamworks::SteamNetworkingIPAddr>  address, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectByIPAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, address, nOptions, pOptions);
}
inline ::Steamworks::HSteamListenSocket Steamworks::SteamNetworkingSockets::CreateListenSocketP2P(int32_t  nLocalVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateListenSocketP2P", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, nLocalVirtualPort, nOptions, pOptions);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamNetworkingSockets::ConnectP2P(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectP2P", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, identityRemote, nRemoteVirtualPort, nOptions, pOptions);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::AcceptConnection(::Steamworks::HSteamNetConnection  hConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"AcceptConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn);
}
inline bool Steamworks::SteamNetworkingSockets::CloseConnection(::Steamworks::HSteamNetConnection  hPeer, int32_t  nReason, ::StringW  pszDebug, bool  bEnableLinger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPeer, nReason, pszDebug, bEnableLinger);
}
inline bool Steamworks::SteamNetworkingSockets::CloseListenSocket(::Steamworks::HSteamListenSocket  hSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CloseListenSocket", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket);
}
inline bool Steamworks::SteamNetworkingSockets::SetConnectionUserData(::Steamworks::HSteamNetConnection  hPeer, int64_t  nUserData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPeer, nUserData);
}
inline int64_t Steamworks::SteamNetworkingSockets::GetConnectionUserData(::Steamworks::HSteamNetConnection  hPeer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, hPeer);
}
inline void Steamworks::SteamNetworkingSockets::SetConnectionName(::Steamworks::HSteamNetConnection  hPeer, ::StringW  pszName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hPeer, pszName);
}
inline bool Steamworks::SteamNetworkingSockets::GetConnectionName(::Steamworks::HSteamNetConnection  hPeer, ::by_ref<::StringW>  pszName, int32_t  nMaxLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPeer, pszName, nMaxLen);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::SendMessageToConnection(::Steamworks::HSteamNetConnection  hConn, ::System::IntPtr  pData, uint32_t  cbData, int32_t  nSendFlags, ::by_ref<int64_t>  pOutMessageNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SendMessageToConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, pData, cbData, nSendFlags, pOutMessageNumber);
}
inline void Steamworks::SteamNetworkingSockets::SendMessages(int32_t  nMessages, ::ArrayW<::Steamworks::SteamNetworkingMessage_t>  pMessages, ::ArrayW<int64_t>  pOutMessageNumberOrResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SendMessages", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingMessage_t>>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nMessages, pMessages, pOutMessageNumberOrResult);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::FlushMessagesOnConnection(::Steamworks::HSteamNetConnection  hConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"FlushMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn);
}
inline int32_t Steamworks::SteamNetworkingSockets::ReceiveMessagesOnConnection(::Steamworks::HSteamNetConnection  hConn, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceiveMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hConn, ppOutMessages, nMaxMessages);
}
inline bool Steamworks::SteamNetworkingSockets::GetConnectionInfo(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionInfo", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hConn, pInfo);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::GetConnectionRealTimeStatus(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pStatus, int32_t  nLanes, ::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>  pLanes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetConnectionRealTimeStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, pStatus, nLanes, pLanes);
}
inline int32_t Steamworks::SteamNetworkingSockets::GetDetailedConnectionStatus(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::StringW>  pszBuf, int32_t  cbBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetDetailedConnectionStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hConn, pszBuf, cbBuf);
}
inline bool Steamworks::SteamNetworkingSockets::GetListenSocketAddress(::Steamworks::HSteamListenSocket  hSocket, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetListenSocketAddress", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, address);
}
inline bool Steamworks::SteamNetworkingSockets::CreateSocketPair(::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection1, ::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection2, bool  bUseNetworkLoopback, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity1, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateSocketPair", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::ConfigureConnectionLanes(::Steamworks::HSteamNetConnection  hConn, int32_t  nNumLanes, ::by_ref<int32_t>  pLanePriorities, ::by_ref<uint16_t>  pLaneWeights)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConfigureConnectionLanes", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, nNumLanes, pLanePriorities, pLaneWeights);
}
inline bool Steamworks::SteamNetworkingSockets::GetIdentity(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pIdentity);
}
inline ::Steamworks::ESteamNetworkingAvailability Steamworks::SteamNetworkingSockets::InitAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"InitAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingAvailability>(nullptr, ___internal_method);
}
inline ::Steamworks::ESteamNetworkingAvailability Steamworks::SteamNetworkingSockets::GetAuthenticationStatus(::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>  pDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetAuthenticationStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingAvailability>(nullptr, ___internal_method, pDetails);
}
inline ::Steamworks::HSteamNetPollGroup Steamworks::SteamNetworkingSockets::CreatePollGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreatePollGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetPollGroup>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamNetworkingSockets::DestroyPollGroup(::Steamworks::HSteamNetPollGroup  hPollGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"DestroyPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPollGroup);
}
inline bool Steamworks::SteamNetworkingSockets::SetConnectionPollGroup(::Steamworks::HSteamNetConnection  hConn, ::Steamworks::HSteamNetPollGroup  hPollGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetConnectionPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hConn, hPollGroup);
}
inline int32_t Steamworks::SteamNetworkingSockets::ReceiveMessagesOnPollGroup(::Steamworks::HSteamNetPollGroup  hPollGroup, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceiveMessagesOnPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hPollGroup, ppOutMessages, nMaxMessages);
}
inline bool Steamworks::SteamNetworkingSockets::ReceivedRelayAuthTicket(::System::IntPtr  pvTicket, int32_t  cbTicket, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceivedRelayAuthTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pvTicket, cbTicket, pOutParsedTicket);
}
inline int32_t Steamworks::SteamNetworkingSockets::FindRelayAuthTicketForServer(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityGameServer, int32_t  nRemoteVirtualPort, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"FindRelayAuthTicketForServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, identityGameServer, nRemoteVirtualPort, pOutParsedTicket);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamNetworkingSockets::ConnectToHostedDedicatedServer(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityTarget, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectToHostedDedicatedServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, identityTarget, nRemoteVirtualPort, nOptions, pOptions);
}
inline uint16_t Steamworks::SteamNetworkingSockets::GetHostedDedicatedServerPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamNetworkingPOPID Steamworks::SteamNetworkingSockets::GetHostedDedicatedServerPOPID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPOPID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamNetworkingPOPID>(nullptr, ___internal_method);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::GetHostedDedicatedServerAddress(::by_ref<::Steamworks::SteamDatagramHostedAddress>  pRouting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetHostedDedicatedServerAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamDatagramHostedAddress>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, pRouting);
}
inline ::Steamworks::HSteamListenSocket Steamworks::SteamNetworkingSockets::CreateHostedDedicatedServerListenSocket(int32_t  nLocalVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateHostedDedicatedServerListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, nLocalVirtualPort, nOptions, pOptions);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::GetGameCoordinatorServerLogin(::System::IntPtr  pLoginInfo, ::by_ref<int32_t>  pcbSignedBlob, ::System::IntPtr  pBlob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetGameCoordinatorServerLogin", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, pLoginInfo, pcbSignedBlob, pBlob);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamNetworkingSockets::ConnectP2PCustomSignaling(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>  pSignaling, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pPeerIdentity, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ConnectP2PCustomSignaling", {}, {::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, pSignaling, pPeerIdentity, nRemoteVirtualPort, nOptions, pOptions);
}
inline bool Steamworks::SteamNetworkingSockets::ReceivedP2PCustomSignal(::System::IntPtr  pMsg, int32_t  cbMsg, ::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>  pContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ReceivedP2PCustomSignal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pMsg, cbMsg, pContext);
}
inline bool Steamworks::SteamNetworkingSockets::GetCertificateRequest(::by_ref<int32_t>  pcbBlob, ::System::IntPtr  pBlob, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetCertificateRequest", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pcbBlob, pBlob, errMsg);
}
inline bool Steamworks::SteamNetworkingSockets::SetCertificate(::System::IntPtr  pCertificate, int32_t  cbCertificate, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"SetCertificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pCertificate, cbCertificate, errMsg);
}
inline void Steamworks::SteamNetworkingSockets::ResetIdentity(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"ResetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pIdentity);
}
inline void Steamworks::SteamNetworkingSockets::RunCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"RunCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamNetworkingSockets::BeginAsyncRequestFakeIP(int32_t  nNumPorts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"BeginAsyncRequestFakeIP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nNumPorts);
}
inline void Steamworks::SteamNetworkingSockets::GetFakeIP(int32_t  idxFirstPort, ::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>  pInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idxFirstPort, pInfo);
}
inline ::Steamworks::HSteamListenSocket Steamworks::SteamNetworkingSockets::CreateListenSocketP2PFakeIP(int32_t  idxFakePort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateListenSocketP2PFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, idxFakePort, nOptions, pOptions);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingSockets::GetRemoteFakeIPForConnection(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  pOutAddr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"GetRemoteFakeIPForConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, pOutAddr);
}
inline ::System::IntPtr Steamworks::SteamNetworkingSockets::CreateFakeUDPPort(int32_t  idxFakeServerPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingSockets*>(),
                        {"CreateFakeUDPPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, idxFakeServerPort);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingSockets::SteamNetworkingSockets()   {
}
