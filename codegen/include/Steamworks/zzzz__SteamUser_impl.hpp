#pragma once
// IWYU pragma private; include "Steamworks/SteamUser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamUser_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CGameID_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EBeginAuthSessionResult_def.hpp"
#include "Steamworks/zzzz__EDurationControlOnlineState_def.hpp"
#include "Steamworks/zzzz__EUserHasLicenseForAppResult_def.hpp"
#include "Steamworks/zzzz__EVoiceResult_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamUser.GetHSteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)()>(&::Steamworks::SteamUser::GetHSteamUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bf8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetHSteamUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BLoggedOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUser::BLoggedOn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BLoggedOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)()>(&::Steamworks::SteamUser::GetSteamID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bf980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetSteamID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.InitiateGameConnection_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, ::Steamworks::CSteamID, uint32_t, uint16_t, bool)>(&::Steamworks::SteamUser::InitiateGameConnection_DEPRECATED)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805bfb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"InitiateGameConnection_DEPRECATED", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.TerminateGameConnection_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, uint16_t)>(&::Steamworks::SteamUser::TerminateGameConnection_DEPRECATED)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bfd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"TerminateGameConnection_DEPRECATED", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.TrackAppUsageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CGameID, int32_t, ::StringW)>(&::Steamworks::SteamUser::TrackAppUsageEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bfd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"TrackAppUsageEvent", {}, {::i2c::type_of<::Steamworks::CGameID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetUserDataFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamUser::GetUserDataFolder)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805bf9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetUserDataFolder", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.StartVoiceRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamUser::StartVoiceRecording)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bfcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"StartVoiceRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.StopVoiceRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamUser::StopVoiceRecording)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bfcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"StopVoiceRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetAvailableVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EVoiceResult (*)(::by_ref<uint32_t>)>(&::Steamworks::SteamUser::GetAvailableVoice)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bf7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAvailableVoice", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EVoiceResult (*)(bool, ::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamUser::GetVoice)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805bfa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetVoice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.DecompressVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EVoiceResult (*)(::ArrayW<uint8_t>, uint32_t, ::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>, uint32_t)>(&::Steamworks::SteamUser::DecompressVoice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805bf6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"DecompressVoice", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetVoiceOptimalSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUser::GetVoiceOptimalSampleRate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bfa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetVoiceOptimalSampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetAuthSessionTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (*)(::ArrayW<uint8_t>, int32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamUser::GetAuthSessionTicket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bf770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAuthSessionTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BeginAuthSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EBeginAuthSessionResult (*)(::ArrayW<uint8_t>, int32_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamUser::BeginAuthSession)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bf620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BeginAuthSession", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.EndAuthSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamUser::EndAuthSession)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bf730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"EndAuthSession", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.CancelAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HAuthTicket)>(&::Steamworks::SteamUser::CancelAuthTicket)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"CancelAuthTicket", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.UserHasLicenseForApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EUserHasLicenseForAppResult (*)(::Steamworks::CSteamID, ::Steamworks::AppId_t)>(&::Steamworks::SteamUser::UserHasLicenseForApp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"UserHasLicenseForApp", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BIsBehindNAT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUser::BIsBehindNAT)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsBehindNAT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.AdvertiseGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID, uint32_t, uint16_t)>(&::Steamworks::SteamUser::AdvertiseGame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bf470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"AdvertiseGame", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.RequestEncryptedAppTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamUser::RequestEncryptedAppTicket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bfba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"RequestEncryptedAppTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetEncryptedAppTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamUser::GetEncryptedAppTicket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bf840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetEncryptedAppTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetGameBadgeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, bool)>(&::Steamworks::SteamUser::GetGameBadgeLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bf8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetGameBadgeLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetPlayerSteamLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamUser::GetPlayerSteamLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetPlayerSteamLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.RequestStoreAuthURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamUser::RequestStoreAuthURL)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805bfbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"RequestStoreAuthURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BIsPhoneVerified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUser::BIsPhoneVerified)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsPhoneVerified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BIsTwoFactorEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUser::BIsTwoFactorEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsTwoFactorEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BIsPhoneIdentifying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUser::BIsPhoneIdentifying)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsPhoneIdentifying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BIsPhoneRequiringVerification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUser::BIsPhoneRequiringVerification)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsPhoneRequiringVerification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetMarketEligibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamUser::GetMarketEligibility)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetMarketEligibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.GetDurationControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamUser::GetDurationControl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetDurationControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUser.BSetDurationControlOnlineState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EDurationControlOnlineState)>(&::Steamworks::SteamUser::BSetDurationControlOnlineState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bf5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BSetDurationControlOnlineState", {}, {::i2c::type_of<::Steamworks::EDurationControlOnlineState>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HSteamUser Steamworks::SteamUser::GetHSteamUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetHSteamUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUser::BLoggedOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BLoggedOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::CSteamID Steamworks::SteamUser::GetSteamID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetSteamID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamUser::InitiateGameConnection_DEPRECATED(::ArrayW<uint8_t>  pAuthBlob, int32_t  cbMaxAuthBlob, ::Steamworks::CSteamID  steamIDGameServer, uint32_t  unIPServer, uint16_t  usPortServer, bool  bSecure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"InitiateGameConnection_DEPRECATED", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}
inline void Steamworks::SteamUser::TerminateGameConnection_DEPRECATED(uint32_t  unIPServer, uint16_t  usPortServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"TerminateGameConnection_DEPRECATED", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unIPServer, usPortServer);
}
inline void Steamworks::SteamUser::TrackAppUsageEvent(::Steamworks::CGameID  gameID, int32_t  eAppUsageEvent, ::StringW  pchExtraInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"TrackAppUsageEvent", {}, {::i2c::type_of<::Steamworks::CGameID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameID, eAppUsageEvent, pchExtraInfo);
}
inline bool Steamworks::SteamUser::GetUserDataFolder(::by_ref<::StringW>  pchBuffer, int32_t  cubBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetUserDataFolder", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchBuffer, cubBuffer);
}
inline void Steamworks::SteamUser::StartVoiceRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"StartVoiceRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUser::StopVoiceRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"StopVoiceRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Steamworks::EVoiceResult Steamworks::SteamUser::GetAvailableVoice(::by_ref<uint32_t>  pcbCompressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAvailableVoice", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EVoiceResult>(nullptr, ___internal_method, pcbCompressed);
}
inline ::Steamworks::EVoiceResult Steamworks::SteamUser::GetVoice(bool  bWantCompressed, ::ArrayW<uint8_t>  pDestBuffer, uint32_t  cbDestBufferSize, ::by_ref<uint32_t>  nBytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetVoice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EVoiceResult>(nullptr, ___internal_method, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
}
inline ::Steamworks::EVoiceResult Steamworks::SteamUser::DecompressVoice(::ArrayW<uint8_t>  pCompressed, uint32_t  cbCompressed, ::ArrayW<uint8_t>  pDestBuffer, uint32_t  cbDestBufferSize, ::by_ref<uint32_t>  nBytesWritten, uint32_t  nDesiredSampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"DecompressVoice", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EVoiceResult>(nullptr, ___internal_method, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}
inline uint32_t Steamworks::SteamUser::GetVoiceOptimalSampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetVoiceOptimalSampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::HAuthTicket Steamworks::SteamUser::GetAuthSessionTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetAuthSessionTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(nullptr, ___internal_method, pTicket, cbMaxTicket, pcbTicket);
}
inline ::Steamworks::EBeginAuthSessionResult Steamworks::SteamUser::BeginAuthSession(::ArrayW<uint8_t>  pAuthTicket, int32_t  cbAuthTicket, ::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BeginAuthSession", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EBeginAuthSessionResult>(nullptr, ___internal_method, pAuthTicket, cbAuthTicket, steamID);
}
inline void Steamworks::SteamUser::EndAuthSession(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"EndAuthSession", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamID);
}
inline void Steamworks::SteamUser::CancelAuthTicket(::Steamworks::HAuthTicket  hAuthTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"CancelAuthTicket", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hAuthTicket);
}
inline ::Steamworks::EUserHasLicenseForAppResult Steamworks::SteamUser::UserHasLicenseForApp(::Steamworks::CSteamID  steamID, ::Steamworks::AppId_t  appID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"UserHasLicenseForApp", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EUserHasLicenseForAppResult>(nullptr, ___internal_method, steamID, appID);
}
inline bool Steamworks::SteamUser::BIsBehindNAT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsBehindNAT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUser::AdvertiseGame(::Steamworks::CSteamID  steamIDGameServer, uint32_t  unIPServer, uint16_t  usPortServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"AdvertiseGame", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDGameServer, unIPServer, usPortServer);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUser::RequestEncryptedAppTicket(::ArrayW<uint8_t>  pDataToInclude, int32_t  cbDataToInclude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"RequestEncryptedAppTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pDataToInclude, cbDataToInclude);
}
inline bool Steamworks::SteamUser::GetEncryptedAppTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetEncryptedAppTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pTicket, cbMaxTicket, pcbTicket);
}
inline int32_t Steamworks::SteamUser::GetGameBadgeLevel(int32_t  nSeries, bool  bFoil)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetGameBadgeLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nSeries, bFoil);
}
inline int32_t Steamworks::SteamUser::GetPlayerSteamLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetPlayerSteamLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUser::RequestStoreAuthURL(::StringW  pchRedirectURL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"RequestStoreAuthURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchRedirectURL);
}
inline bool Steamworks::SteamUser::BIsPhoneVerified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsPhoneVerified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUser::BIsTwoFactorEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsTwoFactorEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUser::BIsPhoneIdentifying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsPhoneIdentifying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUser::BIsPhoneRequiringVerification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BIsPhoneRequiringVerification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUser::GetMarketEligibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetMarketEligibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUser::GetDurationControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"GetDurationControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUser::BSetDurationControlOnlineState(::Steamworks::EDurationControlOnlineState  eNewState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUser*>(),
                        {"BSetDurationControlOnlineState", {}, {::i2c::type_of<::Steamworks::EDurationControlOnlineState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eNewState);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUser::SteamUser()   {
}
