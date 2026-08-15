#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuffer)
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
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine::Rendering {
class CommandBuffer_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct GraphicsFenceType;
}
namespace UnityEngine::Rendering {
struct GraphicsFence;
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
struct RenderTargetFlags;
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
namespace UnityEngine::Rendering {
struct SubPassDescriptor;
}
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
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
struct FilterMode;
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
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::CommandBuffer*);
MARK_REF_T(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*, "UnityEngine.Rendering", "CommandBuffer/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer/BindingsMarshaller
class CORDL_TYPE CommandBuffer_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::CommandBuffer*  commandBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuffer_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer
class CORDL_TYPE CommandBuffer : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller;

/// @brief Field ThrowOnSetRenderTarget, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ThrowOnSetRenderTarget, put=setStaticF_ThrowOnSetRenderTarget)) bool  ThrowOnSetRenderTarget;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_sizeInBytes)) int32_t  sizeInBytes;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginRenderPass, addr 0x18228ee60, size 0x180, virtual false, abstract: false, final false
inline void BeginRenderPass(int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>  attachments, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubPassDescriptor>  subPasses, ::System::ReadOnlySpan_1<uint8_t>  debugNameUtf8) ;

/// @brief Method BeginRenderPass_Internal, addr 0x18228ed00, size 0x160, virtual false, abstract: false, final false
inline void BeginRenderPass_Internal(int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::AttachmentDescriptor>  attachments, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubPassDescriptor>  subPasses, ::System::ReadOnlySpan_1<uint8_t>  debugNameUtf8) ;

/// @brief Method BeginRenderPass_Internal_Injected, addr 0x18228ecf0, size 0x10, virtual false, abstract: false, final false
static inline void BeginRenderPass_Internal_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attachments, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  subPasses, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  debugNameUtf8) ;

/// @brief Method BeginSample, addr 0x18228f080, size 0x120, virtual false, abstract: false, final false
inline void BeginSample(::StringW  name) ;

/// @brief Method BeginSample, addr 0x18228eff0, size 0x80, virtual false, abstract: false, final false
inline void BeginSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method BeginSample_CustomSampler, addr 0x18228eff0, size 0x80, virtual false, abstract: false, final false
inline void BeginSample_CustomSampler(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method BeginSample_CustomSampler_Injected, addr 0x18228efe0, size 0x10, virtual false, abstract: false, final false
static inline void BeginSample_CustomSampler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  sampler) ;

/// @brief Method BeginSample_Injected, addr 0x18228f070, size 0x10, virtual false, abstract: false, final false
static inline void BeginSample_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Blit, addr 0x18228f500, size 0xf0, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method Blit, addr 0x18228f310, size 0x100, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method Blit, addr 0x18228f410, size 0xf0, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method Blit_Identifier, addr 0x18228f1b0, size 0xa0, virtual false, abstract: false, final false
inline void Blit_Identifier(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Identifier_Injected, addr 0x18228f1a0, size 0x10, virtual false, abstract: false, final false
static inline void Blit_Identifier_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::System::IntPtr  mat, int32_t  pass, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Texture, addr 0x18228f260, size 0xb0, virtual false, abstract: false, final false
inline void Blit_Texture(::UnityEngine::Texture*  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Texture_Injected, addr 0x18228f250, size 0x10, virtual false, abstract: false, final false
static inline void Blit_Texture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::System::IntPtr  mat, int32_t  pass, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0x18228f5f0, size 0xa0, virtual false, abstract: false, final false
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0x18228f690, size 0x90, virtual false, abstract: false, final false
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings  buildSettings) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0x18228f720, size 0xb0, virtual false, abstract: false, final false
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Vector3  relativeOrigin) ;

/// @brief Method CheckThrowOnSetRenderTarget, addr 0x18228f7d0, size 0x30, virtual false, abstract: false, final false
static inline void CheckThrowOnSetRenderTarget() ;

/// @brief Method Clear, addr 0x18228fd90, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearRandomWriteTargets, addr 0x18228f810, size 0x30, virtual false, abstract: false, final false
inline void ClearRandomWriteTargets() ;

/// @brief Method ClearRandomWriteTargets_Injected, addr 0x18228f800, size 0x10, virtual false, abstract: false, final false
static inline void ClearRandomWriteTargets_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ClearRenderTarget, addr 0x18228fbb0, size 0xa0, virtual false, abstract: false, final false
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor) ;

/// @brief Method ClearRenderTarget, addr 0x18228fc50, size 0xa0, virtual false, abstract: false, final false
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth) ;

/// @brief Method ClearRenderTarget, addr 0x18228fb10, size 0xa0, virtual false, abstract: false, final false
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0x18228fcf0, size 0x90, virtual false, abstract: false, final false
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0x18228f970, size 0x1a0, virtual false, abstract: false, final false
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::ArrayW<::UnityEngine::Color>  backgroundColors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetMulti_Internal, addr 0x18228f850, size 0xb0, virtual false, abstract: false, final false
inline void ClearRenderTargetMulti_Internal(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::ArrayW<::UnityEngine::Color>  colors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetMulti_Internal_Injected, addr 0x18228f840, size 0x10, virtual false, abstract: false, final false
static inline void ClearRenderTargetMulti_Internal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::RTClearFlags  clearFlags, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetSingle_Internal, addr 0x18228f910, size 0x60, virtual false, abstract: false, final false
inline void ClearRenderTargetSingle_Internal(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::UnityEngine::Color  color, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetSingle_Internal_Injected, addr 0x18228f900, size 0x10, virtual false, abstract: false, final false
static inline void ClearRenderTargetSingle_Internal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::RTClearFlags  clearFlags, ::by_ref<::UnityEngine::Color>  color, float_t  depth, uint32_t  stencil) ;

/// @brief Method Clear_Injected, addr 0x18228fd80, size 0x10, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ConfigureFoveatedRendering, addr 0x18228fdd0, size 0x30, virtual false, abstract: false, final false
inline void ConfigureFoveatedRendering(::System::IntPtr  platformData) ;

/// @brief Method ConfigureFoveatedRendering_Injected, addr 0x18228fdc0, size 0x10, virtual false, abstract: false, final false
static inline void ConfigureFoveatedRendering_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  platformData) ;

