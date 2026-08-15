#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferStoreType.hpp"
#include "MA/Flora/zzzz__GraphicsBufferStoreType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferStoreType::GraphicsBufferStoreType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferStoreType::GraphicsBufferStoreType()   {
}
constexpr ::MA::Flora::GraphicsBufferStoreType  MA::Flora::GraphicsBufferStoreType::Persistent{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::GraphicsBufferStoreType  MA::Flora::GraphicsBufferStoreType::Pooled{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::GraphicsBufferStoreType  MA::Flora::GraphicsBufferStoreType::Transient{static_cast<int32_t>(0x2)};
