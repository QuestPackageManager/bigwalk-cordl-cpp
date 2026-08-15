#pragma once
// IWYU pragma private; include "Steamworks/SteamFriends.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamFriends_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EActivateGameOverlayToWebPageMode_def.hpp"
#include "Steamworks/zzzz__EChatEntryType_def.hpp"
#include "Steamworks/zzzz__EFriendFlags_def.hpp"
#include "Steamworks/zzzz__EFriendRelationship_def.hpp"
#include "Steamworks/zzzz__EOverlayToStoreFlag_def.hpp"
#include "Steamworks/zzzz__EPersonaState_def.hpp"
#include "Steamworks/zzzz__FriendGameInfo_t_def.hpp"
#include "Steamworks/zzzz__FriendsGroupID_t_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamFriends.GetPersonaName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamFriends::GetPersonaName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetPersonaName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.SetPersonaName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamFriends::SetPersonaName)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18058b900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetPersonaName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetPersonaState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EPersonaState (*)()>(&::Steamworks::SteamFriends::GetPersonaState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058a120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetPersonaState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::EFriendFlags)>(&::Steamworks::SteamFriends::GetFriendCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180588d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCount", {}, {::i2c::type_of<::Steamworks::EFriendFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(int32_t, ::Steamworks::EFriendFlags)>(&::Steamworks::SteamFriends::GetFriendByIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180588a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::EFriendFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendRelationship
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EFriendRelationship (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendRelationship)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRelationship", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendPersonaState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EPersonaState (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendPersonaState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendPersonaState", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendPersonaName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendPersonaName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180589280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendPersonaName", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendGamePlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::by_ref<::Steamworks::FriendGameInfo_t>)>(&::Steamworks::SteamFriends::GetFriendGamePlayed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180588f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendGamePlayed", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::Steamworks::FriendGameInfo_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendPersonaNameHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamFriends::GetFriendPersonaNameHistory)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180589190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendPersonaNameHistory", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendSteamLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendSteamLevel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805898b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendSteamLevel", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetPlayerNickname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetPlayerNickname)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetPlayerNickname", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendsGroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamFriends::GetFriendsGroupCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendsGroupIDByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::FriendsGroupID_t (*)(int32_t)>(&::Steamworks::SteamFriends::GetFriendsGroupIDByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180589a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupIDByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendsGroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::FriendsGroupID_t)>(&::Steamworks::SteamFriends::GetFriendsGroupName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180589d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupName", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendsGroupMembersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::FriendsGroupID_t)>(&::Steamworks::SteamFriends::GetFriendsGroupMembersCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupMembersCount", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendsGroupMembersList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::FriendsGroupID_t, ::ArrayW<::Steamworks::CSteamID>, int32_t)>(&::Steamworks::SteamFriends::GetFriendsGroupMembersList)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180589c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupMembersList", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>(), ::i2c::type_of<::ArrayW<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.HasFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::EFriendFlags)>(&::Steamworks::SteamFriends::HasFriend)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"HasFriend", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::EFriendFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamFriends::GetClanCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180588220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(int32_t)>(&::Steamworks::SteamFriends::GetClanByIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180587f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetClanName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805882f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanName", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetClanTag)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180588690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanTag", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanActivityCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Steamworks::SteamFriends::GetClanActivityCounts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180587df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanActivityCounts", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.DownloadClanActivityCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::CSteamID>, int32_t)>(&::Steamworks::SteamFriends::DownloadClanActivityCounts)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180587b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"DownloadClanActivityCounts", {}, {::i2c::type_of<::ArrayW<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendCountFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendCountFromSource)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180588cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCountFromSource", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendFromSourceByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamFriends::GetFriendFromSourceByIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180588e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendFromSourceByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.IsUserInSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::IsUserInSource)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsUserInSource", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.SetInGameVoiceSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID, bool)>(&::Steamworks::SteamFriends::SetInGameVoiceSpeaking)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetInGameVoiceSpeaking", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamFriends::ActivateGameOverlay)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805877b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlay", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlayToUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::ActivateGameOverlayToUser)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180587430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayToUser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlayToWebPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Steamworks::EActivateGameOverlayToWebPageMode)>(&::Steamworks::SteamFriends::ActivateGameOverlayToWebPage)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805875f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayToWebPage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::EActivateGameOverlayToWebPageMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlayToStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::AppId_t, ::Steamworks::EOverlayToStoreFlag)>(&::Steamworks::SteamFriends::ActivateGameOverlayToStore)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180587350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayToStore", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::EOverlayToStoreFlag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.SetPlayedWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::SetPlayedWith)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetPlayedWith", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlayInviteDialog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::ActivateGameOverlayInviteDialog)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805871b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayInviteDialog", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetSmallFriendAvatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetSmallFriendAvatar)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058a2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetSmallFriendAvatar", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetMediumFriendAvatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetMediumFriendAvatar)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetMediumFriendAvatar", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetLargeFriendAvatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetLargeFriendAvatar)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetLargeFriendAvatar", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.RequestUserInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, bool)>(&::Steamworks::SteamFriends::RequestUserInformation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18058b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RequestUserInformation", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.RequestClanOfficerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::RequestClanOfficerList)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058b2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RequestClanOfficerList", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetClanOwner)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805885a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanOwner", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanOfficerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetClanOfficerCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805884d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanOfficerCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanOfficerByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamFriends::GetClanOfficerByIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805883d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanOfficerByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetUserRestrictions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamFriends::GetUserRestrictions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetUserRestrictions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.SetRichPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Steamworks::SteamFriends::SetRichPresence)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18058bbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetRichPresence", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ClearRichPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamFriends::ClearRichPresence)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180587970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ClearRichPresence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendRichPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamFriends::GetFriendRichPresence)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805896c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRichPresence", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendRichPresenceKeyCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendRichPresenceKeyCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805895f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRichPresenceKeyCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendRichPresenceKeyByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamFriends::GetFriendRichPresenceKeyByIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180589500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRichPresenceKeyByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.RequestFriendRichPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::RequestFriendRichPresence)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RequestFriendRichPresence", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.InviteUserToGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamFriends::InviteUserToGame)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18058a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"InviteUserToGame", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetCoplayFriendCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamFriends::GetCoplayFriendCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180588770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetCoplayFriendCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetCoplayFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(int32_t)>(&::Steamworks::SteamFriends::GetCoplayFriend)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180588840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetCoplayFriend", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendCoplayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendCoplayTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180588bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCoplayTime", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendCoplayGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::AppId_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFriendCoplayGame)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180588b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCoplayGame", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.JoinClanChatRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::JoinClanChatRoom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058ac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"JoinClanChatRoom", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.LeaveClanChatRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::LeaveClanChatRoom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058ad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"LeaveClanChatRoom", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanChatMemberCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetClanChatMemberCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180587ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanChatMemberCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetChatMemberByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamFriends::GetChatMemberByIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180587cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetChatMemberByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.SendClanChatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamFriends::SendClanChatMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18058b560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SendClanChatMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetClanChatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID, int32_t, ::by_ref<::StringW>, int32_t, ::by_ref<::Steamworks::EChatEntryType>, ::by_ref<::Steamworks::CSteamID>)>(&::Steamworks::SteamFriends::GetClanChatMessage)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805880c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanChatMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EChatEntryType>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.IsClanChatAdmin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::IsClanChatAdmin)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanChatAdmin", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.IsClanChatWindowOpenInSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::IsClanChatWindowOpenInSteam)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanChatWindowOpenInSteam", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.OpenClanChatWindowInSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::OpenClanChatWindowInSteam)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058ae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"OpenClanChatWindowInSteam", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.CloseClanChatWindowInSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::CloseClanChatWindowInSteam)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180587a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"CloseClanChatWindowInSteam", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.SetListenForFriendsMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamFriends::SetListenForFriendsMessages)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetListenForFriendsMessages", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ReplyToFriendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamFriends::ReplyToFriendMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18058b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ReplyToFriendMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFriendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID, int32_t, ::by_ref<::StringW>, int32_t, ::by_ref<::Steamworks::EChatEntryType>)>(&::Steamworks::SteamFriends::GetFriendMessage)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180589040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EChatEntryType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetFollowerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::GetFollowerCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180588930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFollowerCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.IsFollowing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::IsFollowing)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058aab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsFollowing", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.EnumerateFollowingList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(uint32_t)>(&::Steamworks::SteamFriends::EnumerateFollowingList)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180587c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"EnumerateFollowingList", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.IsClanPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::IsClanPublic)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058a9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanPublic", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.IsClanOfficialGameGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::IsClanOfficialGameGroup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanOfficialGameGroup", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.GetNumChatsWithUnreadPriorityMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamFriends::GetNumChatsWithUnreadPriorityMessages)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180589f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetNumChatsWithUnreadPriorityMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlayRemotePlayTogetherInviteDialog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamFriends::ActivateGameOverlayRemotePlayTogetherInviteDialog)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180587280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayRemotePlayTogetherInviteDialog", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.RegisterProtocolInOverlayBrowser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamFriends::RegisterProtocolInOverlayBrowser)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18058af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RegisterProtocolInOverlayBrowser", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamFriends.ActivateGameOverlayInviteDialogConnectString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Steamworks::SteamFriends::ActivateGameOverlayInviteDialogConnectString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180586ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayInviteDialogConnectString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamFriends::GetPersonaName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetPersonaName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::SetPersonaName(::StringW  pchPersonaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetPersonaName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchPersonaName);
}
inline ::Steamworks::EPersonaState Steamworks::SteamFriends::GetPersonaState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetPersonaState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EPersonaState>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamFriends::GetFriendCount(::Steamworks::EFriendFlags  iFriendFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCount", {}, {::i2c::type_of<::Steamworks::EFriendFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, iFriendFlags);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetFriendByIndex(int32_t  iFriend, ::Steamworks::EFriendFlags  iFriendFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::EFriendFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, iFriend, iFriendFlags);
}
inline ::Steamworks::EFriendRelationship Steamworks::SteamFriends::GetFriendRelationship(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRelationship", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EFriendRelationship>(nullptr, ___internal_method, steamIDFriend);
}
inline ::Steamworks::EPersonaState Steamworks::SteamFriends::GetFriendPersonaState(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendPersonaState", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EPersonaState>(nullptr, ___internal_method, steamIDFriend);
}
inline ::StringW Steamworks::SteamFriends::GetFriendPersonaName(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendPersonaName", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDFriend);
}
inline bool Steamworks::SteamFriends::GetFriendGamePlayed(::Steamworks::CSteamID  steamIDFriend, ::by_ref<::Steamworks::FriendGameInfo_t>  pFriendGameInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendGamePlayed", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::Steamworks::FriendGameInfo_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDFriend, pFriendGameInfo);
}
inline ::StringW Steamworks::SteamFriends::GetFriendPersonaNameHistory(::Steamworks::CSteamID  steamIDFriend, int32_t  iPersonaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendPersonaNameHistory", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDFriend, iPersonaName);
}
inline int32_t Steamworks::SteamFriends::GetFriendSteamLevel(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendSteamLevel", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend);
}
inline ::StringW Steamworks::SteamFriends::GetPlayerNickname(::Steamworks::CSteamID  steamIDPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetPlayerNickname", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDPlayer);
}
inline int32_t Steamworks::SteamFriends::GetFriendsGroupCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::FriendsGroupID_t Steamworks::SteamFriends::GetFriendsGroupIDByIndex(int32_t  iFG)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupIDByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::FriendsGroupID_t>(nullptr, ___internal_method, iFG);
}
inline ::StringW Steamworks::SteamFriends::GetFriendsGroupName(::Steamworks::FriendsGroupID_t  friendsGroupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupName", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, friendsGroupID);
}
inline int32_t Steamworks::SteamFriends::GetFriendsGroupMembersCount(::Steamworks::FriendsGroupID_t  friendsGroupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupMembersCount", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, friendsGroupID);
}
inline void Steamworks::SteamFriends::GetFriendsGroupMembersList(::Steamworks::FriendsGroupID_t  friendsGroupID, ::ArrayW<::Steamworks::CSteamID>  pOutSteamIDMembers, int32_t  nMembersCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendsGroupMembersList", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>(), ::i2c::type_of<::ArrayW<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, friendsGroupID, pOutSteamIDMembers, nMembersCount);
}
inline bool Steamworks::SteamFriends::HasFriend(::Steamworks::CSteamID  steamIDFriend, ::Steamworks::EFriendFlags  iFriendFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"HasFriend", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::EFriendFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDFriend, iFriendFlags);
}
inline int32_t Steamworks::SteamFriends::GetClanCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetClanByIndex(int32_t  iClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, iClan);
}
inline ::StringW Steamworks::SteamFriends::GetClanName(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanName", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDClan);
}
inline ::StringW Steamworks::SteamFriends::GetClanTag(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanTag", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDClan);
}
inline bool Steamworks::SteamFriends::GetClanActivityCounts(::Steamworks::CSteamID  steamIDClan, ::by_ref<int32_t>  pnOnline, ::by_ref<int32_t>  pnInGame, ::by_ref<int32_t>  pnChatting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanActivityCounts", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClan, pnOnline, pnInGame, pnChatting);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::DownloadClanActivityCounts(::ArrayW<::Steamworks::CSteamID>  psteamIDClans, int32_t  cClansToRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"DownloadClanActivityCounts", {}, {::i2c::type_of<::ArrayW<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, psteamIDClans, cClansToRequest);
}
inline int32_t Steamworks::SteamFriends::GetFriendCountFromSource(::Steamworks::CSteamID  steamIDSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCountFromSource", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDSource);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetFriendFromSourceByIndex(::Steamworks::CSteamID  steamIDSource, int32_t  iFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendFromSourceByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, steamIDSource, iFriend);
}
inline bool Steamworks::SteamFriends::IsUserInSource(::Steamworks::CSteamID  steamIDUser, ::Steamworks::CSteamID  steamIDSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsUserInSource", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, steamIDSource);
}
inline void Steamworks::SteamFriends::SetInGameVoiceSpeaking(::Steamworks::CSteamID  steamIDUser, bool  bSpeaking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetInGameVoiceSpeaking", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDUser, bSpeaking);
}
inline void Steamworks::SteamFriends::ActivateGameOverlay(::StringW  pchDialog)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlay", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchDialog);
}
inline void Steamworks::SteamFriends::ActivateGameOverlayToUser(::StringW  pchDialog, ::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayToUser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchDialog, steamID);
}
inline void Steamworks::SteamFriends::ActivateGameOverlayToWebPage(::StringW  pchURL, ::Steamworks::EActivateGameOverlayToWebPageMode  eMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayToWebPage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::EActivateGameOverlayToWebPageMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchURL, eMode);
}
inline void Steamworks::SteamFriends::ActivateGameOverlayToStore(::Steamworks::AppId_t  nAppID, ::Steamworks::EOverlayToStoreFlag  eFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayToStore", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::EOverlayToStoreFlag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nAppID, eFlag);
}
inline void Steamworks::SteamFriends::SetPlayedWith(::Steamworks::CSteamID  steamIDUserPlayedWith)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetPlayedWith", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDUserPlayedWith);
}
inline void Steamworks::SteamFriends::ActivateGameOverlayInviteDialog(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayInviteDialog", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDLobby);
}
inline int32_t Steamworks::SteamFriends::GetSmallFriendAvatar(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetSmallFriendAvatar", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend);
}
inline int32_t Steamworks::SteamFriends::GetMediumFriendAvatar(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetMediumFriendAvatar", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend);
}
inline int32_t Steamworks::SteamFriends::GetLargeFriendAvatar(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetLargeFriendAvatar", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend);
}
inline bool Steamworks::SteamFriends::RequestUserInformation(::Steamworks::CSteamID  steamIDUser, bool  bRequireNameOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RequestUserInformation", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDUser, bRequireNameOnly);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::RequestClanOfficerList(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RequestClanOfficerList", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDClan);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetClanOwner(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanOwner", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, steamIDClan);
}
inline int32_t Steamworks::SteamFriends::GetClanOfficerCount(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanOfficerCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDClan);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetClanOfficerByIndex(::Steamworks::CSteamID  steamIDClan, int32_t  iOfficer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanOfficerByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, steamIDClan, iOfficer);
}
inline uint32_t Steamworks::SteamFriends::GetUserRestrictions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetUserRestrictions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamFriends::SetRichPresence(::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetRichPresence", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchKey, pchValue);
}
inline void Steamworks::SteamFriends::ClearRichPresence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ClearRichPresence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamFriends::GetFriendRichPresence(::Steamworks::CSteamID  steamIDFriend, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRichPresence", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDFriend, pchKey);
}
inline int32_t Steamworks::SteamFriends::GetFriendRichPresenceKeyCount(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRichPresenceKeyCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend);
}
inline ::StringW Steamworks::SteamFriends::GetFriendRichPresenceKeyByIndex(::Steamworks::CSteamID  steamIDFriend, int32_t  iKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendRichPresenceKeyByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDFriend, iKey);
}
inline void Steamworks::SteamFriends::RequestFriendRichPresence(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RequestFriendRichPresence", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDFriend);
}
inline bool Steamworks::SteamFriends::InviteUserToGame(::Steamworks::CSteamID  steamIDFriend, ::StringW  pchConnectString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"InviteUserToGame", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDFriend, pchConnectString);
}
inline int32_t Steamworks::SteamFriends::GetCoplayFriendCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetCoplayFriendCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetCoplayFriend(int32_t  iCoplayFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetCoplayFriend", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, iCoplayFriend);
}
inline int32_t Steamworks::SteamFriends::GetFriendCoplayTime(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCoplayTime", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend);
}
inline ::Steamworks::AppId_t Steamworks::SteamFriends::GetFriendCoplayGame(::Steamworks::CSteamID  steamIDFriend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendCoplayGame", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::AppId_t>(nullptr, ___internal_method, steamIDFriend);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::JoinClanChatRoom(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"JoinClanChatRoom", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDClan);
}
inline bool Steamworks::SteamFriends::LeaveClanChatRoom(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"LeaveClanChatRoom", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClan);
}
inline int32_t Steamworks::SteamFriends::GetClanChatMemberCount(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanChatMemberCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDClan);
}
inline ::Steamworks::CSteamID Steamworks::SteamFriends::GetChatMemberByIndex(::Steamworks::CSteamID  steamIDClan, int32_t  iUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetChatMemberByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, steamIDClan, iUser);
}
inline bool Steamworks::SteamFriends::SendClanChatMessage(::Steamworks::CSteamID  steamIDClanChat, ::StringW  pchText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SendClanChatMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClanChat, pchText);
}
inline int32_t Steamworks::SteamFriends::GetClanChatMessage(::Steamworks::CSteamID  steamIDClanChat, int32_t  iMessage, ::by_ref<::StringW>  prgchText, int32_t  cchTextMax, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType, ::by_ref<::Steamworks::CSteamID>  psteamidChatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetClanChatMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EChatEntryType>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
}
inline bool Steamworks::SteamFriends::IsClanChatAdmin(::Steamworks::CSteamID  steamIDClanChat, ::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanChatAdmin", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClanChat, steamIDUser);
}
inline bool Steamworks::SteamFriends::IsClanChatWindowOpenInSteam(::Steamworks::CSteamID  steamIDClanChat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanChatWindowOpenInSteam", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClanChat);
}
inline bool Steamworks::SteamFriends::OpenClanChatWindowInSteam(::Steamworks::CSteamID  steamIDClanChat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"OpenClanChatWindowInSteam", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClanChat);
}
inline bool Steamworks::SteamFriends::CloseClanChatWindowInSteam(::Steamworks::CSteamID  steamIDClanChat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"CloseClanChatWindowInSteam", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClanChat);
}
inline bool Steamworks::SteamFriends::SetListenForFriendsMessages(bool  bInterceptEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"SetListenForFriendsMessages", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bInterceptEnabled);
}
inline bool Steamworks::SteamFriends::ReplyToFriendMessage(::Steamworks::CSteamID  steamIDFriend, ::StringW  pchMsgToSend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ReplyToFriendMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDFriend, pchMsgToSend);
}
inline int32_t Steamworks::SteamFriends::GetFriendMessage(::Steamworks::CSteamID  steamIDFriend, int32_t  iMessageID, ::by_ref<::StringW>  pvData, int32_t  cubData, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFriendMessage", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EChatEntryType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::GetFollowerCount(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetFollowerCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::IsFollowing(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsFollowing", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamFriends::EnumerateFollowingList(uint32_t  unStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"EnumerateFollowingList", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unStartIndex);
}
inline bool Steamworks::SteamFriends::IsClanPublic(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanPublic", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClan);
}
inline bool Steamworks::SteamFriends::IsClanOfficialGameGroup(::Steamworks::CSteamID  steamIDClan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"IsClanOfficialGameGroup", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDClan);
}
inline int32_t Steamworks::SteamFriends::GetNumChatsWithUnreadPriorityMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"GetNumChatsWithUnreadPriorityMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamFriends::ActivateGameOverlayRemotePlayTogetherInviteDialog(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayRemotePlayTogetherInviteDialog", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDLobby);
}
inline bool Steamworks::SteamFriends::RegisterProtocolInOverlayBrowser(::StringW  pchProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"RegisterProtocolInOverlayBrowser", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchProtocol);
}
inline void Steamworks::SteamFriends::ActivateGameOverlayInviteDialogConnectString(::StringW  pchConnectString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamFriends*>(),
                        {"ActivateGameOverlayInviteDialogConnectString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchConnectString);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamFriends::SteamFriends()   {
}
