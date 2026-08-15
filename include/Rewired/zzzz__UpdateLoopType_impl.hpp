#pragma once
// IWYU pragma private; include "Rewired/UpdateLoopType.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::UpdateLoopType::UpdateLoopType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::UpdateLoopType::UpdateLoopType()   {
}
constexpr ::Rewired::UpdateLoopType  Rewired::UpdateLoopType::Update{static_cast<int32_t>(0x0)};
constexpr ::Rewired::UpdateLoopType  Rewired::UpdateLoopType::FixedUpdate{static_cast<int32_t>(0x1)};
constexpr ::Rewired::UpdateLoopType  Rewired::UpdateLoopType::OnGUI{static_cast<int32_t>(0x2)};
