#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawCommandInfo.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandIndirect_impl.hpp"
#include "MA/Flora/zzzz__IndirectDrawCommandInfo_def.hpp"
// Ctor Parameters [CppParam { name: "BatchIndex", ty: "::MA::Flora::DrawBatchIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "Command", ty: "::UnityEngine::Rendering::BatchDrawCommandIndirect", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectDrawCommandInfo::IndirectDrawCommandInfo(::MA::Flora::DrawBatchIndex  BatchIndex, ::UnityEngine::Rendering::BatchDrawCommandIndirect  Command) noexcept  {
this->BatchIndex = BatchIndex;
this->Command = Command;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectDrawCommandInfo::IndirectDrawCommandInfo()   {
}
