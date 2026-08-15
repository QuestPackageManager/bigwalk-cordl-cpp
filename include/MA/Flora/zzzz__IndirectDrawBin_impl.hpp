#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawBin.hpp"
#include "MA/Flora/zzzz__IndirectDrawBin_def.hpp"
// Ctor Parameters [CppParam { name: "visibleStart", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandStart", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectDrawBin::IndirectDrawBin(uint32_t  visibleStart, uint32_t  visibleCount, uint32_t  commandStart, uint32_t  commandCount) noexcept  {
this->visibleStart = visibleStart;
this->visibleCount = visibleCount;
this->commandStart = commandStart;
this->commandCount = commandCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectDrawBin::IndirectDrawBin()   {
}
