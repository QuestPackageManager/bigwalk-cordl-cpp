#pragma once
// IWYU pragma private; include "Steamworks/SteamVideo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamVideo_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamVideo.GetVideoURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamVideo::GetVideoURL)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"GetVideoURL", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamVideo.IsBroadcasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>)>(&::Steamworks::SteamVideo::IsBroadcasting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"IsBroadcasting", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamVideo.GetOPFSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamVideo::GetOPFSettings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"GetOPFSettings", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamVideo.GetOPFStringForApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t, ::by_ref<::StringW>, ::by_ref<int32_t>)>(&::Steamworks::SteamVideo::GetOPFStringForApp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805c0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"GetOPFStringForApp", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamVideo::GetVideoURL(::Steamworks::AppId_t  unVideoAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"GetVideoURL", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unVideoAppID);
}
inline bool Steamworks::SteamVideo::IsBroadcasting(::by_ref<int32_t>  pnNumViewers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"IsBroadcasting", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pnNumViewers);
}
inline void Steamworks::SteamVideo::GetOPFSettings(::Steamworks::AppId_t  unVideoAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"GetOPFSettings", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unVideoAppID);
}
inline bool Steamworks::SteamVideo::GetOPFStringForApp(::Steamworks::AppId_t  unVideoAppID, ::by_ref<::StringW>  pchBuffer, ::by_ref<int32_t>  pnBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamVideo*>(),
                        {"GetOPFStringForApp", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unVideoAppID, pchBuffer, pnBufferSize);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamVideo::SteamVideo()   {
}
