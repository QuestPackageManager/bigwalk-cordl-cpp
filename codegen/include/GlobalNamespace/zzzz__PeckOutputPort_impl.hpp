#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckOutputPort.hpp"
#include "GlobalNamespace/zzzz__PeckOutputPort_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckOutputPort::PeckOutputPort(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckOutputPort::PeckOutputPort()   {
}
constexpr ::GlobalNamespace::PeckOutputPort  GlobalNamespace::PeckOutputPort::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckOutputPort  GlobalNamespace::PeckOutputPort::Reward{static_cast<int32_t>(0x1)};