/// @brief Method CopyCounterValue, addr 0x18228fe10, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0x18228fe90, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0x18228ff10, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0x18228ff90, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueCC, addr 0x18228fe10, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValueCC(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueCC_Injected, addr 0x18228fe00, size 0x10, virtual false, abstract: false, final false
static inline void CopyCounterValueCC_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueCG, addr 0x18228fe90, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValueCG(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueCG_Injected, addr 0x18228fe80, size 0x10, virtual false, abstract: false, final false
static inline void CopyCounterValueCG_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueGC, addr 0x18228ff10, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValueGC(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueGC_Injected, addr 0x18228ff00, size 0x10, virtual false, abstract: false, final false
static inline void CopyCounterValueGC_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueGG, addr 0x18228ff90, size 0x70, virtual false, abstract: false, final false
inline void CopyCounterValueGG(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueGG_Injected, addr 0x18228ff80, size 0x10, virtual false, abstract: false, final false
static inline void CopyCounterValueGG_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyTexture, addr 0x182290130, size 0xa0, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, ::UnityEngine::Rendering::RenderTargetIdentifier  dst) ;

/// @brief Method CopyTexture, addr 0x182290280, size 0xb0, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement) ;

/// @brief Method CopyTexture, addr 0x1822901d0, size 0xb0, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture, addr 0x182290070, size 0xc0, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyTexture_Internal, addr 0x182290010, size 0x60, virtual false, abstract: false, final false
inline void CopyTexture_Internal(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY, int32_t  mode) ;

/// @brief Method CopyTexture_Internal_Injected, addr 0x182290000, size 0x10, virtual false, abstract: false, final false
static inline void CopyTexture_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY, int32_t  mode) ;

/// @brief Method CreateAsyncGraphicsFence, addr 0x182290330, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GraphicsFence CreateAsyncGraphicsFence() ;

/// @brief Method CreateGPUFence_Internal, addr 0x1822903c0, size 0x40, virtual false, abstract: false, final false
inline ::System::IntPtr CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType  fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method CreateGPUFence_Internal_Injected, addr 0x1822903b0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateGPUFence_Internal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::GraphicsFenceType  fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method CreateGraphicsFence, addr 0x182290400, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType  fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method DisableComputeKeyword, addr 0x1822904b0, size 0x60, virtual false, abstract: false, final false
inline void DisableComputeKeyword(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableComputeKeyword_Injected, addr 0x1822904a0, size 0x10, virtual false, abstract: false, final false
static inline void DisableComputeKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableGlobalKeyword, addr 0x182290520, size 0x30, virtual false, abstract: false, final false
inline void DisableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method DisableGlobalKeyword_Injected, addr 0x182290510, size 0x10, virtual false, abstract: false, final false
static inline void DisableGlobalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x1822905b0, size 0x60, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x182290610, size 0x40, virtual false, abstract: false, final false
inline void DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0x182290550, size 0x60, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableMaterialKeyword, addr 0x182290660, size 0x60, virtual false, abstract: false, final false
inline void DisableMaterialKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableMaterialKeyword_Injected, addr 0x182290650, size 0x10, virtual false, abstract: false, final false
static inline void DisableMaterialKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableScissorRect, addr 0x1822906d0, size 0x30, virtual false, abstract: false, final false
inline void DisableScissorRect() ;

/// @brief Method DisableScissorRect_Injected, addr 0x1822906c0, size 0x10, virtual false, abstract: false, final false
static inline void DisableScissorRect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method DisableShaderKeyword, addr 0x182290710, size 0x120, virtual false, abstract: false, final false
inline void DisableShaderKeyword(::StringW  keyword) ;

/// @brief Method DisableShaderKeyword_Injected, addr 0x182290700, size 0x10, virtual false, abstract: false, final false
static inline void DisableShaderKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method DispatchCompute, addr 0x182290900, size 0xd0, virtual false, abstract: false, final false
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0x182290830, size 0xd0, virtual false, abstract: false, final false
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0x1822909d0, size 0xa0, virtual false, abstract: false, final false
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method DispatchRays, addr 0x182290a80, size 0x10, virtual false, abstract: false, final false
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset, ::UnityEngine::Camera*  camera) ;

/// @brief Method DispatchRays, addr 0x182290a70, size 0x10, virtual false, abstract: false, final false
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, uint32_t  width, uint32_t  height, uint32_t  depth, ::UnityEngine::Camera*  camera) ;

/// @brief Method Dispose, addr 0x182290a90, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x182290ad0, size 0x40, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DrawMesh, addr 0x182291500, size 0x60, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material) ;

/// @brief Method DrawMesh, addr 0x182291430, size 0x60, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawMesh, addr 0x182291490, size 0x70, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawMesh, addr 0x182291560, size 0x1e0, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstanced, addr 0x1822910c0, size 0x40, virtual false, abstract: false, final false
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices) ;

/// @brief Method DrawMeshInstanced, addr 0x182291100, size 0x40, virtual false, abstract: false, final false
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count) ;

/// @brief Method DrawMeshInstanced, addr 0x182291140, size 0x2f0, virtual false, abstract: false, final false
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x182290ef0, size 0x40, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x182290ca0, size 0x40, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x182290d60, size 0x190, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x182290ce0, size 0x40, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x182290d20, size 0x40, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0x182290b10, size 0x190, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedProcedural, addr 0x182290f30, size 0x190, virtual false, abstract: false, final false
inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMultipleMeshes, addr 0x182291740, size 0x180, virtual false, abstract: false, final false
inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::ArrayW<int32_t>  subsetIndices, int32_t  count, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawOcclusionMesh, addr 0x1822918c0, size 0x40, virtual false, abstract: false, final false
inline void DrawOcclusionMesh(::UnityEngine::RectInt  normalizedCamViewport) ;

/// @brief Method DrawProcedural, addr 0x182292e30, size 0x110, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount) ;

/// @brief Method DrawProcedural, addr 0x182292ae0, size 0x110, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0x1822929c0, size 0x120, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProcedural, addr 0x182292f40, size 0x110, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount) ;

/// @brief Method DrawProcedural, addr 0x182292bf0, size 0x110, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0x182292d00, size 0x130, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x182292430, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x1822922d0, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x182291d30, size 0x170, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x182291a60, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x182291900, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x182292000, size 0x170, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x182291ea0, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x182292860, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x182291bc0, size 0x170, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0x182292700, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0x182292170, size 0x160, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0x182292590, size 0x170, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawRenderer, addr 0x182293340, size 0x120, virtual false, abstract: false, final false
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

