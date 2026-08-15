#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/ItemOwnershipInternal.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OwnershipStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__ItemOwnershipInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__ItemOwnership_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::ItemOwnershipInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::ItemOwnershipInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::ItemOwnership>)>(&::Epic::OnlineServices::Ecom::ItemOwnershipInternal::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180517910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnershipInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::ItemOwnership>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::ItemOwnershipInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::ItemOwnership>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnershipInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::ItemOwnership>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>"
constexpr  Epic::OnlineServices::Ecom::ItemOwnershipInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>* Epic::OnlineServices::Ecom::ItemOwnershipInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__ItemOwnership_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnershipStatus", ty: "::Epic::OnlineServices::Ecom::OwnershipStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::ItemOwnershipInternal::ItemOwnershipInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Id, ::Epic::OnlineServices::Ecom::OwnershipStatus  m_OwnershipStatus) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Id = m_Id;
this->m_OwnershipStatus = m_OwnershipStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::ItemOwnershipInternal::ItemOwnershipInternal()   {
}
