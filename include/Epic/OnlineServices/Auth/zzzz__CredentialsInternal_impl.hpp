#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/CredentialsInternal.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_impl.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__CredentialsInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::CredentialsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::CredentialsInternal::*)(::by_ref<::Epic::OnlineServices::Auth::Credentials>)>(&::Epic::OnlineServices::Auth::CredentialsInternal::Set)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180524310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CredentialsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::Credentials>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::CredentialsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::CredentialsInternal::*)()>(&::Epic::OnlineServices::Auth::CredentialsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f1a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CredentialsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::CredentialsInternal::Set(::by_ref<::Epic::OnlineServices::Auth::Credentials>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CredentialsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::Credentials>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::CredentialsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::CredentialsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>"
constexpr  Epic::OnlineServices::Auth::CredentialsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>* Epic::OnlineServices::Auth::CredentialsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__Credentials_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::CredentialsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::CredentialsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Token", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Auth::LoginCredentialType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SystemAuthCredentialsOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExternalType", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::CredentialsInternal::CredentialsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Id, ::System::IntPtr  m_Token, ::Epic::OnlineServices::Auth::LoginCredentialType  m_Type, ::System::IntPtr  m_SystemAuthCredentialsOptions, ::Epic::OnlineServices::ExternalCredentialType  m_ExternalType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Id = m_Id;
this->m_Token = m_Token;
this->m_Type = m_Type;
this->m_SystemAuthCredentialsOptions = m_SystemAuthCredentialsOptions;
this->m_ExternalType = m_ExternalType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::CredentialsInternal::CredentialsInternal()   {
}
