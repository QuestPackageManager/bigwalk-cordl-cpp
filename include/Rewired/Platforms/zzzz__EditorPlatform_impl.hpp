#pragma once
// IWYU pragma private; include "Rewired/Platforms/EditorPlatform.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::EditorPlatform::EditorPlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::EditorPlatform::EditorPlatform()   {
}
constexpr ::Rewired::Platforms::EditorPlatform  Rewired::Platforms::EditorPlatform::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::EditorPlatform  Rewired::Platforms::EditorPlatform::OSX{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::EditorPlatform  Rewired::Platforms::EditorPlatform::Windows{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::EditorPlatform  Rewired::Platforms::EditorPlatform::Linux{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::EditorPlatform  Rewired::Platforms::EditorPlatform::Unknown{static_cast<int32_t>(0x64)};
