#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginStatusChangedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginStatusChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>)>(&::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805265e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>"
constexpr  Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>* Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__LoginStatusChangedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PrevStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::LoginStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::LoginStatus  m_PrevStatus, ::Epic::OnlineServices::LoginStatus  m_CurrentStatus) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_PrevStatus = m_PrevStatus;
this->m_CurrentStatus = m_CurrentStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal::LoginStatusChangedCallbackInfoInternal()   {
}
