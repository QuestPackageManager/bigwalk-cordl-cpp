#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Graphics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct OpenGLESVersion;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Internal_DrawTextureArguments;
}
namespace UnityEngine {
class LightProbeProxyVolume;
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
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderInstancedDataLayout;
}
namespace UnityEngine {
struct RenderParams;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Graphics;
}
// Write type traits
MARK_REF_T(::UnityEngine::Graphics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Graphics*, "UnityEngine", "Graphics");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Graphics
class CORDL_TYPE Graphics : public ::System::Object {
public:
// Declarations
/// @brief Field kMaxDrawMeshInstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMaxDrawMeshInstanceCount, put=setStaticF_kMaxDrawMeshInstanceCount)) int32_t  kMaxDrawMeshInstanceCount;

/// @brief Field s_RenderInstancedDataLayouts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderInstancedDataLayouts, put=setStaticF_s_RenderInstancedDataLayouts)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  s_RenderInstancedDataLayouts;

/// @brief Method Blit, addr 0x18224ed30, size 0x30, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method Blit, addr 0x18224ee50, size 0xa0, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat) ;

/// @brief Method Blit, addr 0x18224edb0, size 0xa0, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method Blit, addr 0x18224eef0, size 0x40, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset) ;

/// @brief Method Blit, addr 0x18224ef30, size 0x70, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Material*  mat) ;

/// @brief Method Blit, addr 0x18224efa0, size 0x80, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method Blit2, addr 0x18224ed30, size 0x30, virtual false, abstract: false, final false
static inline void Blit2(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method Blit2_Injected, addr 0x18224ed20, size 0x10, virtual false, abstract: false, final false
static inline void Blit2_Injected(::System::IntPtr  source, ::System::IntPtr  dest) ;

/// @brief Method Blit4, addr 0x18224ed70, size 0x40, virtual false, abstract: false, final false
static inline void Blit4(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset) ;

/// @brief Method Blit4_Injected, addr 0x18224ed60, size 0x10, virtual false, abstract: false, final false
static inline void Blit4_Injected(::System::IntPtr  source, ::System::IntPtr  dest, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset) ;

/// @brief Method ClearRandomWriteTargets, addr 0x18224f020, size 0x10, virtual false, abstract: false, final false
static inline void ClearRandomWriteTargets() ;

/// @brief Method CopyTexture, addr 0x18224f040, size 0x30, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, ::UnityEngine::Texture*  dst) ;

/// @brief Method CopyTexture, addr 0x18224f0c0, size 0x30, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture, addr 0x18224f080, size 0x30, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyTexture_Full, addr 0x18224f040, size 0x30, virtual false, abstract: false, final false
static inline void CopyTexture_Full(::UnityEngine::Texture*  src, ::UnityEngine::Texture*  dst) ;

/// @brief Method CopyTexture_Full_Injected, addr 0x18224f030, size 0x10, virtual false, abstract: false, final false
static inline void CopyTexture_Full_Injected(::System::IntPtr  src, ::System::IntPtr  dst) ;

/// @brief Method CopyTexture_Region, addr 0x18224f080, size 0x30, virtual false, abstract: false, final false
static inline void CopyTexture_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyTexture_Region_Injected, addr 0x18224f070, size 0x10, virtual false, abstract: false, final false
static inline void CopyTexture_Region_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyTexture_Slice, addr 0x18224f0c0, size 0x30, virtual false, abstract: false, final false
static inline void CopyTexture_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture_Slice_Injected, addr 0x18224f0b0, size 0x10, virtual false, abstract: false, final false
static inline void CopyTexture_Slice_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method DrawMesh, addr 0x18224f650, size 0xd0, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMesh, addr 0x18224f720, size 0x170, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method DrawMesh, addr 0x18224f500, size 0x150, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera) ;

/// @brief Method DrawMeshInstanced, addr 0x18224f0f0, size 0x70, virtual false, abstract: false, final false
static inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera) ;

/// @brief Method DrawMeshInstanced, addr 0x18224f160, size 0x3a0, virtual false, abstract: false, final false
static inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method DrawProceduralNow, addr 0x18224f890, size 0x10, virtual false, abstract: false, final false
static inline void DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// @brief Method DrawTexture, addr 0x18224f9b0, size 0x110, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method DrawTexture, addr 0x18224fac0, size 0x110, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Material*  mat) ;

