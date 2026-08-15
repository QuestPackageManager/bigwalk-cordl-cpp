#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsInfoInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>)>(&::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::Get)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180506490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>"
constexpr  Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>* Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyDetailsInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyOwnerUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AvailableSlots", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxMembers", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowInvites", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowHostMigration", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RTCRoomEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowJoinById", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RejoinAfterKickRequiresInvite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::LobbyDetailsInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LobbyOwnerUserId, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel, uint32_t  m_AvailableSlots, uint32_t  m_MaxMembers, int32_t  m_AllowInvites, ::System::IntPtr  m_BucketId, int32_t  m_AllowHostMigration, int32_t  m_RTCRoomEnabled, int32_t  m_AllowJoinById, int32_t  m_RejoinAfterKickRequiresInvite, int32_t  m_PresenceEnabled, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LobbyId = m_LobbyId;
this->m_LobbyOwnerUserId = m_LobbyOwnerUserId;
this->m_PermissionLevel = m_PermissionLevel;
this->m_AvailableSlots = m_AvailableSlots;
this->m_MaxMembers = m_MaxMembers;
this->m_AllowInvites = m_AllowInvites;
this->m_BucketId = m_BucketId;
this->m_AllowHostMigration = m_AllowHostMigration;
this->m_RTCRoomEnabled = m_RTCRoomEnabled;
this->m_AllowJoinById = m_AllowJoinById;
this->m_RejoinAfterKickRequiresInvite = m_RejoinAfterKickRequiresInvite;
this->m_PresenceEnabled = m_PresenceEnabled;
this->m_AllowedPlatformIds = m_AllowedPlatformIds;
this->m_AllowedPlatformIdsCount = m_AllowedPlatformIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal::LobbyDetailsInfoInternal()   {
}
