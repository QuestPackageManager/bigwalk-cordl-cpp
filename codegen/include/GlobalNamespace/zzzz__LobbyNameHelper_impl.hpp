#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyNameHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyNameHelper_def.hpp"
#include "GlobalNamespace/zzzz__JoinFriendCard_def.hpp"
#include "GlobalNamespace/zzzz__LobbyInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyNameHelper.GetLobbyNameForFriendInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::JoinFriendCard_FriendGameInfo)>(&::GlobalNamespace::LobbyNameHelper::GetLobbyNameForFriendInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180423eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyNameHelper*>(),
                        {"GetLobbyNameForFriendInfo", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyNameHelper.GetLobbyNameForLobbyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::LobbyInfo*)>(&::GlobalNamespace::LobbyNameHelper::GetLobbyNameForLobbyInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180423ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyNameHelper*>(),
                        {"GetLobbyNameForLobbyInfo", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyNameHelper.GetLobbyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::GlobalNamespace::LobbyNameHelper::GetLobbyName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180423ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyNameHelper*>(),
                        {"GetLobbyName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::LobbyNameHelper::GetLobbyNameForFriendInfo(::GlobalNamespace::JoinFriendCard_FriendGameInfo  friendInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyNameHelper*>(),
                        {"GetLobbyNameForFriendInfo", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, friendInfo);
}
inline ::StringW GlobalNamespace::LobbyNameHelper::GetLobbyNameForLobbyInfo(::GlobalNamespace::LobbyInfo*  lobbyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyNameHelper*>(),
                        {"GetLobbyNameForLobbyInfo", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, lobbyInfo);
}
inline ::StringW GlobalNamespace::LobbyNameHelper::GetLobbyName(::StringW  worldOwnerPlatformId, ::StringW  worldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyNameHelper*>(),
                        {"GetLobbyName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, worldOwnerPlatformId, worldName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyNameHelper::LobbyNameHelper()   {
}
