#pragma once
// IWYU pragma private; include "Steamworks/SteamUserStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamUserStats_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__ELeaderboardDataRequest_def.hpp"
#include "Steamworks/zzzz__ELeaderboardDisplayType_def.hpp"
#include "Steamworks/zzzz__ELeaderboardSortMethod_def.hpp"
#include "Steamworks/zzzz__ELeaderboardUploadScoreMethod_def.hpp"
#include "Steamworks/zzzz__LeaderboardEntry_t_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamLeaderboardEntries_t_def.hpp"
#include "Steamworks/zzzz__SteamLeaderboard_t_def.hpp"
#include "Steamworks/zzzz__UGCHandle_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamUserStats.RequestCurrentStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUserStats::RequestCurrentStats)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805beee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestCurrentStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::Steamworks::SteamUserStats::GetStat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805be8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<float_t>)>(&::Steamworks::SteamUserStats::GetStat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805be7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.SetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::Steamworks::SteamUserStats::SetStat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bf0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.SetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, float_t)>(&::Steamworks::SteamUserStats::SetStat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bf1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.UpdateAvgRateStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, float_t, double_t)>(&::Steamworks::SteamUserStats::UpdateAvgRateStat)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805bf2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"UpdateAvgRateStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<bool>)>(&::Steamworks::SteamUserStats::GetAchievement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bdfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievement", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.SetAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamUserStats::SetAchievement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805beff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"SetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.ClearAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamUserStats::ClearAchievement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805bd5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"ClearAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementAndUnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<bool>, ::by_ref<uint32_t>)>(&::Steamworks::SteamUserStats::GetAchievementAndUnlockTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bda30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementAndUnlockTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.StoreStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUserStats::StoreStats)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"StoreStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Steamworks::SteamUserStats::GetAchievementIcon)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805bdcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementDisplayAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Steamworks::SteamUserStats::GetAchievementDisplayAttribute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.IndicateAchievementProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, uint32_t, uint32_t)>(&::Steamworks::SteamUserStats::IndicateAchievementProgress)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"IndicateAchievementProgress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetNumAchievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUserStats::GetNumAchievements)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805be790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetNumAchievements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t)>(&::Steamworks::SteamUserStats::GetAchievementName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bdd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementName", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.RequestUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamUserStats::RequestUserStats)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestUserStats", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetUserStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<int32_t>)>(&::Steamworks::SteamUserStats::GetUserStat)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetUserStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<float_t>)>(&::Steamworks::SteamUserStats::GetUserStat)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetUserAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<bool>)>(&::Steamworks::SteamUserStats::GetUserAchievement)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805beae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetUserAchievementAndUnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<bool>, ::by_ref<uint32_t>)>(&::Steamworks::SteamUserStats::GetUserAchievementAndUnlockTime)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805be9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserAchievementAndUnlockTime", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.ResetAllStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamUserStats::ResetAllStats)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805befb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"ResetAllStats", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.FindOrCreateLeaderboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW, ::Steamworks::ELeaderboardSortMethod, ::Steamworks::ELeaderboardDisplayType)>(&::Steamworks::SteamUserStats::FindOrCreateLeaderboard)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"FindOrCreateLeaderboard", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ELeaderboardSortMethod>(), ::i2c::type_of<::Steamworks::ELeaderboardDisplayType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.FindLeaderboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamUserStats::FindLeaderboard)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805bd760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"FindLeaderboard", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetLeaderboardName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::SteamLeaderboard_t)>(&::Steamworks::SteamUserStats::GetLeaderboardName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805be5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardName", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetLeaderboardEntryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SteamLeaderboard_t)>(&::Steamworks::SteamUserStats::GetLeaderboardEntryCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805be560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardEntryCount", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetLeaderboardSortMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ELeaderboardSortMethod (*)(::Steamworks::SteamLeaderboard_t)>(&::Steamworks::SteamUserStats::GetLeaderboardSortMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805be5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardSortMethod", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetLeaderboardDisplayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ELeaderboardDisplayType (*)(::Steamworks::SteamLeaderboard_t)>(&::Steamworks::SteamUserStats::GetLeaderboardDisplayType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805be520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardDisplayType", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.DownloadLeaderboardEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::SteamLeaderboard_t, ::Steamworks::ELeaderboardDataRequest, int32_t, int32_t)>(&::Steamworks::SteamUserStats::DownloadLeaderboardEntries)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805bd6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"DownloadLeaderboardEntries", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::Steamworks::ELeaderboardDataRequest>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.DownloadLeaderboardEntriesForUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::SteamLeaderboard_t, ::ArrayW<::Steamworks::CSteamID>, int32_t)>(&::Steamworks::SteamUserStats::DownloadLeaderboardEntriesForUsers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bd690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"DownloadLeaderboardEntriesForUsers", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::ArrayW<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetDownloadedLeaderboardEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamLeaderboardEntries_t, int32_t, ::by_ref<::Steamworks::LeaderboardEntry_t>, ::ArrayW<int32_t>, int32_t)>(&::Steamworks::SteamUserStats::GetDownloadedLeaderboardEntry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805be0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetDownloadedLeaderboardEntry", {}, {::i2c::type_of<::Steamworks::SteamLeaderboardEntries_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::LeaderboardEntry_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.UploadLeaderboardScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::SteamLeaderboard_t, ::Steamworks::ELeaderboardUploadScoreMethod, int32_t, ::ArrayW<int32_t>, int32_t)>(&::Steamworks::SteamUserStats::UploadLeaderboardScore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805bf3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"UploadLeaderboardScore", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::Steamworks::ELeaderboardUploadScoreMethod>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.AttachLeaderboardUGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::SteamLeaderboard_t, ::Steamworks::UGCHandle_t)>(&::Steamworks::SteamUserStats::AttachLeaderboardUGC)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bd560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"AttachLeaderboardUGC", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::Steamworks::UGCHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetNumberOfCurrentPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamUserStats::GetNumberOfCurrentPlayers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805be7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetNumberOfCurrentPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.RequestGlobalAchievementPercentages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamUserStats::RequestGlobalAchievementPercentages)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestGlobalAchievementPercentages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetMostAchievedAchievementInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::StringW>, uint32_t, ::by_ref<float_t>, ::by_ref<bool>)>(&::Steamworks::SteamUserStats::GetMostAchievedAchievementInfo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805be620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetMostAchievedAchievementInfo", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetNextMostAchievedAchievementInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<float_t>, ::by_ref<bool>)>(&::Steamworks::SteamUserStats::GetNextMostAchievedAchievementInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805be6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetNextMostAchievedAchievementInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementAchievedPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<float_t>)>(&::Steamworks::SteamUserStats::GetAchievementAchievedPercent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bd940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementAchievedPercent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.RequestGlobalStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(int32_t)>(&::Steamworks::SteamUserStats::RequestGlobalStats)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestGlobalStats", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetGlobalStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int64_t>)>(&::Steamworks::SteamUserStats::GetGlobalStat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805be430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetGlobalStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<double_t>)>(&::Steamworks::SteamUserStats::GetGlobalStat)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805be340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetGlobalStatHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<int64_t>, uint32_t)>(&::Steamworks::SteamUserStats::GetGlobalStatHistory)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805be140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStatHistory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetGlobalStatHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<double_t>, uint32_t)>(&::Steamworks::SteamUserStats::GetGlobalStatHistory)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805be240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStatHistory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementProgressLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Steamworks::SteamUserStats::GetAchievementProgressLimits)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementProgressLimits", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUserStats.GetAchievementProgressLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Steamworks::SteamUserStats::GetAchievementProgressLimits)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementProgressLimits", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamUserStats::RequestCurrentStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestCurrentStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUserStats::GetStat(::StringW  pchName, ::by_ref<int32_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pData);
}
inline bool Steamworks::SteamUserStats::GetStat(::StringW  pchName, ::by_ref<float_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pData);
}
inline bool Steamworks::SteamUserStats::SetStat(::StringW  pchName, int32_t  nData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, nData);
}
inline bool Steamworks::SteamUserStats::SetStat(::StringW  pchName, float_t  fData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, fData);
}
inline bool Steamworks::SteamUserStats::UpdateAvgRateStat(::StringW  pchName, float_t  flCountThisSession, double_t  dSessionLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"UpdateAvgRateStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, flCountThisSession, dSessionLength);
}
inline bool Steamworks::SteamUserStats::GetAchievement(::StringW  pchName, ::by_ref<bool>  pbAchieved)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievement", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pbAchieved);
}
inline bool Steamworks::SteamUserStats::SetAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"SetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName);
}
inline bool Steamworks::SteamUserStats::ClearAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"ClearAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName);
}
inline bool Steamworks::SteamUserStats::GetAchievementAndUnlockTime(::StringW  pchName, ::by_ref<bool>  pbAchieved, ::by_ref<uint32_t>  punUnlockTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementAndUnlockTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pbAchieved, punUnlockTime);
}
inline bool Steamworks::SteamUserStats::StoreStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"StoreStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamUserStats::GetAchievementIcon(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline ::StringW Steamworks::SteamUserStats::GetAchievementDisplayAttribute(::StringW  pchName, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName, pchKey);
}
inline bool Steamworks::SteamUserStats::IndicateAchievementProgress(::StringW  pchName, uint32_t  nCurProgress, uint32_t  nMaxProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"IndicateAchievementProgress", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, nCurProgress, nMaxProgress);
}
inline uint32_t Steamworks::SteamUserStats::GetNumAchievements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetNumAchievements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamUserStats::GetAchievementName(uint32_t  iAchievement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementName", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, iAchievement);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::RequestUserStats(::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestUserStats", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDUser);
}
inline bool Steamworks::SteamUserStats::GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<int32_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pData);
}
inline bool Steamworks::SteamUserStats::GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<float_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pData);
}
inline bool Steamworks::SteamUserStats::GetUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<bool>  pbAchieved)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pbAchieved);
}
inline bool Steamworks::SteamUserStats::GetUserAchievementAndUnlockTime(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<bool>  pbAchieved, ::by_ref<uint32_t>  punUnlockTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetUserAchievementAndUnlockTime", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pbAchieved, punUnlockTime);
}
inline bool Steamworks::SteamUserStats::ResetAllStats(bool  bAchievementsToo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"ResetAllStats", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bAchievementsToo);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::FindOrCreateLeaderboard(::StringW  pchLeaderboardName, ::Steamworks::ELeaderboardSortMethod  eLeaderboardSortMethod, ::Steamworks::ELeaderboardDisplayType  eLeaderboardDisplayType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"FindOrCreateLeaderboard", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ELeaderboardSortMethod>(), ::i2c::type_of<::Steamworks::ELeaderboardDisplayType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::FindLeaderboard(::StringW  pchLeaderboardName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"FindLeaderboard", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchLeaderboardName);
}
inline ::StringW Steamworks::SteamUserStats::GetLeaderboardName(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardName", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hSteamLeaderboard);
}
inline int32_t Steamworks::SteamUserStats::GetLeaderboardEntryCount(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardEntryCount", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hSteamLeaderboard);
}
inline ::Steamworks::ELeaderboardSortMethod Steamworks::SteamUserStats::GetLeaderboardSortMethod(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardSortMethod", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ELeaderboardSortMethod>(nullptr, ___internal_method, hSteamLeaderboard);
}
inline ::Steamworks::ELeaderboardDisplayType Steamworks::SteamUserStats::GetLeaderboardDisplayType(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetLeaderboardDisplayType", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ELeaderboardDisplayType>(nullptr, ___internal_method, hSteamLeaderboard);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::DownloadLeaderboardEntries(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::ELeaderboardDataRequest  eLeaderboardDataRequest, int32_t  nRangeStart, int32_t  nRangeEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"DownloadLeaderboardEntries", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::Steamworks::ELeaderboardDataRequest>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::DownloadLeaderboardEntriesForUsers(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::ArrayW<::Steamworks::CSteamID>  prgUsers, int32_t  cUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"DownloadLeaderboardEntriesForUsers", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::ArrayW<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, hSteamLeaderboard, prgUsers, cUsers);
}
inline bool Steamworks::SteamUserStats::GetDownloadedLeaderboardEntry(::Steamworks::SteamLeaderboardEntries_t  hSteamLeaderboardEntries, int32_t  index, ::by_ref<::Steamworks::LeaderboardEntry_t>  pLeaderboardEntry, ::ArrayW<int32_t>  pDetails, int32_t  cDetailsMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetDownloadedLeaderboardEntry", {}, {::i2c::type_of<::Steamworks::SteamLeaderboardEntries_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::LeaderboardEntry_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::UploadLeaderboardScore(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::ELeaderboardUploadScoreMethod  eLeaderboardUploadScoreMethod, int32_t  nScore, ::ArrayW<int32_t>  pScoreDetails, int32_t  cScoreDetailsCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"UploadLeaderboardScore", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::Steamworks::ELeaderboardUploadScoreMethod>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::AttachLeaderboardUGC(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::UGCHandle_t  hUGC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"AttachLeaderboardUGC", {}, {::i2c::type_of<::Steamworks::SteamLeaderboard_t>(), ::i2c::type_of<::Steamworks::UGCHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, hSteamLeaderboard, hUGC);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::GetNumberOfCurrentPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetNumberOfCurrentPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::RequestGlobalAchievementPercentages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestGlobalAchievementPercentages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamUserStats::GetMostAchievedAchievementInfo(::by_ref<::StringW>  pchName, uint32_t  unNameBufLen, ::by_ref<float_t>  pflPercent, ::by_ref<bool>  pbAchieved)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetMostAchievedAchievementInfo", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName, unNameBufLen, pflPercent, pbAchieved);
}
inline int32_t Steamworks::SteamUserStats::GetNextMostAchievedAchievementInfo(int32_t  iIteratorPrevious, ::by_ref<::StringW>  pchName, uint32_t  unNameBufLen, ::by_ref<float_t>  pflPercent, ::by_ref<bool>  pbAchieved)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetNextMostAchievedAchievementInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}
inline bool Steamworks::SteamUserStats::GetAchievementAchievedPercent(::StringW  pchName, ::by_ref<float_t>  pflPercent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementAchievedPercent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pflPercent);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUserStats::RequestGlobalStats(int32_t  nHistoryDays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"RequestGlobalStats", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nHistoryDays);
}
inline bool Steamworks::SteamUserStats::GetGlobalStat(::StringW  pchStatName, ::by_ref<int64_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchStatName, pData);
}
inline bool Steamworks::SteamUserStats::GetGlobalStat(::StringW  pchStatName, ::by_ref<double_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchStatName, pData);
}
inline int32_t Steamworks::SteamUserStats::GetGlobalStatHistory(::StringW  pchStatName, ::ArrayW<int64_t>  pData, uint32_t  cubData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStatHistory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchStatName, pData, cubData);
}
inline int32_t Steamworks::SteamUserStats::GetGlobalStatHistory(::StringW  pchStatName, ::ArrayW<double_t>  pData, uint32_t  cubData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetGlobalStatHistory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchStatName, pData, cubData);
}
inline bool Steamworks::SteamUserStats::GetAchievementProgressLimits(::StringW  pchName, ::by_ref<int32_t>  pnMinProgress, ::by_ref<int32_t>  pnMaxProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementProgressLimits", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pnMinProgress, pnMaxProgress);
}
inline bool Steamworks::SteamUserStats::GetAchievementProgressLimits(::StringW  pchName, ::by_ref<float_t>  pfMinProgress, ::by_ref<float_t>  pfMaxProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUserStats*>(),
                        {"GetAchievementProgressLimits", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName, pfMinProgress, pfMaxProgress);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUserStats::SteamUserStats()   {
}
