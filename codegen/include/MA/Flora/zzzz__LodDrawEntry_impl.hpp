#pragma once
// IWYU pragma private; include "MA/Flora/LodDrawEntry.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_impl.hpp"
#include "MA/Flora/zzzz__LodDrawEntry_def.hpp"
// Ctor Parameters [CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawIndex", ty: "::MA::Flora::DrawBatchIndex", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::LodDrawEntry::LodDrawEntry(uint8_t  LodIndex, ::MA::Flora::DrawBatchIndex  DrawIndex) noexcept  {
this->LodIndex = LodIndex;
this->DrawIndex = DrawIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::LodDrawEntry::LodDrawEntry()   {
}
