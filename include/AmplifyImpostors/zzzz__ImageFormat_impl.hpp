#pragma once
// IWYU pragma private; include "AmplifyImpostors/ImageFormat.hpp"
#include "AmplifyImpostors/zzzz__ImageFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::ImageFormat::ImageFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::ImageFormat::ImageFormat()   {
}
constexpr ::AmplifyImpostors::ImageFormat  AmplifyImpostors::ImageFormat::PNG{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::ImageFormat  AmplifyImpostors::ImageFormat::TGA{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::ImageFormat  AmplifyImpostors::ImageFormat::EXR{static_cast<int32_t>(0x2)};
