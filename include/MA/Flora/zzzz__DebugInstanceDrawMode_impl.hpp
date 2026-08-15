#pragma once
// IWYU pragma private; include "MA/Flora/DebugInstanceDrawMode.hpp"
#include "MA/Flora/zzzz__DebugInstanceDrawMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DebugInstanceDrawMode::DebugInstanceDrawMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugInstanceDrawMode::DebugInstanceDrawMode()   {
}
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::LOD{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::RandomID{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::Template{static_cast<int32_t>(0x3)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::Draw{static_cast<int32_t>(0x4)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::DrawVariant{static_cast<int32_t>(0x5)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::CullingBatch{static_cast<int32_t>(0x6)};
constexpr ::MA::Flora::DebugInstanceDrawMode  MA::Flora::DebugInstanceDrawMode::BatchDomain{static_cast<int32_t>(0x7)};
