#pragma once
// IWYU pragma private; include "Dissonance/FrameSize.hpp"
#include "Dissonance/zzzz__FrameSize_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::FrameSize::FrameSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::FrameSize::FrameSize()   {
}
constexpr ::Dissonance::FrameSize  Dissonance::FrameSize::Tiny{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::FrameSize  Dissonance::FrameSize::Small{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::FrameSize  Dissonance::FrameSize::Medium{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::FrameSize  Dissonance::FrameSize::Large{static_cast<int32_t>(0x2)};
