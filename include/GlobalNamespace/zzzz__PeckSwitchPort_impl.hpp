#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSwitchPort.hpp"
#include "GlobalNamespace/zzzz__PeckSwitchPort_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckSwitchPort::PeckSwitchPort(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckSwitchPort::PeckSwitchPort()   {
}
constexpr ::GlobalNamespace::PeckSwitchPort  GlobalNamespace::PeckSwitchPort::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckSwitchPort  GlobalNamespace::PeckSwitchPort::SyncPress{static_cast<int32_t>(0x1)};
