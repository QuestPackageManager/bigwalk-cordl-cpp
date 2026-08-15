#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/UserInfoDataInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoDataInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoData_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoDataInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::UserInfoDataInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::UserInfoData>)>(&::Epic::OnlineServices::UserInfo::UserInfoDataInternal::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804e4a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoDataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::UserInfoData>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::UserInfoDataInternal::Get(::by_ref<::Epic::OnlineServices::UserInfo::UserInfoData>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoDataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::UserInfoData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>"
constexpr  Epic::OnlineServices::UserInfo::UserInfoDataInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>* Epic::OnlineServices::UserInfo::UserInfoDataInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__UserInfoData_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Country", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PreferredLanguage", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Nickname", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayNameSanitized", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::UserInfoDataInternal::UserInfoDataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, ::System::IntPtr  m_Country, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_PreferredLanguage, ::System::IntPtr  m_Nickname, ::System::IntPtr  m_DisplayNameSanitized) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
this->m_Country = m_Country;
this->m_DisplayName = m_DisplayName;
this->m_PreferredLanguage = m_PreferredLanguage;
this->m_Nickname = m_Nickname;
this->m_DisplayNameSanitized = m_DisplayNameSanitized;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::UserInfoDataInternal::UserInfoDataInternal()   {
}
