#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureCompression.hpp"
#include "AmplifyImpostors/zzzz__TextureCompression_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::TextureCompression::TextureCompression(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::TextureCompression::TextureCompression()   {
}
constexpr ::AmplifyImpostors::TextureCompression  AmplifyImpostors::TextureCompression::None{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::TextureCompression  AmplifyImpostors::TextureCompression::Normal{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::TextureCompression  AmplifyImpostors::TextureCompression::High{static_cast<int32_t>(0x2)};
constexpr ::AmplifyImpostors::TextureCompression  AmplifyImpostors::TextureCompression::Low{static_cast<int32_t>(0x3)};
