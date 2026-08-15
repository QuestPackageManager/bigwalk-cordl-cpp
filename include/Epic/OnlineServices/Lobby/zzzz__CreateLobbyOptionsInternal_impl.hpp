#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CreateLobbyOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbyOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbyOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptions>)>(&::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805048e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180504880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>"
constexpr  Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>* Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__CreateLobbyOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxLobbyMembers", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowInvites", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisableHostMigration", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EnableRTCRoom", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalRTCOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EnableJoinById", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RejoinAfterKickRequiresInvite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CrossplayOptOut", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RTCRoomJoinActionType", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::CreateLobbyOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_MaxLobbyMembers, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel, int32_t  m_PresenceEnabled, int32_t  m_AllowInvites, ::System::IntPtr  m_BucketId, int32_t  m_DisableHostMigration, int32_t  m_EnableRTCRoom, ::System::IntPtr  m_LocalRTCOptions, ::System::IntPtr  m_LobbyId, int32_t  m_EnableJoinById, int32_t  m_RejoinAfterKickRequiresInvite, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount, int32_t  m_CrossplayOptOut, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  m_RTCRoomJoinActionType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_MaxLobbyMembers = m_MaxLobbyMembers;
this->m_PermissionLevel = m_PermissionLevel;
this->m_PresenceEnabled = m_PresenceEnabled;
this->m_AllowInvites = m_AllowInvites;
this->m_BucketId = m_BucketId;
this->m_DisableHostMigration = m_DisableHostMigration;
this->m_EnableRTCRoom = m_EnableRTCRoom;
this->m_LocalRTCOptions = m_LocalRTCOptions;
this->m_LobbyId = m_LobbyId;
this->m_EnableJoinById = m_EnableJoinById;
this->m_RejoinAfterKickRequiresInvite = m_RejoinAfterKickRequiresInvite;
this->m_AllowedPlatformIds = m_AllowedPlatformIds;
this->m_AllowedPlatformIdsCount = m_AllowedPlatformIdsCount;
this->m_CrossplayOptOut = m_CrossplayOptOut;
this->m_RTCRoomJoinActionType = m_RTCRoomJoinActionType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal::CreateLobbyOptionsInternal()   {
}
