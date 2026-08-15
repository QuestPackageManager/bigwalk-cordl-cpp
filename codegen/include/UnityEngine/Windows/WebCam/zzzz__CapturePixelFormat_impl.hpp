#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/CapturePixelFormat.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__CapturePixelFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat::CapturePixelFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat::CapturePixelFormat()   {
}
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat  UnityEngine::Windows::WebCam::CapturePixelFormat::BGRA32{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat  UnityEngine::Windows::WebCam::CapturePixelFormat::NV12{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat  UnityEngine::Windows::WebCam::CapturePixelFormat::JPEG{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat  UnityEngine::Windows::WebCam::CapturePixelFormat::PNG{static_cast<int32_t>(0x3)};
