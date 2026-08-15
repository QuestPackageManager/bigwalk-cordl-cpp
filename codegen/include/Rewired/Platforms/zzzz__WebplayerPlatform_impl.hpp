#pragma once
// IWYU pragma private; include "Rewired/Platforms/WebplayerPlatform.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::WebplayerPlatform::WebplayerPlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::WebplayerPlatform::WebplayerPlatform()   {
}
constexpr ::Rewired::Platforms::WebplayerPlatform  Rewired::Platforms::WebplayerPlatform::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::WebplayerPlatform  Rewired::Platforms::WebplayerPlatform::Windows{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::WebplayerPlatform  Rewired::Platforms::WebplayerPlatform::OSX{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::WebplayerPlatform  Rewired::Platforms::WebplayerPlatform::Unknown{static_cast<int32_t>(0x64)};
