#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteReceivedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180512390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>"
constexpr  Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>* Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__OnCustomInviteReceivedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CustomInviteId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Payload", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::OnCustomInviteReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_CustomInviteId, ::System::IntPtr  m_Payload) noexcept  {
this->m_ClientData = m_ClientData;
this->m_TargetUserId = m_TargetUserId;
this->m_LocalUserId = m_LocalUserId;
this->m_CustomInviteId = m_CustomInviteId;
this->m_Payload = m_Payload;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal::OnCustomInviteReceivedCallbackInfoInternal()   {
}