/// @brief Method DrawRenderer, addr 0x1822931e0, size 0x160, virtual false, abstract: false, final false
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawRenderer, addr 0x182293090, size 0x150, virtual false, abstract: false, final false
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawRendererList, addr 0x182293050, size 0x40, virtual false, abstract: false, final false
inline void DrawRendererList(::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method EnableComputeKeyword, addr 0x182293470, size 0x60, virtual false, abstract: false, final false
inline void EnableComputeKeyword(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method EnableComputeKeyword_Injected, addr 0x182293460, size 0x10, virtual false, abstract: false, final false
static inline void EnableComputeKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableGlobalKeyword, addr 0x1822934e0, size 0x30, virtual false, abstract: false, final false
inline void EnableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method EnableGlobalKeyword_Injected, addr 0x1822934d0, size 0x10, virtual false, abstract: false, final false
static inline void EnableGlobalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x182293550, size 0x60, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x182293510, size 0x40, virtual false, abstract: false, final false
inline void EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0x1822935b0, size 0x60, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableMaterialKeyword, addr 0x182293620, size 0x60, virtual false, abstract: false, final false
inline void EnableMaterialKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method EnableMaterialKeyword_Injected, addr 0x182293610, size 0x10, virtual false, abstract: false, final false
static inline void EnableMaterialKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableScissorRect, addr 0x182293690, size 0x30, virtual false, abstract: false, final false
inline void EnableScissorRect(::UnityEngine::Rect  scissor) ;

/// @brief Method EnableScissorRect_Injected, addr 0x182293680, size 0x10, virtual false, abstract: false, final false
static inline void EnableScissorRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  scissor) ;

/// @brief Method EnableShaderKeyword, addr 0x1822936d0, size 0x120, virtual false, abstract: false, final false
inline void EnableShaderKeyword(::StringW  keyword) ;

/// @brief Method EnableShaderKeyword_Injected, addr 0x1822936c0, size 0x10, virtual false, abstract: false, final false
static inline void EnableShaderKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method EndRenderPass, addr 0x182293830, size 0x50, virtual false, abstract: false, final false
inline void EndRenderPass() ;

/// @brief Method EndRenderPass_Internal, addr 0x182293800, size 0x30, virtual false, abstract: false, final false
inline void EndRenderPass_Internal() ;

/// @brief Method EndRenderPass_Internal_Injected, addr 0x1822937f0, size 0x10, virtual false, abstract: false, final false
static inline void EndRenderPass_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method EndSample, addr 0x182293920, size 0x120, virtual false, abstract: false, final false
inline void EndSample(::StringW  name) ;

/// @brief Method EndSample, addr 0x182293890, size 0x80, virtual false, abstract: false, final false
inline void EndSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method EndSample_CustomSampler, addr 0x182293890, size 0x80, virtual false, abstract: false, final false
inline void EndSample_CustomSampler(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method EndSample_CustomSampler_Injected, addr 0x182293880, size 0x10, virtual false, abstract: false, final false
static inline void EndSample_CustomSampler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  sampler) ;

/// @brief Method EndSample_Injected, addr 0x182293910, size 0x10, virtual false, abstract: false, final false
static inline void EndSample_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Finalize, addr 0x182290ad0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GenerateMips, addr 0x182293a40, size 0x100, virtual false, abstract: false, final false
inline void GenerateMips(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method GenerateMips, addr 0x182293b40, size 0x80, virtual false, abstract: false, final false
inline void GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method GetTemporaryRT, addr 0x182293db0, size 0x60, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, ::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetTemporaryRT, addr 0x182293fd0, size 0x70, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, ::UnityEngine::RenderTextureDescriptor  desc, ::UnityEngine::FilterMode  filter) ;

/// @brief Method GetTemporaryRT, addr 0x182294130, size 0xe0, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter) ;

/// @brief Method GetTemporaryRT, addr 0x182294300, size 0xe0, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetTemporaryRT, addr 0x182293e10, size 0xe0, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetTemporaryRT, addr 0x182293ef0, size 0xe0, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing) ;

/// @brief Method GetTemporaryRT, addr 0x182294210, size 0xf0, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, bool  enableRandomWrite) ;

/// @brief Method GetTemporaryRT, addr 0x182294040, size 0xf0, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, bool  enableRandomWrite, ::UnityEngine::RenderTextureMemoryless  memorylessMode) ;

/// @brief Method GetTemporaryRT, addr 0x182293cb0, size 0x100, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::FilterMode  filter, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, bool  enableRandomWrite, ::UnityEngine::RenderTextureMemoryless  memorylessMode, bool  useDynamicScale) ;

/// @brief Method GetTemporaryRT, addr 0x182293c40, size 0x70, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, int32_t  width, int32_t  height, ::UnityEngine::FilterMode  filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  antiAliasing, bool  enableRandomWrite, ::UnityEngine::RenderTextureMemoryless  memorylessMode, bool  useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode  shadowSamplingMode) ;

/// @brief Method GetTemporaryRTWithDescriptor, addr 0x182293bd0, size 0x50, virtual false, abstract: false, final false
inline void GetTemporaryRTWithDescriptor(int32_t  nameID, ::UnityEngine::RenderTextureDescriptor  desc, ::UnityEngine::FilterMode  filter) ;

/// @brief Method GetTemporaryRTWithDescriptor_Injected, addr 0x182293bc0, size 0x10, virtual false, abstract: false, final false
static inline void GetTemporaryRTWithDescriptor_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::RenderTextureDescriptor>  desc, ::UnityEngine::FilterMode  filter) ;

/// @brief Method GetTemporaryRT_Injected, addr 0x182293c20, size 0x20, virtual false, abstract: false, final false
static inline void GetTemporaryRT_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  width, int32_t  height, ::UnityEngine::FilterMode  filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  antiAliasing, bool  enableRandomWrite, ::UnityEngine::RenderTextureMemoryless  memorylessMode, bool  useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode  shadowSamplingMode) ;

/// @brief Method IncrementUpdateCount, addr 0x1822943f0, size 0x30, virtual false, abstract: false, final false
inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method IncrementUpdateCount_Injected, addr 0x1822943e0, size 0x10, virtual false, abstract: false, final false
static inline void IncrementUpdateCount_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest) ;

/// @brief Method InitBuffer, addr 0x182294420, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr InitBuffer() ;

/// @brief Method InternalSetComputeBufferCounterValue, addr 0x182294440, size 0x90, virtual false, abstract: false, final false
inline void InternalSetComputeBufferCounterValue(::UnityEngine::ComputeBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method InternalSetComputeBufferCounterValue_Injected, addr 0x182294430, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetComputeBufferCounterValue_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, uint32_t  counterValue) ;

/// @brief Method InternalSetComputeBufferData, addr 0x1822944e0, size 0xa0, virtual false, abstract: false, final false
inline void InternalSetComputeBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetComputeBufferData_Injected, addr 0x1822944d0, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetComputeBufferData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetComputeBufferNativeData, addr 0x182294590, size 0xa0, virtual false, abstract: false, final false
inline void InternalSetComputeBufferNativeData(::UnityEngine::ComputeBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetComputeBufferNativeData_Injected, addr 0x182294580, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetComputeBufferNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetGraphicsBufferCounterValue, addr 0x182294640, size 0x90, virtual false, abstract: false, final false
inline void InternalSetGraphicsBufferCounterValue(::UnityEngine::GraphicsBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method InternalSetGraphicsBufferCounterValue_Injected, addr 0x182294630, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetGraphicsBufferCounterValue_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, uint32_t  counterValue) ;

/// @brief Method InternalSetGraphicsBufferData, addr 0x1822946e0, size 0xa0, virtual false, abstract: false, final false
inline void InternalSetGraphicsBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetGraphicsBufferData_Injected, addr 0x1822946d0, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetGraphicsBufferData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetGraphicsBufferNativeData, addr 0x182294790, size 0xa0, virtual false, abstract: false, final false
inline void InternalSetGraphicsBufferNativeData(::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetGraphicsBufferNativeData_Injected, addr 0x182294780, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetGraphicsBufferNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method Internal_BuildRayTracingAccelerationStructure, addr 0x182294840, size 0x90, virtual false, abstract: false, final false
inline void Internal_BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings  buildSettings) ;

/// @brief Method Internal_BuildRayTracingAccelerationStructure_Injected, addr 0x182294830, size 0x10, virtual false, abstract: false, final false
static inline void Internal_BuildRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  accelerationStructure, ::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>  buildSettings) ;

/// @brief Method Internal_DispatchCompute, addr 0x1822909d0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method Internal_DispatchComputeIndirect, addr 0x182294990, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DispatchComputeIndirect(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer, addr 0x1822948e0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DispatchComputeIndirectGraphicsBuffer(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer_Injected, addr 0x1822948d0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, ::System::IntPtr  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchComputeIndirect_Injected, addr 0x182294980, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DispatchComputeIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, ::System::IntPtr  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchCompute_Injected, addr 0x182294a30, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DispatchCompute_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method Internal_DispatchRays, addr 0x182294c40, size 0x1c0, virtual false, abstract: false, final false
inline void Internal_DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenShaderName, uint32_t  width, uint32_t  height, uint32_t  depth, ::UnityEngine::Camera*  camera) ;

/// @brief Method Internal_DispatchRaysIndirect, addr 0x182294a50, size 0x1e0, virtual false, abstract: false, final false
inline void Internal_DispatchRaysIndirect(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenShaderName, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset, ::UnityEngine::Camera*  camera) ;

/// @brief Method Internal_DispatchRaysIndirect_Injected, addr 0x182294a40, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DispatchRaysIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  rayGenShaderName, ::System::IntPtr  argsBuffer, uint32_t  argsOffset, ::System::IntPtr  camera) ;

/// @brief Method Internal_DispatchRays_Injected, addr 0x182294c30, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DispatchRays_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  rayGenShaderName, uint32_t  width, uint32_t  height, uint32_t  depth, ::System::IntPtr  camera) ;

