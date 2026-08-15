#pragma once
// IWYU pragma private; include "Telepathy/EventType.hpp"
#include "Telepathy/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Telepathy::EventType::EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Telepathy::EventType::EventType()   {
}
constexpr ::Telepathy::EventType  Telepathy::EventType::Connected{static_cast<int32_t>(0x0)};
constexpr ::Telepathy::EventType  Telepathy::EventType::Data{static_cast<int32_t>(0x1)};
constexpr ::Telepathy::EventType  Telepathy::EventType::Disconnected{static_cast<int32_t>(0x2)};
