#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyMemberStatusReceivedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatusReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatusReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>)>(&::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18050aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>"
constexpr  Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>* Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyMemberStatusReceivedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentStatus", ty: "::Epic::OnlineServices::Lobby::LobbyMemberStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::LobbyMemberStatusReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_TargetUserId, ::Epic::OnlineServices::Lobby::LobbyMemberStatus  m_CurrentStatus) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LobbyId = m_LobbyId;
this->m_TargetUserId = m_TargetUserId;
this->m_CurrentStatus = m_CurrentStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal::LobbyMemberStatusReceivedCallbackInfoInternal()   {
}
