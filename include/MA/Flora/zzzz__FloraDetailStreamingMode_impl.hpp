#pragma once
// IWYU pragma private; include "MA/Flora/FloraDetailStreamingMode.hpp"
#include "MA/Flora/zzzz__FloraDetailStreamingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraDetailStreamingMode::FloraDetailStreamingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraDetailStreamingMode::FloraDetailStreamingMode()   {
}
constexpr ::MA::Flora::FloraDetailStreamingMode  MA::Flora::FloraDetailStreamingMode::Immediate{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraDetailStreamingMode  MA::Flora::FloraDetailStreamingMode::Streamed{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraDetailStreamingMode  MA::Flora::FloraDetailStreamingMode::Custom{static_cast<int32_t>(0x3)};
