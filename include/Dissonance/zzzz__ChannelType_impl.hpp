#pragma once
// IWYU pragma private; include "Dissonance/ChannelType.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::ChannelType::ChannelType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::ChannelType::ChannelType()   {
}
constexpr ::Dissonance::ChannelType  Dissonance::ChannelType::Room{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::ChannelType  Dissonance::ChannelType::Player{static_cast<int32_t>(0x1)};
