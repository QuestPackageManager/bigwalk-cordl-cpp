#pragma once
// IWYU pragma private; include "MA/Flora/SourceRecord.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__SourceRecord_def.hpp"
// Ctor Parameters [CppParam { name: "IdentitySourceId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "RenderSourceId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodGroupId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdditionalSettingsId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightmapScaleOffset", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SourceRecord::SourceRecord(::UnityEngine::EntityId  IdentitySourceId, ::UnityEngine::EntityId  RenderSourceId, ::UnityEngine::EntityId  LodGroupId, ::UnityEngine::EntityId  AdditionalSettingsId, int32_t  LightmapIndex, ::Unity::Mathematics::float4  LightmapScaleOffset, int32_t  RefCount) noexcept  {
this->IdentitySourceId = IdentitySourceId;
this->RenderSourceId = RenderSourceId;
this->LodGroupId = LodGroupId;
this->AdditionalSettingsId = AdditionalSettingsId;
this->LightmapIndex = LightmapIndex;
this->LightmapScaleOffset = LightmapScaleOffset;
this->RefCount = RefCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::SourceRecord::SourceRecord()   {
}
