#pragma once
// IWYU pragma private; include "MA/Flora/BlockData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MA/Flora/zzzz__BlockData_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cellSize", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BlockData::BlockData(::UnityEngine::Vector3  position, float_t  cellSize) noexcept  {
this->position = position;
this->cellSize = cellSize;
}
// Ctor Parameters []
constexpr ::MA::Flora::BlockData::BlockData()   {
}
