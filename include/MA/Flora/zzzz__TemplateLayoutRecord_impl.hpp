#pragma once
// IWYU pragma private; include "MA/Flora/TemplateLayoutRecord.hpp"
#include "MA/Flora/zzzz__AABB_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_impl.hpp"
#include "MA/Flora/zzzz__TemplateData_impl.hpp"
#include "MA/Flora/zzzz__TemplateLayoutKey_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/zzzz__LODFadeMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MA/Flora/zzzz__TemplateLayoutRecord_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::TemplateLayoutKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "CapabilityProfile", ty: "::MA::Flora::TemplateCapabilityProfile", modifiers: "", def_value: Some("{}") }, CppParam { name: "GroupSignature", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "InitialVariationColor", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxRenderDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxShadowDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AffectedByGlobalDensity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AffectedByRangeDensity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinShadowLod", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodFadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalReferencePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodHeights0To3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodHeights4To7", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodTransitionHeights0To3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodTransitionHeights4To7", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateData", ty: "::MA::Flora::TemplateData", modifiers: "", def_value: Some("{}") }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateLayoutRecord::TemplateLayoutRecord(::MA::Flora::TemplateLayoutKey  Key, ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile, uint64_t  GroupSignature, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateRenderFlags  Flags, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::Unity::Mathematics::float4  InitialVariationColor, float_t  MaxRenderDistance, float_t  MaxShadowDistance, bool  AffectedByGlobalDensity, bool  AffectedByRangeDensity, int32_t  MinShadowLod, uint8_t  LodCount, ::UnityEngine::LODFadeMode  LodFadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalAnchorPoint, ::UnityEngine::Vector3  LocalReferencePoint, float_t  LocalSize, ::MA::Flora::AABB  LocalAABB, ::Unity::Mathematics::float4  LodHeights0To3, ::Unity::Mathematics::float4  LodHeights4To7, ::Unity::Mathematics::float4  LodTransitionHeights0To3, ::Unity::Mathematics::float4  LodTransitionHeights4To7, ::MA::Flora::TemplateData  TemplateData, int32_t  RefCount) noexcept  {
this->Key = Key;
this->CapabilityProfile = CapabilityProfile;
this->GroupSignature = GroupSignature;
this->Type = Type;
this->Flags = Flags;
this->BatchDomainIndex = BatchDomainIndex;
this->InitialVariationColor = InitialVariationColor;
this->MaxRenderDistance = MaxRenderDistance;
this->MaxShadowDistance = MaxShadowDistance;
this->AffectedByGlobalDensity = AffectedByGlobalDensity;
this->AffectedByRangeDensity = AffectedByRangeDensity;
this->MinShadowLod = MinShadowLod;
this->LodCount = LodCount;
this->LodFadeMode = LodFadeMode;
this->HasAnimatedCrossFade = HasAnimatedCrossFade;
this->SupportsFadeKeyword = SupportsFadeKeyword;
this->LocalAnchorPoint = LocalAnchorPoint;
this->LocalReferencePoint = LocalReferencePoint;
this->LocalSize = LocalSize;
this->LocalAABB = LocalAABB;
this->LodHeights0To3 = LodHeights0To3;
this->LodHeights4To7 = LodHeights4To7;
this->LodTransitionHeights0To3 = LodTransitionHeights0To3;
this->LodTransitionHeights4To7 = LodTransitionHeights4To7;
this->TemplateData = TemplateData;
this->RefCount = RefCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateLayoutRecord::TemplateLayoutRecord()   {
}
