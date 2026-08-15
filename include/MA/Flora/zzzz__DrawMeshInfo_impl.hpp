#pragma once
// IWYU pragma private; include "MA/Flora/DrawMeshInfo.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "MA/Flora/zzzz__DrawMeshInfo_def.hpp"
// Ctor Parameters [CppParam { name: "Topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name: "BaseVertex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FirstIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawMeshInfo::DrawMeshInfo(::UnityEngine::MeshTopology  Topology, uint32_t  BaseVertex, uint32_t  FirstIndex, uint32_t  IndexCount) noexcept  {
this->Topology = Topology;
this->BaseVertex = BaseVertex;
this->FirstIndex = FirstIndex;
this->IndexCount = IndexCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawMeshInfo::DrawMeshInfo()   {
}
