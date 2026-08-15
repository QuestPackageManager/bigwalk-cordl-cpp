#pragma once
// IWYU pragma private; include "Rewired/ButtonStateFlags.hpp"
#include "Rewired/zzzz__ButtonStateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ButtonStateFlags::ButtonStateFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ButtonStateFlags::ButtonStateFlags()   {
}
constexpr ::Rewired::ButtonStateFlags  Rewired::ButtonStateFlags::Off{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ButtonStateFlags  Rewired::ButtonStateFlags::On{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ButtonStateFlags  Rewired::ButtonStateFlags::Down{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ButtonStateFlags  Rewired::ButtonStateFlags::Up{static_cast<int32_t>(0x4)};
