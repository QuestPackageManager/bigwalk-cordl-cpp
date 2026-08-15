#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/ExternalAccountInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ExternalAccountInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ExternalAccountInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ExternalAccountInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ExternalAccountInfoInternal::*)(::by_ref<::Epic::OnlineServices::Connect::ExternalAccountInfo>)>(&::Epic::OnlineServices::Connect::ExternalAccountInfoInternal::Get)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805245c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ExternalAccountInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::ExternalAccountInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::ExternalAccountInfoInternal::Get(::by_ref<::Epic::OnlineServices::Connect::ExternalAccountInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ExternalAccountInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::ExternalAccountInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>"
constexpr  Epic::OnlineServices::Connect::ExternalAccountInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>* Epic::OnlineServices::Connect::ExternalAccountInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__ExternalAccountInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastLoginTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::ExternalAccountInfoInternal::ExternalAccountInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ProductUserId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_AccountId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType, int64_t  m_LastLoginTime) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ProductUserId = m_ProductUserId;
this->m_DisplayName = m_DisplayName;
this->m_AccountId = m_AccountId;
this->m_AccountIdType = m_AccountIdType;
this->m_LastLoginTime = m_LastLoginTime;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::ExternalAccountInfoInternal::ExternalAccountInfoInternal()   {
}
