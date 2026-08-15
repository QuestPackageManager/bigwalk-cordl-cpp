#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferGrowPolicy.hpp"
#include "MA/Flora/zzzz__GraphicsBufferGrowPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferGrowPolicy::GraphicsBufferGrowPolicy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferGrowPolicy::GraphicsBufferGrowPolicy()   {
}
constexpr ::MA::Flora::GraphicsBufferGrowPolicy  MA::Flora::GraphicsBufferGrowPolicy::Exact{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::GraphicsBufferGrowPolicy  MA::Flora::GraphicsBufferGrowPolicy::WithSlack{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::GraphicsBufferGrowPolicy  MA::Flora::GraphicsBufferGrowPolicy::Double{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::GraphicsBufferGrowPolicy  MA::Flora::GraphicsBufferGrowPolicy::NextPowerOfTwo{static_cast<int32_t>(0x3)};
