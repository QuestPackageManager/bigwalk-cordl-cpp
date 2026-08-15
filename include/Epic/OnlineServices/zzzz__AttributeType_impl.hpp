#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AttributeType.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AttributeType::AttributeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AttributeType::AttributeType()   {
}
constexpr ::Epic::OnlineServices::AttributeType  Epic::OnlineServices::AttributeType::Boolean{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AttributeType  Epic::OnlineServices::AttributeType::Int64{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AttributeType  Epic::OnlineServices::AttributeType::Double{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AttributeType  Epic::OnlineServices::AttributeType::String{static_cast<int32_t>(0x3)};
