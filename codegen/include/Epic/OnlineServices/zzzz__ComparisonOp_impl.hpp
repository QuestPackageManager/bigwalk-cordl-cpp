#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ComparisonOp.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ComparisonOp::ComparisonOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ComparisonOp::ComparisonOp()   {
}
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Equal{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Notequal{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Greaterthan{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Greaterthanorequal{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Lessthan{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Lessthanorequal{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Distance{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Anyof{static_cast<int32_t>(0x7)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Notanyof{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Oneof{static_cast<int32_t>(0x9)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Notoneof{static_cast<int32_t>(0xa)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Contains{static_cast<int32_t>(0xb)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Regexmatch{static_cast<int32_t>(0xc)};
constexpr ::Epic::OnlineServices::ComparisonOp  Epic::OnlineServices::ComparisonOp::Size{static_cast<int32_t>(0xd)};
