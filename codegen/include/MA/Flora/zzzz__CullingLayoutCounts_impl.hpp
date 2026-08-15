#pragma once
// IWYU pragma private; include "MA/Flora/CullingLayoutCounts.hpp"
#include "MA/Flora/zzzz__CullingLayoutCounts_def.hpp"
// Ctor Parameters [CppParam { name: "VisibleChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleInstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibilityBufferCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawCommandCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBinCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UsedDrawRangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingLayoutCounts::CullingLayoutCounts(int32_t  VisibleChunkCount, int32_t  VisibleInstanceCount, int32_t  VisibilityBufferCapacity, int32_t  DrawCommandCount, int32_t  DrawBinCount, int32_t  UsedDrawRangeCount) noexcept  {
this->VisibleChunkCount = VisibleChunkCount;
this->VisibleInstanceCount = VisibleInstanceCount;
this->VisibilityBufferCapacity = VisibilityBufferCapacity;
this->DrawCommandCount = DrawCommandCount;
this->DrawBinCount = DrawBinCount;
this->UsedDrawRangeCount = UsedDrawRangeCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingLayoutCounts::CullingLayoutCounts()   {
}
