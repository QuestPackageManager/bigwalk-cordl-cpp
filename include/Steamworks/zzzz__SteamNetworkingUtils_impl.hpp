#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingUtils_def.hpp"
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
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.AllocateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::Steamworks::SteamNetworkingUtils::AllocateMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"AllocateMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.InitRelayNetworkAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamNetworkingUtils::InitRelayNetworkAccess)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b6760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"InitRelayNetworkAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetRelayNetworkStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingAvailability (*)(::by_ref<::Steamworks::SteamRelayNetworkStatus_t>)>(&::Steamworks::SteamNetworkingUtils::GetRelayNetworkStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetRelayNetworkStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamRelayNetworkStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetLocalPingLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamNetworkingUtils::GetLocalPingLocation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetLocalPingLocation", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.EstimatePingTimeBetweenTwoLocations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamNetworkingUtils::EstimatePingTimeBetweenTwoLocations)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b6390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"EstimatePingTimeBetweenTwoLocations", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.EstimatePingTimeFromLocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamNetworkingUtils::EstimatePingTimeFromLocalHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b63e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"EstimatePingTimeFromLocalHost", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.ConvertPingLocationToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkPingLocation_t>, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamNetworkingUtils::ConvertPingLocationToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b62f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"ConvertPingLocationToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.ParsePingLocationString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>)>(&::Steamworks::SteamNetworkingUtils::ParsePingLocationString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"ParsePingLocationString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.CheckPingDataUpToDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::Steamworks::SteamNetworkingUtils::CheckPingDataUpToDate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"CheckPingDataUpToDate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetPingToDataCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SteamNetworkingPOPID, ::by_ref<::Steamworks::SteamNetworkingPOPID>)>(&::Steamworks::SteamNetworkingUtils::GetPingToDataCenter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b6680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetPingToDataCenter", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetDirectPingToPOP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SteamNetworkingPOPID)>(&::Steamworks::SteamNetworkingUtils::GetDirectPingToPOP)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetDirectPingToPOP", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetPOPCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamNetworkingUtils::GetPOPCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b6600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetPOPCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetPOPList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Steamworks::SteamNetworkingPOPID>, int32_t)>(&::Steamworks::SteamNetworkingUtils::GetPOPList)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b6630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetPOPList", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetLocalTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamNetworkingMicroseconds (*)()>(&::Steamworks::SteamNetworkingUtils::GetLocalTimestamp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b65d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetLocalTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SetDebugOutputFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::ESteamNetworkingSocketsDebugOutputType, ::Steamworks::FSteamNetworkingSocketsDebugOutput*)>(&::Steamworks::SteamNetworkingUtils::SetDebugOutputFunction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SetDebugOutputFunction", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingSocketsDebugOutputType>(), ::i2c::type_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.IsFakeIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Steamworks::SteamNetworkingUtils::IsFakeIPv4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"IsFakeIPv4", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetIPv4FakeIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingFakeIPType (*)(uint32_t)>(&::Steamworks::SteamNetworkingUtils::GetIPv4FakeIPType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetIPv4FakeIPType", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetRealIdentityForFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, ::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamNetworkingUtils::GetRealIdentityForFakeIP)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b66d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetRealIdentityForFakeIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SetConfigValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ESteamNetworkingConfigValue, ::Steamworks::ESteamNetworkingConfigScope, ::System::IntPtr, ::Steamworks::ESteamNetworkingConfigDataType, ::System::IntPtr)>(&::Steamworks::SteamNetworkingUtils::SetConfigValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigDataType>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetConfigValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingGetConfigValueResult (*)(::Steamworks::ESteamNetworkingConfigValue, ::Steamworks::ESteamNetworkingConfigScope, ::System::IntPtr, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>, ::System::IntPtr, ::by_ref<uint64_t>)>(&::Steamworks::SteamNetworkingUtils::GetConfigValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b6490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.GetConfigValueInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::ESteamNetworkingConfigValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>)>(&::Steamworks::SteamNetworkingUtils::GetConfigValueInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b6420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetConfigValueInfo", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigScope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.IterateGenericEditableConfigValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingConfigValue (*)(::Steamworks::ESteamNetworkingConfigValue, bool)>(&::Steamworks::SteamNetworkingUtils::IterateGenericEditableConfigValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"IterateGenericEditableConfigValues", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SteamNetworkingIPAddr_ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, ::by_ref<::StringW>, uint32_t, bool)>(&::Steamworks::SteamNetworkingUtils::SteamNetworkingIPAddr_ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805b6b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SteamNetworkingIPAddr_ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>, ::StringW)>(&::Steamworks::SteamNetworkingUtils::SteamNetworkingIPAddr_ParseString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b6a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SteamNetworkingIPAddr_GetFakeIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingFakeIPType (*)(::by_ref<::Steamworks::SteamNetworkingIPAddr>)>(&::Steamworks::SteamNetworkingUtils::SteamNetworkingIPAddr_GetFakeIPType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b69e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_GetFakeIPType", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SteamNetworkingIdentity_ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamNetworkingUtils::SteamNetworkingIdentity_ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b6cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingUtils.SteamNetworkingIdentity_ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::StringW)>(&::Steamworks::SteamNetworkingUtils::SteamNetworkingIdentity_ParseString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b6bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Steamworks::SteamNetworkingUtils::AllocateMessage(int32_t  cbAllocateBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"AllocateMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cbAllocateBuffer);
}
inline void Steamworks::SteamNetworkingUtils::InitRelayNetworkAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"InitRelayNetworkAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Steamworks::ESteamNetworkingAvailability Steamworks::SteamNetworkingUtils::GetRelayNetworkStatus(::by_ref<::Steamworks::SteamRelayNetworkStatus_t>  pDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetRelayNetworkStatus", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamRelayNetworkStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingAvailability>(nullptr, ___internal_method, pDetails);
}
inline float_t Steamworks::SteamNetworkingUtils::GetLocalPingLocation(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetLocalPingLocation", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, result);
}
inline int32_t Steamworks::SteamNetworkingUtils::EstimatePingTimeBetweenTwoLocations(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location1, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"EstimatePingTimeBetweenTwoLocations", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location1, location2);
}
inline int32_t Steamworks::SteamNetworkingUtils::EstimatePingTimeFromLocalHost(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  remoteLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"EstimatePingTimeFromLocalHost", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, remoteLocation);
}
inline void Steamworks::SteamNetworkingUtils::ConvertPingLocationToString(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location, ::by_ref<::StringW>  pszBuf, int32_t  cchBufSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"ConvertPingLocationToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, pszBuf, cchBufSize);
}
inline bool Steamworks::SteamNetworkingUtils::ParsePingLocationString(::StringW  pszString, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"ParsePingLocationString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkPingLocation_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pszString, result);
}
inline bool Steamworks::SteamNetworkingUtils::CheckPingDataUpToDate(float_t  flMaxAgeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"CheckPingDataUpToDate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flMaxAgeSeconds);
}
inline int32_t Steamworks::SteamNetworkingUtils::GetPingToDataCenter(::Steamworks::SteamNetworkingPOPID  popID, ::by_ref<::Steamworks::SteamNetworkingPOPID>  pViaRelayPoP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetPingToDataCenter", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, popID, pViaRelayPoP);
}
inline int32_t Steamworks::SteamNetworkingUtils::GetDirectPingToPOP(::Steamworks::SteamNetworkingPOPID  popID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetDirectPingToPOP", {}, {::i2c::type_of<::Steamworks::SteamNetworkingPOPID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, popID);
}
inline int32_t Steamworks::SteamNetworkingUtils::GetPOPCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetPOPCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamNetworkingUtils::GetPOPList(::by_ref<::Steamworks::SteamNetworkingPOPID>  list, int32_t  nListSz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetPOPList", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingPOPID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, nListSz);
}
inline ::Steamworks::SteamNetworkingMicroseconds Steamworks::SteamNetworkingUtils::GetLocalTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetLocalTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamNetworkingMicroseconds>(nullptr, ___internal_method);
}
inline void Steamworks::SteamNetworkingUtils::SetDebugOutputFunction(::Steamworks::ESteamNetworkingSocketsDebugOutputType  eDetailLevel, ::Steamworks::FSteamNetworkingSocketsDebugOutput*  pfnFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SetDebugOutputFunction", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingSocketsDebugOutputType>(), ::i2c::type_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eDetailLevel, pfnFunc);
}
inline bool Steamworks::SteamNetworkingUtils::IsFakeIPv4(uint32_t  nIPv4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"IsFakeIPv4", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nIPv4);
}
inline ::Steamworks::ESteamNetworkingFakeIPType Steamworks::SteamNetworkingUtils::GetIPv4FakeIPType(uint32_t  nIPv4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetIPv4FakeIPType", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingFakeIPType>(nullptr, ___internal_method, nIPv4);
}
inline ::Steamworks::EResult Steamworks::SteamNetworkingUtils::GetRealIdentityForFakeIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  fakeIP, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pOutRealIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetRealIdentityForFakeIP", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, fakeIP, pOutRealIdentity);
}
inline bool Steamworks::SteamNetworkingUtils::SetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::Steamworks::ESteamNetworkingConfigDataType  eDataType, ::System::IntPtr  pArg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigDataType>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eValue, eScopeType, scopeObj, eDataType, pArg);
}
inline ::Steamworks::ESteamNetworkingGetConfigValueResult Steamworks::SteamNetworkingUtils::GetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::System::IntPtr  pResult, ::by_ref<uint64_t>  cbResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetConfigValue", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::Steamworks::ESteamNetworkingConfigScope>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingGetConfigValueResult>(nullptr, ___internal_method, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
}
inline ::StringW Steamworks::SteamNetworkingUtils::GetConfigValueInfo(::Steamworks::ESteamNetworkingConfigValue  eValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>  pOutScope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"GetConfigValueInfo", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigDataType>>(), ::i2c::type_of<::by_ref<::Steamworks::ESteamNetworkingConfigScope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eValue, pOutDataType, pOutScope);
}
inline ::Steamworks::ESteamNetworkingConfigValue Steamworks::SteamNetworkingUtils::IterateGenericEditableConfigValues(::Steamworks::ESteamNetworkingConfigValue  eCurrent, bool  bEnumerateDevVars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"IterateGenericEditableConfigValues", {}, {::i2c::type_of<::Steamworks::ESteamNetworkingConfigValue>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingConfigValue>(nullptr, ___internal_method, eCurrent, bEnumerateDevVars);
}
inline void Steamworks::SteamNetworkingUtils::SteamNetworkingIPAddr_ToString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr, ::by_ref<::StringW>  buf, uint32_t  cbBuf, bool  bWithPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, addr, buf, cbBuf, bWithPort);
}
inline bool Steamworks::SteamNetworkingUtils::SteamNetworkingIPAddr_ParseString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  pAddr, ::StringW  pszStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pAddr, pszStr);
}
inline ::Steamworks::ESteamNetworkingFakeIPType Steamworks::SteamNetworkingUtils::SteamNetworkingIPAddr_GetFakeIPType(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIPAddr_GetFakeIPType", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIPAddr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingFakeIPType>(nullptr, ___internal_method, addr);
}
inline void Steamworks::SteamNetworkingUtils::SteamNetworkingIdentity_ToString(::by_ref<::Steamworks::SteamNetworkingIdentity>  identity, ::by_ref<::StringW>  buf, uint32_t  cbBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ToString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, buf, cbBuf);
}
inline bool Steamworks::SteamNetworkingUtils::SteamNetworkingIdentity_ParseString(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity, ::StringW  pszStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingUtils*>(),
                        {"SteamNetworkingIdentity_ParseString", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pIdentity, pszStr);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingUtils::SteamNetworkingUtils()   {
}
