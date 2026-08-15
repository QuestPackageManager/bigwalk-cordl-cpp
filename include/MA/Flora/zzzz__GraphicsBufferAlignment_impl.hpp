#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferAlignment.hpp"
#include "MA/Flora/zzzz__GraphicsBufferAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferAlignment::GraphicsBufferAlignment(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferAlignment::GraphicsBufferAlignment()   {
}
constexpr ::MA::Flora::GraphicsBufferAlignment  MA::Flora::GraphicsBufferAlignment::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::GraphicsBufferAlignment  MA::Flora::GraphicsBufferAlignment::Page{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::GraphicsBufferAlignment  MA::Flora::GraphicsBufferAlignment::PowerOfTwo{static_cast<int32_t>(0x2)};