/// @brief Method DrawTexture, addr 0x18224fbd0, size 0x100, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method DrawTexture, addr 0x18224fcd0, size 0x100, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method DrawTextureImpl, addr 0x18224f8a0, size 0x110, virtual false, abstract: false, final false
static inline void DrawTextureImpl(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Color  color, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method ExecuteCommandBuffer, addr 0x18224fde0, size 0x50, virtual false, abstract: false, final false
static inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method ExecuteCommandBuffer_Injected, addr 0x18224fdd0, size 0x10, virtual false, abstract: false, final false
static inline void ExecuteCommandBuffer_Injected(::System::IntPtr  buffer) ;

/// @brief Method GetMinOpenGLESVersion, addr 0x18224fe30, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::OpenGLESVersion GetMinOpenGLESVersion() ;

/// @brief Method GetPreserveFramebufferAlpha, addr 0x18224fe40, size 0x10, virtual false, abstract: false, final false
static inline bool GetPreserveFramebufferAlpha() ;

/// @brief Method Internal_BlitMaterial5, addr 0x18224fe60, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_BlitMaterial5(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat, int32_t  pass, bool  setRT) ;

/// @brief Method Internal_BlitMaterial5_Injected, addr 0x18224fe50, size 0x10, virtual false, abstract: false, final false
static inline void Internal_BlitMaterial5_Injected(::System::IntPtr  source, ::System::IntPtr  dest, ::System::IntPtr  mat, int32_t  pass, bool  setRT) ;

/// @brief Method Internal_DrawMesh, addr 0x1822500d0, size 0xe0, virtual false, abstract: false, final false
static inline void Internal_DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMeshInstanced, addr 0x18224ff20, size 0x1a0, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMeshInstanced_Injected, addr 0x18224ff10, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, int32_t  count, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::System::IntPtr  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMesh_Injected, addr 0x1822500c0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  layer, ::System::IntPtr  camera, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::System::IntPtr  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawProceduralNow, addr 0x18224f890, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// @brief Method Internal_DrawTexture, addr 0x1822501b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawTexture(::by_ref<::UnityEngine::Internal_DrawTextureArguments>  args) ;

/// @brief Method Internal_GetMaxDrawMeshInstanceCount, addr 0x1822501c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_GetMaxDrawMeshInstanceCount() ;

/// @brief Method Internal_RenderMesh, addr 0x1822501e0, size 0x90, virtual false, abstract: false, final false
static inline void Internal_RenderMesh(::UnityEngine::RenderParams  rparams, ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  objectToWorld, ::UnityEngine::Matrix4x4*  prevObjectToWorld) ;

/// @brief Method Internal_RenderMesh_Injected, addr 0x1822501d0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RenderMesh_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::System::IntPtr  mesh, int32_t  submeshIndex, ::by_ref<::UnityEngine::Matrix4x4>  objectToWorld, ::UnityEngine::Matrix4x4*  prevObjectToWorld) ;

/// @brief Method Internal_RenderPrimitivesIndirect, addr 0x182250280, size 0x80, virtual false, abstract: false, final false
static inline void Internal_RenderPrimitivesIndirect(::UnityEngine::RenderParams  rparams, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  argsBuffer, int32_t  commandCount, int32_t  startCommand) ;

/// @brief Method Internal_RenderPrimitivesIndirect_Injected, addr 0x182250270, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RenderPrimitivesIndirect_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  argsBuffer, int32_t  commandCount, int32_t  startCommand) ;

/// @brief Method Internal_SetMRTSimple, addr 0x182250310, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_SetMRTSimple(::ArrayW<::UnityEngine::RenderBuffer>  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method Internal_SetMRTSimple_Injected, addr 0x182250300, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetMRTSimple_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method Internal_SetNullRT, addr 0x1822503c0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetNullRT() ;

/// @brief Method Internal_SetRTSimple, addr 0x1822503e0, size 0x20, virtual false, abstract: false, final false
static inline void Internal_SetRTSimple(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method Internal_SetRTSimple_Injected, addr 0x1822503d0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRTSimple_Injected(::by_ref<::UnityEngine::RenderBuffer>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method RenderMesh, addr 0x182250400, size 0x200, virtual false, abstract: false, final false
static inline void RenderMesh(::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  objectToWorld, ::System::Nullable_1<::UnityEngine::Matrix4x4>  prevObjectToWorld) ;

/// @brief Method RenderPrimitivesIndirect, addr 0x182250600, size 0x120, virtual false, abstract: false, final false
static inline void RenderPrimitivesIndirect(::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  argsBuffer, int32_t  commandCount, int32_t  startCommand) ;

/// @brief Method SetRenderTarget, addr 0x1822508d0, size 0xa0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::ArrayW<::UnityEngine::RenderBuffer>  colorBuffers, ::UnityEngine::RenderBuffer  depthBuffer) ;

/// @brief Method SetRenderTarget, addr 0x182250970, size 0x30, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SetRenderTarget, addr 0x1822509a0, size 0x20, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0x1822508b0, size 0x20, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face) ;

/// @brief Method SetRenderTarget, addr 0x1822507d0, size 0xa0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0x182250870, size 0x40, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0x182250720, size 0xb0, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::ArrayW<::UnityEngine::RenderBuffer>  colorBuffers, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0x1822507d0, size 0xa0, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

static inline int32_t getStaticF_kMaxDrawMeshInstanceCount() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>* getStaticF_s_RenderInstancedDataLayouts() ;

/// @brief Method get_activeTier, addr 0x182250a40, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsTier get_activeTier() ;

/// @brief Method get_minOpenGLESVersion, addr 0x18224fe30, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::OpenGLESVersion get_minOpenGLESVersion() ;

/// @brief Method get_preserveFramebufferAlpha, addr 0x18224fe40, size 0x10, virtual false, abstract: false, final false
static inline bool get_preserveFramebufferAlpha() ;

static inline void setStaticF_kMaxDrawMeshInstanceCount(int32_t  value) ;

static inline void setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Graphics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Graphics(Graphics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Graphics(Graphics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Graphics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
