#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerStats_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.RequestUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServerStats::RequestUserStats)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"RequestUserStats", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.GetUserStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<int32_t>)>(&::Steamworks::SteamGameServerStats::GetUserStat)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059a4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.GetUserStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<float_t>)>(&::Steamworks::SteamGameServerStats::GetUserStat)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.GetUserAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::by_ref<bool>)>(&::Steamworks::SteamGameServerStats::GetUserAchievement)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18059a2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"GetUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.SetUserStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, int32_t)>(&::Steamworks::SteamGameServerStats::SetUserStat)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"SetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.SetUserStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, float_t)>(&::Steamworks::SteamGameServerStats::SetUserStat)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"SetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.UpdateUserAvgRateStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, float_t, double_t)>(&::Steamworks::SteamGameServerStats::UpdateUserAvgRateStat)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18059afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"UpdateUserAvgRateStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.SetUserAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamGameServerStats::SetUserAchievement)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"SetUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.ClearUserAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamGameServerStats::ClearUserAchievement)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"ClearUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerStats.StoreUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServerStats::StoreUserStats)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059aee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"StoreUserStats", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerStats::RequestUserStats(::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"RequestUserStats", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDUser);
}
inline bool Steamworks::SteamGameServerStats::GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<int32_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pData);
}
inline bool Steamworks::SteamGameServerStats::GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<float_t>  pData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"GetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pData);
}
inline bool Steamworks::SteamGameServerStats::GetUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<bool>  pbAchieved)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"GetUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, pbAchieved);
}
inline bool Steamworks::SteamGameServerStats::SetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, int32_t  nData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"SetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, nData);
}
inline bool Steamworks::SteamGameServerStats::SetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, float_t  fData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"SetUserStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, fData);
}
inline bool Steamworks::SteamGameServerStats::UpdateUserAvgRateStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, float_t  flCountThisSession, double_t  dSessionLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"UpdateUserAvgRateStat", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName, flCountThisSession, dSessionLength);
}
inline bool Steamworks::SteamGameServerStats::SetUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"SetUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName);
}
inline bool Steamworks::SteamGameServerStats::ClearUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"ClearUserAchievement", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchName);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerStats::StoreUserStats(::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerStats*>(),
                        {"StoreUserStats", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDUser);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerStats::SteamGameServerStats()   {
}
