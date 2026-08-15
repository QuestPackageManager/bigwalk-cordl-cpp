#pragma once
// IWYU pragma private; include "MA/Flora/TemplateSourceInfo.hpp"
#include "MA/Flora/zzzz__AABB_impl.hpp"
#include "MA/Flora/zzzz__TemplateLightmapValidationError_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/zzzz__LODFadeMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MA/Flora/zzzz__TemplateSourceInfo_def.hpp"
#include "MA/Flora/zzzz__FloraAdditionalRendererSettings_def.hpp"
#include "MA/Flora/zzzz__TemplateSourceInfo_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer::TemplateSourceInfo__LODHasShadows_e__FixedBuffer(bool  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer::TemplateSourceInfo__LODHasShadows_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer::TemplateSourceInfo__LODHeights_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer::TemplateSourceInfo__LODHeights_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer::TemplateSourceInfo__PercentageFlags_e__FixedBuffer(bool  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer::TemplateSourceInfo__PercentageFlags_e__FixedBuffer()   {
}
//  Writing Method size for method: ::MA::Flora::TemplateSourceInfo.get_HasAnyCrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateSourceInfo::*)()>(&::MA::Flora::TemplateSourceInfo::get_HasAnyCrossFade)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814aa820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateSourceInfo>(),
                        {"get_HasAnyCrossFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::TemplateSourceInfo::get_HasAnyCrossFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateSourceInfo>(),
                        {"get_HasAnyCrossFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "RenderSource", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdditionalRendererSettings", ty: "::UnityW<::MA::Flora::FloraAdditionalRendererSettings>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODGroupID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalReferencePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastLODIsBillboard", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodForceLod", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodSelectionBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodSlope", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightmapScaleOffset", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightmapValidationError", ty: "::MA::Flora::TemplateLightmapValidationError", modifiers: "", def_value: Some("{}") }, CppParam { name: "PercentageFlags", ty: "::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODHasShadows", ty: "::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODHeights", ty: "::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODTransitionHeights", ty: "::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateSourceInfo::TemplateSourceInfo(::UnityW<::UnityEngine::GameObject>  RenderSource, ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  AdditionalRendererSettings, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateRenderFlags  Flags, ::UnityEngine::Vector3  LocalAnchorPoint, int32_t  LODGroupID, int32_t  LodCount, ::UnityEngine::LODFadeMode  FadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalReferencePoint, float_t  LocalSize, ::MA::Flora::AABB  LocalAABB, bool  LastLODIsBillboard, int32_t  MeshLodForceLod, float_t  MeshLodSelectionBias, float_t  MeshLodBias, float_t  MeshLodSlope, int32_t  LightmapIndex, ::Unity::Mathematics::float4  LightmapScaleOffset, ::MA::Flora::TemplateLightmapValidationError  LightmapValidationError, ::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer  PercentageFlags, ::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer  LODHasShadows, ::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer  LODHeights, ::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer  LODTransitionHeights) noexcept  {
this->RenderSource = RenderSource;
this->AdditionalRendererSettings = AdditionalRendererSettings;
this->Type = Type;
this->Flags = Flags;
this->LocalAnchorPoint = LocalAnchorPoint;
this->LODGroupID = LODGroupID;
this->LodCount = LodCount;
this->FadeMode = FadeMode;
this->HasAnimatedCrossFade = HasAnimatedCrossFade;
this->SupportsFadeKeyword = SupportsFadeKeyword;
this->LocalReferencePoint = LocalReferencePoint;
this->LocalSize = LocalSize;
this->LocalAABB = LocalAABB;
this->LastLODIsBillboard = LastLODIsBillboard;
this->MeshLodForceLod = MeshLodForceLod;
this->MeshLodSelectionBias = MeshLodSelectionBias;
this->MeshLodBias = MeshLodBias;
this->MeshLodSlope = MeshLodSlope;
this->LightmapIndex = LightmapIndex;
this->LightmapScaleOffset = LightmapScaleOffset;
this->LightmapValidationError = LightmapValidationError;
this->PercentageFlags = PercentageFlags;
this->LODHasShadows = LODHasShadows;
this->LODHeights = LODHeights;
this->LODTransitionHeights = LODTransitionHeights;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateSourceInfo::TemplateSourceInfo()   {
}
