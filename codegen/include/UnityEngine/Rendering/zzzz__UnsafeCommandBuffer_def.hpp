#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnsafeCommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeCommandBuffer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
struct AsyncGPUReadbackRequest;
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
class IComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class IRasterCommandBuffer;
}
namespace UnityEngine::Rendering {
class IUnsafeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_BuildSettings;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
class RayTracingShader;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetBinding;
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
struct CubemapFace;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
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
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class UnsafeCommandBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnsafeCommandBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnsafeCommandBuffer*, "UnityEngine.Rendering", "UnsafeCommandBuffer");
// Dependencies UnityEngine.Rendering.BaseCommandBuffer
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnsafeCommandBuffer
class CORDL_TYPE UnsafeCommandBuffer : public ::UnityEngine::Rendering::BaseCommandBuffer {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IUnsafeCommandBuffer*() noexcept;

/// @brief Method BeginSample, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void BeginSample(::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Method BeginSample, addr 0x181fd4e20, size 0x10, virtual true, abstract: false, final true
inline void BeginSample(::StringW  name) ;

/// @brief Method BeginSample, addr 0x181fd4e30, size 0x10, virtual true, abstract: false, final true
inline void BeginSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0x181fd4e70, size 0x10, virtual true, abstract: false, final true
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0x181fd4e40, size 0x30, virtual true, abstract: false, final true
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings  buildSettings) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0x181fd4e80, size 0x30, virtual true, abstract: false, final true
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Vector3  relativeOrigin) ;

/// @brief Method Clear, addr 0x181fdc500, size 0x10, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ClearRandomWriteTargets, addr 0x181fdc4f0, size 0x10, virtual true, abstract: false, final true
inline void ClearRandomWriteTargets() ;

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

/// @brief Method CopyCounterValue, addr 0x181fd4ed0, size 0x20, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0x181fd4f10, size 0x20, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0x181fd4ef0, size 0x20, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0x181fd4eb0, size 0x20, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyTexture, addr 0x181fdc510, size 0x60, virtual true, abstract: false, final true
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, ::UnityEngine::Rendering::RenderTargetIdentifier  dst) ;

/// @brief Method CopyTexture, addr 0x181fdc640, size 0x70, virtual true, abstract: false, final true
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement) ;

/// @brief Method CopyTexture, addr 0x181fdc6b0, size 0x90, virtual true, abstract: false, final true
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture, addr 0x181fdc570, size 0xd0, virtual true, abstract: false, final true
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

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

/// @brief Method DispatchCompute, addr 0x181fd4f80, size 0x20, virtual true, abstract: false, final true
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0x181fd4fa0, size 0x20, virtual true, abstract: false, final true
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0x181fd4fc0, size 0x20, virtual true, abstract: false, final true
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method DispatchRays, addr 0x181fd5000, size 0x20, virtual true, abstract: false, final true
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset, ::UnityEngine::Camera*  camera) ;

/// @brief Method DispatchRays, addr 0x181fd4fe0, size 0x20, virtual true, abstract: false, final true
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, uint32_t  width, uint32_t  height, uint32_t  depth, ::UnityEngine::Camera*  camera) ;

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

/// @brief Method GenerateMips, addr 0x181fdc780, size 0x10, virtual true, abstract: false, final true
inline void GenerateMips(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method GenerateMips, addr 0x181fdc740, size 0x40, virtual true, abstract: false, final true
inline void GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

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

static inline ::UnityEngine::Rendering::UnsafeCommandBuffer* New_ctor(::UnityEngine::Rendering::CommandBuffer*  wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  executingPass, bool  isAsync) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc8b0, size 0x10, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc840, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc810, size 0x10, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc7d0, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc860, size 0x10, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc7f0, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc790, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc870, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc7b0, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc890, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x181fdc820, size 0x20, virtual true, abstract: false, final true
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method SetBufferCounterValue, addr 0x181fd5200, size 0x10, virtual true, abstract: false, final true
inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferCounterValue, addr 0x181fd51f0, size 0x10, virtual true, abstract: false, final true
inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferData, addr 0x181fd5260, size 0x10, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0x181fd5230, size 0x20, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x181fd5250, size 0x10, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0x181fd5210, size 0x20, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetComputeBufferParam, addr 0x181fd5290, size 0x20, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x181fd52b0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x181fd5310, size 0x20, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeBufferParam, addr 0x181fd52f0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x181fd5270, size 0x20, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x181fd52d0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x181fd5390, size 0x20, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x181fd5370, size 0x20, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x181fd5330, size 0x20, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x181fd5350, size 0x20, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeFloatParam, addr 0x181fd53b0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, float_t  val) ;

/// @brief Method SetComputeFloatParam, addr 0x181fd53d0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetComputeFloatParams, addr 0x181fd5410, size 0x20, virtual true, abstract: false, final true
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeFloatParams, addr 0x181fd53f0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeIntParam, addr 0x181fd5450, size 0x20, virtual true, abstract: false, final true
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetComputeIntParam, addr 0x181fd5430, size 0x20, virtual true, abstract: false, final true
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetComputeIntParams, addr 0x181fd5470, size 0x20, virtual true, abstract: false, final true
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeIntParams, addr 0x181fd5490, size 0x20, virtual true, abstract: false, final true
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0x181fd54d0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0x181fd54b0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixParam, addr 0x181fd54f0, size 0x50, virtual true, abstract: false, final true
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeMatrixParam, addr 0x181fd5540, size 0x50, virtual true, abstract: false, final true
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeParamsFromMaterial, addr 0x181fd5590, size 0x20, virtual true, abstract: false, final true
inline void SetComputeParamsFromMaterial(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::Material*  material) ;

