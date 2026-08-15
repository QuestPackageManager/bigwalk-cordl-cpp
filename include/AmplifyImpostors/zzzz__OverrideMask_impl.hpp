#pragma once
// IWYU pragma private; include "AmplifyImpostors/OverrideMask.hpp"
#include "AmplifyImpostors/zzzz__OverrideMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::OverrideMask::OverrideMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::OverrideMask::OverrideMask()   {
}
constexpr ::AmplifyImpostors::OverrideMask  AmplifyImpostors::OverrideMask::OutputToggle{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::OverrideMask  AmplifyImpostors::OverrideMask::NameSuffix{static_cast<int32_t>(0x2)};
constexpr ::AmplifyImpostors::OverrideMask  AmplifyImpostors::OverrideMask::RelativeScale{static_cast<int32_t>(0x4)};
constexpr ::AmplifyImpostors::OverrideMask  AmplifyImpostors::OverrideMask::ColorSpace{static_cast<int32_t>(0x8)};
constexpr ::AmplifyImpostors::OverrideMask  AmplifyImpostors::OverrideMask::QualityCompression{static_cast<int32_t>(0x10)};
constexpr ::AmplifyImpostors::OverrideMask  AmplifyImpostors::OverrideMask::FileFormat{static_cast<int32_t>(0x20)};
