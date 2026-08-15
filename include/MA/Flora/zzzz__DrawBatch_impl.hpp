#pragma once
// IWYU pragma private; include "MA/Flora/DrawBatch.hpp"
#include "MA/Flora/zzzz__DrawBatchKey_impl.hpp"
#include "MA/Flora/zzzz__DrawMeshInfo_impl.hpp"
#include "MA/Flora/zzzz__DrawBatch_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::DrawBatchKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "KeyHash", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshInfo", ty: "::MA::Flora::DrawMeshInfo", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawBatch::DrawBatch(::MA::Flora::DrawBatchKey  Key, int32_t  KeyHash, ::MA::Flora::DrawMeshInfo  MeshInfo) noexcept  {
this->Key = Key;
this->KeyHash = KeyHash;
this->MeshInfo = MeshInfo;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawBatch::DrawBatch()   {
}
