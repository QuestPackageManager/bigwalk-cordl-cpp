#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LeaveLobbyRequestedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyRequestedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyRequestedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>)>(&::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e7bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>"
constexpr  Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>* Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LeaveLobbyRequestedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::LeaveLobbyRequestedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_LobbyId) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_LobbyId = m_LobbyId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal::LeaveLobbyRequestedCallbackInfoInternal()   {
}
