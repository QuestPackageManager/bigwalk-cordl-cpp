#pragma once
// IWYU pragma private; include "MA/Flora/RendererGroupRecord.hpp"
#include "MA/Flora/zzzz__RendererGroupKey_impl.hpp"
#include "MA/Flora/zzzz__RendererGroupRecord_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::RendererGroupKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::RendererGroupRecord::RendererGroupRecord(::MA::Flora::RendererGroupKey  Key, uint8_t  LodIndex, int32_t  RefCount) noexcept  {
this->Key = Key;
this->LodIndex = LodIndex;
this->RefCount = RefCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::RendererGroupRecord::RendererGroupRecord()   {
}