/// @brief Method SetComputeTextureParam, addr 0x181fd57c0, size 0xa0, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetComputeTextureParam, addr 0x181fd55b0, size 0xb0, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0x181fd5860, size 0xc0, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeTextureParam, addr 0x181fdc970, size 0x50, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetComputeTextureParam, addr 0x181fdca80, size 0x60, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0x181fdc8c0, size 0x60, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeTextureParam, addr 0x181fd5720, size 0xa0, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetComputeTextureParam, addr 0x181fd5920, size 0xb0, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0x181fd5660, size 0xc0, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeTextureParam, addr 0x181fdc920, size 0x50, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetComputeTextureParam, addr 0x181fdca20, size 0x60, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0x181fdc9c0, size 0x60, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeVectorArrayParam, addr 0x181fd59f0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorArrayParam, addr 0x181fd59d0, size 0x20, virtual true, abstract: false, final true
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorParam, addr 0x181fd5a10, size 0x30, virtual true, abstract: false, final true
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetComputeVectorParam, addr 0x181fd5a40, size 0x30, virtual true, abstract: false, final true
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

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

/// @brief Method SetGlobalTexture, addr 0x181fdcb20, size 0x40, virtual true, abstract: false, final true
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetGlobalTexture, addr 0x181fdcba0, size 0x40, virtual true, abstract: false, final true
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x181fd5eb0, size 0x70, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method SetGlobalTexture, addr 0x181fd5e20, size 0x90, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x181fdcb60, size 0x40, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetGlobalTexture, addr 0x181fdcae0, size 0x40, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

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

/// @brief Method SetRandomWriteTarget, addr 0x181fdcc60, size 0x10, virtual true, abstract: false, final true
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRandomWriteTarget, addr 0x181fdcbe0, size 0x20, virtual true, abstract: false, final true
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::ComputeBuffer*  buffer, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget, addr 0x181fdcc70, size 0x10, virtual true, abstract: false, final true
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRandomWriteTarget, addr 0x181fdcc00, size 0x20, virtual true, abstract: false, final true
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::GraphicsBuffer*  buffer, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget, addr 0x181fdcc20, size 0x40, virtual true, abstract: false, final true
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x181fd6070, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x181fd6030, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x181fd6090, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x181fd6050, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingBufferParam, addr 0x181fd6130, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x181fd60d0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x181fd60b0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingBufferParam, addr 0x181fd6150, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x181fd6110, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x181fd60f0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x181fd6190, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x181fd6170, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x181fd61d0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x181fd61b0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingFloatParam, addr 0x181fd61f0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, float_t  val) ;

/// @brief Method SetRayTracingFloatParam, addr 0x181fd6210, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetRayTracingFloatParams, addr 0x181fd6230, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingFloatParams, addr 0x181fd6250, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingIntParam, addr 0x181fd6270, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetRayTracingIntParam, addr 0x181fd6290, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetRayTracingIntParams, addr 0x181fd62d0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingIntParams, addr 0x181fd62b0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0x181fd62f0, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0x181fd6310, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixParam, addr 0x181fd6380, size 0x50, virtual true, abstract: false, final true
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingMatrixParam, addr 0x181fd6330, size 0x50, virtual true, abstract: false, final true
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingShaderPass, addr 0x181fd63d0, size 0x10, virtual true, abstract: false, final true
inline void SetRayTracingShaderPass(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  passName) ;

/// @brief Method SetRayTracingTextureParam, addr 0x181fd63e0, size 0x90, virtual true, abstract: false, final true
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetRayTracingTextureParam, addr 0x181fdcc80, size 0x40, virtual true, abstract: false, final true
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingTextureParam, addr 0x181fd6470, size 0x90, virtual true, abstract: false, final true
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetRayTracingTextureParam, addr 0x181fdccc0, size 0x40, virtual true, abstract: false, final true
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0x181fd6500, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0x181fd6520, size 0x20, virtual true, abstract: false, final true
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorParam, addr 0x181fd6570, size 0x30, virtual true, abstract: false, final true
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRayTracingVectorParam, addr 0x181fd6540, size 0x30, virtual true, abstract: false, final true
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRenderTarget, addr 0x181fdd090, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding) ;

/// @brief Method SetRenderTarget, addr 0x181fdce80, size 0x60, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x181fdcdf0, size 0x90, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0x181fdd0e0, size 0x60, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0x181fdcee0, size 0x60, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0x181fdcf80, size 0x70, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0x181fdd140, size 0x80, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x181fdcf40, size 0x40, virtual true, abstract: false, final true
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0x181fdcd90, size 0x60, virtual true, abstract: false, final true
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x181fdd1c0, size 0x40, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRenderTarget, addr 0x181fdcff0, size 0x60, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0x181fdd200, size 0x40, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction) ;

/// @brief Method SetRenderTarget, addr 0x181fdcd50, size 0x40, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0x181fdd050, size 0x40, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0x181fdcd00, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

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

/// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
constexpr ::UnityEngine::Rendering::IUnsafeCommandBuffer* i___UnityEngine__Rendering__IUnsafeCommandBuffer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeCommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeCommandBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeCommandBuffer(UnsafeCommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeCommandBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeCommandBuffer(UnsafeCommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnsafeCommandBuffer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
