#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/AdditionalLightsShadowCasterPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
// Ctor Parameters [CppParam { name: "lastLocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastFrameRendered", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastFrameSeen", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDirty", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState::AdditionalLightsShadowCasterPass_CachedLightShadowState(::UnityEngine::Matrix4x4  lastLocalToWorldMatrix, int32_t  lastFrameRendered, int32_t  lastFrameSeen, bool  isDirty) noexcept  {
this->lastLocalToWorldMatrix = lastLocalToWorldMatrix;
this->lastFrameRendered = lastFrameRendered;
this->lastFrameSeen = lastFrameSeen;
this->isDirty = isDirty;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState::AdditionalLightsShadowCasterPass_CachedLightShadowState()   {
}
// Ctor Parameters [CppParam { name: "offsetX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition::AdditionalLightsShadowCasterPass_SlotPosition(int32_t  offsetX, int32_t  offsetY, int32_t  resolution) noexcept  {
this->offsetX = offsetX;
this->offsetY = offsetY;
this->resolution = resolution;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition::AdditionalLightsShadowCasterPass_SlotPosition()   {
}
// Ctor Parameters [CppParam { name: "srcOffsetX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "srcOffsetY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dstOffsetX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dstOffsetY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo::AdditionalLightsShadowCasterPass_ShadowBlitInfo(int32_t  srcOffsetX, int32_t  srcOffsetY, int32_t  dstOffsetX, int32_t  dstOffsetY, int32_t  resolution) noexcept  {
this->srcOffsetX = srcOffsetX;
this->srcOffsetY = srcOffsetY;
this->dstOffsetX = dstOffsetX;
this->dstOffsetY = dstOffsetY;
this->resolution = resolution;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo::AdditionalLightsShadowCasterPass_ShadowBlitInfo()   {
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalLightsWorldToShadow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalLightsWorldToShadow", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalLightsWorldToShadow()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsWorldToShadow", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalShadowParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowParams()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalShadowParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowOffset0(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalShadowOffset0", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowOffset0()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalShadowOffset0", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowOffset1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalShadowOffset1", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowOffset1()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalShadowOffset1", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowFadeParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalShadowFadeParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowFadeParams()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalShadowFadeParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowmapSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalShadowmapSize", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowmapSize()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalShadowmapSize", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalLightsShadowmapID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalLightsShadowmapID", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalLightsShadowmapID()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsShadowmapID", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalLightsWorldToShadow_SSBO(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalLightsWorldToShadow_SSBO", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalLightsWorldToShadow_SSBO()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsWorldToShadow_SSBO", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowParams_SSBO(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AdditionalShadowParams_SSBO", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowParams_SSBO()  {
return ::cordl_internals::getStaticField<int32_t, "_AdditionalShadowParams_SSBO", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18215bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmapID;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmapID;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowmapID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmapID = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_emptyShadowmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_emptyShadowmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_emptyShadowmap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_setKeywordForEmptyShadowmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setKeywordForEmptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_setKeywordForEmptyShadowmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setKeywordForEmptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_setKeywordForEmptyShadowmap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setKeywordForEmptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_useStructuredBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_useStructuredBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_useStructuredBuffer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useStructuredBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_stripShadowsOffVariants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stripShadowsOffVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_stripShadowsOffVariants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stripShadowsOffVariants;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_stripShadowsOffVariants(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stripShadowsOffVariants = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_viewMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_viewMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewMatrix;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___viewMatrix = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_allocatedShadowAtlasSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocatedShadowAtlasSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_allocatedShadowAtlasSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocatedShadowAtlasSize;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_allocatedShadowAtlasSize(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allocatedShadowAtlasSize = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmapTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmapTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowmapTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmapTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_lightData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_lightData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowData = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_pass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_pass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_pass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pass = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RendererList>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererLists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowRendererLists;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RendererList> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererLists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowRendererLists;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowRendererLists(::ArrayW<::UnityEngine::Rendering::RendererList>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowRendererLists = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererListsHdl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowRendererListsHdl;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererListsHdl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowRendererListsHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowRendererListsHdl(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowRendererListsHdl = value;
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::AdditionalLightsShadowCasterPass_PassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c._DetermineLightsToUpdate_b__94_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::*)(::System::ValueTuple_3<int32_t,int32_t,int32_t>, ::System::ValueTuple_3<int32_t,int32_t,int32_t>)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_DetermineLightsToUpdate_b__94_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18045a3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(),
                        {"<DetermineLightsToUpdate>b__94_0", {}, {::i2c::type_of<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(), ::i2c::type_of<::System::ValueTuple_3<int32_t,int32_t,int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c._Render_b__100_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::*)(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_Render_b__100_0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18215c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(),
                        {"<Render>b__100_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(std::forward<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::setStaticF___9__94_0(::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*, "<>9__94_0", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(std::forward<::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::getStaticF___9__94_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*, "<>9__94_0", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::setStaticF___9__100_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__100_0", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::getStaticF___9__100_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__100_0", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_DetermineLightsToUpdate_b__94_0(::System::ValueTuple_3<int32_t,int32_t,int32_t>  tuple, ::System::ValueTuple_3<int32_t,int32_t,int32_t>  valueTuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(),
                        {"<DetermineLightsToUpdate>b__94_0", {}, {::i2c::type_of<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(), ::i2c::type_of<::System::ValueTuple_3<int32_t,int32_t,int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tuple, valueTuple);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_Render_b__100_0(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(),
                        {"<Render>b__100_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::AdditionalLightsShadowCasterPass___c()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Configure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Execute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.get_EnableShadowCaching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::get_EnableShadowCaching)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"get_EnableShadowCaching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.set_EnableShadowCaching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(bool)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::set_EnableShadowCaching)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18214f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"set_EnableShadowCaching", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.get_MaxShadowUpdatesPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::get_MaxShadowUpdatesPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"get_MaxShadowUpdatesPerFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.set_MaxShadowUpdatesPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::set_MaxShadowUpdatesPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18214f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"set_MaxShadowUpdatesPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.get_MaxPriorityLightUpdatesPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::get_MaxPriorityLightUpdatesPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"get_MaxPriorityLightUpdatesPerFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.set_MaxPriorityLightUpdatesPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::set_MaxPriorityLightUpdatesPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18214f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"set_MaxPriorityLightUpdatesPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::_ctor)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x18214ed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1820f8a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.CalcGuardAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::CalcGuardAngle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182149000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"CalcGuardAngle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.GetPointLightShadowFrustumFovBiasInDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, bool)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetPointLightShadowFrustumFovBiasInDegrees)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18214a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"GetPointLightShadowFrustumFovBiasInDegrees", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.ResolutionLog2ForHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ResolutionLog2ForHash)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18214c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"ResolutionLog2ForHash", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.ComputeShadowRequestHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ComputeShadowRequestHash)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1821490b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"ComputeShadowRequestHash", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.GetLightTypeIdentifierForShadowParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::LightType)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetLightTypeIdentifierForShadowParams)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18214a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"GetLightTypeIdentifierForShadowParams", {}, {::i2c::type_of<::UnityEngine::LightType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.UsesBakedShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Light*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UsesBakedShadows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18214ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"UsesBakedShadows", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18214eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Setup", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0x1bd0;
  constexpr static std::size_t addrs = 0x18214cf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.UpdateTextureDescriptorIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UpdateTextureDescriptorIfNeeded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18214ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"UpdateTextureDescriptorIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.AnyAdditionalLightHasMixedShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::AnyAdditionalLightHasMixedShadows)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x182148e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"AnyAdditionalLightHasMixedShadows", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.SetupForEmptyRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(bool, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupForEmptyRendering)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18214cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"SetupForEmptyRendering", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.GetShadowLightIndexFromLightIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetShadowLightIndexFromLightIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18214aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"GetShadowLightIndexFromLightIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182149090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.InvalidateShadowCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InvalidateShadowCache)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18214ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"InvalidateShadowCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.MatrixApproximatelyEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::MatrixApproximatelyEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18214aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"MatrixApproximatelyEqual", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.ExecuteShadowBlits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ExecuteShadowBlits)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18214a560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"ExecuteShadowBlits", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.RegionsOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::RegionsOverlap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18214af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"RegionsOverlap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.DetermineLightsToUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, ::UnityEngine::Rendering::Universal::UniversalLightData*, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::DetermineLightsToUpdate)> {
  constexpr static std::size_t size = 0x11c0;
  constexpr static std::size_t addrs = 0x1821493a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"DetermineLightsToUpdate", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.SetShadowParamsForEmptyShadowmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetShadowParamsForEmptyShadowmap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18214c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"SetShadowParamsForEmptyShadowmap", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.RenderAdditionalShadowmapAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>, bool)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::RenderAdditionalShadowmapAtlas)> {
  constexpr static std::size_t size = 0xd80;
  constexpr static std::size_t addrs = 0x18214afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"RenderAdditionalShadowmapAtlas", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.SetupAdditionalLightsShadowReceiverConstants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector2Int, bool, bool)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupAdditionalLightsShadowReceiverConstants)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18214c7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"SetupAdditionalLightsShadowReceiverConstants", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.InitPassData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitPassData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18214ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"InitPassData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.InitRendererLists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18214ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"InitRendererLists", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Render)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x18214bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowmapHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsShadowmapHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowmapHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsShadowmapHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightsShadowmapHandle(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightsShadowmapHandle = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LightShadowStateCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightShadowStateCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LightShadowStateCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightShadowStateCache;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LightShadowStateCache(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LightShadowStateCache = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LightsToUpdateThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightsToUpdateThisFrame;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LightsToUpdateThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightsToUpdateThisFrame;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LightsToUpdateThisFrame(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LightsToUpdateThisFrame = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CachedStaleKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedStaleKeys;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CachedStaleKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedStaleKeys;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_CachedStaleKeys(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedStaleKeys = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_SlotToLightInstanceID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SlotToLightInstanceID;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_SlotToLightInstanceID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SlotToLightInstanceID;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_SlotToLightInstanceID(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SlotToLightInstanceID = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastFrameSlotToLightInstanceID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameSlotToLightInstanceID;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastFrameSlotToLightInstanceID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameSlotToLightInstanceID;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LastFrameSlotToLightInstanceID(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrameSlotToLightInstanceID = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_SlotToPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SlotToPosition;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_SlotToPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SlotToPosition;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_SlotToPosition(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SlotToPosition = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastFrameSlotToPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameSlotToPosition;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastFrameSlotToPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameSlotToPosition;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LastFrameSlotToPosition(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrameSlotToPosition = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_PriorityLightsTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PriorityLightsTemp;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_PriorityLightsTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PriorityLightsTemp;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_PriorityLightsTemp(::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PriorityLightsTemp = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowBlitsThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowBlitsThisFrame;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowBlitsThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowBlitsThisFrame;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ShadowBlitsThisFrame(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShadowBlitsThisFrame = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LightsNeedingBlitFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightsNeedingBlitFallback;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LightsNeedingBlitFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightsNeedingBlitFallback;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LightsNeedingBlitFallback(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LightsNeedingBlitFallback = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProcessedLightsForUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProcessedLightsForUpdate;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProcessedLightsForUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProcessedLightsForUpdate;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ProcessedLightsForUpdate(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProcessedLightsForUpdate = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProcessedPriorityLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProcessedPriorityLights;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProcessedPriorityLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProcessedPriorityLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ProcessedPriorityLights(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProcessedPriorityLights = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_BlitsExecutedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlitsExecutedThisFrame;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_BlitsExecutedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlitsExecutedThisFrame;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_BlitsExecutedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlitsExecutedThisFrame = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxShadowUpdatesPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxShadowUpdatesPerFrame;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxShadowUpdatesPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxShadowUpdatesPerFrame;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_MaxShadowUpdatesPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxShadowUpdatesPerFrame = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxPriorityLightUpdatesPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxPriorityLightUpdatesPerFrame;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxPriorityLightUpdatesPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxPriorityLightUpdatesPerFrame;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_MaxPriorityLightUpdatesPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxPriorityLightUpdatesPerFrame = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EnableShadowCaching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableShadowCaching;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EnableShadowCaching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableShadowCaching;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_EnableShadowCaching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableShadowCaching = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastAtlasWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAtlasWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastAtlasWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAtlasWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LastAtlasWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastAtlasWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastAtlasHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAtlasHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastAtlasHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastAtlasHeight;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LastAtlasHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastAtlasHeight = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastSlotCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSlotCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_LastSlotCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSlotCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_LastSlotCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastSlotCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_RoundRobinStartIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RoundRobinStartIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_RoundRobinStartIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RoundRobinStartIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_RoundRobinStartIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RoundRobinStartIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_PriorityRoundRobinIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PriorityRoundRobinIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_PriorityRoundRobinIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PriorityRoundRobinIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_PriorityRoundRobinIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PriorityRoundRobinIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTargetWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTargetWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_renderTargetWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderTargetWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTargetHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTargetHeight;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_renderTargetHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderTargetHeight = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CreateEmptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CreateEmptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_CreateEmptyShadowmap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CreateEmptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_SetKeywordForEmptyShadowmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SetKeywordForEmptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_SetKeywordForEmptyShadowmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SetKeywordForEmptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_SetKeywordForEmptyShadowmap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SetKeywordForEmptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EmptyShadowmapNeedsClear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EmptyShadowmapNeedsClear;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EmptyShadowmapNeedsClear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EmptyShadowmapNeedsClear;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_EmptyShadowmapNeedsClear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EmptyShadowmapNeedsClear = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_NeedFullAtlasClear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NeedFullAtlasClear;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_NeedFullAtlasClear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NeedFullAtlasClear;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_NeedFullAtlasClear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NeedFullAtlasClear = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutShadowSlicesTooMany;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutShadowSlicesTooMany;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutShadowSlicesTooMany(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IssuedMessageAboutShadowSlicesTooMany = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutShadowMapsRescale;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutShadowMapsRescale;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutShadowMapsRescale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IssuedMessageAboutShadowMapsRescale = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutShadowMapsTooBig;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutShadowMapsTooBig;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutShadowMapsTooBig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IssuedMessageAboutShadowMapsTooBig = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutRemovedShadowSlices;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IssuedMessageAboutRemovedShadowSlices;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutRemovedShadowSlices(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IssuedMessageAboutRemovedShadowSlices = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_UseStructuredBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_UseStructuredBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_UseStructuredBuffer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseStructuredBuffer = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxShadowDistanceSq;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxShadowDistanceSq;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_MaxShadowDistanceSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxShadowDistanceSq = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CascadeBorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CascadeBorder;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CascadeBorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CascadeBorder;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_CascadeBorder(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CascadeBorder = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToIsCastingShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibleLightIndexToIsCastingShadows;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToIsCastingShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibleLightIndexToIsCastingShadows;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_VisibleLightIndexToIsCastingShadows(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisibleLightIndexToIsCastingShadows = value;
}
constexpr ::ArrayW<int16_t>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibleLightIndexToAdditionalLightIndex;
}
constexpr ::ArrayW<int16_t> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibleLightIndexToAdditionalLightIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisibleLightIndexToAdditionalLightIndex = value;
}
constexpr ::ArrayW<int16_t>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightIndexToVisibleLightIndex;
}
constexpr ::ArrayW<int16_t> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightIndexToVisibleLightIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightIndexToVisibleLightIndex = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToShadowParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightIndexToShadowParams;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToShadowParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightIndexToShadowParams;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightIndexToShadowParams = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowSlices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsShadowSlices;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowSlices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsShadowSlices;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightsShadowSlices(::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightsShadowSlices = value;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex(::System::Collections::Generic::List_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex = value;
}
constexpr ::System::Collections::Generic::List_1<int16_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowSliceToAdditionalLightIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowSliceToAdditionalLightIndex;
}
constexpr ::System::Collections::Generic::List_1<int16_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowSliceToAdditionalLightIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ShadowSliceToAdditionalLightIndex(::System::Collections::Generic::List_1<int16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShadowSliceToAdditionalLightIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowRequestsHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowRequestsHashes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowRequestsHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShadowRequestsHashes;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ShadowRequestsHashes(::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShadowRequestsHashes = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProfilingSetupSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProfilingSetupSampler;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProfilingSetupSampler = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightShadowDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightShadowDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightShadowDescriptor(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightShadowDescriptor = value;
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_AdditionalShadowsBufferId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "m_AdditionalShadowsBufferId", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_AdditionalShadowsBufferId()  {
return ::cordl_internals::getStaticField<int32_t, "m_AdditionalShadowsBufferId", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_AdditionalShadowsIndicesId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "m_AdditionalShadowsIndicesId", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_AdditionalShadowsIndicesId()  {
return ::cordl_internals::getStaticField<int32_t, "m_AdditionalShadowsIndicesId", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall(bool  value)  {
::cordl_internals::setStaticField<bool, "m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall()  {
return ::cordl_internals::getStaticField<bool, "m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall(bool  value)  {
::cordl_internals::setStaticField<bool, "m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall()  {
return ::cordl_internals::getStaticField<bool, "m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_c_DefaultShadowParams(::UnityEngine::Vector4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector4, "c_DefaultShadowParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_c_DefaultShadowParams()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "c_DefaultShadowParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_s_EmptyAdditionalShadowFadeParams(::UnityEngine::Vector4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_EmptyAdditionalShadowFadeParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_s_EmptyAdditionalShadowFadeParams()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_EmptyAdditionalShadowFadeParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_s_EmptyAdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4>, "s_EmptyAdditionalLightIndexToShadowParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_s_EmptyAdditionalLightIndexToShadowParams()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4>, "s_EmptyAdditionalLightIndexToShadowParams", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_isAdditionalShadowParamsDirty(bool  value)  {
::cordl_internals::setStaticField<bool, "isAdditionalShadowParamsDirty", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_isAdditionalShadowParamsDirty()  {
return ::cordl_internals::getStaticField<bool, "isAdditionalShadowParamsDirty", ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::get_EnableShadowCaching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"get_EnableShadowCaching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::set_EnableShadowCaching(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"set_EnableShadowCaching", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::get_MaxShadowUpdatesPerFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"get_MaxShadowUpdatesPerFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::set_MaxShadowUpdatesPerFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"set_MaxShadowUpdatesPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::get_MaxPriorityLightUpdatesPerFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"get_MaxPriorityLightUpdatesPerFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::set_MaxPriorityLightUpdatesPerFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"set_MaxPriorityLightUpdatesPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::CalcGuardAngle(float_t  frustumAngleInDegrees, float_t  guardBandSizeInTexels, float_t  sliceResolutionInTexels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"CalcGuardAngle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, frustumAngleInDegrees, guardBandSizeInTexels, sliceResolutionInTexels);
}
inline float_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetPointLightShadowFrustumFovBiasInDegrees(int32_t  shadowSliceResolution, bool  shadowFiltering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"GetPointLightShadowFrustumFovBiasInDegrees", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, shadowSliceResolution, shadowFiltering);
}
inline uint64_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ResolutionLog2ForHash(int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"ResolutionLog2ForHash", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, resolution);
}
inline uint64_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ComputeShadowRequestHash(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"ComputeShadowRequestHash", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, lightData, shadowData);
}
inline float_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetLightTypeIdentifierForShadowParams(::UnityEngine::LightType  lightType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"GetLightTypeIdentifierForShadowParams", {}, {::i2c::type_of<::UnityEngine::LightType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lightType);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UsesBakedShadows(::UnityEngine::Light*  light)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"UsesBakedShadows", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, light);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Setup", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderingData);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup(::UnityEngine::Rendering::Universal::UniversalRenderingData*  renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderingData, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UpdateTextureDescriptorIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"UpdateTextureDescriptorIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::AnyAdditionalLightHasMixedShadows(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"AnyAdditionalLightHasMixedShadows", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lightData);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupForEmptyRendering(bool  stripShadowsOffVariants, bool  shadowsEnabled, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"SetupForEmptyRendering", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stripShadowsOffVariants, shadowsEnabled, lightData, shadowData);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetShadowLightIndexFromLightIndex(int32_t  visibleLightIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"GetShadowLightIndexFromLightIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, visibleLightIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InvalidateShadowCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"InvalidateShadowCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::MatrixApproximatelyEqual(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"MatrixApproximatelyEqual", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, threshold);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ExecuteShadowBlits(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"ExecuteShadowBlits", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::RegionsOverlap(int32_t  x1, int32_t  y1, int32_t  size1, int32_t  x2, int32_t  y2, int32_t  size2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"RegionsOverlap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x1, y1, size1, x2, y2, size2);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::DetermineLightsToUpdate(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  visibleLights, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, int32_t  totalShadowSlicesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"DetermineLightsToUpdate", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visibleLights, lightData, totalShadowSlicesCount);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetShadowParamsForEmptyShadowmap(::UnityEngine::Rendering::RasterCommandBuffer*  rasterCommandBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"SetShadowParamsForEmptyShadowmap", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rasterCommandBuffer);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::RenderAdditionalShadowmapAtlas(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>  data, bool  useRenderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"RenderAdditionalShadowmapAtlas", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, data, useRenderGraph);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupAdditionalLightsShadowReceiverConstants(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector2Int  allocatedShadowAtlasSize, bool  useStructuredBuffer, bool  softShadows)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"SetupAdditionalLightsShadowReceiverConstants", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, allocatedShadowAtlasSize, useStructuredBuffer, softShadows);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitPassData(::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>  passData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"InitPassData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitRendererLists(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>  passData, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  useRenderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"InitRendererLists", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullResults, passData, context, renderGraph, useRenderGraph);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, graph, frameData);
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::AdditionalLightsShadowCasterPass()   {
}
