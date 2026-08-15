#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/CustomInviteRejectedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__CustomInviteRejectedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__CustomInviteRejectedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180512390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>"
constexpr  Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>* Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__CustomInviteRejectedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CustomInviteId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Payload", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::CustomInviteRejectedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_CustomInviteId, ::System::IntPtr  m_Payload) noexcept  {
this->m_ClientData = m_ClientData;
this->m_TargetUserId = m_TargetUserId;
this->m_LocalUserId = m_LocalUserId;
this->m_CustomInviteId = m_CustomInviteId;
this->m_Payload = m_Payload;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal::CustomInviteRejectedCallbackInfoInternal()   {
}
