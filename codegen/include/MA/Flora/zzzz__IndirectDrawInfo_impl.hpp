#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawInfo.hpp"
#include "MA/Flora/zzzz__IndirectDrawInfo_def.hpp"
// Ctor Parameters [CppParam { name: "indexCountPerInstance", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseVertexIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startInstance", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectDrawInfo::IndirectDrawInfo(uint32_t  indexCountPerInstance, uint32_t  startIndex, uint32_t  baseVertexIndex, uint32_t  startInstance) noexcept  {
this->indexCountPerInstance = indexCountPerInstance;
this->startIndex = startIndex;
this->baseVertexIndex = baseVertexIndex;
this->startInstance = startInstance;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectDrawInfo::IndirectDrawInfo()   {
}
