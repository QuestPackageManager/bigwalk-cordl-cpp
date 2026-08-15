#pragma once
// IWYU pragma private; include "MA/Flora/GPUErrorCode.hpp"
#include "MA/Flora/zzzz__GPUErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GPUErrorCode::GPUErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::GPUErrorCode::GPUErrorCode()   {
}
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::PerInstanceEmitOverflow{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::StateKeyOutOfRange{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::LodIndexOutOfRange{static_cast<int32_t>(0x3)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::TemplateLodInconsistent{static_cast<int32_t>(0x4)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::BinIndexOverflow{static_cast<int32_t>(0x5)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::CommandCountZero{static_cast<int32_t>(0x6)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::PackedKeyOrLodOutOfRange{static_cast<int32_t>(0x7)};
constexpr ::MA::Flora::GPUErrorCode  MA::Flora::GPUErrorCode::BinWritePastReservedEnd{static_cast<int32_t>(0x8)};
