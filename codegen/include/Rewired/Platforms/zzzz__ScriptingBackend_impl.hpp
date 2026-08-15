#pragma once
// IWYU pragma private; include "Rewired/Platforms/ScriptingBackend.hpp"
#include "Rewired/Platforms/zzzz__ScriptingBackend_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::ScriptingBackend::ScriptingBackend(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::ScriptingBackend::ScriptingBackend()   {
}
constexpr ::Rewired::Platforms::ScriptingBackend  Rewired::Platforms::ScriptingBackend::Mono{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::ScriptingBackend  Rewired::Platforms::ScriptingBackend::DotNet{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::ScriptingBackend  Rewired::Platforms::ScriptingBackend::IL2CPP{static_cast<int32_t>(0x2)};
