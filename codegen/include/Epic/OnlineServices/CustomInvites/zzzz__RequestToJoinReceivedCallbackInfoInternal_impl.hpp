#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinReceivedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180529690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>"
constexpr  Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>* Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__RequestToJoinReceivedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FromUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ToUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::RequestToJoinReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_FromUserId, ::System::IntPtr  m_ToUserId) noexcept  {
this->m_ClientData = m_ClientData;
this->m_FromUserId = m_FromUserId;
this->m_ToUserId = m_ToUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal::RequestToJoinReceivedCallbackInfoInternal()   {
}
