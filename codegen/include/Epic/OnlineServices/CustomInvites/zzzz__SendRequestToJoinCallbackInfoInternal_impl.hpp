#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/SendRequestToJoinCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendRequestToJoinCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendRequestToJoinCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::*)()>(&::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804ed9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>"
constexpr  Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>* Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__SendRequestToJoinCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::SendRequestToJoinCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal::SendRequestToJoinCallbackInfoInternal()   {
}
