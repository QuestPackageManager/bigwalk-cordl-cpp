#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/EventType.hpp"
#include "Mirror/SimpleWeb/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::EventType::EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::EventType::EventType()   {
}
constexpr ::Mirror::SimpleWeb::EventType  Mirror::SimpleWeb::EventType::Connected{static_cast<int32_t>(0x0)};
constexpr ::Mirror::SimpleWeb::EventType  Mirror::SimpleWeb::EventType::Data{static_cast<int32_t>(0x1)};
constexpr ::Mirror::SimpleWeb::EventType  Mirror::SimpleWeb::EventType::Disconnected{static_cast<int32_t>(0x2)};
constexpr ::Mirror::SimpleWeb::EventType  Mirror::SimpleWeb::EventType::Error{static_cast<int32_t>(0x3)};
