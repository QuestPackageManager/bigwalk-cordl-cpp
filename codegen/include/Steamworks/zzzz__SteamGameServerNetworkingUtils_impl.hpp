#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerNetworkingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerNetworkingUtils_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingAvailability_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigDataType_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigScope_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigValue_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingFakeIPType_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingGetConfigValueResult_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingSocketsDebugOutputType_def.hpp"
#include "Steamworks/zzzz__FSteamNetworkingSocketsDebugOutput_def.hpp"
#include "Steamworks/zzzz__SteamNetworkPingLocation_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIPAddr_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingPOPID_def.hpp"
#include "Steamworks/zzzz__SteamRelayNetworkStatus_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.AllocateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::Steamworks::SteamGameServerNetworkingUtils::AllocateMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805968c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"AllocateMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.InitRelayNetworkAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServerNetworkingUtils::InitRelayNetworkAccess)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180597b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"InitRelayNetworkAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetRelayNetworkStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingAvailability (*)(::by_ref<::Steamworks::SteamRelayNetworkStatus_t>)>(&::Steamworks::SteamGameServerNetworkingUtils::GetRelayNetworkStatus)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805979a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetRelayNetworkStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamRelayNetworkStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetLocalPingLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamGameServerNetworkingUtils::GetLocalPingLocation)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805972e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetLocalPingLocation", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.EstimatePingTimeBetweenTwoLocations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamGameServerNetworkingUtils::EstimatePingTimeBetweenTwoLocations)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180596cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"EstimatePingTimeBetweenTwoLocations", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.EstimatePingTimeFromLocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamGameServerNetworkingUtils::EstimatePingTimeFromLocalHost)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180596d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"EstimatePingTimeFromLocalHost", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.ConvertPingLocationToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamGameServerNetworkingUtils::ConvertPingLocationToString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180596a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"ConvertPingLocationToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.ParsePingLocationString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamGameServerNetworkingUtils::ParsePingLocationString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180597de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"ParsePingLocationString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.CheckPingDataUpToDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::Steamworks::SteamGameServerNetworkingUtils::CheckPingDataUpToDate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180596990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"CheckPingDataUpToDate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetPingToDataCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SteamNetworkingPOPID, ::by_ref<::Steamworks::SteamNetworkingPOPID>)>(&::Steamworks::SteamGameServerNetworkingUtils::GetPingToDataCenter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180597710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetPingToDataCenter", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetDirectPingToPOP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SteamNetworkingPOPID)>(&::Steamworks::SteamGameServerNetworkingUtils::GetDirectPingToPOP)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180597140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetDirectPingToPOP", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetPOPCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamGameServerNetworkingUtils::GetPOPCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180597560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetPOPCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetPOPList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkingPOPID>, int32_t)>(&::Steamworks::SteamGameServerNetworkingUtils::GetPOPList)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180597630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetPOPList", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetLocalTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamNetworkingMicroseconds (*)()>(&::Steamworks::SteamGameServerNetworkingUtils::GetLocalTimestamp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180597490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetLocalTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SetDebugOutputFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::ESteamNetworkingSocketsDebugOutputType, ::Steamworks::FSteamNetworkingSocketsDebugOutput*)>(&::Steamworks::SteamGameServerNetworkingUtils::SetDebugOutputFunction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180598170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SetDebugOutputFunction", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingSocketsDebugOutputType>(), ::i2c::type_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.IsFakeIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Steamworks::SteamGameServerNetworkingUtils::IsFakeIPv4)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180597c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"IsFakeIPv4", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetIPv4FakeIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingFakeIPType (*)(uint32_t)>(&::Steamworks::SteamGameServerNetworkingUtils::GetIPv4FakeIPType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180597210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetIPv4FakeIPType", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetRealIdentityForFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamGameServerNetworkingUtils::GetRealIdentityForFakeIP)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805977f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetRealIdentityForFakeIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SetConfigValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ESteamNetworkingConfigValue, ::Steamworks::ESteamNetworkingConfigScope, ::System::IntPtr, ::Steamworks::ESteamNetworkingConfigDataType, ::System::IntPtr)>(&::Steamworks::SteamGameServerNetworkingUtils::SetConfigValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180598060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigDataType>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetConfigValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingGetConfigValueResult (*)(::Steamworks::ESteamNetworkingConfigValue, ::Steamworks::ESteamNetworkingConfigScope, ::System::IntPtr, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>, ::System::IntPtr, ::by_ref<uint64_t>)>(&::Steamworks::SteamGameServerNetworkingUtils::GetConfigValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180597020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.GetConfigValueInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::ESteamNetworkingConfigValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>)>(&::Steamworks::SteamGameServerNetworkingUtils::GetConfigValueInfo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180596f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetConfigValueInfo", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigScope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.IterateGenericEditableConfigValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingConfigValue (*)(::Steamworks::ESteamNetworkingConfigValue, bool)>(&::Steamworks::SteamGameServerNetworkingUtils::IterateGenericEditableConfigValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180597d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"IterateGenericEditableConfigValues", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SteamNetworkingIPAddr_ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, ::by_ref<::StringW>, uint32_t, bool)>(&::Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIPAddr_ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805985d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SteamNetworkingIPAddr_ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, ::StringW)>(&::Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIPAddr_ParseString)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1805983a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SteamNetworkingIPAddr_GetFakeIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingFakeIPType (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>)>(&::Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIPAddr_GetFakeIPType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180598260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_GetFakeIPType", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SteamNetworkingIdentity_ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIdentity_ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805989e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworkingUtils.SteamNetworkingIdentity_ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::StringW)>(&::Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIdentity_ParseString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180598770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Steamworks::SteamGameServerNetworkingUtils::AllocateMessage(int32_t  cbAllocateBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"AllocateMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cbAllocateBuffer);
}
inline void Steamworks::SteamGameServerNetworkingUtils::InitRelayNetworkAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"InitRelayNetworkAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Steamworks::ESteamNetworkingAvailability Steamworks::SteamGameServerNetworkingUtils::GetRelayNetworkStatus(::by_ref<::Steamworks::SteamRelayNetworkStatus_t>  pDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetRelayNetworkStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamRelayNetworkStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingAvailability>(nullptr, ___internal_method, pDetails);
}
inline float_t Steamworks::SteamGameServerNetworkingUtils::GetLocalPingLocation(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetLocalPingLocation", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, result);
}
inline int32_t Steamworks::SteamGameServerNetworkingUtils::EstimatePingTimeBetweenTwoLocations(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location1, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"EstimatePingTimeBetweenTwoLocations", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location1, location2);
}
inline int32_t Steamworks::SteamGameServerNetworkingUtils::EstimatePingTimeFromLocalHost(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  remoteLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"EstimatePingTimeFromLocalHost", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, remoteLocation);
}
inline void Steamworks::SteamGameServerNetworkingUtils::ConvertPingLocationToString(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location, ::by_ref<::StringW>  pszBuf, int32_t  cchBufSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"ConvertPingLocationToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, pszBuf, cchBufSize);
}
inline bool Steamworks::SteamGameServerNetworkingUtils::ParsePingLocationString(::StringW  pszString, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"ParsePingLocationString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pszString, result);
}
inline bool Steamworks::SteamGameServerNetworkingUtils::CheckPingDataUpToDate(float_t  flMaxAgeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"CheckPingDataUpToDate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flMaxAgeSeconds);
}
inline int32_t Steamworks::SteamGameServerNetworkingUtils::GetPingToDataCenter(::Steamworks::SteamNetworkingPOPID  popID, ::by_ref<::Steamworks::SteamNetworkingPOPID>  pViaRelayPoP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetPingToDataCenter", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, popID, pViaRelayPoP);
}
inline int32_t Steamworks::SteamGameServerNetworkingUtils::GetDirectPingToPOP(::Steamworks::SteamNetworkingPOPID  popID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetDirectPingToPOP", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, popID);
}
inline int32_t Steamworks::SteamGameServerNetworkingUtils::GetPOPCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetPOPCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamGameServerNetworkingUtils::GetPOPList(::by_ref<::Steamworks::SteamNetworkingPOPID>  list, int32_t  nListSz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetPOPList", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, nListSz);
}
inline ::Steamworks::SteamNetworkingMicroseconds Steamworks::SteamGameServerNetworkingUtils::GetLocalTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetLocalTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamNetworkingMicroseconds>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerNetworkingUtils::SetDebugOutputFunction(::Steamworks::ESteamNetworkingSocketsDebugOutputType  eDetailLevel, ::Steamworks::FSteamNetworkingSocketsDebugOutput*  pfnFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SetDebugOutputFunction", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingSocketsDebugOutputType>(), ::i2c::type_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eDetailLevel, pfnFunc);
}
inline bool Steamworks::SteamGameServerNetworkingUtils::IsFakeIPv4(uint32_t  nIPv4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"IsFakeIPv4", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nIPv4);
}
inline ::Steamworks::ESteamNetworkingFakeIPType Steamworks::SteamGameServerNetworkingUtils::GetIPv4FakeIPType(uint32_t  nIPv4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetIPv4FakeIPType", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingFakeIPType>(nullptr, ___internal_method, nIPv4);
}
inline ::Steamworks::EResult Steamworks::SteamGameServerNetworkingUtils::GetRealIdentityForFakeIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  fakeIP, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pOutRealIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetRealIdentityForFakeIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, fakeIP, pOutRealIdentity);
}
inline bool Steamworks::SteamGameServerNetworkingUtils::SetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::Steamworks::ESteamNetworkingConfigDataType  eDataType, ::System::IntPtr  pArg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigDataType>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eValue, eScopeType, scopeObj, eDataType, pArg);
}
inline ::Steamworks::ESteamNetworkingGetConfigValueResult Steamworks::SteamGameServerNetworkingUtils::GetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::System::IntPtr  pResult, ::by_ref<uint64_t>  cbResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingGetConfigValueResult>(nullptr, ___internal_method, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
}
inline ::StringW Steamworks::SteamGameServerNetworkingUtils::GetConfigValueInfo(::Steamworks::ESteamNetworkingConfigValue  eValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>  pOutScope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"GetConfigValueInfo", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigScope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eValue, pOutDataType, pOutScope);
}
inline ::Steamworks::ESteamNetworkingConfigValue Steamworks::SteamGameServerNetworkingUtils::IterateGenericEditableConfigValues(::Steamworks::ESteamNetworkingConfigValue  eCurrent, bool  bEnumerateDevVars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"IterateGenericEditableConfigValues", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingConfigValue>(nullptr, ___internal_method, eCurrent, bEnumerateDevVars);
}
inline void Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIPAddr_ToString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr, ::by_ref<::StringW>  buf, uint32_t  cbBuf, bool  bWithPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, addr, buf, cbBuf, bWithPort);
}
inline bool Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIPAddr_ParseString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  pAddr, ::StringW  pszStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pAddr, pszStr);
}
inline ::Steamworks::ESteamNetworkingFakeIPType Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIPAddr_GetFakeIPType(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_GetFakeIPType", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingFakeIPType>(nullptr, ___internal_method, addr);
}
inline void Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIdentity_ToString(::by_ref<::Steamworks::SteamNetworkingIdentity>  identity, ::by_ref<::StringW>  buf, uint32_t  cbBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, buf, cbBuf);
}
inline bool Steamworks::SteamGameServerNetworkingUtils::SteamNetworkingIdentity_ParseString(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity, ::StringW  pszStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pIdentity, pszStr);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerNetworkingUtils::SteamGameServerNetworkingUtils()   {
}
