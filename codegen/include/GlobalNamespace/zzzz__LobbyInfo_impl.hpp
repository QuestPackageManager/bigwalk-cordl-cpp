#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyInfo.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsInfo_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyInfo::*)()>(&::GlobalNamespace::LobbyInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LobbyInfo::__cordl_internal_get_platformID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformID;
}
constexpr ::StringW const& GlobalNamespace::LobbyInfo::__cordl_internal_get_platformID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformID;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_platformID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformID = value;
}
constexpr ::StringW& GlobalNamespace::LobbyInfo::__cordl_internal_get_userName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::LobbyInfo::__cordl_internal_get_userName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_userName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userName = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& GlobalNamespace::LobbyInfo::__cordl_internal_get_hostId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostId;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& GlobalNamespace::LobbyInfo::__cordl_internal_get_hostId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostId;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_hostId(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostId = value;
}
constexpr bool& GlobalNamespace::LobbyInfo::__cordl_internal_get_isHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHost;
}
constexpr bool const& GlobalNamespace::LobbyInfo::__cordl_internal_get_isHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHost;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_isHost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHost = value;
}
constexpr ::StringW& GlobalNamespace::LobbyInfo::__cordl_internal_get_WorldOwnerUserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldOwnerUserName;
}
constexpr ::StringW const& GlobalNamespace::LobbyInfo::__cordl_internal_get_WorldOwnerUserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldOwnerUserName;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_WorldOwnerUserName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorldOwnerUserName = value;
}
constexpr ::StringW& GlobalNamespace::LobbyInfo::__cordl_internal_get_WorldOwnerPlatformID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldOwnerPlatformID;
}
constexpr ::StringW const& GlobalNamespace::LobbyInfo::__cordl_internal_get_WorldOwnerPlatformID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldOwnerPlatformID;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_WorldOwnerPlatformID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorldOwnerPlatformID = value;
}
constexpr ::StringW& GlobalNamespace::LobbyInfo::__cordl_internal_get_worldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldName;
}
constexpr ::StringW const& GlobalNamespace::LobbyInfo::__cordl_internal_get_worldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldName;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_worldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldName = value;
}
constexpr ::StringW& GlobalNamespace::LobbyInfo::__cordl_internal_get_joinCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinCode;
}
constexpr ::StringW const& GlobalNamespace::LobbyInfo::__cordl_internal_get_joinCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinCode;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_joinCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinCode = value;
}
constexpr bool& GlobalNamespace::LobbyInfo::__cordl_internal_get_crossplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crossplay;
}
constexpr bool const& GlobalNamespace::LobbyInfo::__cordl_internal_get_crossplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crossplay;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_crossplay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crossplay = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& GlobalNamespace::LobbyInfo::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& GlobalNamespace::LobbyInfo::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_platform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsInfo& GlobalNamespace::LobbyInfo::__cordl_internal_get_detailsInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsInfo;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsInfo const& GlobalNamespace::LobbyInfo::__cordl_internal_get_detailsInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsInfo;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_detailsInfo(::Epic::OnlineServices::Lobby::LobbyDetailsInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailsInfo = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails*& GlobalNamespace::LobbyInfo::__cordl_internal_get_lobbyDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyDetails;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails* const& GlobalNamespace::LobbyInfo::__cordl_internal_get_lobbyDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyDetails;
}
constexpr void GlobalNamespace::LobbyInfo::__cordl_internal_set_lobbyDetails(::Epic::OnlineServices::Lobby::LobbyDetails*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyDetails = value;
}
inline void GlobalNamespace::LobbyInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyInfo* GlobalNamespace::LobbyInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyInfo::LobbyInfo()   {
}
