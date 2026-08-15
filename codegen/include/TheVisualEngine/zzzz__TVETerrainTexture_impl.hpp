#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainTexture.hpp"
#include "TheVisualEngine/zzzz__TVETerrainTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVETerrainTexture::TVETerrainTexture(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVETerrainTexture::TVETerrainTexture()   {
}
constexpr ::TheVisualEngine::TVETerrainTexture  TheVisualEngine::TVETerrainTexture::Auto{static_cast<int32_t>(0xffffffff)};
constexpr ::TheVisualEngine::TVETerrainTexture  TheVisualEngine::TVETerrainTexture::None{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVETerrainTexture  TheVisualEngine::TVETerrainTexture::heightTexture{static_cast<int32_t>(0xa)};
constexpr ::TheVisualEngine::TVETerrainTexture  TheVisualEngine::TVETerrainTexture::normalTexture{static_cast<int32_t>(0x14)};
constexpr ::TheVisualEngine::TVETerrainTexture  TheVisualEngine::TVETerrainTexture::holesTexture{static_cast<int32_t>(0x1e)};
