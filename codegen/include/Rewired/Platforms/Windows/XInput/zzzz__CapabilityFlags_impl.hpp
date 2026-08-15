#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/XInput/CapabilityFlags.hpp"
#include "Rewired/Platforms/Windows/XInput/zzzz__CapabilityFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Windows::XInput::CapabilityFlags::CapabilityFlags(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Windows::XInput::CapabilityFlags::CapabilityFlags()   {
}
constexpr ::Rewired::Platforms::Windows::XInput::CapabilityFlags  Rewired::Platforms::Windows::XInput::CapabilityFlags::VoiceSupported{static_cast<int16_t>(0x4)};
constexpr ::Rewired::Platforms::Windows::XInput::CapabilityFlags  Rewired::Platforms::Windows::XInput::CapabilityFlags::None{static_cast<int16_t>(0x0)};
