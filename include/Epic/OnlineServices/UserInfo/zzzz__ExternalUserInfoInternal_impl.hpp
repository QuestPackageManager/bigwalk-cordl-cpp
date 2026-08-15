#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/ExternalUserInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__ExternalUserInfoInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__ExternalUserInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::ExternalUserInfo>)>(&::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804d8bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::Get(::by_ref<::Epic::OnlineServices::UserInfo::ExternalUserInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>"
constexpr  Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>* Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__ExternalUserInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayNameSanitized", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::ExternalUserInfoInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::ExternalAccountType  m_AccountType, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_DisplayNameSanitized) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AccountType = m_AccountType;
this->m_AccountId = m_AccountId;
this->m_DisplayName = m_DisplayName;
this->m_DisplayNameSanitized = m_DisplayNameSanitized;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal::ExternalUserInfoInternal()   {
}
