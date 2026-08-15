#pragma once
// IWYU pragma private; include "Steamworks/SteamParentalSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamParentalSettings_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__EParentalFeature_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamParentalSettings.BIsParentalLockEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamParentalSettings::BIsParentalLockEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsParentalLockEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParentalSettings.BIsParentalLockLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamParentalSettings::BIsParentalLockLocked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsParentalLockLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParentalSettings.BIsAppBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamParentalSettings::BIsAppBlocked)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsAppBlocked", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParentalSettings.BIsAppInBlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t)>(&::Steamworks::SteamParentalSettings::BIsAppInBlockList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsAppInBlockList", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParentalSettings.BIsFeatureBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EParentalFeature)>(&::Steamworks::SteamParentalSettings::BIsFeatureBlocked)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsFeatureBlocked", {}, {::i2c::type_of<::Steamworks::EParentalFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParentalSettings.BIsFeatureInBlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EParentalFeature)>(&::Steamworks::SteamParentalSettings::BIsFeatureInBlockList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b75c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsFeatureInBlockList", {}, {::i2c::type_of<::Steamworks::EParentalFeature>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamParentalSettings::BIsParentalLockEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsParentalLockEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamParentalSettings::BIsParentalLockLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsParentalLockLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamParentalSettings::BIsAppBlocked(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsAppBlocked", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nAppID);
}
inline bool Steamworks::SteamParentalSettings::BIsAppInBlockList(::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsAppInBlockList", {}, {::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nAppID);
}
inline bool Steamworks::SteamParentalSettings::BIsFeatureBlocked(::Steamworks::EParentalFeature  eFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsFeatureBlocked", {}, {::i2c::type_of<::Steamworks::EParentalFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eFeature);
}
inline bool Steamworks::SteamParentalSettings::BIsFeatureInBlockList(::Steamworks::EParentalFeature  eFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParentalSettings*>(),
                        {"BIsFeatureInBlockList", {}, {::i2c::type_of<::Steamworks::EParentalFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eFeature);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamParentalSettings::SteamParentalSettings()   {
}
