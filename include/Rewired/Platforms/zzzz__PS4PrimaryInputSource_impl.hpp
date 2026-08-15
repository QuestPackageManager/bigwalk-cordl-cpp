#pragma once
// IWYU pragma private; include "Rewired/Platforms/PS4PrimaryInputSource.hpp"
#include "Rewired/Platforms/zzzz__PS4PrimaryInputSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::PS4PrimaryInputSource::PS4PrimaryInputSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::PS4PrimaryInputSource::PS4PrimaryInputSource()   {
}
constexpr ::Rewired::Platforms::PS4PrimaryInputSource  Rewired::Platforms::PS4PrimaryInputSource::PS4Input{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::PS4PrimaryInputSource  Rewired::Platforms::PS4PrimaryInputSource::Unity{static_cast<int32_t>(0x64)};
