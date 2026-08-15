#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/RTCRoomConnectionChangedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__RTCRoomConnectionChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__RTCRoomConnectionChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>)>(&::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180511150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>"
constexpr  Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>* Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__RTCRoomConnectionChangedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsConnected", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisconnectReason", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::RTCRoomConnectionChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId, int32_t  m_IsConnected, ::Epic::OnlineServices::Result  m_DisconnectReason) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LobbyId = m_LobbyId;
this->m_LocalUserId = m_LocalUserId;
this->m_IsConnected = m_IsConnected;
this->m_DisconnectReason = m_DisconnectReason;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal::RTCRoomConnectionChangedCallbackInfoInternal()   {
}
