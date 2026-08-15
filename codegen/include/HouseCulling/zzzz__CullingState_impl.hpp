#pragma once
// IWYU pragma private; include "HouseCulling/CullingState.hpp"
#include "HouseCulling/zzzz__CullingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HouseCulling::CullingState::CullingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HouseCulling::CullingState::CullingState()   {
}
constexpr ::HouseCulling::CullingState  HouseCulling::CullingState::Hide{static_cast<int32_t>(0x0)};
constexpr ::HouseCulling::CullingState  HouseCulling::CullingState::Show{static_cast<int32_t>(0x1)};
constexpr ::HouseCulling::CullingState  HouseCulling::CullingState::Debug{static_cast<int32_t>(0x2)};
