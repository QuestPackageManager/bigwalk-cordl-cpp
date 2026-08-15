#pragma once
// IWYU pragma private; include "Rewired/Platforms/WebGLOSType.hpp"
#include "Rewired/Platforms/zzzz__WebGLOSType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::WebGLOSType::WebGLOSType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::WebGLOSType::WebGLOSType()   {
}
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::Windows{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::OSX{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::Linux{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::Android{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::WebGLOSType  Rewired::Platforms::WebGLOSType::iOS{static_cast<int32_t>(0x5)};
