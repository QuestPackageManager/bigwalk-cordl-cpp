#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureScale.hpp"
#include "AmplifyImpostors/zzzz__TextureScale_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::TextureScale::TextureScale(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::TextureScale::TextureScale()   {
}
constexpr ::AmplifyImpostors::TextureScale  AmplifyImpostors::TextureScale::Full{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::TextureScale  AmplifyImpostors::TextureScale::Half{static_cast<int32_t>(0x2)};
constexpr ::AmplifyImpostors::TextureScale  AmplifyImpostors::TextureScale::Quarter{static_cast<int32_t>(0x4)};
constexpr ::AmplifyImpostors::TextureScale  AmplifyImpostors::TextureScale::Eighth{static_cast<int32_t>(0x8)};
