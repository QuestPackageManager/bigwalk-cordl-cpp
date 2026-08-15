#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferTrimPolicy.hpp"
#include "MA/Flora/zzzz__GraphicsBufferTrimPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferTrimPolicy::GraphicsBufferTrimPolicy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferTrimPolicy::GraphicsBufferTrimPolicy()   {
}
constexpr ::MA::Flora::GraphicsBufferTrimPolicy  MA::Flora::GraphicsBufferTrimPolicy::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::GraphicsBufferTrimPolicy  MA::Flora::GraphicsBufferTrimPolicy::Half{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::GraphicsBufferTrimPolicy  MA::Flora::GraphicsBufferTrimPolicy::Quarter{static_cast<int32_t>(0x2)};
