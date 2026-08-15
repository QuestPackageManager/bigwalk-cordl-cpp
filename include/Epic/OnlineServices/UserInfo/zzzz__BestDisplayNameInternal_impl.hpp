#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/BestDisplayNameInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__BestDisplayNameInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__BestDisplayName_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::BestDisplayNameInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::BestDisplayNameInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::BestDisplayName>)>(&::Epic::OnlineServices::UserInfo::BestDisplayNameInternal::Get)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804bea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::BestDisplayNameInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::BestDisplayName>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::BestDisplayNameInternal::Get(::by_ref<::Epic::OnlineServices::UserInfo::BestDisplayName>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::BestDisplayNameInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::BestDisplayName>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>"
constexpr  Epic::OnlineServices::UserInfo::BestDisplayNameInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>* Epic::OnlineServices::UserInfo::BestDisplayNameInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__BestDisplayName_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayNameSanitized", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Nickname", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::BestDisplayNameInternal::BestDisplayNameInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_DisplayNameSanitized, ::System::IntPtr  m_Nickname, uint32_t  m_PlatformType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
this->m_DisplayName = m_DisplayName;
this->m_DisplayNameSanitized = m_DisplayNameSanitized;
this->m_Nickname = m_Nickname;
this->m_PlatformType = m_PlatformType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::BestDisplayNameInternal::BestDisplayNameInternal()   {
}
