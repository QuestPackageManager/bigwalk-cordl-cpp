#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/EntitlementInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EntitlementInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__Entitlement_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EntitlementInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EntitlementInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::Entitlement>)>(&::Epic::OnlineServices::Ecom::EntitlementInternal::Get)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180515bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EntitlementInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::Entitlement>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::EntitlementInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::Entitlement>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EntitlementInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::Entitlement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>"
constexpr  Epic::OnlineServices::Ecom::EntitlementInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>* Epic::OnlineServices::Ecom::EntitlementInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__Entitlement_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntitlementName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntitlementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CatalogItemId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ServerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Redeemed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndTimestamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::EntitlementInternal::EntitlementInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_EntitlementName, ::System::IntPtr  m_EntitlementId, ::System::IntPtr  m_CatalogItemId, int32_t  m_ServerIndex, int32_t  m_Redeemed, int64_t  m_EndTimestamp) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_EntitlementName = m_EntitlementName;
this->m_EntitlementId = m_EntitlementId;
this->m_CatalogItemId = m_CatalogItemId;
this->m_ServerIndex = m_ServerIndex;
this->m_Redeemed = m_Redeemed;
this->m_EndTimestamp = m_EndTimestamp;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::EntitlementInternal::EntitlementInternal()   {
}
