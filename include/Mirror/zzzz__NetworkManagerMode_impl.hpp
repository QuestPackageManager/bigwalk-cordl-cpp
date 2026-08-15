#pragma once
// IWYU pragma private; include "Mirror/NetworkManagerMode.hpp"
#include "Mirror/zzzz__NetworkManagerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkManagerMode::NetworkManagerMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkManagerMode::NetworkManagerMode()   {
}
constexpr ::Mirror::NetworkManagerMode  Mirror::NetworkManagerMode::Offline{static_cast<int32_t>(0x0)};
constexpr ::Mirror::NetworkManagerMode  Mirror::NetworkManagerMode::ServerOnly{static_cast<int32_t>(0x1)};
constexpr ::Mirror::NetworkManagerMode  Mirror::NetworkManagerMode::ClientOnly{static_cast<int32_t>(0x2)};
constexpr ::Mirror::NetworkManagerMode  Mirror::NetworkManagerMode::Host{static_cast<int32_t>(0x3)};
