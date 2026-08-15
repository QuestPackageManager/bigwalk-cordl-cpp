#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyIdTokenCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>)>(&::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18052c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>"
constexpr  Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>* Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__VerifyIdTokenCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ApplicationId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeploymentId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsExternalAccountInfoPresent", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExternalAccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExternalAccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExternalAccountDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Platform", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::VerifyIdTokenCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_ApplicationId, ::System::IntPtr  m_ClientId, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_SandboxId, ::System::IntPtr  m_DeploymentId, ::System::IntPtr  m_DisplayName, int32_t  m_IsExternalAccountInfoPresent, ::Epic::OnlineServices::ExternalAccountType  m_ExternalAccountIdType, ::System::IntPtr  m_ExternalAccountId, ::System::IntPtr  m_ExternalAccountDisplayName, ::System::IntPtr  m_Platform) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_ApplicationId = m_ApplicationId;
this->m_ClientId = m_ClientId;
this->m_ProductId = m_ProductId;
this->m_SandboxId = m_SandboxId;
this->m_DeploymentId = m_DeploymentId;
this->m_DisplayName = m_DisplayName;
this->m_IsExternalAccountInfoPresent = m_IsExternalAccountInfoPresent;
this->m_ExternalAccountIdType = m_ExternalAccountIdType;
this->m_ExternalAccountId = m_ExternalAccountId;
this->m_ExternalAccountDisplayName = m_ExternalAccountDisplayName;
this->m_Platform = m_Platform;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal::VerifyIdTokenCallbackInfoInternal()   {
}
