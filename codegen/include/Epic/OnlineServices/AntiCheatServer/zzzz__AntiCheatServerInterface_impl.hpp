#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/AntiCheatServerInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__AntiCheatServerInterface_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogGameRoundEndOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogGameRoundStartOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerDespawnOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerReviveOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerSpawnOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerTakeDamageOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerTickOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseAbilityOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__SetClientDetailsOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__SetGameSessionIdOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__AddNotifyClientActionRequiredOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__AddNotifyClientAuthStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__AddNotifyMessageToClientOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__BeginSessionOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__EndSessionOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__GetProtectMessageOutputLengthOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientActionRequiredCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientAuthStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnMessageToClientCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__ProtectMessageOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__ReceiveMessageFromClientOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__RegisterClientOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__SetClientNetworkStateOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__UnprotectMessageOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__UnregisterClientOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)()>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.AddNotifyClientActionRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AddNotifyClientActionRequired)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18051f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"AddNotifyClientActionRequired", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.AddNotifyClientAuthStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AddNotifyClientAuthStatusChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18051fa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"AddNotifyClientAuthStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.AddNotifyMessageToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AddNotifyMessageToClient)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18051fc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"AddNotifyMessageToClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.BeginSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::BeginSession)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18051fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"BeginSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.EndSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::EndSessionOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::EndSession)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"EndSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::EndSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.GetProtectMessageOutputLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::GetProtectMessageOutputLength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051ff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"GetProtectMessageOutputLength", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18051ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogEvent", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogGameRoundEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogGameRoundEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogGameRoundEnd", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogGameRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogGameRoundStart)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180520030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogGameRoundStart", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerDespawn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805200f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerDespawn", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerRevive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerRevive)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180520130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerRevive", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerSpawn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180520180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerSpawn", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerTakeDamage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerTakeDamage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805201d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerTakeDamage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerTick)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180520240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerTick", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerUseAbility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerUseAbility)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805202a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerUseAbility", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.LogPlayerUseWeapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerUseWeapon)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180520300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerUseWeapon", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.ProtectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>, ::System::ArraySegment_1<uint8_t>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::ProtectMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805203a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"ProtectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.ReceiveMessageFromClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::ReceiveMessageFromClient)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180520490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"ReceiveMessageFromClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.RegisterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RegisterClient)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180520520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RegisterClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.RegisterEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RegisterEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180520600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RegisterEvent", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.RemoveNotifyClientActionRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RemoveNotifyClientActionRequired)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805206b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RemoveNotifyClientActionRequired", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.RemoveNotifyClientAuthStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RemoveNotifyClientAuthStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805206e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RemoveNotifyClientAuthStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.RemoveNotifyMessageToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RemoveNotifyMessageToClient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180520710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RemoveNotifyMessageToClient", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.SetClientDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::SetClientDetails)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180520740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"SetClientDetails", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.SetClientNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::SetClientNetworkState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180520790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"SetClientNetworkState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.SetGameSessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::SetGameSessionId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805207f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"SetGameSessionId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.UnprotectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>, ::System::ArraySegment_1<uint8_t>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::UnprotectMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180520860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"UnprotectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface.UnregisterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions>)>(&::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::UnregisterClient)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180520950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"UnregisterClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AddNotifyClientActionRequired(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"AddNotifyClientActionRequired", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AddNotifyClientAuthStatusChanged(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"AddNotifyClientAuthStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AddNotifyMessageToClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"AddNotifyMessageToClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::BeginSession(::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"BeginSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::EndSession(::by_ref<::Epic::OnlineServices::AntiCheatServer::EndSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"EndSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::EndSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::GetProtectMessageOutputLength(::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>  options, ::by_ref<uint32_t>  outBufferSizeBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"GetProtectMessageOutputLength", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBufferSizeBytes);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogEvent(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogEvent", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogGameRoundEnd(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogGameRoundEnd", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogGameRoundStart(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogGameRoundStart", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerDespawn(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerDespawn", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerRevive(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerRevive", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerSpawn(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerSpawn", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerTakeDamage(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerTakeDamage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerTick(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerTick", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerUseAbility(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerUseAbility", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::LogPlayerUseWeapon(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"LogPlayerUseWeapon", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::ProtectMessage(::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"ProtectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer, outBytesWritten);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::ReceiveMessageFromClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"ReceiveMessageFromClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RegisterClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RegisterClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RegisterEvent(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RegisterEvent", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RemoveNotifyClientActionRequired(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RemoveNotifyClientActionRequired", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RemoveNotifyClientAuthStatusChanged(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RemoveNotifyClientAuthStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::RemoveNotifyMessageToClient(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"RemoveNotifyMessageToClient", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::SetClientDetails(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"SetClientDetails", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::SetClientNetworkState(::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"SetClientNetworkState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::SetGameSessionId(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"SetGameSessionId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::UnprotectMessage(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"UnprotectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer, outBytesWritten);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::UnregisterClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(),
                        {"UnregisterClient", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>());
}
inline ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface::AntiCheatServerInterface()   {
}
