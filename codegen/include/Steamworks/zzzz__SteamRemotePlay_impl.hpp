#pragma once
// IWYU pragma private; include "Steamworks/SteamRemotePlay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamRemotePlay_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__ESteamDeviceFormFactor_def.hpp"
#include "Steamworks/zzzz__RemotePlaySessionID_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.GetSessionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamRemotePlay::GetSessionCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.GetSessionID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::RemotePlaySessionID_t (*)(int32_t)>(&::Steamworks::SteamRemotePlay::GetSessionID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.GetSessionSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::RemotePlaySessionID_t)>(&::Steamworks::SteamRemotePlay::GetSessionSteamID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionSteamID", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.GetSessionClientName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::RemotePlaySessionID_t)>(&::Steamworks::SteamRemotePlay::GetSessionClientName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionClientName", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.GetSessionClientFormFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamDeviceFormFactor (*)(::Steamworks::RemotePlaySessionID_t)>(&::Steamworks::SteamRemotePlay::GetSessionClientFormFactor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionClientFormFactor", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.BGetSessionClientResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::RemotePlaySessionID_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Steamworks::SteamRemotePlay::BGetSessionClientResolution)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b7bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"BGetSessionClientResolution", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemotePlay.BSendRemotePlayTogetherInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamRemotePlay::BSendRemotePlayTogetherInvite)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"BSendRemotePlayTogetherInvite", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Steamworks::SteamRemotePlay::GetSessionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::RemotePlaySessionID_t Steamworks::SteamRemotePlay::GetSessionID(int32_t  iSessionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::RemotePlaySessionID_t>(nullptr, ___internal_method, iSessionIndex);
}
inline ::Steamworks::CSteamID Steamworks::SteamRemotePlay::GetSessionSteamID(::Steamworks::RemotePlaySessionID_t  unSessionID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionSteamID", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, unSessionID);
}
inline ::StringW Steamworks::SteamRemotePlay::GetSessionClientName(::Steamworks::RemotePlaySessionID_t  unSessionID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionClientName", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unSessionID);
}
inline ::Steamworks::ESteamDeviceFormFactor Steamworks::SteamRemotePlay::GetSessionClientFormFactor(::Steamworks::RemotePlaySessionID_t  unSessionID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"GetSessionClientFormFactor", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamDeviceFormFactor>(nullptr, ___internal_method, unSessionID);
}
inline bool Steamworks::SteamRemotePlay::BGetSessionClientResolution(::Steamworks::RemotePlaySessionID_t  unSessionID, ::by_ref<int32_t>  pnResolutionX, ::by_ref<int32_t>  pnResolutionY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"BGetSessionClientResolution", {}, {::i2c::type_of<::Steamworks::RemotePlaySessionID_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unSessionID, pnResolutionX, pnResolutionY);
}
inline bool Steamworks::SteamRemotePlay::BSendRemotePlayTogetherInvite(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemotePlay*>(),
                        {"BSendRemotePlayTogetherInvite", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDFriend);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamRemotePlay::SteamRemotePlay()   {
}
