#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CheckoutOrientation.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CheckoutOrientation::CheckoutOrientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CheckoutOrientation::CheckoutOrientation()   {
}
constexpr ::Epic::OnlineServices::Ecom::CheckoutOrientation  Epic::OnlineServices::Ecom::CheckoutOrientation::Default{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Ecom::CheckoutOrientation  Epic::OnlineServices::Ecom::CheckoutOrientation::Portrait{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Ecom::CheckoutOrientation  Epic::OnlineServices::Ecom::CheckoutOrientation::Landscape{static_cast<int32_t>(0x2)};
