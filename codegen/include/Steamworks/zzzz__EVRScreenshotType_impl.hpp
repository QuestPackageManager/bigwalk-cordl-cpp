#pragma once
// IWYU pragma private; include "Steamworks/EVRScreenshotType.hpp"
#include "Steamworks/zzzz__EVRScreenshotType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EVRScreenshotType::EVRScreenshotType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EVRScreenshotType::EVRScreenshotType()   {
}
constexpr ::Steamworks::EVRScreenshotType  Steamworks::EVRScreenshotType::k_EVRScreenshotType_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EVRScreenshotType  Steamworks::EVRScreenshotType::k_EVRScreenshotType_Mono{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EVRScreenshotType  Steamworks::EVRScreenshotType::k_EVRScreenshotType_Stereo{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EVRScreenshotType  Steamworks::EVRScreenshotType::k_EVRScreenshotType_MonoCubemap{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EVRScreenshotType  Steamworks::EVRScreenshotType::k_EVRScreenshotType_MonoPanorama{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EVRScreenshotType  Steamworks::EVRScreenshotType::k_EVRScreenshotType_StereoPanorama{static_cast<int32_t>(0x5)};
