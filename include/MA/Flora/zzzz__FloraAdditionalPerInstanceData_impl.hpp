#pragma once
// IWYU pragma private; include "MA/Flora/FloraAdditionalPerInstanceData.hpp"
#include "MA/Flora/zzzz__FloraAdditionalPerInstanceData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraAdditionalPerInstanceData::FloraAdditionalPerInstanceData(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraAdditionalPerInstanceData::FloraAdditionalPerInstanceData()   {
}
constexpr ::MA::Flora::FloraAdditionalPerInstanceData  MA::Flora::FloraAdditionalPerInstanceData::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraAdditionalPerInstanceData  MA::Flora::FloraAdditionalPerInstanceData::RandomID{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraAdditionalPerInstanceData  MA::Flora::FloraAdditionalPerInstanceData::VariationColor{static_cast<int32_t>(0x2)};
