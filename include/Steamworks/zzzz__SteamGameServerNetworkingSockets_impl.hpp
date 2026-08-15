#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerNetworkingSockets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerNetworkingSockets_def.hpp"
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
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreateListenSocketIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::CreateListenSocketIP)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180593e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateListenSocketIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ConnectByIPAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::ConnectByIPAddress)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180593670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectByIPAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreateListenSocketP2P
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::CreateListenSocketP2P)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805940e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateListenSocketP2P", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ConnectP2P
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::ConnectP2P)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180593980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectP2P", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.AcceptConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::SteamGameServerNetworkingSockets::AcceptConnection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180593100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"AcceptConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, int32_t, ::StringW, bool)>(&::Steamworks::SteamGameServerNetworkingSockets::CloseConnection)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805932a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CloseListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamListenSocket)>(&::Steamworks::SteamGameServerNetworkingSockets::CloseListenSocket)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805934a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CloseListenSocket", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.SetConnectionUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, int64_t)>(&::Steamworks::SteamGameServerNetworkingSockets::SetConnectionUserData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805967e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetConnectionUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::SteamGameServerNetworkingSockets::GetConnectionUserData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180594f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.SetConnectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HSteamNetConnection, ::StringW)>(&::Steamworks::SteamGameServerNetworkingSockets::SetConnectionName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180596540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetConnectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamGameServerNetworkingSockets::GetConnectionName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180594d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.SendMessageToConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, ::System::IntPtr, uint32_t, int32_t, ::by_ref<int64_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::SendMessageToConnection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180596250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SendMessageToConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.SendMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::Steamworks::SteamNetworkingMessage_t>, ::ArrayW<int64_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::SendMessages)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180596360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SendMessages", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingMessage_t>>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.FlushMessagesOnConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection)>(&::Steamworks::SteamGameServerNetworkingSockets::FlushMessagesOnConnection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805947a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"FlushMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ReceiveMessagesOnConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamNetConnection, ::ArrayW<::System::IntPtr>, int32_t)>(&::Steamworks::SteamGameServerNetworkingSockets::ReceiveMessagesOnConnection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180595ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceiveMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetConnectionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetConnectionInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180594b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionInfo", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetConnectionRealTimeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>, int32_t, ::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetConnectionRealTimeStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180594e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionRealTimeStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetDetailedConnectionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamNetConnection, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamGameServerNetworkingSockets::GetDetailedConnectionStatus)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180594fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetDetailedConnectionStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetListenSocketAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamListenSocket, ::by_ref<::Steamworks::SteamNetworkingIPAddr>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetListenSocketAddress)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180595860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetListenSocketAddress", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreateSocketPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::HSteamNetConnection>, ::by_ref<::Steamworks::HSteamNetConnection>, bool, ::by_ref<::Steamworks::SteamNetworkingIdentity>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamGameServerNetworkingSockets::CreateSocketPair)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1805942b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateSocketPair", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ConfigureConnectionLanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, int32_t, ::by_ref<int32_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::ConfigureConnectionLanes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180593570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConfigureConnectionLanes", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetIdentity)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180595710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.InitAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingAvailability (*)()>(&::Steamworks::SteamGameServerNetworkingSockets::InitAuthentication)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180595ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"InitAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetAuthenticationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingAvailability (*)(::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetAuthenticationStatus)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180594870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetAuthenticationStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreatePollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetPollGroup (*)()>(&::Steamworks::SteamGameServerNetworkingSockets::CreatePollGroup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805941e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreatePollGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.DestroyPollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetPollGroup)>(&::Steamworks::SteamGameServerNetworkingSockets::DestroyPollGroup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805944d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"DestroyPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.SetConnectionPollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamNetConnection, ::Steamworks::HSteamNetPollGroup)>(&::Steamworks::SteamGameServerNetworkingSockets::SetConnectionPollGroup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180596700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetConnectionPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ReceiveMessagesOnPollGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamNetPollGroup, ::ArrayW<::System::IntPtr>, int32_t)>(&::Steamworks::SteamGameServerNetworkingSockets::ReceiveMessagesOnPollGroup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180595ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceiveMessagesOnPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ReceivedRelayAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>)>(&::Steamworks::SteamGameServerNetworkingSockets::ReceivedRelayAuthTicket)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180595e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceivedRelayAuthTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.FindRelayAuthTicketForServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>)>(&::Steamworks::SteamGameServerNetworkingSockets::FindRelayAuthTicketForServer)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805945a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"FindRelayAuthTicketForServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ConnectToHostedDedicatedServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::ConnectToHostedDedicatedServer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180593b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectToHostedDedicatedServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetHostedDedicatedServerPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)()>(&::Steamworks::SteamGameServerNetworkingSockets::GetHostedDedicatedServerPort)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180595640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetHostedDedicatedServerPOPID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamNetworkingPOPID (*)()>(&::Steamworks::SteamGameServerNetworkingSockets::GetHostedDedicatedServerPOPID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180595570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPOPID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetHostedDedicatedServerAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::by_ref<::Steamworks::SteamDatagramHostedAddress>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetHostedDedicatedServerAddress)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180595430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetHostedDedicatedServerAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamDatagramHostedAddress>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreateHostedDedicatedServerListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::CreateHostedDedicatedServerListenSocket)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180593d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateHostedDedicatedServerListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetGameCoordinatorServerLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::System::IntPtr, ::by_ref<int32_t>, ::System::IntPtr)>(&::Steamworks::SteamGameServerNetworkingSockets::GetGameCoordinatorServerLogin)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180595340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetGameCoordinatorServerLogin", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ConnectP2PCustomSignaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamNetConnection (*)(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>, ::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::ConnectP2PCustomSignaling)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805937e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectP2PCustomSignaling", {}, {::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ReceivedP2PCustomSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>)>(&::Steamworks::SteamGameServerNetworkingSockets::ReceivedP2PCustomSignal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180595da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceivedP2PCustomSignal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetCertificateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, ::System::IntPtr, ::by_ref<::Steamworks::SteamNetworkingErrMsg>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetCertificateRequest)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180594a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetCertificateRequest", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.SetCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::Steamworks::SteamNetworkingErrMsg>)>(&::Steamworks::SteamGameServerNetworkingSockets::SetCertificate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805963e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetCertificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.ResetIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamGameServerNetworkingSockets::ResetIdentity)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180596030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ResetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.RunCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServerNetworkingSockets::RunCallbacks)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180596180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"RunCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.BeginAsyncRequestFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Steamworks::SteamGameServerNetworkingSockets::BeginAsyncRequestFakeIP)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805931d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"BeginAsyncRequestFakeIP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetFakeIP)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180595100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreateListenSocketP2PFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamListenSocket (*)(int32_t, int32_t, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>)>(&::Steamworks::SteamGameServerNetworkingSockets::CreateListenSocketP2PFakeIP)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180593fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateListenSocketP2PFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.GetRemoteFakeIPForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetworkingIPAddr>)>(&::Steamworks::SteamGameServerNetworkingSockets::GetRemoteFakeIPForConnection)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805959a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetRemoteFakeIPForConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingSockets.CreateFakeUDPPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::Steamworks::SteamGameServerNetworkingSockets::CreateFakeUDPPort)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180593ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateFakeUDPPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HSteamListenSocket Steamworks::SteamGameServerNetworkingSockets::CreateListenSocketIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  localAddress, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateListenSocketIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, localAddress, nOptions, pOptions);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamGameServerNetworkingSockets::ConnectByIPAddress(::by_ref<::Steamworks::SteamNetworkingIPAddr>  address, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectByIPAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, address, nOptions, pOptions);
}
inline ::Steamworks::HSteamListenSocket Steamworks::SteamGameServerNetworkingSockets::CreateListenSocketP2P(int32_t  nLocalVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateListenSocketP2P", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, nLocalVirtualPort, nOptions, pOptions);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamGameServerNetworkingSockets::ConnectP2P(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectP2P", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, identityRemote, nRemoteVirtualPort, nOptions, pOptions);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::AcceptConnection(::Steamworks::HSteamNetConnection  hConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"AcceptConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::CloseConnection(::Steamworks::HSteamNetConnection  hPeer, int32_t  nReason, ::StringW  pszDebug, bool  bEnableLinger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CloseConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPeer, nReason, pszDebug, bEnableLinger);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::CloseListenSocket(::Steamworks::HSteamListenSocket  hSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CloseListenSocket", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::SetConnectionUserData(::Steamworks::HSteamNetConnection  hPeer, int64_t  nUserData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPeer, nUserData);
}
inline int64_t Steamworks::SteamGameServerNetworkingSockets::GetConnectionUserData(::Steamworks::HSteamNetConnection  hPeer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionUserData", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, hPeer);
}
inline void Steamworks::SteamGameServerNetworkingSockets::SetConnectionName(::Steamworks::HSteamNetConnection  hPeer, ::StringW  pszName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hPeer, pszName);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::GetConnectionName(::Steamworks::HSteamNetConnection  hPeer, ::by_ref<::StringW>  pszName, int32_t  nMaxLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionName", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPeer, pszName, nMaxLen);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::SendMessageToConnection(::Steamworks::HSteamNetConnection  hConn, ::System::IntPtr  pData, uint32_t  cbData, int32_t  nSendFlags, ::by_ref<int64_t>  pOutMessageNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SendMessageToConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, pData, cbData, nSendFlags, pOutMessageNumber);
}
inline void Steamworks::SteamGameServerNetworkingSockets::SendMessages(int32_t  nMessages, ::ArrayW<::Steamworks::SteamNetworkingMessage_t>  pMessages, ::ArrayW<int64_t>  pOutMessageNumberOrResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SendMessages", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingMessage_t>>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nMessages, pMessages, pOutMessageNumberOrResult);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::FlushMessagesOnConnection(::Steamworks::HSteamNetConnection  hConn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"FlushMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn);
}
inline int32_t Steamworks::SteamGameServerNetworkingSockets::ReceiveMessagesOnConnection(::Steamworks::HSteamNetConnection  hConn, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceiveMessagesOnConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hConn, ppOutMessages, nMaxMessages);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::GetConnectionInfo(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionInfo", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hConn, pInfo);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::GetConnectionRealTimeStatus(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pStatus, int32_t  nLanes, ::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>  pLanes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetConnectionRealTimeStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, pStatus, nLanes, pLanes);
}
inline int32_t Steamworks::SteamGameServerNetworkingSockets::GetDetailedConnectionStatus(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::StringW>  pszBuf, int32_t  cbBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetDetailedConnectionStatus", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hConn, pszBuf, cbBuf);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::GetListenSocketAddress(::Steamworks::HSteamListenSocket  hSocket, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetListenSocketAddress", {}, {::i2c::type_of<::Steamworks::HSteamListenSocket>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, address);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::CreateSocketPair(::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection1, ::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection2, bool  bUseNetworkLoopback, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity1, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateSocketPair", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<::by_ref<::Steamworks::HSteamNetConnection>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::ConfigureConnectionLanes(::Steamworks::HSteamNetConnection  hConn, int32_t  nNumLanes, ::by_ref<int32_t>  pLanePriorities, ::by_ref<uint16_t>  pLaneWeights)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConfigureConnectionLanes", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, nNumLanes, pLanePriorities, pLaneWeights);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::GetIdentity(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pIdentity);
}
inline ::Steamworks::ESteamNetworkingAvailability Steamworks::SteamGameServerNetworkingSockets::InitAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"InitAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingAvailability>(nullptr, ___internal_method);
}
inline ::Steamworks::ESteamNetworkingAvailability Steamworks::SteamGameServerNetworkingSockets::GetAuthenticationStatus(::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>  pDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetAuthenticationStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingAvailability>(nullptr, ___internal_method, pDetails);
}
inline ::Steamworks::HSteamNetPollGroup Steamworks::SteamGameServerNetworkingSockets::CreatePollGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreatePollGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetPollGroup>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::DestroyPollGroup(::Steamworks::HSteamNetPollGroup  hPollGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"DestroyPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hPollGroup);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::SetConnectionPollGroup(::Steamworks::HSteamNetConnection  hConn, ::Steamworks::HSteamNetPollGroup  hPollGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetConnectionPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::Steamworks::HSteamNetPollGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hConn, hPollGroup);
}
inline int32_t Steamworks::SteamGameServerNetworkingSockets::ReceiveMessagesOnPollGroup(::Steamworks::HSteamNetPollGroup  hPollGroup, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceiveMessagesOnPollGroup", {}, {::i2c::type_of<::Steamworks::HSteamNetPollGroup>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hPollGroup, ppOutMessages, nMaxMessages);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::ReceivedRelayAuthTicket(::System::IntPtr  pvTicket, int32_t  cbTicket, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceivedRelayAuthTicket", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pvTicket, cbTicket, pOutParsedTicket);
}
inline int32_t Steamworks::SteamGameServerNetworkingSockets::FindRelayAuthTicketForServer(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityGameServer, int32_t  nRemoteVirtualPort, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"FindRelayAuthTicketForServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, identityGameServer, nRemoteVirtualPort, pOutParsedTicket);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamGameServerNetworkingSockets::ConnectToHostedDedicatedServer(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityTarget, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectToHostedDedicatedServer", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, identityTarget, nRemoteVirtualPort, nOptions, pOptions);
}
inline uint16_t Steamworks::SteamGameServerNetworkingSockets::GetHostedDedicatedServerPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamNetworkingPOPID Steamworks::SteamGameServerNetworkingSockets::GetHostedDedicatedServerPOPID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetHostedDedicatedServerPOPID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamNetworkingPOPID>(nullptr, ___internal_method);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::GetHostedDedicatedServerAddress(::by_ref<::Steamworks::SteamDatagramHostedAddress>  pRouting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetHostedDedicatedServerAddress", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamDatagramHostedAddress>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, pRouting);
}
inline ::Steamworks::HSteamListenSocket Steamworks::SteamGameServerNetworkingSockets::CreateHostedDedicatedServerListenSocket(int32_t  nLocalVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateHostedDedicatedServerListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, nLocalVirtualPort, nOptions, pOptions);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::GetGameCoordinatorServerLogin(::System::IntPtr  pLoginInfo, ::by_ref<int32_t>  pcbSignedBlob, ::System::IntPtr  pBlob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetGameCoordinatorServerLogin", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, pLoginInfo, pcbSignedBlob, pBlob);
}
inline ::Steamworks::HSteamNetConnection Steamworks::SteamGameServerNetworkingSockets::ConnectP2PCustomSignaling(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>  pSignaling, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pPeerIdentity, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ConnectP2PCustomSignaling", {}, {::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamNetConnection>(nullptr, ___internal_method, pSignaling, pPeerIdentity, nRemoteVirtualPort, nOptions, pOptions);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::ReceivedP2PCustomSignal(::System::IntPtr  pMsg, int32_t  cbMsg, ::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>  pContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ReceivedP2PCustomSignal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pMsg, cbMsg, pContext);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::GetCertificateRequest(::by_ref<int32_t>  pcbBlob, ::System::IntPtr  pBlob, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetCertificateRequest", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pcbBlob, pBlob, errMsg);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::SetCertificate(::System::IntPtr  pCertificate, int32_t  cbCertificate, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"SetCertificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingErrMsg>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pCertificate, cbCertificate, errMsg);
}
inline void Steamworks::SteamGameServerNetworkingSockets::ResetIdentity(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"ResetIdentity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pIdentity);
}
inline void Steamworks::SteamGameServerNetworkingSockets::RunCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"RunCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerNetworkingSockets::BeginAsyncRequestFakeIP(int32_t  nNumPorts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"BeginAsyncRequestFakeIP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nNumPorts);
}
inline void Steamworks::SteamGameServerNetworkingSockets::GetFakeIP(int32_t  idxFirstPort, ::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>  pInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idxFirstPort, pInfo);
}
inline ::Steamworks::HSteamListenSocket Steamworks::SteamGameServerNetworkingSockets::CreateListenSocketP2PFakeIP(int32_t  idxFakePort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateListenSocketP2PFakeIP", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamListenSocket>(nullptr, ___internal_method, idxFakePort, nOptions, pOptions);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingSockets::GetRemoteFakeIPForConnection(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  pOutAddr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"GetRemoteFakeIPForConnection", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, hConn, pOutAddr);
}
inline ::System::IntPtr Steamworks::SteamGameServerNetworkingSockets::CreateFakeUDPPort(int32_t  idxFakeServerPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingSockets*>(),
                        {"CreateFakeUDPPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, idxFakeServerPort);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerNetworkingSockets::SteamGameServerNetworkingSockets()   {
}
