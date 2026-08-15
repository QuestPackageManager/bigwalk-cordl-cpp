#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/SandboxIdItemOwnershipInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__SandboxIdItemOwnershipInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__SandboxIdItemOwnership_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>)>(&::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::Get)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18051dee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>"
constexpr  Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>* Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__SandboxIdItemOwnership_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnedCatalogItemIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnedCatalogItemIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::SandboxIdItemOwnershipInternal(::System::IntPtr  m_SandboxId, ::System::IntPtr  m_OwnedCatalogItemIds, uint32_t  m_OwnedCatalogItemIdsCount) noexcept  {
this->m_SandboxId = m_SandboxId;
this->m_OwnedCatalogItemIds = m_OwnedCatalogItemIds;
this->m_OwnedCatalogItemIdsCount = m_OwnedCatalogItemIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal::SandboxIdItemOwnershipInternal()   {
}
