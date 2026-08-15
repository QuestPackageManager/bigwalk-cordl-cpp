#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/RedeemEntitlementsResultListType.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType::RedeemEntitlementsResultListType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType::RedeemEntitlementsResultListType()   {
}
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType::Redeemed{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType::PreviouslyRedeemed{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType::Invalid{static_cast<int32_t>(0x2)};
