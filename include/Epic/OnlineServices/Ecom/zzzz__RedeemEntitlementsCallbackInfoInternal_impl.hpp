#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/RedeemEntitlementsCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>)>(&::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18051dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>"
constexpr  Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>* Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__RedeemEntitlementsCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RedeemedEntitlementIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PreviouslyRedeemedEntitlementIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InvalidEntitlementIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::RedeemEntitlementsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, uint32_t  m_RedeemedEntitlementIdsCount, uint32_t  m_PreviouslyRedeemedEntitlementIdsCount, uint32_t  m_InvalidEntitlementIdsCount) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_RedeemedEntitlementIdsCount = m_RedeemedEntitlementIdsCount;
this->m_PreviouslyRedeemedEntitlementIdsCount = m_PreviouslyRedeemedEntitlementIdsCount;
this->m_InvalidEntitlementIdsCount = m_InvalidEntitlementIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal::RedeemEntitlementsCallbackInfoInternal()   {
}
