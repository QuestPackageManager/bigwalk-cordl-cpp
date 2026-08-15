#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawTemplate.hpp"
#include "MA/Flora/zzzz__IndirectDrawTemplate_def.hpp"
// Ctor Parameters [CppParam { name: "binOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "slotsPerLod", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectDrawTemplate::IndirectDrawTemplate(uint32_t  binOffset, uint32_t  slotsPerLod, uint32_t  stateMask, uint32_t  stateIndices) noexcept  {
this->binOffset = binOffset;
this->slotsPerLod = slotsPerLod;
this->stateMask = stateMask;
this->stateIndices = stateIndices;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectDrawTemplate::IndirectDrawTemplate()   {
}
