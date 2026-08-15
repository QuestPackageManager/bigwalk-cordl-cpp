#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/JoinLobbyByIdOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyByIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyByIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>)>(&::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180505560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f1a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>"
constexpr  Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>* Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__JoinLobbyByIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalRTCOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CrossplayOptOut", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RTCRoomJoinActionType", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::JoinLobbyByIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId, int32_t  m_PresenceEnabled, ::System::IntPtr  m_LocalRTCOptions, int32_t  m_CrossplayOptOut, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  m_RTCRoomJoinActionType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LobbyId = m_LobbyId;
this->m_LocalUserId = m_LocalUserId;
this->m_PresenceEnabled = m_PresenceEnabled;
this->m_LocalRTCOptions = m_LocalRTCOptions;
this->m_CrossplayOptOut = m_CrossplayOptOut;
this->m_RTCRoomJoinActionType = m_RTCRoomJoinActionType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal::JoinLobbyByIdOptionsInternal()   {
}
