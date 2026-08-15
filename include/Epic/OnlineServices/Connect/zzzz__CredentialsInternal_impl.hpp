#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CredentialsInternal.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CredentialsInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CredentialsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CredentialsInternal::*)(::by_ref<::Epic::OnlineServices::Connect::Credentials>)>(&::Epic::OnlineServices::Connect::CredentialsInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f3150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CredentialsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::Credentials>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CredentialsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CredentialsInternal::*)()>(&::Epic::OnlineServices::Connect::CredentialsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CredentialsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::CredentialsInternal::Set(::by_ref<::Epic::OnlineServices::Connect::Credentials>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CredentialsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::Credentials>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::CredentialsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CredentialsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>"
constexpr  Epic::OnlineServices::Connect::CredentialsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>* Epic::OnlineServices::Connect::CredentialsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__Credentials_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::CredentialsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::CredentialsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Token", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CredentialsInternal::CredentialsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Token, ::Epic::OnlineServices::ExternalCredentialType  m_Type) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Token = m_Token;
this->m_Type = m_Type;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CredentialsInternal::CredentialsInternal()   {
}
