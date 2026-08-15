#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServer_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EBeginAuthSessionResult_def.hpp"
#include "Steamworks/zzzz__EUserHasLicenseForAppResult_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamIPAddress_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetProduct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetProduct)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a41f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetProduct", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetGameDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetGameDescription)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a36c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetGameDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetModDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetModDir)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a3f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetModDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetDedicatedServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamGameServer::SetDedicatedServer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetDedicatedServer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.LogOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::LogOn)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a2e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"LogOn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.LogOnAnonymous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServer::LogOnAnonymous)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a2d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"LogOnAnonymous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.LogOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServer::LogOff)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"LogOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.BLoggedOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServer::BLoggedOn)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a1d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BLoggedOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.BSecure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServer::BSecure)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a1de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BSecure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.GetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)()>(&::Steamworks::SteamGameServer::GetSteamID)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetSteamID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.WasRestartRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServer::WasRestartRequested)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a4aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"WasRestartRequested", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetMaxPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Steamworks::SteamGameServer::SetMaxPlayerCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetMaxPlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetBotPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Steamworks::SteamGameServer::SetBotPlayerCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a3360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetBotPlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetServerName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a4570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetMapName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetMapName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a3cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetMapName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetPasswordProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamGameServer::SetPasswordProtected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a4120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetPasswordProtected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetSpectatorPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint16_t)>(&::Steamworks::SteamGameServer::SetSpectatorPort)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetSpectatorPort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetSpectatorServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetSpectatorServerName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a4800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetSpectatorServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.ClearAllKeyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServer::ClearAllKeyValues)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a2260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"ClearAllKeyValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetKeyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::Steamworks::SteamGameServer::SetKeyValue)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805a3a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetKeyValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetGameTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetGameTags)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetGameTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetGameData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a3500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetGameData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamGameServer::SetRegion)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805a43b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetRegion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SetAdvertiseServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamGameServer::SetAdvertiseServerActive)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a3290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetAdvertiseServerActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.GetAuthSessionTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (*)(::ArrayW<uint8_t>, int32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServer::GetAuthSessionTicket)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805a25d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetAuthSessionTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.BeginAuthSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EBeginAuthSessionResult (*)(::ArrayW<uint8_t>, int32_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamGameServer::BeginAuthSession)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805a2090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BeginAuthSession", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.EndAuthSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServer::EndAuthSession)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a2500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"EndAuthSession", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.CancelAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HAuthTicket)>(&::Steamworks::SteamGameServer::CancelAuthTicket)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a2190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"CancelAuthTicket", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.UserHasLicenseForApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EUserHasLicenseForAppResult (*)(::Steamworks::CSteamID, ::Steamworks::AppId_t)>(&::Steamworks::SteamGameServer::UserHasLicenseForApp)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a49c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"UserHasLicenseForApp", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.RequestUserGroupStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::SteamGameServer::RequestUserGroupStatus)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a2fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"RequestUserGroupStatus", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.GetGameplayStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServer::GetGameplayStats)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a26d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetGameplayStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.GetServerReputation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamGameServer::GetServerReputation)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a29a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetServerReputation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.GetPublicIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamIPAddress_t (*)()>(&::Steamworks::SteamGameServer::GetPublicIP)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetPublicIP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.HandleIncomingPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, uint32_t, uint16_t)>(&::Steamworks::SteamGameServer::HandleIncomingPacket)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805a2b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"HandleIncomingPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.GetNextOutgoingPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, ::by_ref<uint32_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamGameServer::GetNextOutgoingPacket)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805a27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetNextOutgoingPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.AssociateWithClan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServer::AssociateWithClan)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a1c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"AssociateWithClan", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.ComputeNewPlayerCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServer::ComputeNewPlayerCompatibility)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a2330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"ComputeNewPlayerCompatibility", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SendUserConnectAndAuthenticate_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::ArrayW<uint8_t>, uint32_t, ::by_ref<::Steamworks::CSteamID>)>(&::Steamworks::SteamGameServer::SendUserConnectAndAuthenticate_DEPRECATED)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805a30b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SendUserConnectAndAuthenticate_DEPRECATED", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.CreateUnauthenticatedUserConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)()>(&::Steamworks::SteamGameServer::CreateUnauthenticatedUserConnection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a2410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"CreateUnauthenticatedUserConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.SendUserDisconnect_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServer::SendUserDisconnect_DEPRECATED)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a31c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SendUserDisconnect_DEPRECATED", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServer.BUpdateUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, uint32_t)>(&::Steamworks::SteamGameServer::BUpdateUserData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805a1eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BUpdateUserData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamGameServer::SetProduct(::StringW  pszProduct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetProduct", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszProduct);
}
inline void Steamworks::SteamGameServer::SetGameDescription(::StringW  pszGameDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetGameDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszGameDescription);
}
inline void Steamworks::SteamGameServer::SetModDir(::StringW  pszModDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetModDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszModDir);
}
inline void Steamworks::SteamGameServer::SetDedicatedServer(bool  bDedicated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetDedicatedServer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bDedicated);
}
inline void Steamworks::SteamGameServer::LogOn(::StringW  pszToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"LogOn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszToken);
}
inline void Steamworks::SteamGameServer::LogOnAnonymous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"LogOnAnonymous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServer::LogOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"LogOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServer::BLoggedOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BLoggedOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServer::BSecure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BSecure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::CSteamID Steamworks::SteamGameServer::GetSteamID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetSteamID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServer::WasRestartRequested()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"WasRestartRequested", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServer::SetMaxPlayerCount(int32_t  cPlayersMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetMaxPlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cPlayersMax);
}
inline void Steamworks::SteamGameServer::SetBotPlayerCount(int32_t  cBotplayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetBotPlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cBotplayers);
}
inline void Steamworks::SteamGameServer::SetServerName(::StringW  pszServerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszServerName);
}
inline void Steamworks::SteamGameServer::SetMapName(::StringW  pszMapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetMapName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszMapName);
}
inline void Steamworks::SteamGameServer::SetPasswordProtected(bool  bPasswordProtected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetPasswordProtected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bPasswordProtected);
}
inline void Steamworks::SteamGameServer::SetSpectatorPort(uint16_t  unSpectatorPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetSpectatorPort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unSpectatorPort);
}
inline void Steamworks::SteamGameServer::SetSpectatorServerName(::StringW  pszSpectatorServerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetSpectatorServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszSpectatorServerName);
}
inline void Steamworks::SteamGameServer::ClearAllKeyValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"ClearAllKeyValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServer::SetKeyValue(::StringW  pKey, ::StringW  pValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetKeyValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pKey, pValue);
}
inline void Steamworks::SteamGameServer::SetGameTags(::StringW  pchGameTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetGameTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchGameTags);
}
inline void Steamworks::SteamGameServer::SetGameData(::StringW  pchGameData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetGameData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchGameData);
}
inline void Steamworks::SteamGameServer::SetRegion(::StringW  pszRegion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetRegion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pszRegion);
}
inline void Steamworks::SteamGameServer::SetAdvertiseServerActive(bool  bActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SetAdvertiseServerActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bActive);
}
inline ::Steamworks::HAuthTicket Steamworks::SteamGameServer::GetAuthSessionTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetAuthSessionTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(nullptr, ___internal_method, pTicket, cbMaxTicket, pcbTicket);
}
inline ::Steamworks::EBeginAuthSessionResult Steamworks::SteamGameServer::BeginAuthSession(::ArrayW<uint8_t>  pAuthTicket, int32_t  cbAuthTicket, ::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BeginAuthSession", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EBeginAuthSessionResult>(nullptr, ___internal_method, pAuthTicket, cbAuthTicket, steamID);
}
inline void Steamworks::SteamGameServer::EndAuthSession(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"EndAuthSession", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamID);
}
inline void Steamworks::SteamGameServer::CancelAuthTicket(::Steamworks::HAuthTicket  hAuthTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"CancelAuthTicket", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hAuthTicket);
}
inline ::Steamworks::EUserHasLicenseForAppResult Steamworks::SteamGameServer::UserHasLicenseForApp(::Steamworks::CSteamID  steamID, ::Steamworks::AppId_t  appID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"UserHasLicenseForApp", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EUserHasLicenseForAppResult>(nullptr, ___internal_method, steamID, appID);
}
inline bool Steamworks::SteamGameServer::RequestUserGroupStatus(::Steamworks::CSteamID  steamIDUser, ::Steamworks::CSteamID  steamIDGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"RequestUserGroupStatus", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, steamIDGroup);
}
inline void Steamworks::SteamGameServer::GetGameplayStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetGameplayStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServer::GetServerReputation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetServerReputation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamIPAddress_t Steamworks::SteamGameServer::GetPublicIP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetPublicIP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamIPAddress_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServer::HandleIncomingPacket(::ArrayW<uint8_t>  pData, int32_t  cbData, uint32_t  srcIP, uint16_t  srcPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"HandleIncomingPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pData, cbData, srcIP, srcPort);
}
inline int32_t Steamworks::SteamGameServer::GetNextOutgoingPacket(::ArrayW<uint8_t>  pOut, int32_t  cbMaxOut, ::by_ref<uint32_t>  pNetAdr, ::by_ref<uint16_t>  pPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"GetNextOutgoingPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pOut, cbMaxOut, pNetAdr, pPort);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServer::AssociateWithClan(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"AssociateWithClan", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDClan);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServer::ComputeNewPlayerCompatibility(::Steamworks::CSteamID  steamIDNewPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"ComputeNewPlayerCompatibility", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDNewPlayer);
}
inline bool Steamworks::SteamGameServer::SendUserConnectAndAuthenticate_DEPRECATED(uint32_t  unIPClient, ::ArrayW<uint8_t>  pvAuthBlob, uint32_t  cubAuthBlobSize, ::by_ref<::Steamworks::CSteamID>  pSteamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SendUserConnectAndAuthenticate_DEPRECATED", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}
inline ::Steamworks::CSteamID Steamworks::SteamGameServer::CreateUnauthenticatedUserConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"CreateUnauthenticatedUserConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServer::SendUserDisconnect_DEPRECATED(::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"SendUserDisconnect_DEPRECATED", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDUser);
}
inline bool Steamworks::SteamGameServer::BUpdateUserData(::Steamworks::CSteamID  steamIDUser, ::StringW  pchPlayerName, uint32_t  uScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServer*>(),
                        {"BUpdateUserData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, pchPlayerName, uScore);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServer::SteamGameServer()   {
}
