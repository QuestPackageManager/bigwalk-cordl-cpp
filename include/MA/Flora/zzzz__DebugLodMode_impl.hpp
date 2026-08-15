#pragma once
// IWYU pragma private; include "MA/Flora/DebugLodMode.hpp"
#include "MA/Flora/zzzz__DebugLodMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DebugLodMode::DebugLodMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugLodMode::DebugLodMode()   {
}
constexpr ::MA::Flora::DebugLodMode  MA::Flora::DebugLodMode::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::DebugLodMode  MA::Flora::DebugLodMode::ForceLOD{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::DebugLodMode  MA::Flora::DebugLodMode::OnlyLOD{static_cast<int32_t>(0x2)};
