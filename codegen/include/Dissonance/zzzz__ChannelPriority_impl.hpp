#pragma once
// IWYU pragma private; include "Dissonance/ChannelPriority.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::ChannelPriority::ChannelPriority(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::ChannelPriority::ChannelPriority()   {
}
constexpr ::Dissonance::ChannelPriority  Dissonance::ChannelPriority::None{static_cast<int32_t>(0xfffffffe)};
constexpr ::Dissonance::ChannelPriority  Dissonance::ChannelPriority::Low{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::ChannelPriority  Dissonance::ChannelPriority::Default{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::ChannelPriority  Dissonance::ChannelPriority::Medium{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::ChannelPriority  Dissonance::ChannelPriority::High{static_cast<int32_t>(0x2)};
