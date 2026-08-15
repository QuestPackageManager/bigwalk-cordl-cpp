#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CreateLobbyOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbyOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_MaxLobbyMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_MaxLobbyMembers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_MaxLobbyMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_MaxLobbyMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_MaxLobbyMembers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_MaxLobbyMembers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyPermissionLevel (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::Epic::OnlineServices::Lobby::LobbyPermissionLevel)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyPermissionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_PresenceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_PresenceEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_PresenceEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_PresenceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_PresenceEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_PresenceEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_AllowInvites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_AllowInvites)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_AllowInvites", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_AllowInvites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_AllowInvites)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_AllowInvites", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_BucketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_BucketId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_BucketId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_BucketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_BucketId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_BucketId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_DisableHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_DisableHostMigration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_DisableHostMigration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_DisableHostMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_DisableHostMigration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_DisableHostMigration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_EnableRTCRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_EnableRTCRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_EnableRTCRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_EnableRTCRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_EnableRTCRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_EnableRTCRoom", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_LocalRTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_LocalRTCOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_LocalRTCOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_LocalRTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_LocalRTCOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_LocalRTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_LobbyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_LobbyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_LobbyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_LobbyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_LobbyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_LobbyId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_EnableJoinById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_EnableJoinById)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_EnableJoinById", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_EnableJoinById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_EnableJoinById)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_EnableJoinById", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_RejoinAfterKickRequiresInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_RejoinAfterKickRequiresInvite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_RejoinAfterKickRequiresInvite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_RejoinAfterKickRequiresInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_RejoinAfterKickRequiresInvite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_RejoinAfterKickRequiresInvite", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_AllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_AllowedPlatformIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_AllowedPlatformIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_AllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::ArrayW<uint32_t>)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_AllowedPlatformIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_AllowedPlatformIds", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_CrossplayOptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_CrossplayOptOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_CrossplayOptOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_CrossplayOptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_CrossplayOptOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803de5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_CrossplayOptOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.get_RTCRoomJoinActionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::get_RTCRoomJoinActionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_RTCRoomJoinActionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptions.set_RTCRoomJoinActionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptions::*)(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptions::set_RTCRoomJoinActionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_RTCRoomJoinActionType", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::CreateLobbyOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Lobby::CreateLobbyOptions::get_MaxLobbyMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_MaxLobbyMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_MaxLobbyMembers(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_MaxLobbyMembers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::LobbyPermissionLevel Epic::OnlineServices::Lobby::CreateLobbyOptions::get_PermissionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyPermissionLevel>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyPermissionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_PresenceEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_PresenceEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_PresenceEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_PresenceEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_AllowInvites()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_AllowInvites", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_AllowInvites(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_AllowInvites", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Lobby::CreateLobbyOptions::get_BucketId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_BucketId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_BucketId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_BucketId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_DisableHostMigration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_DisableHostMigration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_DisableHostMigration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_DisableHostMigration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_EnableRTCRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_EnableRTCRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_EnableRTCRoom(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_EnableRTCRoom", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> Epic::OnlineServices::Lobby::CreateLobbyOptions::get_LocalRTCOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_LocalRTCOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_LocalRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_LocalRTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Lobby::CreateLobbyOptions::get_LobbyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_LobbyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_LobbyId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_LobbyId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_EnableJoinById()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_EnableJoinById", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_EnableJoinById(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_EnableJoinById", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_RejoinAfterKickRequiresInvite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_RejoinAfterKickRequiresInvite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_RejoinAfterKickRequiresInvite(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_RejoinAfterKickRequiresInvite", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<uint32_t> Epic::OnlineServices::Lobby::CreateLobbyOptions::get_AllowedPlatformIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_AllowedPlatformIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_AllowedPlatformIds(::ArrayW<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_AllowedPlatformIds", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::CreateLobbyOptions::get_CrossplayOptOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_CrossplayOptOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_CrossplayOptOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_CrossplayOptOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType Epic::OnlineServices::Lobby::CreateLobbyOptions::get_RTCRoomJoinActionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"get_RTCRoomJoinActionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptions::set_RTCRoomJoinActionType(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptions>(),
                        {"set_RTCRoomJoinActionType", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MaxLobbyMembers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AllowInvites_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BucketId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DisableHostMigration_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EnableRTCRoom_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalRTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EnableJoinById_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RejoinAfterKickRequiresInvite_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CrossplayOptOut_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RTCRoomJoinActionType_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CreateLobbyOptions::CreateLobbyOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, uint32_t  _MaxLobbyMembers_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField, bool  _PresenceEnabled_k__BackingField, bool  _AllowInvites_k__BackingField, ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField, bool  _DisableHostMigration_k__BackingField, bool  _EnableRTCRoom_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, bool  _EnableJoinById_k__BackingField, bool  _RejoinAfterKickRequiresInvite_k__BackingField, ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField, bool  _CrossplayOptOut_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  _RTCRoomJoinActionType_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_MaxLobbyMembers_k__BackingField = _MaxLobbyMembers_k__BackingField;
this->_PermissionLevel_k__BackingField = _PermissionLevel_k__BackingField;
this->_PresenceEnabled_k__BackingField = _PresenceEnabled_k__BackingField;
this->_AllowInvites_k__BackingField = _AllowInvites_k__BackingField;
this->_BucketId_k__BackingField = _BucketId_k__BackingField;
this->_DisableHostMigration_k__BackingField = _DisableHostMigration_k__BackingField;
this->_EnableRTCRoom_k__BackingField = _EnableRTCRoom_k__BackingField;
this->_LocalRTCOptions_k__BackingField = _LocalRTCOptions_k__BackingField;
this->_LobbyId_k__BackingField = _LobbyId_k__BackingField;
this->_EnableJoinById_k__BackingField = _EnableJoinById_k__BackingField;
this->_RejoinAfterKickRequiresInvite_k__BackingField = _RejoinAfterKickRequiresInvite_k__BackingField;
this->_AllowedPlatformIds_k__BackingField = _AllowedPlatformIds_k__BackingField;
this->_CrossplayOptOut_k__BackingField = _CrossplayOptOut_k__BackingField;
this->_RTCRoomJoinActionType_k__BackingField = _RTCRoomJoinActionType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CreateLobbyOptions::CreateLobbyOptions()   {
}
