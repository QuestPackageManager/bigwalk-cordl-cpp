#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETextureFormat.hpp"
#include "TheVisualEngine/zzzz__TVETextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVETextureFormat::TVETextureFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVETextureFormat::TVETextureFormat()   {
}
constexpr ::TheVisualEngine::TVETextureFormat  TheVisualEngine::TVETextureFormat::LDR8{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVETextureFormat  TheVisualEngine::TVETextureFormat::HDR16{static_cast<int32_t>(0xa)};
constexpr ::TheVisualEngine::TVETextureFormat  TheVisualEngine::TVETextureFormat::HDR32{static_cast<int32_t>(0x14)};
