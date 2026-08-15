#pragma once
// IWYU pragma private; include "Epic/OnlineServices/LogicalCombineOp.hpp"
#include "Epic/OnlineServices/zzzz__LogicalCombineOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::LogicalCombineOp::LogicalCombineOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::LogicalCombineOp::LogicalCombineOp()   {
}
constexpr ::Epic::OnlineServices::LogicalCombineOp  Epic::OnlineServices::LogicalCombineOp::And{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::LogicalCombineOp  Epic::OnlineServices::LogicalCombineOp::Or{static_cast<int32_t>(0x1)};
