#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RasterCommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RasterCommandBuffer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class IRasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombinerStage;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombiner;
}
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct SinglePassStereoMode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RasterCommandBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RasterCommandBuffer*, "UnityEngine.Rendering", "RasterCommandBuffer");
// Dependencies UnityEngine.Rendering.BaseCommandBuffer
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RasterCommandBuffer
class CORDL_TYPE RasterCommandBuffer : public ::UnityEngine::Rendering::BaseCommandBuffer {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept;

/// @brief Method BeginSample, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void BeginSample(::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Method BeginSample, addr 0x181fd4e20, size 0x10, virtual true, abstract: false, final true
inline void BeginSample(::StringW  name) ;

/// @brief Method BeginSample, addr 0x181fd4e30, size 0x10, virtual true, abstract: false, final true
inline void BeginSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method ClearRenderTarget, addr 0x181fdb110, size 0x30, virtual true, abstract: false, final true
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor) ;

/// @brief Method ClearRenderTarget, addr 0x181fdb140, size 0x40, virtual true, abstract: false, final true
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth) ;

/// @brief Method ClearRenderTarget, addr 0x181fdb0c0, size 0x50, virtual true, abstract: false, final true
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0x181fdb180, size 0x40, virtual true, abstract: false, final true
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0x181fdb1c0, size 0x20, virtual true, abstract: false, final true
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::ArrayW<::UnityEngine::Color>  backgroundColors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ConfigureFoveatedRendering, addr 0x181fdb1e0, size 0x10, virtual true, abstract: false, final true
inline void ConfigureFoveatedRendering(::System::IntPtr  platformData) ;

/// @brief Method DisableKeyword, addr 0x181fd4f40, size 0x10, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x181fd4f30, size 0x10, virtual false, abstract: false, final false
inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x181fd4f50, size 0x10, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableScissorRect, addr 0x181fd4f60, size 0x10, virtual true, abstract: false, final true
inline void DisableScissorRect() ;

/// @brief Method DisableShaderKeyword, addr 0x181fd4f70, size 0x10, virtual true, abstract: false, final true
inline void DisableShaderKeyword(::StringW  keyword) ;

/// @brief Method DrawMesh, addr 0x181fdb400, size 0x50, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material) ;

/// @brief Method DrawMesh, addr 0x181fdb3a0, size 0x60, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawMesh, addr 0x181fdb330, size 0x70, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawMesh, addr 0x181fdb450, size 0x70, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstanced, addr 0x181fdb2f0, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices) ;

/// @brief Method DrawMeshInstanced, addr 0x181fdb2d0, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count) ;

/// @brief Method DrawMeshInstanced, addr 0x181fdb310, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x181fdb250, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x181fdb210, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x181fdb1f0, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x181fdb270, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x181fdb290, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x181fdb230, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedProcedural, addr 0x181fdb2b0, size 0x20, virtual true, abstract: false, final true
inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMultipleMeshes, addr 0x181fdb4c0, size 0x20, virtual true, abstract: false, final true
inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::ArrayW<int32_t>  subsetIndices, int32_t  count, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawOcclusionMesh, addr 0x181fdb4e0, size 0x30, virtual true, abstract: false, final true
inline void DrawOcclusionMesh(::UnityEngine::RectInt  normalizedCamViewport) ;

/// @brief Method DrawProcedural, addr 0x181fdbcc0, size 0x70, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount) ;

/// @brief Method DrawProcedural, addr 0x181fdbb60, size 0x80, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0x181fdbad0, size 0x90, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProcedural, addr 0x181fdbbe0, size 0x60, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount) ;

/// @brief Method DrawProcedural, addr 0x181fdbd30, size 0x70, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0x181fdbc40, size 0x80, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb6f0, size 0x70, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb960, size 0x80, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb760, size 0x90, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb590, size 0x70, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb600, size 0x80, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb7f0, size 0x90, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb680, size 0x70, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb9e0, size 0x70, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb510, size 0x80, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb880, size 0x70, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdb8f0, size 0x70, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x181fdba50, size 0x80, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawRenderer, addr 0x181fdbdd0, size 0x10, virtual true, abstract: false, final true
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

