#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionTestDebugFlag.hpp"
#include "MA/Flora/zzzz__OcclusionTestDebugFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionTestDebugFlag::OcclusionTestDebugFlag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionTestDebugFlag::OcclusionTestDebugFlag()   {
}
constexpr ::MA::Flora::OcclusionTestDebugFlag  MA::Flora::OcclusionTestDebugFlag::AlwaysPass{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::OcclusionTestDebugFlag  MA::Flora::OcclusionTestDebugFlag::CountVisible{static_cast<int32_t>(0x2)};
