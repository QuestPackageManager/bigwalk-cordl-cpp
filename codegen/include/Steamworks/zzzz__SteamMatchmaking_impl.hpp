#pragma once
// IWYU pragma private; include "Steamworks/SteamMatchmaking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamMatchmaking_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EChatEntryType_def.hpp"
#include "Steamworks/zzzz__ELobbyComparison_def.hpp"
#include "Steamworks/zzzz__ELobbyDistanceFilter_def.hpp"
#include "Steamworks/zzzz__ELobbyType_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetFavoriteGameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamMatchmaking::GetFavoriteGameCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b23c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetFavoriteGameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetFavoriteGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Steamworks::AppId_t>, ::by_ref<uint32_t>, ::by_ref<uint16_t>, ::by_ref<uint16_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamMatchmaking::GetFavoriteGame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805b23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetFavoriteGame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::AppId_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddFavoriteGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::AppId_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t)>(&::Steamworks::SteamMatchmaking::AddFavoriteGame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b1e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddFavoriteGame", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.RemoveFavoriteGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AppId_t, uint32_t, uint16_t, uint16_t, uint32_t)>(&::Steamworks::SteamMatchmaking::RemoveFavoriteGame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b2b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"RemoveFavoriteGame", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.RequestLobbyList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamMatchmaking::RequestLobbyList)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"RequestLobbyList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListStringFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::Steamworks::ELobbyComparison)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListStringFilter)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805b2120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListStringFilter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ELobbyComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListNumericalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, ::Steamworks::ELobbyComparison)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListNumericalFilter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b2000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListNumericalFilter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::ELobbyComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListNearValueFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListNearValueFilter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805b1f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListNearValueFilter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListFilterSlotsAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b1f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListFilterSlotsAvailable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListDistanceFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::ELobbyDistanceFilter)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListDistanceFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListDistanceFilter", {}, {::i2c::type_of<::Steamworks::ELobbyDistanceFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListResultCountFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListResultCountFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b20f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListResultCountFilter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.AddRequestLobbyListCompatibleMembersFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::AddRequestLobbyListCompatibleMembersFilter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListCompatibleMembersFilter", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(int32_t)>(&::Steamworks::SteamMatchmaking::GetLobbyByIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b2480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.CreateLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::ELobbyType, int32_t)>(&::Steamworks::SteamMatchmaking::CreateLobby)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"CreateLobby", {}, {::i2c::type_of<::Steamworks::ELobbyType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.JoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::JoinLobby)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"JoinLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.LeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::LeaveLobby)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"LeaveLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.InviteUserToLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::InviteUserToLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"InviteUserToLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetNumLobbyMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::GetNumLobbyMembers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetNumLobbyMembers", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyMemberByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamMatchmaking::GetLobbyMemberByIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b2810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyMemberByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamMatchmaking::GetLobbyData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b26a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW, ::StringW)>(&::Steamworks::SteamMatchmaking::SetLobbyData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805b2cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyDataCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::GetLobbyDataCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyDataCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyDataByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, int32_t, ::by_ref<::StringW>, int32_t, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamMatchmaking::GetLobbyDataByIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805b2550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyDataByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.DeleteLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamMatchmaking::DeleteLobbyData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b22d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"DeleteLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyMemberData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID, ::StringW)>(&::Steamworks::SteamMatchmaking::GetLobbyMemberData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805b2870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyMemberData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyMemberData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID, ::StringW, ::StringW)>(&::Steamworks::SteamMatchmaking::SetLobbyMemberData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805b2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyMemberData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SendLobbyChatMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamMatchmaking::SendLobbyChatMsg)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b2c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SendLobbyChatMsg", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyChatEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID, int32_t, ::by_ref<::Steamworks::CSteamID>, ::ArrayW<uint8_t>, int32_t, ::by_ref<::Steamworks::EChatEntryType>)>(&::Steamworks::SteamMatchmaking::GetLobbyChatEntry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b24d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyChatEntry", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EChatEntryType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.RequestLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::RequestLobbyData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"RequestLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::CSteamID, uint32_t, uint16_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::SetLobbyGameServer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b2e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyGameServer", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::by_ref<uint32_t>, ::by_ref<uint16_t>, ::by_ref<::Steamworks::CSteamID>)>(&::Steamworks::SteamMatchmaking::GetLobbyGameServer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyGameServer", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyMemberLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamMatchmaking::SetLobbyMemberLimit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyMemberLimit", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyMemberLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::GetLobbyMemberLimit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b2980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyMemberLimit", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::ELobbyType)>(&::Steamworks::SteamMatchmaking::SetLobbyType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyType", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::ELobbyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyJoinable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, bool)>(&::Steamworks::SteamMatchmaking::SetLobbyJoinable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b2eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyJoinable", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.GetLobbyOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::GetLobbyOwner)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b29c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyOwner", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLobbyOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::SetLobbyOwner)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b30b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyOwner", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmaking.SetLinkedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::SteamMatchmaking::SetLinkedLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLinkedLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Steamworks::SteamMatchmaking::GetFavoriteGameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetFavoriteGameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMatchmaking::GetFavoriteGame(int32_t  iGame, ::by_ref<::Steamworks::AppId_t>  pnAppID, ::by_ref<uint32_t>  pnIP, ::by_ref<uint16_t>  pnConnPort, ::by_ref<uint16_t>  pnQueryPort, ::by_ref<uint32_t>  punFlags, ::by_ref<uint32_t>  pRTime32LastPlayedOnServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetFavoriteGame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::AppId_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}
inline int32_t Steamworks::SteamMatchmaking::AddFavoriteGame(::Steamworks::AppId_t  nAppID, uint32_t  nIP, uint16_t  nConnPort, uint16_t  nQueryPort, uint32_t  unFlags, uint32_t  rTime32LastPlayedOnServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddFavoriteGame", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}
inline bool Steamworks::SteamMatchmaking::RemoveFavoriteGame(::Steamworks::AppId_t  nAppID, uint32_t  nIP, uint16_t  nConnPort, uint16_t  nQueryPort, uint32_t  unFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"RemoveFavoriteGame", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamMatchmaking::RequestLobbyList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"RequestLobbyList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListStringFilter(::StringW  pchKeyToMatch, ::StringW  pchValueToMatch, ::Steamworks::ELobbyComparison  eComparisonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListStringFilter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ELobbyComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchKeyToMatch, pchValueToMatch, eComparisonType);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListNumericalFilter(::StringW  pchKeyToMatch, int32_t  nValueToMatch, ::Steamworks::ELobbyComparison  eComparisonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListNumericalFilter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::ELobbyComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchKeyToMatch, nValueToMatch, eComparisonType);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListNearValueFilter(::StringW  pchKeyToMatch, int32_t  nValueToBeCloseTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListNearValueFilter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchKeyToMatch, nValueToBeCloseTo);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32_t  nSlotsAvailable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListFilterSlotsAvailable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nSlotsAvailable);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListDistanceFilter(::Steamworks::ELobbyDistanceFilter  eLobbyDistanceFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListDistanceFilter", {}, {::i2c::type_of<::Steamworks::ELobbyDistanceFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eLobbyDistanceFilter);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListResultCountFilter(int32_t  cMaxResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListResultCountFilter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cMaxResults);
}
inline void Steamworks::SteamMatchmaking::AddRequestLobbyListCompatibleMembersFilter(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"AddRequestLobbyListCompatibleMembersFilter", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDLobby);
}
inline ::Steamworks::CSteamID Steamworks::SteamMatchmaking::GetLobbyByIndex(int32_t  iLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, iLobby);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamMatchmaking::CreateLobby(::Steamworks::ELobbyType  eLobbyType, int32_t  cMaxMembers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"CreateLobby", {}, {::i2c::type_of<::Steamworks::ELobbyType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, eLobbyType, cMaxMembers);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamMatchmaking::JoinLobby(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"JoinLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamIDLobby);
}
inline void Steamworks::SteamMatchmaking::LeaveLobby(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"LeaveLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDLobby);
}
inline bool Steamworks::SteamMatchmaking::InviteUserToLobby(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDInvitee)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"InviteUserToLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, steamIDInvitee);
}
inline int32_t Steamworks::SteamMatchmaking::GetNumLobbyMembers(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetNumLobbyMembers", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDLobby);
}
inline ::Steamworks::CSteamID Steamworks::SteamMatchmaking::GetLobbyMemberByIndex(::Steamworks::CSteamID  steamIDLobby, int32_t  iMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyMemberByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, steamIDLobby, iMember);
}
inline ::StringW Steamworks::SteamMatchmaking::GetLobbyData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDLobby, pchKey);
}
inline bool Steamworks::SteamMatchmaking::SetLobbyData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, pchKey, pchValue);
}
inline int32_t Steamworks::SteamMatchmaking::GetLobbyDataCount(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyDataCount", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDLobby);
}
inline bool Steamworks::SteamMatchmaking::GetLobbyDataByIndex(::Steamworks::CSteamID  steamIDLobby, int32_t  iLobbyData, ::by_ref<::StringW>  pchKey, int32_t  cchKeyBufferSize, ::by_ref<::StringW>  pchValue, int32_t  cchValueBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyDataByIndex", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}
inline bool Steamworks::SteamMatchmaking::DeleteLobbyData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"DeleteLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, pchKey);
}
inline ::StringW Steamworks::SteamMatchmaking::GetLobbyMemberData(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDUser, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyMemberData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, steamIDLobby, steamIDUser, pchKey);
}
inline void Steamworks::SteamMatchmaking::SetLobbyMemberData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyMemberData", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDLobby, pchKey, pchValue);
}
inline bool Steamworks::SteamMatchmaking::SendLobbyChatMsg(::Steamworks::CSteamID  steamIDLobby, ::ArrayW<uint8_t>  pvMsgBody, int32_t  cubMsgBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SendLobbyChatMsg", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, pvMsgBody, cubMsgBody);
}
inline int32_t Steamworks::SteamMatchmaking::GetLobbyChatEntry(::Steamworks::CSteamID  steamIDLobby, int32_t  iChatID, ::by_ref<::Steamworks::CSteamID>  pSteamIDUser, ::ArrayW<uint8_t>  pvData, int32_t  cubData, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyChatEntry", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EChatEntryType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}
inline bool Steamworks::SteamMatchmaking::RequestLobbyData(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"RequestLobbyData", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby);
}
inline void Steamworks::SteamMatchmaking::SetLobbyGameServer(::Steamworks::CSteamID  steamIDLobby, uint32_t  unGameServerIP, uint16_t  unGameServerPort, ::Steamworks::CSteamID  steamIDGameServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyGameServer", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}
inline bool Steamworks::SteamMatchmaking::GetLobbyGameServer(::Steamworks::CSteamID  steamIDLobby, ::by_ref<uint32_t>  punGameServerIP, ::by_ref<uint16_t>  punGameServerPort, ::by_ref<::Steamworks::CSteamID>  psteamIDGameServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyGameServer", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}
inline bool Steamworks::SteamMatchmaking::SetLobbyMemberLimit(::Steamworks::CSteamID  steamIDLobby, int32_t  cMaxMembers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyMemberLimit", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, cMaxMembers);
}
inline int32_t Steamworks::SteamMatchmaking::GetLobbyMemberLimit(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyMemberLimit", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, steamIDLobby);
}
inline bool Steamworks::SteamMatchmaking::SetLobbyType(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::ELobbyType  eLobbyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyType", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::ELobbyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, eLobbyType);
}
inline bool Steamworks::SteamMatchmaking::SetLobbyJoinable(::Steamworks::CSteamID  steamIDLobby, bool  bLobbyJoinable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyJoinable", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, bLobbyJoinable);
}
inline ::Steamworks::CSteamID Steamworks::SteamMatchmaking::GetLobbyOwner(::Steamworks::CSteamID  steamIDLobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"GetLobbyOwner", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, steamIDLobby);
}
inline bool Steamworks::SteamMatchmaking::SetLobbyOwner(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDNewOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLobbyOwner", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, steamIDNewOwner);
}
inline bool Steamworks::SteamMatchmaking::SetLinkedLobby(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDLobbyDependent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmaking*>(),
                        {"SetLinkedLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDLobby, steamIDLobbyDependent);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamMatchmaking::SteamMatchmaking()   {
}
