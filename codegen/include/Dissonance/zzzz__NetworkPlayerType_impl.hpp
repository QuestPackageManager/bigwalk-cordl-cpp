#pragma once
// IWYU pragma private; include "Dissonance/NetworkPlayerType.hpp"
#include "Dissonance/zzzz__NetworkPlayerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::NetworkPlayerType::NetworkPlayerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::NetworkPlayerType::NetworkPlayerType()   {
}
constexpr ::Dissonance::NetworkPlayerType  Dissonance::NetworkPlayerType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::NetworkPlayerType  Dissonance::NetworkPlayerType::Local{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::NetworkPlayerType  Dissonance::NetworkPlayerType::Remote{static_cast<int32_t>(0x2)};
