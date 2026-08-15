#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequestState.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingRequestState::IndirectCullingRequestState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingRequestState::IndirectCullingRequestState()   {
}
constexpr ::MA::Flora::IndirectCullingRequestState  MA::Flora::IndirectCullingRequestState::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::IndirectCullingRequestState  MA::Flora::IndirectCullingRequestState::Initialized{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::IndirectCullingRequestState  MA::Flora::IndirectCullingRequestState::Scheduled{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::IndirectCullingRequestState  MA::Flora::IndirectCullingRequestState::Completed{static_cast<int32_t>(0x3)};