/// @brief Method DrawRenderer, addr 0x181fdbde0, size 0x20, virtual true, abstract: false, final true
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawRenderer, addr 0x181fdbe00, size 0x20, virtual true, abstract: false, final true
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawRendererList, addr 0x181fdbda0, size 0x30, virtual true, abstract: false, final true
inline void DrawRendererList(::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method EnableKeyword, addr 0x181fd5030, size 0x10, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x181fd5020, size 0x10, virtual false, abstract: false, final false
inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x181fd5040, size 0x10, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableScissorRect, addr 0x181fd5050, size 0x30, virtual true, abstract: false, final true
inline void EnableScissorRect(::UnityEngine::Rect  scissor) ;

/// @brief Method EnableShaderKeyword, addr 0x181fd5080, size 0x10, virtual true, abstract: false, final true
inline void EnableShaderKeyword(::StringW  keyword) ;

/// @brief Method EndSample, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void EndSample(::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Method EndSample, addr 0x181fd5090, size 0x10, virtual true, abstract: false, final true
inline void EndSample(::StringW  name) ;

/// @brief Method EndSample, addr 0x181fd50a0, size 0x10, virtual true, abstract: false, final true
inline void EndSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method IncrementUpdateCount, addr 0x181fd50b0, size 0x40, virtual true, abstract: false, final true
inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method InvokeOnRenderObjectCallbacks, addr 0x181fd50f0, size 0x10, virtual true, abstract: false, final true
inline void InvokeOnRenderObjectCallbacks() ;

/// @brief Method IssuePluginCustomBlit, addr 0x181fd5100, size 0x90, virtual true, abstract: false, final true
inline void IssuePluginCustomBlit(::System::IntPtr  callback, uint32_t  command, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// @brief Method IssuePluginCustomTextureUpdateV2, addr 0x181fd5190, size 0x20, virtual true, abstract: false, final true
inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr  callback, ::UnityEngine::Texture*  targetTexture, uint32_t  userData) ;

/// @brief Method IssuePluginEvent, addr 0x181fd51d0, size 0x10, virtual true, abstract: false, final true
inline void IssuePluginEvent(::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method IssuePluginEventAndData, addr 0x181fd51b0, size 0x20, virtual true, abstract: false, final true
inline void IssuePluginEventAndData(::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x181fd51e0, size 0x10, virtual true, abstract: false, final true
inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType, int32_t  shaderPropertyID) ;

static inline ::UnityEngine::Rendering::RasterCommandBuffer* New_ctor(::UnityEngine::Rendering::CommandBuffer*  wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  executingPass, bool  isAsync) ;

/// @brief Method SetFoveatedRenderingMode, addr 0x181fdbe20, size 0x10, virtual true, abstract: false, final true
inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode  foveatedRenderingMode) ;

/// @brief Method SetGlobalBuffer, addr 0x181fd5a80, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x181fd5aa0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x181fd5a70, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x181fd5a90, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalColor, addr 0x181fd5ae0, size 0x30, virtual true, abstract: false, final true
inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0x181fd5ab0, size 0x30, virtual true, abstract: false, final true
inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x181fd5b30, size 0x20, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x181fd5b70, size 0x20, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x181fd5b50, size 0x20, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x181fd5b10, size 0x20, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalDepthBias, addr 0x181fd5b90, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalDepthBias(float_t  bias, float_t  slopeBias) ;

/// @brief Method SetGlobalFloat, addr 0x181fd5bf0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0x181fd5be0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0x181fd5bc0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x181fd5bb0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x181fd5ba0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(::StringW  propertyName, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x181fd5bd0, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(::StringW  propertyName, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalInt, addr 0x181fd5c10, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInt, addr 0x181fd5c00, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x181fd5c20, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x181fd5c30, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalMatrix, addr 0x181fd5cd0, size 0x50, virtual true, abstract: false, final true
inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0x181fd5c80, size 0x50, virtual true, abstract: false, final true
inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0x181fd5c60, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x181fd5c70, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x181fd5c50, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x181fd5c40, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalTexture, addr 0x181fd5db0, size 0x70, virtual true, abstract: false, final true
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method SetGlobalTexture, addr 0x181fd5d20, size 0x90, virtual true, abstract: false, final true
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x181fd5eb0, size 0x70, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method SetGlobalTexture, addr 0x181fd5e20, size 0x90, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalVector, addr 0x181fd5f90, size 0x30, virtual true, abstract: false, final true
inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0x181fd5f60, size 0x30, virtual true, abstract: false, final true
inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0x181fd5f40, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x181fd5f50, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x181fd5f30, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x181fd5f20, size 0x10, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetInstanceMultiplier, addr 0x181fdbe30, size 0x10, virtual true, abstract: false, final true
inline void SetInstanceMultiplier(uint32_t  multiplier) ;

/// @brief Method SetInvertCulling, addr 0x181fd5fc0, size 0x10, virtual true, abstract: false, final true
inline void SetInvertCulling(bool  invertCulling) ;

/// @brief Method SetKeyword, addr 0x181fd5fe0, size 0x20, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0x181fd5fd0, size 0x10, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0x181fd6000, size 0x20, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetLateLatchProjectionMatrices, addr 0x181fd6020, size 0x10, virtual true, abstract: false, final true
inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4>  projectionMat) ;

/// @brief Method SetShadingRateCombiner, addr 0x181fdbe40, size 0x10, virtual true, abstract: false, final true
inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateFragmentSize, addr 0x181fdbe50, size 0x10, virtual true, abstract: false, final true
inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadowSamplingMode, addr 0x181fd65a0, size 0x40, virtual true, abstract: false, final true
inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetSinglePassStereo, addr 0x181fd65e0, size 0x10, virtual true, abstract: false, final true
inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method SetViewProjectionMatrices, addr 0x181fd65f0, size 0x70, virtual true, abstract: false, final true
inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  proj) ;

/// @brief Method SetViewport, addr 0x181fd6660, size 0x30, virtual true, abstract: false, final true
inline void SetViewport(::UnityEngine::Rect  pixelRect) ;

/// @brief Method SetWireframe, addr 0x181fdbe60, size 0x10, virtual true, abstract: false, final true
inline void SetWireframe(bool  enable) ;

/// @brief Method SetupCameraProperties, addr 0x181fd6690, size 0x10, virtual true, abstract: false, final true
inline void SetupCameraProperties(::UnityEngine::Camera*  camera) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x181fd4f40, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x181fd4f30, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x181fd4f50, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x181fd5030, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x181fd5020, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x181fd5040, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x181fd5fe0, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x181fd5fd0, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x181fd6000, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method UnmarkLateLatchMatrix, addr 0x181fd66a0, size 0x10, virtual true, abstract: false, final true
inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType) ;

/// @brief Method .ctor, addr 0x181fd4240, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::CommandBuffer*  wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  executingPass, bool  isAsync) ;

/// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RasterCommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RasterCommandBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RasterCommandBuffer(RasterCommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RasterCommandBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RasterCommandBuffer(RasterCommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RasterCommandBuffer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
