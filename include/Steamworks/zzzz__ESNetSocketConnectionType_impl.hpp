#pragma once
// IWYU pragma private; include "Steamworks/ESNetSocketConnectionType.hpp"
#include "Steamworks/zzzz__ESNetSocketConnectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESNetSocketConnectionType::ESNetSocketConnectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESNetSocketConnectionType::ESNetSocketConnectionType()   {
}
constexpr ::Steamworks::ESNetSocketConnectionType  Steamworks::ESNetSocketConnectionType::k_ESNetSocketConnectionTypeNotConnected{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESNetSocketConnectionType  Steamworks::ESNetSocketConnectionType::k_ESNetSocketConnectionTypeUDP{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESNetSocketConnectionType  Steamworks::ESNetSocketConnectionType::k_ESNetSocketConnectionTypeUDPRelay{static_cast<int32_t>(0x2)};
