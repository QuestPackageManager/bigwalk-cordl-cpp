#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogItemInternal.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EcomItemType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogItemInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogItem_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogItemInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogItemInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::CatalogItem>)>(&::Epic::OnlineServices::Ecom::CatalogItemInternal::Get)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180511750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogItemInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CatalogItem>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::CatalogItemInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::CatalogItem>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogItemInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CatalogItem>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>"
constexpr  Epic::OnlineServices::Ecom::CatalogItemInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>* Epic::OnlineServices::Ecom::CatalogItemInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__CatalogItem_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CatalogNamespace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntitlementName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TitleText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LongDescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TechnicalDetailsText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeveloperText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ItemType", ty: "::Epic::OnlineServices::Ecom::EcomItemType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntitlementEndTimestamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CatalogItemInternal::CatalogItemInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_CatalogNamespace, ::System::IntPtr  m_Id, ::System::IntPtr  m_EntitlementName, ::System::IntPtr  m_TitleText, ::System::IntPtr  m_DescriptionText, ::System::IntPtr  m_LongDescriptionText, ::System::IntPtr  m_TechnicalDetailsText, ::System::IntPtr  m_DeveloperText, ::Epic::OnlineServices::Ecom::EcomItemType  m_ItemType, int64_t  m_EntitlementEndTimestamp) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_CatalogNamespace = m_CatalogNamespace;
this->m_Id = m_Id;
this->m_EntitlementName = m_EntitlementName;
this->m_TitleText = m_TitleText;
this->m_DescriptionText = m_DescriptionText;
this->m_LongDescriptionText = m_LongDescriptionText;
this->m_TechnicalDetailsText = m_TechnicalDetailsText;
this->m_DeveloperText = m_DeveloperText;
this->m_ItemType = m_ItemType;
this->m_EntitlementEndTimestamp = m_EntitlementEndTimestamp;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CatalogItemInternal::CatalogItemInternal()   {
}
