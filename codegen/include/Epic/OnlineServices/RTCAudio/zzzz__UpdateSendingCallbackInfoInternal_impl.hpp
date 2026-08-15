#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UpdateSendingCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioStatus_impl.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateSendingCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateSendingCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::*)()>(&::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>)>(&::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180503210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>"
constexpr  Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>* Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__UpdateSendingCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AudioStatus", ty: "::Epic::OnlineServices::RTCAudio::RTCAudioStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::UpdateSendingCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  m_AudioStatus) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_RoomName = m_RoomName;
this->m_AudioStatus = m_AudioStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal::UpdateSendingCallbackInfoInternal()   {
}
