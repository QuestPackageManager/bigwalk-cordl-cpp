#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/EcomItemType.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EcomItemType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::EcomItemType::EcomItemType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::EcomItemType::EcomItemType()   {
}
constexpr ::Epic::OnlineServices::Ecom::EcomItemType  Epic::OnlineServices::Ecom::EcomItemType::Durable{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Ecom::EcomItemType  Epic::OnlineServices::Ecom::EcomItemType::Consumable{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Ecom::EcomItemType  Epic::OnlineServices::Ecom::EcomItemType::Other{static_cast<int32_t>(0x2)};
