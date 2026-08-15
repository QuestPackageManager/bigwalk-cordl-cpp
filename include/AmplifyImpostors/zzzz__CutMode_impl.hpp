#pragma once
// IWYU pragma private; include "AmplifyImpostors/CutMode.hpp"
#include "AmplifyImpostors/zzzz__CutMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::CutMode::CutMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::CutMode::CutMode()   {
}
constexpr ::AmplifyImpostors::CutMode  AmplifyImpostors::CutMode::Automatic{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::CutMode  AmplifyImpostors::CutMode::Manual{static_cast<int32_t>(0x1)};
