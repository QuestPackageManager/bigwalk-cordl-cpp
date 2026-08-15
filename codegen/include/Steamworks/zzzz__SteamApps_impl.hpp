#pragma once
// IWYU pragma private; include "Steamworks/SteamApps.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamApps_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__DepotId_t_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamApps.BIsSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamApps::BIsSubscribed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsLowViolence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamApps::BIsLowViolence)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805837a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsLowViolence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsCybercafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamApps::BIsCybercafe)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsCybercafe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsVACBanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamApps::BIsVACBanned)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsVACBanned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetCurrentGameLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamApps::GetCurrentGameLanguage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetCurrentGameLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetAvailableGameLanguages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamApps::GetAvailableGameLanguages)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAvailableGameLanguages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsSubscribedApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::BIsSubscribedApp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribedApp", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsDlcInstalled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::BIsDlcInstalled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805836d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsDlcInstalled", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetEarliestPurchaseUnixTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::GetEarliestPurchaseUnixTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805844e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetEarliestPurchaseUnixTime", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsSubscribedFromFreeWeekend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamApps::BIsSubscribedFromFreeWeekend)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribedFromFreeWeekend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetDLCCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamApps::GetDLCCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetDLCCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BGetDLCDataByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Steamworks::AppId_t>, ::by_ref<bool>, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamApps::BGetDLCDataByIndex)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805833b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BGetDLCDataByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::AppId_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.InstallDLC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::InstallDLC)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"InstallDLC", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.UninstallDLC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::UninstallDLC)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"UninstallDLC", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.RequestAppProofOfPurchaseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::RequestAppProofOfPurchaseKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"RequestAppProofOfPurchaseKey", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetCurrentBetaName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamApps::GetCurrentBetaName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180584120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetCurrentBetaName", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.MarkContentCorrupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamApps::MarkContentCorrupt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180584c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"MarkContentCorrupt", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetInstalledDepots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::AppId_t, ::ArrayW<::Steamworks::DepotId_t>, uint32_t)>(&::Steamworks::SteamApps::GetInstalledDepots)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180584790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetInstalledDepots", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::DepotId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetAppInstallDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::AppId_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamApps::GetAppInstallDir)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180583e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAppInstallDir", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsAppInstalled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamApps::BIsAppInstalled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsAppInstalled", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetAppOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)()>(&::Steamworks::SteamApps::GetAppOwner)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180583f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAppOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetLaunchQueryParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Steamworks::SteamApps::GetLaunchQueryParam)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805849b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetLaunchQueryParam", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetDlcDownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamApps::GetDlcDownloadProgress)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805843f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetDlcDownloadProgress", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetAppBuildId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamApps::GetAppBuildId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAppBuildId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.RequestAllProofOfPurchaseKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamApps::RequestAllProofOfPurchaseKeys)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180584d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"RequestAllProofOfPurchaseKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetFileDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamApps::GetFileDetails)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805845b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetFileDetails", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.GetLaunchCommandLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamApps::GetLaunchCommandLine)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180584890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetLaunchCommandLine", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsSubscribedFromFamilySharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamApps::BIsSubscribedFromFamilySharing)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180583940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribedFromFamilySharing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamApps.BIsTimedTrial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamApps::BIsTimedTrial)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180583bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsTimedTrial", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamApps::BIsSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamApps::BIsLowViolence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsLowViolence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamApps::BIsCybercafe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsCybercafe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamApps::BIsVACBanned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsVACBanned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamApps::GetCurrentGameLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetCurrentGameLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamApps::GetAvailableGameLanguages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAvailableGameLanguages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamApps::BIsSubscribedApp(::Steamworks::AppId_t  appID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribedApp", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, appID);
}
inline bool Steamworks::SteamApps::BIsDlcInstalled(::Steamworks::AppId_t  appID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsDlcInstalled", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, appID);
}
inline uint32_t Steamworks::SteamApps::GetEarliestPurchaseUnixTime(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetEarliestPurchaseUnixTime", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, nAppID);
}
inline bool Steamworks::SteamApps::BIsSubscribedFromFreeWeekend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribedFromFreeWeekend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamApps::GetDLCCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetDLCCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamApps::BGetDLCDataByIndex(int32_t  iDLC, ::by_ref<::Steamworks::AppId_t>  pAppID, ::by_ref<bool>  pbAvailable, ::by_ref<::StringW>  pchName, int32_t  cchNameBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BGetDLCDataByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::AppId_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}
inline void Steamworks::SteamApps::InstallDLC(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"InstallDLC", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nAppID);
}
inline void Steamworks::SteamApps::UninstallDLC(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"UninstallDLC", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nAppID);
}
inline void Steamworks::SteamApps::RequestAppProofOfPurchaseKey(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"RequestAppProofOfPurchaseKey", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nAppID);
}
inline bool Steamworks::SteamApps::GetCurrentBetaName(::by_ref<::StringW>  pchName, int32_t  cchNameBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetCurrentBetaName", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, cchNameBufferSize);
}
inline bool Steamworks::SteamApps::MarkContentCorrupt(bool  bMissingFilesOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"MarkContentCorrupt", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bMissingFilesOnly);
}
inline uint32_t Steamworks::SteamApps::GetInstalledDepots(::Steamworks::AppId_t  appID, ::ArrayW<::Steamworks::DepotId_t>  pvecDepots, uint32_t  cMaxDepots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetInstalledDepots", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::DepotId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, appID, pvecDepots, cMaxDepots);
}
inline uint32_t Steamworks::SteamApps::GetAppInstallDir(::Steamworks::AppId_t  appID, ::by_ref<::StringW>  pchFolder, uint32_t  cchFolderBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAppInstallDir", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, appID, pchFolder, cchFolderBufferSize);
}
inline bool Steamworks::SteamApps::BIsAppInstalled(::Steamworks::AppId_t  appID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsAppInstalled", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, appID);
}
inline ::Steamworks::CSteamID Steamworks::SteamApps::GetAppOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAppOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamApps::GetLaunchQueryParam(::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetLaunchQueryParam", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchKey);
}
inline bool Steamworks::SteamApps::GetDlcDownloadProgress(::Steamworks::AppId_t  nAppID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetDlcDownloadProgress", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nAppID, punBytesDownloaded, punBytesTotal);
}
inline int32_t Steamworks::SteamApps::GetAppBuildId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetAppBuildId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamApps::RequestAllProofOfPurchaseKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"RequestAllProofOfPurchaseKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamApps::GetFileDetails(::StringW  pszFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetFileDetails", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pszFileName);
}
inline int32_t Steamworks::SteamApps::GetLaunchCommandLine(::by_ref<::StringW>  pszCommandLine, int32_t  cubCommandLine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"GetLaunchCommandLine", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pszCommandLine, cubCommandLine);
}
inline bool Steamworks::SteamApps::BIsSubscribedFromFamilySharing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsSubscribedFromFamilySharing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamApps::BIsTimedTrial(::by_ref<uint32_t>  punSecondsAllowed, ::by_ref<uint32_t>  punSecondsPlayed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamApps*>(),
                        {"BIsTimedTrial", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, punSecondsAllowed, punSecondsPlayed);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamApps::SteamApps()   {
}