/// @brief Method Internal_DrawMesh, addr 0x182295130, size 0xd0, virtual false, abstract: false, final false
inline void Internal_DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstanced, addr 0x182295010, size 0x110, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstancedIndirect, addr 0x182294ec0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer, addr 0x182294e10, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected, addr 0x182294e00, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0x182294eb0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMeshInstancedProcedural, addr 0x182294f70, size 0x90, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstancedProcedural(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstancedProcedural_Injected, addr 0x182294f60, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedProcedural_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, int32_t  count, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMeshInstanced_Injected, addr 0x182295000, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, int32_t  count, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMesh_Injected, addr 0x182295120, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  submeshIndex, int32_t  shaderPass, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMultipleMeshes, addr 0x182295210, size 0x150, virtual false, abstract: false, final false
inline void Internal_DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::ArrayW<int32_t>  subsetIndices, int32_t  count, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMultipleMeshes_Injected, addr 0x182295200, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawMultipleMeshes_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  subsetIndices, int32_t  count, ::System::IntPtr  material, int32_t  shaderPass, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawOcclusionMesh, addr 0x182295370, size 0x30, virtual false, abstract: false, final false
inline void Internal_DrawOcclusionMesh(::UnityEngine::RectInt  normalizedCamViewport) ;

/// @brief Method Internal_DrawOcclusionMesh_Injected, addr 0x182295360, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawOcclusionMesh_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RectInt>  normalizedCamViewport) ;

/// @brief Method Internal_DrawProcedural, addr 0x182295790, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndexed, addr 0x182295550, size 0xb0, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndexed(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndexedIndirect, addr 0x182295480, size 0xc0, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndexedIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer, addr 0x1822953b0, size 0xc0, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected, addr 0x1822953a0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  indexBuffer, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndexedIndirect_Injected, addr 0x182295470, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndexedIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  indexBuffer, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndexed_Injected, addr 0x182295540, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndexed_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  indexBuffer, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndirect, addr 0x1822956d0, size 0xb0, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer, addr 0x182295610, size 0xb0, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndirectGraphicsBuffer(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer_Injected, addr 0x182295600, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndirect_Injected, addr 0x1822956c0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndirect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProcedural_Injected, addr 0x182295780, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawProcedural_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawRenderer, addr 0x182295880, size 0xa0, virtual false, abstract: false, final false
inline void Internal_DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method Internal_DrawRendererList, addr 0x182295840, size 0x30, virtual false, abstract: false, final false
inline void Internal_DrawRendererList(::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method Internal_DrawRendererList_Injected, addr 0x182295830, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawRendererList_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RendererList>  rendererList) ;

/// @brief Method Internal_DrawRenderer_Injected, addr 0x182295870, size 0x10, virtual false, abstract: false, final false
static inline void Internal_DrawRenderer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  renderer, ::System::IntPtr  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method Internal_GenerateMips, addr 0x182295930, size 0x30, virtual false, abstract: false, final false
inline void Internal_GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method Internal_GenerateMips_Injected, addr 0x182295920, size 0x10, virtual false, abstract: false, final false
static inline void Internal_GenerateMips_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method Internal_RequestAsyncReadback_1, addr 0x182295970, size 0xb0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_1(::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_1_Injected, addr 0x182295960, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_1_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_2, addr 0x182295a30, size 0xc0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_2(::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_2_Injected, addr 0x182295a20, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_2_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_3, addr 0x182295b00, size 0xb0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_3(::UnityEngine::Texture*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_3_Injected, addr 0x182295af0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_3_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_4, addr 0x182295bc0, size 0xb0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_4(::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_4_Injected, addr 0x182295bb0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_4_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_5, addr 0x182295c80, size 0xc0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_5(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_5_Injected, addr 0x182295c70, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_5_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_6, addr 0x182295d50, size 0xc0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_6(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_6_Injected, addr 0x182295d40, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_6_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_7, addr 0x182295e20, size 0xc0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_7(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_7_Injected, addr 0x182295e10, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_7_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_8, addr 0x182295ef0, size 0xb0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_8(::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_8_Injected, addr 0x182295ee0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_8_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_9, addr 0x182295fb0, size 0xc0, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_9(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_9_Injected, addr 0x182295fa0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_9_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_ResolveAntiAliasedSurface, addr 0x182296080, size 0x60, virtual false, abstract: false, final false
inline void Internal_ResolveAntiAliasedSurface(::UnityEngine::RenderTexture*  rt, ::UnityEngine::RenderTexture*  target) ;

/// @brief Method Internal_ResolveAntiAliasedSurface_Injected, addr 0x182296070, size 0x10, virtual false, abstract: false, final false
static inline void Internal_ResolveAntiAliasedSurface_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rt, ::System::IntPtr  target) ;

/// @brief Method Internal_SetComputeBufferParam, addr 0x1822960f0, size 0xb0, virtual false, abstract: false, final false
inline void Internal_SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetComputeBufferParam_Injected, addr 0x1822960e0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetComputeConstantComputeBufferParam, addr 0x1822961b0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetComputeConstantComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetComputeConstantComputeBufferParam_Injected, addr 0x1822961a0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeConstantComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetComputeConstantGraphicsBufferParam, addr 0x182296260, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetComputeConstantGraphicsBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetComputeConstantGraphicsBufferParam_Injected, addr 0x182296250, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeConstantGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetComputeFloats, addr 0x182296310, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetComputeFloats(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method Internal_SetComputeFloats_Injected, addr 0x182296300, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeFloats_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method Internal_SetComputeGraphicsBufferHandleParam, addr 0x182296410, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetComputeGraphicsBufferHandleParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method Internal_SetComputeGraphicsBufferHandleParam_Injected, addr 0x182296400, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeGraphicsBufferHandleParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::by_ref<::UnityEngine::GraphicsBufferHandle>  bufferHandle) ;

/// @brief Method Internal_SetComputeGraphicsBufferParam, addr 0x1822964c0, size 0xb0, virtual false, abstract: false, final false
inline void Internal_SetComputeGraphicsBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetComputeGraphicsBufferParam_Injected, addr 0x1822964b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetComputeInts, addr 0x182296580, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetComputeInts(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method Internal_SetComputeInts_Injected, addr 0x182296570, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeInts_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method Internal_SetComputeParamsFromMaterial, addr 0x182296680, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetComputeParamsFromMaterial(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::Material*  material) ;

/// @brief Method Internal_SetComputeParamsFromMaterial_Injected, addr 0x182296670, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeParamsFromMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, ::System::IntPtr  material) ;

/// @brief Method Internal_SetComputeRayTracingAccelerationStructure, addr 0x182296730, size 0xd0, virtual false, abstract: false, final false
inline void Internal_SetComputeRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method Internal_SetComputeRayTracingAccelerationStructure_Injected, addr 0x182296720, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  accelerationStructure) ;

/// @brief Method Internal_SetComputeTextureParam, addr 0x182296810, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method Internal_SetComputeTextureParam_Injected, addr 0x182296800, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetComputeTextureParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x1822968c0, size 0xd0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x1822968b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  accelerationStructure) ;

/// @brief Method Internal_SetRayTracingComputeBufferParam, addr 0x1822969a0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingComputeBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetRayTracingComputeBufferParam_Injected, addr 0x182296990, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetRayTracingConstantComputeBufferParam, addr 0x182296a50, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingConstantComputeBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetRayTracingConstantComputeBufferParam_Injected, addr 0x182296a40, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingConstantComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam, addr 0x182296b00, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingConstantGraphicsBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam_Injected, addr 0x182296af0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetRayTracingFloatParam, addr 0x182296bb0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method Internal_SetRayTracingFloatParam_Injected, addr 0x182296ba0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingFloatParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method Internal_SetRayTracingFloats, addr 0x182296c60, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingFloats(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method Internal_SetRayTracingFloats_Injected, addr 0x182296c50, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingFloats_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam, addr 0x182296d60, size 0x90, virtual false, abstract: false, final false
inline void Internal_SetRayTracingGraphicsBufferHandleParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam_Injected, addr 0x182296d50, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::GraphicsBufferHandle>  bufferHandle) ;

/// @brief Method Internal_SetRayTracingGraphicsBufferParam, addr 0x182296e00, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingGraphicsBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetRayTracingGraphicsBufferParam_Injected, addr 0x182296df0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer) ;

/// @brief Method Internal_SetRayTracingIntParam, addr 0x182296eb0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method Internal_SetRayTracingIntParam_Injected, addr 0x182296ea0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingIntParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method Internal_SetRayTracingInts, addr 0x182296f60, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingInts(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method Internal_SetRayTracingInts_Injected, addr 0x182296f50, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingInts_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method Internal_SetRayTracingMatrixArrayParam, addr 0x182297060, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method Internal_SetRayTracingMatrixArrayParam_Injected, addr 0x182297050, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingMatrixArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method Internal_SetRayTracingMatrixParam, addr 0x182297160, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method Internal_SetRayTracingMatrixParam_Injected, addr 0x182297150, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingMatrixParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  val) ;

/// @brief Method Internal_SetRayTracingTextureParam, addr 0x182297210, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method Internal_SetRayTracingTextureParam_Injected, addr 0x182297200, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingTextureParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method Internal_SetRayTracingVectorArrayParam, addr 0x1822972c0, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method Internal_SetRayTracingVectorArrayParam_Injected, addr 0x1822972b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingVectorArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method Internal_SetRayTracingVectorParam, addr 0x1822973c0, size 0xa0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method Internal_SetRayTracingVectorParam_Injected, addr 0x1822973b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingVectorParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val) ;

/// @brief Method Internal_SetSinglePassStereo, addr 0x182297470, size 0x30, virtual false, abstract: false, final false
inline void Internal_SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method Internal_SetSinglePassStereo_Injected, addr 0x182297460, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetSinglePassStereo_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method InvokeOnRenderObjectCallbacks, addr 0x1822974e0, size 0x50, virtual false, abstract: false, final false
inline void InvokeOnRenderObjectCallbacks() ;

/// @brief Method InvokeOnRenderObjectCallbacks_Internal, addr 0x1822974b0, size 0x30, virtual false, abstract: false, final false
inline void InvokeOnRenderObjectCallbacks_Internal() ;

/// @brief Method InvokeOnRenderObjectCallbacks_Internal_Injected, addr 0x1822974a0, size 0x10, virtual false, abstract: false, final false
static inline void InvokeOnRenderObjectCallbacks_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method IssuePluginCustomBlit, addr 0x182297590, size 0xa0, virtual false, abstract: false, final false
inline void IssuePluginCustomBlit(::System::IntPtr  callback, uint32_t  command, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// @brief Method IssuePluginCustomBlitInternal, addr 0x182297540, size 0x50, virtual false, abstract: false, final false
inline void IssuePluginCustomBlitInternal(::System::IntPtr  callback, uint32_t  command, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// @brief Method IssuePluginCustomBlitInternal_Injected, addr 0x182297530, size 0x10, virtual false, abstract: false, final false
static inline void IssuePluginCustomBlitInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, uint32_t  command, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// @brief Method IssuePluginCustomTextureUpdateInternal, addr 0x182297640, size 0x70, virtual false, abstract: false, final false
inline void IssuePluginCustomTextureUpdateInternal(::System::IntPtr  callback, ::UnityEngine::Texture*  targetTexture, uint32_t  userData, bool  useNewUnityRenderingExtTextureUpdateParamsV2) ;

/// @brief Method IssuePluginCustomTextureUpdateInternal_Injected, addr 0x182297630, size 0x10, virtual false, abstract: false, final false
static inline void IssuePluginCustomTextureUpdateInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, ::System::IntPtr  targetTexture, uint32_t  userData, bool  useNewUnityRenderingExtTextureUpdateParamsV2) ;

/// @brief Method IssuePluginCustomTextureUpdateV2, addr 0x1822976b0, size 0xa0, virtual false, abstract: false, final false
inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr  callback, ::UnityEngine::Texture*  targetTexture, uint32_t  userData) ;

/// @brief Method IssuePluginEvent, addr 0x1822978a0, size 0x60, virtual false, abstract: false, final false
inline void IssuePluginEvent(::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method IssuePluginEventAndData, addr 0x1822977b0, size 0xa0, virtual false, abstract: false, final false
inline void IssuePluginEventAndData(::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// @brief Method IssuePluginEventAndDataInternal, addr 0x182297760, size 0x50, virtual false, abstract: false, final false
inline void IssuePluginEventAndDataInternal(::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// @brief Method IssuePluginEventAndDataInternal_Injected, addr 0x182297750, size 0x10, virtual false, abstract: false, final false
static inline void IssuePluginEventAndDataInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// @brief Method IssuePluginEventInternal, addr 0x182297860, size 0x40, virtual false, abstract: false, final false
inline void IssuePluginEventInternal(::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method IssuePluginEventInternal_Injected, addr 0x182297850, size 0x10, virtual false, abstract: false, final false
static inline void IssuePluginEventInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x182297910, size 0x40, virtual false, abstract: false, final false
inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType, int32_t  shaderPropertyID) ;

/// @brief Method MarkLateLatchMatrixShaderPropertyID_Injected, addr 0x182297900, size 0x10, virtual false, abstract: false, final false
static inline void MarkLateLatchMatrixShaderPropertyID_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType, int32_t  shaderPropertyID) ;

static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor() ;

/// @brief Method NextSubPass, addr 0x182297990, size 0x50, virtual false, abstract: false, final false
inline void NextSubPass() ;

/// @brief Method NextSubPass_Internal, addr 0x182297960, size 0x30, virtual false, abstract: false, final false
inline void NextSubPass_Internal() ;

/// @brief Method NextSubPass_Internal_Injected, addr 0x182297950, size 0x10, virtual false, abstract: false, final false
static inline void NextSubPass_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Release, addr 0x182290a90, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ReleaseBuffer, addr 0x1822979f0, size 0x30, virtual false, abstract: false, final false
inline void ReleaseBuffer() ;

/// @brief Method ReleaseBuffer_Injected, addr 0x1822979e0, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseBuffer_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ReleaseTemporaryRT, addr 0x182297a30, size 0x30, virtual false, abstract: false, final false
inline void ReleaseTemporaryRT(int32_t  nameID) ;

/// @brief Method ReleaseTemporaryRT_Injected, addr 0x182297a20, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseTemporaryRT_Injected(::System::IntPtr  _unity_self, int32_t  nameID) ;

/// @brief Method RequestAsyncReadback, addr 0x182297b20, size 0xc0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182298260, size 0xe0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182297dd0, size 0xc0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182297fb0, size 0xe0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182297a60, size 0xc0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182298180, size 0xe0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182298340, size 0xe0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182297be0, size 0x100, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182298090, size 0xf0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182297ce0, size 0xf0, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadback, addr 0x182297e90, size 0x120, virtual false, abstract: false, final false
inline void RequestAsyncReadback(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method ResetShadingRate, addr 0x182298430, size 0x30, virtual false, abstract: false, final false
inline void ResetShadingRate() ;

/// @brief Method ResetShadingRate_Impl, addr 0x182298430, size 0x30, virtual false, abstract: false, final false
inline void ResetShadingRate_Impl() ;

/// @brief Method ResetShadingRate_Impl_Injected, addr 0x182298420, size 0x10, virtual false, abstract: false, final false
static inline void ResetShadingRate_Impl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResolveAntiAliasedSurface, addr 0x182298460, size 0x90, virtual false, abstract: false, final false
inline void ResolveAntiAliasedSurface(::UnityEngine::RenderTexture*  rt, ::UnityEngine::RenderTexture*  target) ;

/// @brief Method SetBufferCounterValue, addr 0x182294440, size 0x90, virtual false, abstract: false, final false
inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferCounterValue, addr 0x182294640, size 0x90, virtual false, abstract: false, final false
inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferData, addr 0x182298a70, size 0x140, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0x182298850, size 0x220, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x182298710, size 0x140, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0x1822984f0, size 0x220, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetComputeBufferParam, addr 0x182298c60, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x182298de0, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x182298d20, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeBufferParam, addr 0x1822960f0, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x1822964c0, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0x182298bb0, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x182298f50, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x182298ea0, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x1822961b0, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0x182296260, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeFloatParam, addr 0x1822990b0, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, float_t  val) ;

/// @brief Method SetComputeFloatParam, addr 0x182299010, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetComputeFloatParam_Injected, addr 0x182299000, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeFloatParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetComputeFloatParams, addr 0x182299150, size 0x100, virtual false, abstract: false, final false
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeFloatParams, addr 0x182296310, size 0xf0, virtual false, abstract: false, final false
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeIntParam, addr 0x182299300, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetComputeIntParam, addr 0x182299260, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetComputeIntParam_Injected, addr 0x182299250, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeIntParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetComputeIntParams, addr 0x1822993a0, size 0x100, virtual false, abstract: false, final false
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeIntParams, addr 0x182296580, size 0xf0, virtual false, abstract: false, final false
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeKeyword, addr 0x1822994b0, size 0x70, virtual false, abstract: false, final false
inline void SetComputeKeyword(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetComputeKeyword_Injected, addr 0x1822994a0, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0x182299530, size 0x100, virtual false, abstract: false, final false
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0x182299630, size 0xf0, virtual false, abstract: false, final false
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixArrayParam_Injected, addr 0x182299520, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeMatrixArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetComputeMatrixParam, addr 0x182299730, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeMatrixParam, addr 0x1822997f0, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeMatrixParam_Injected, addr 0x182299720, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeMatrixParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  val) ;

/// @brief Method SetComputeParamsFromMaterial, addr 0x182296680, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeParamsFromMaterial(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::Material*  material) ;

/// @brief Method SetComputeTextureParam, addr 0x182299ac0, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetComputeTextureParam, addr 0x182299890, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0x182299950, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeTextureParam, addr 0x182299a10, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetComputeTextureParam, addr 0x182299c40, size 0xb0, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0x182299b80, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeVectorArrayParam, addr 0x182299df0, size 0x100, virtual false, abstract: false, final false
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorArrayParam, addr 0x182299d00, size 0xf0, virtual false, abstract: false, final false
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorArrayParam_Injected, addr 0x182299cf0, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeVectorArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetComputeVectorParam, addr 0x182299fa0, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetComputeVectorParam, addr 0x182299f00, size 0xa0, virtual false, abstract: false, final false
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetComputeVectorParam_Injected, addr 0x182299ef0, size 0x10, virtual false, abstract: false, final false
static inline void SetComputeVectorParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val) ;

/// @brief Method SetExecutionFlags, addr 0x18229a050, size 0x30, virtual false, abstract: false, final false
inline void SetExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags  flags) ;

/// @brief Method SetExecutionFlags_Injected, addr 0x18229a040, size 0x10, virtual false, abstract: false, final false
static inline void SetExecutionFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags  flags) ;

/// @brief Method SetFoveatedRenderingMode, addr 0x18229a090, size 0x30, virtual false, abstract: false, final false
inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode  foveatedRenderingMode) ;

/// @brief Method SetFoveatedRenderingMode_Injected, addr 0x18229a080, size 0x10, virtual false, abstract: false, final false
static inline void SetFoveatedRenderingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::FoveatedRenderingMode  foveatedRenderingMode) ;

/// @brief Method SetGlobalBuffer, addr 0x18229a130, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x18229a200, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x18229a0d0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0x18229a1a0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBufferInternal, addr 0x18229a0d0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalBufferInternal(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBufferInternal_Injected, addr 0x18229a0c0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalBufferInternal_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  value) ;

/// @brief Method SetGlobalColor, addr 0x18229a2c0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0x18229a280, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor_Injected, addr 0x18229a270, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalColor_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x18229a410, size 0x80, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x18229a330, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x18229a490, size 0x80, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x18229a3a0, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferInternal, addr 0x18229a330, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalConstantBufferInternal(::UnityEngine::ComputeBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferInternal_Injected, addr 0x18229a320, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferInternal, addr 0x18229a3a0, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalConstantGraphicsBufferInternal(::UnityEngine::GraphicsBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferInternal_Injected, addr 0x18229a510, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalDepthBias, addr 0x18229a530, size 0x50, virtual false, abstract: false, final false
inline void SetGlobalDepthBias(float_t  bias, float_t  slopeBias) ;

/// @brief Method SetGlobalDepthBias_Injected, addr 0x18229a520, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalDepthBias_Injected(::System::IntPtr  _unity_self, float_t  bias, float_t  slopeBias) ;

/// @brief Method SetGlobalFloat, addr 0x18229a8c0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0x18229a880, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0x18229a5e0, size 0xc0, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x18229a770, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x18229a6a0, size 0xd0, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(::StringW  propertyName, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0x18229a7e0, size 0x90, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(::StringW  propertyName, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArrayListImpl, addr 0x18229a590, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalFloatArrayListImpl(int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalFloatArrayListImpl_Injected, addr 0x18229a580, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayListImpl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalFloatArray_Injected, addr 0x18229a5d0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetGlobalFloat_Injected, addr 0x18229a870, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalFloat_Injected(::System::IntPtr  _unity_self, int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalGraphicsBufferInternal, addr 0x18229a1a0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalGraphicsBufferInternal(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalGraphicsBufferInternal_Injected, addr 0x18229a920, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferInternal_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  value) ;

/// @brief Method SetGlobalInt, addr 0x18229a940, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInt, addr 0x18229a9a0, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInt_Injected, addr 0x18229a930, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalInt_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x18229a9f0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0x18229aa50, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInteger_Injected, addr 0x18229a9e0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalInteger_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalKeyword, addr 0x18229aaa0, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword  keyword, bool  value) ;

/// @brief Method SetGlobalKeyword_Injected, addr 0x18229aa90, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetGlobalMatrix, addr 0x18229ae20, size 0x80, virtual false, abstract: false, final false
inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0x18229ade0, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0x18229ad10, size 0xc0, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x18229aca0, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x18229ab40, size 0xd0, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0x18229ac10, size 0x90, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArrayListImpl, addr 0x18229aaf0, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalMatrixArrayListImpl(int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalMatrixArrayListImpl_Injected, addr 0x18229aae0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayListImpl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalMatrixArray_Injected, addr 0x18229ab30, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetGlobalMatrix_Injected, addr 0x18229add0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalMatrix_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetGlobalTexture, addr 0x18229b030, size 0x80, virtual false, abstract: false, final false
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetGlobalTexture, addr 0x18229afa0, size 0x90, virtual false, abstract: false, final false
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0x18229af50, size 0x50, virtual false, abstract: false, final false
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetGlobalTexture, addr 0x18229af00, size 0x50, virtual false, abstract: false, final false
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture_Impl, addr 0x18229aeb0, size 0x50, virtual false, abstract: false, final false
inline void SetGlobalTexture_Impl(int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture_Impl_Injected, addr 0x18229aea0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalTexture_Impl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalVector, addr 0x18229b3b0, size 0x60, virtual false, abstract: false, final false
inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0x18229b410, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0x18229b1a0, size 0xc0, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x18229b260, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x18229b2d0, size 0xd0, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0x18229b110, size 0x90, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArrayListImpl, addr 0x18229b0c0, size 0x40, virtual false, abstract: false, final false
inline void SetGlobalVectorArrayListImpl(int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalVectorArrayListImpl_Injected, addr 0x18229b0b0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayListImpl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalVectorArray_Injected, addr 0x18229b100, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetGlobalVector_Injected, addr 0x18229b3a0, size 0x10, virtual false, abstract: false, final false
static inline void SetGlobalVector_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  value) ;

/// @brief Method SetInstanceMultiplier, addr 0x18229b460, size 0x30, virtual false, abstract: false, final false
inline void SetInstanceMultiplier(uint32_t  multiplier) ;

/// @brief Method SetInstanceMultiplier_Injected, addr 0x18229b450, size 0x10, virtual false, abstract: false, final false
static inline void SetInstanceMultiplier_Injected(::System::IntPtr  _unity_self, uint32_t  multiplier) ;

/// @brief Method SetInvertCulling, addr 0x18229b4a0, size 0x30, virtual false, abstract: false, final false
inline void SetInvertCulling(bool  invertCulling) ;

/// @brief Method SetInvertCulling_Injected, addr 0x18229b490, size 0x10, virtual false, abstract: false, final false
static inline void SetInvertCulling_Injected(::System::IntPtr  _unity_self, bool  invertCulling) ;

/// @brief Method SetKeyword, addr 0x18229b4d0, size 0x70, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::ComputeShader*  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0x18229b540, size 0x40, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0x18229b580, size 0x70, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetLateLatchProjectionMatrices, addr 0x18229b600, size 0xb0, virtual false, abstract: false, final false
inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4>  projectionMat) ;

/// @brief Method SetLateLatchProjectionMatrices_Injected, addr 0x18229b5f0, size 0x10, virtual false, abstract: false, final false
static inline void SetLateLatchProjectionMatrices_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  projectionMat) ;

/// @brief Method SetMaterialKeyword, addr 0x18229b6c0, size 0x70, virtual false, abstract: false, final false
inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetMaterialKeyword_Injected, addr 0x18229b6b0, size 0x10, virtual false, abstract: false, final false
static inline void SetMaterialKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetRandomWriteTarget, addr 0x18229b880, size 0x90, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRandomWriteTarget, addr 0x18229bab0, size 0xa0, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::ComputeBuffer*  buffer, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget, addr 0x18229b910, size 0x90, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRandomWriteTarget, addr 0x18229ba10, size 0xa0, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::GraphicsBuffer*  buffer, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget, addr 0x18229b9a0, size 0x70, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRandomWriteTarget_Buffer, addr 0x18229b740, size 0x70, virtual false, abstract: false, final false
inline void SetRandomWriteTarget_Buffer(int32_t  index, ::UnityEngine::ComputeBuffer*  uav, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget_Buffer_Injected, addr 0x18229b730, size 0x10, virtual false, abstract: false, final false
static inline void SetRandomWriteTarget_Buffer_Injected(::System::IntPtr  _unity_self, int32_t  index, ::System::IntPtr  uav, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget_GraphicsBuffer, addr 0x18229b7c0, size 0x70, virtual false, abstract: false, final false
inline void SetRandomWriteTarget_GraphicsBuffer(int32_t  index, ::UnityEngine::GraphicsBuffer*  uav, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget_GraphicsBuffer_Injected, addr 0x18229b7b0, size 0x10, virtual false, abstract: false, final false
static inline void SetRandomWriteTarget_GraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  index, ::System::IntPtr  uav, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget_Texture, addr 0x18229b840, size 0x40, virtual false, abstract: false, final false
inline void SetRandomWriteTarget_Texture(int32_t  index, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method SetRandomWriteTarget_Texture_Injected, addr 0x18229b830, size 0x10, virtual false, abstract: false, final false
static inline void SetRandomWriteTarget_Texture_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x18229bb50, size 0xe0, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x182296730, size 0xd0, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x18229bc30, size 0xe0, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0x1822968c0, size 0xd0, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingBufferParam, addr 0x18229be60, size 0xb0, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x18229bd10, size 0xb0, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x18229bdc0, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingBufferParam, addr 0x1822969a0, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x182296e00, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0x18229bf10, size 0x90, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x18229bfa0, size 0xb0, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x18229c050, size 0xb0, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x182296a50, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0x182296b00, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingFloatParam, addr 0x18229c100, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, float_t  val) ;

/// @brief Method SetRayTracingFloatParam, addr 0x182296bb0, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetRayTracingFloatParams, addr 0x18229c1a0, size 0x100, virtual false, abstract: false, final false
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingFloatParams, addr 0x182296c60, size 0xf0, virtual false, abstract: false, final false
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingIntParam, addr 0x18229c2a0, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetRayTracingIntParam, addr 0x182296eb0, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetRayTracingIntParams, addr 0x18229c340, size 0x100, virtual false, abstract: false, final false
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingIntParams, addr 0x182296f60, size 0xf0, virtual false, abstract: false, final false
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0x18229c440, size 0x100, virtual false, abstract: false, final false
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0x182297060, size 0xf0, virtual false, abstract: false, final false
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixParam, addr 0x18229c5f0, size 0xc0, virtual false, abstract: false, final false
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingMatrixParam, addr 0x18229c540, size 0xb0, virtual false, abstract: false, final false
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingShaderPass, addr 0x18229c6c0, size 0x170, virtual false, abstract: false, final false
inline void SetRayTracingShaderPass(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  passName) ;

/// @brief Method SetRayTracingShaderPass_Injected, addr 0x18229c6b0, size 0x10, virtual false, abstract: false, final false
static inline void SetRayTracingShaderPass_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  passName) ;

/// @brief Method SetRayTracingTextureParam, addr 0x18229c8d0, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingTextureParam, addr 0x18229c830, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0x18229c970, size 0x100, virtual false, abstract: false, final false
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0x1822972c0, size 0xf0, virtual false, abstract: false, final false
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorParam, addr 0x18229cb10, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRayTracingVectorParam, addr 0x18229ca70, size 0xa0, virtual false, abstract: false, final false
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRenderTarget, addr 0x18229d8b0, size 0x3c0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding) ;

/// @brief Method SetRenderTarget, addr 0x18229de90, size 0x4e0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x18229d590, size 0x150, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0x18229e860, size 0x110, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0x18229d160, size 0x1d0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0x18229d6e0, size 0x1d0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0x18229e640, size 0x220, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x18229eb00, size 0x240, virtual false, abstract: false, final false
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0x18229d330, size 0x260, virtual false, abstract: false, final false
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0x18229dc70, size 0xc0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRenderTarget, addr 0x18229d050, size 0x110, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0x18229e550, size 0xf0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction) ;

/// @brief Method SetRenderTarget, addr 0x18229dd30, size 0x160, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0x18229e970, size 0x190, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0x18229e370, size 0x1e0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetColorDepthSubtarget, addr 0x18229cbc0, size 0xa0, virtual false, abstract: false, final false
inline void SetRenderTargetColorDepthSubtarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetColorDepthSubtarget_Injected, addr 0x18229cbb0, size 0x10, virtual false, abstract: false, final false
static inline void SetRenderTargetColorDepthSubtarget_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  color, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetColorDepth_Internal, addr 0x18229cc70, size 0x80, virtual false, abstract: false, final false
inline void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetColorDepth_Internal_Injected, addr 0x18229cc60, size 0x10, virtual false, abstract: false, final false
static inline void SetRenderTargetColorDepth_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  color, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetMultiSubtarget, addr 0x18229cd00, size 0x170, virtual false, abstract: false, final false
inline void SetRenderTargetMultiSubtarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>  colorLoadActions, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetMultiSubtarget_Injected, addr 0x18229ccf0, size 0x10, virtual false, abstract: false, final false
static inline void SetRenderTargetMultiSubtarget_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorLoadActions, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetMulti_Internal, addr 0x18229ce80, size 0x160, virtual false, abstract: false, final false
inline void SetRenderTargetMulti_Internal(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>  colorLoadActions, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetMulti_Internal_Injected, addr 0x18229ce70, size 0x10, virtual false, abstract: false, final false
static inline void SetRenderTargetMulti_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorLoadActions, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetSingle_Internal, addr 0x18229cff0, size 0x60, virtual false, abstract: false, final false
inline void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTargetSingle_Internal_Injected, addr 0x18229cfe0, size 0x10, virtual false, abstract: false, final false
static inline void SetRenderTargetSingle_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetShadingRateCombiner, addr 0x18229ed50, size 0x40, virtual false, abstract: false, final false
inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateCombiner_Impl, addr 0x18229ed50, size 0x40, virtual false, abstract: false, final false
inline void SetShadingRateCombiner_Impl(::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateCombiner_Impl_Injected, addr 0x18229ed40, size 0x10, virtual false, abstract: false, final false
static inline void SetShadingRateCombiner_Impl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateFragmentSize, addr 0x18229eda0, size 0x30, virtual false, abstract: false, final false
inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadingRateFragmentSize_Impl, addr 0x18229eda0, size 0x30, virtual false, abstract: false, final false
inline void SetShadingRateFragmentSize_Impl(::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadingRateFragmentSize_Impl_Injected, addr 0x18229ed90, size 0x10, virtual false, abstract: false, final false
static inline void SetShadingRateFragmentSize_Impl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadingRateImage, addr 0x18229ede0, size 0x30, virtual false, abstract: false, final false
inline void SetShadingRateImage(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// @brief Method SetShadingRateImage_Impl, addr 0x18229ede0, size 0x30, virtual false, abstract: false, final false
inline void SetShadingRateImage_Impl(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// @brief Method SetShadingRateImage_Impl_Injected, addr 0x18229edd0, size 0x10, virtual false, abstract: false, final false
static inline void SetShadingRateImage_Impl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// @brief Method SetShadowSamplingMode, addr 0x18229ee60, size 0x70, virtual false, abstract: false, final false
inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetShadowSamplingMode_Impl, addr 0x18229ee20, size 0x40, virtual false, abstract: false, final false
inline void SetShadowSamplingMode_Impl(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetShadowSamplingMode_Impl_Injected, addr 0x18229ee10, size 0x10, virtual false, abstract: false, final false
static inline void SetShadowSamplingMode_Impl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetSinglePassStereo, addr 0x182297470, size 0x30, virtual false, abstract: false, final false
inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method SetViewProjectionMatrices, addr 0x18229eee0, size 0x40, virtual false, abstract: false, final false
inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  proj) ;

/// @brief Method SetViewProjectionMatrices_Injected, addr 0x18229eed0, size 0x10, virtual false, abstract: false, final false
static inline void SetViewProjectionMatrices_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  view, ::by_ref<::UnityEngine::Matrix4x4>  proj) ;

/// @brief Method SetViewport, addr 0x18229ef30, size 0x30, virtual false, abstract: false, final false
inline void SetViewport(::UnityEngine::Rect  pixelRect) ;

/// @brief Method SetViewport_Injected, addr 0x18229ef20, size 0x10, virtual false, abstract: false, final false
static inline void SetViewport_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  pixelRect) ;

/// @brief Method SetWireframe, addr 0x18229ef70, size 0x30, virtual false, abstract: false, final false
inline void SetWireframe(bool  enable) ;

/// @brief Method SetWireframe_Injected, addr 0x18229ef60, size 0x10, virtual false, abstract: false, final false
static inline void SetWireframe_Injected(::System::IntPtr  _unity_self, bool  enable) ;

/// @brief Method SetupCameraProperties, addr 0x18229f030, size 0xa0, virtual false, abstract: false, final false
inline void SetupCameraProperties(::UnityEngine::Camera*  camera) ;

/// @brief Method SetupCameraProperties_Internal, addr 0x18229efb0, size 0x80, virtual false, abstract: false, final false
inline void SetupCameraProperties_Internal(::UnityEngine::Camera*  camera) ;

/// @brief Method SetupCameraProperties_Internal_Injected, addr 0x18229efa0, size 0x10, virtual false, abstract: false, final false
static inline void SetupCameraProperties_Internal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  camera) ;

/// @brief Method UnmarkLateLatchMatrix, addr 0x18229f0e0, size 0x30, virtual false, abstract: false, final false
inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType) ;

/// @brief Method UnmarkLateLatchMatrix_Injected, addr 0x18229f0d0, size 0x10, virtual false, abstract: false, final false
static inline void UnmarkLateLatchMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType) ;

/// @brief Method ValidateAgainstExecutionFlags, addr 0x18229f120, size 0x40, virtual false, abstract: false, final false
inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags  requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags  invalidFlags) ;

/// @brief Method ValidateAgainstExecutionFlags_Injected, addr 0x18229f110, size 0x10, virtual false, abstract: false, final false
static inline bool ValidateAgainstExecutionFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags  requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags  invalidFlags) ;

/// @brief Method WaitOnAsyncGraphicsFence, addr 0x18229f160, size 0xb0, virtual false, abstract: false, final false
inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence  fence, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method WaitOnGPUFence_Internal, addr 0x18229f220, size 0x40, virtual false, abstract: false, final false
inline void WaitOnGPUFence_Internal(::System::IntPtr  fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method WaitOnGPUFence_Internal_Injected, addr 0x18229f210, size 0x10, virtual false, abstract: false, final false
static inline void WaitOnGPUFence_Internal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x18229f260, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_ThrowOnSetRenderTarget() ;

/// @brief Method get_name, addr 0x18229f290, size 0xb0, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_name_Injected, addr 0x18229f280, size 0x10, virtual false, abstract: false, final false
static inline void get_name_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_sizeInBytes, addr 0x18229f350, size 0x30, virtual false, abstract: false, final false
inline int32_t get_sizeInBytes() ;

/// @brief Method get_sizeInBytes_Injected, addr 0x18229f340, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_sizeInBytes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_ThrowOnSetRenderTarget(bool  value) ;

/// @brief Method set_name, addr 0x18229f390, size 0x150, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_name_Injected, addr 0x18229f380, size 0x10, virtual false, abstract: false, final false
static inline void set_name_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuffer(CommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuffer(CommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11171};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
