#pragma once
// IWYU pragma private; include "Steamworks/SteamAppList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamAppList_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamAppList.GetNumInstalledApps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamAppList::GetNumInstalledApps)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805832e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetNumInstalledApps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAppList.GetInstalledApps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::Steamworks::AppId_t>, uint32_t)>(&::Steamworks::SteamAppList::GetInstalledApps)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805831f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetInstalledApps", {}, {::i2c::type_of<::ArrayW<::Steamworks::AppId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAppList.GetAppName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::AppId_t, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamAppList::GetAppName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805830c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetAppName", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAppList.GetAppInstallDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::AppId_t, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamAppList::GetAppInstallDir)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180582f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetAppInstallDir", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAppList.GetAppBuildId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamAppList::GetAppBuildId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180582ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetAppBuildId", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Steamworks::SteamAppList::GetNumInstalledApps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetNumInstalledApps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamAppList::GetInstalledApps(::ArrayW<::Steamworks::AppId_t>  pvecAppID, uint32_t  unMaxAppIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetInstalledApps", {}, {::i2c::type_of<::ArrayW<::Steamworks::AppId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pvecAppID, unMaxAppIDs);
}
inline int32_t Steamworks::SteamAppList::GetAppName(::Steamworks::AppId_t  nAppID, ::by_ref<::StringW>  pchName, int32_t  cchNameMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetAppName", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nAppID, pchName, cchNameMax);
}
inline int32_t Steamworks::SteamAppList::GetAppInstallDir(::Steamworks::AppId_t  nAppID, ::by_ref<::StringW>  pchDirectory, int32_t  cchNameMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetAppInstallDir", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nAppID, pchDirectory, cchNameMax);
}
inline int32_t Steamworks::SteamAppList::GetAppBuildId(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAppList*>(),
                        {"GetAppBuildId", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nAppID);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamAppList::SteamAppList()   {
}
