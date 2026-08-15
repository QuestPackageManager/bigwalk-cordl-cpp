#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricCloudRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroVolumetricCloudRenderer)
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Enviro {
class EnviroVolumetricCloudRenderer;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroVolumetricCloudRenderer*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroVolumetricCloudRenderer*, "Enviro", "EnviroVolumetricCloudRenderer");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.RenderTexture, UnityEngine.Rendering.RTHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroVolumetricCloudRenderer
class CORDL_TYPE EnviroVolumetricCloudRenderer : public ::System::Object {
public:
// Declarations
/// @brief Field blendAndLightingMat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendAndLightingMat, put=__cordl_internal_set_blendAndLightingMat)) ::UnityW<::UnityEngine::Material>  blendAndLightingMat;

/// @brief Field camera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

/// @brief Field depthMat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthMat, put=__cordl_internal_set_depthMat)) ::UnityW<::UnityEngine::Material>  depthMat;

/// @brief Field downsampledDepth, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_downsampledDepth, put=__cordl_internal_set_downsampledDepth)) ::UnityW<::UnityEngine::RenderTexture>  downsampledDepth;

/// @brief Field downsampledDepthHandle, offset 0x100, size 0x10 
 __declspec(property(get=__cordl_internal_get_downsampledDepthHandle, put=__cordl_internal_set_downsampledDepthHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  downsampledDepthHandle;

/// @brief Field downsampledRTDepthHandle, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_downsampledRTDepthHandle, put=__cordl_internal_set_downsampledRTDepthHandle)) ::UnityEngine::Rendering::RTHandle*  downsampledRTDepthHandle;

/// @brief Field firstFrame, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstFrame, put=__cordl_internal_set_firstFrame)) bool  firstFrame;

/// @brief Field frame, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_frame, put=__cordl_internal_set_frame)) int32_t  frame;

/// @brief Field fullBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullBuffer, put=__cordl_internal_set_fullBuffer)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  fullBuffer;

/// @brief Field fullBufferHandles, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullBufferHandles, put=__cordl_internal_set_fullBufferHandles)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  fullBufferHandles;

/// @brief Field fullBufferIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullBufferIndex, put=__cordl_internal_set_fullBufferIndex)) int32_t  fullBufferIndex;

/// @brief Field fullBufferRTHandles, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullBufferRTHandles, put=__cordl_internal_set_fullBufferRTHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*>  fullBufferRTHandles;

/// @brief Field prevV, offset 0x60, size 0x40 
 __declspec(property(get=__cordl_internal_get_prevV, put=__cordl_internal_set_prevV)) ::UnityEngine::Matrix4x4  prevV;

/// @brief Field prevVRight, offset 0xa0, size 0x40 
 __declspec(property(get=__cordl_internal_get_prevVRight, put=__cordl_internal_set_prevVRight)) ::UnityEngine::Matrix4x4  prevVRight;

/// @brief Field raymarchMat, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_raymarchMat, put=__cordl_internal_set_raymarchMat)) ::UnityW<::UnityEngine::Material>  raymarchMat;

/// @brief Field reprojectMat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reprojectMat, put=__cordl_internal_set_reprojectMat)) ::UnityW<::UnityEngine::Material>  reprojectMat;

/// @brief Field shadowMat, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadowMat, put=__cordl_internal_set_shadowMat)) ::UnityW<::UnityEngine::Material>  shadowMat;

/// @brief Field undersampleBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_undersampleBuffer, put=__cordl_internal_set_undersampleBuffer)) ::UnityW<::UnityEngine::RenderTexture>  undersampleBuffer;

/// @brief Field undersampleBufferHandle, offset 0xf0, size 0x10 
 __declspec(property(get=__cordl_internal_get_undersampleBufferHandle, put=__cordl_internal_set_undersampleBufferHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  undersampleBufferHandle;

/// @brief Field undersampleRTBufferHandle, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_undersampleRTBufferHandle, put=__cordl_internal_set_undersampleRTBufferHandle)) ::UnityEngine::Rendering::RTHandle*  undersampleRTBufferHandle;

static inline ::Enviro::EnviroVolumetricCloudRenderer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blendAndLightingMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blendAndLightingMat() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_depthMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_depthMat() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_downsampledDepth() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_downsampledDepth() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_downsampledDepthHandle() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_downsampledDepthHandle() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_downsampledRTDepthHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_downsampledRTDepthHandle() ;

constexpr bool const& __cordl_internal_get_firstFrame() const;

constexpr bool& __cordl_internal_get_firstFrame() ;

constexpr int32_t const& __cordl_internal_get_frame() const;

constexpr int32_t& __cordl_internal_get_frame() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_fullBuffer() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_fullBuffer() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_fullBufferHandles() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_fullBufferHandles() ;

constexpr int32_t const& __cordl_internal_get_fullBufferIndex() const;

constexpr int32_t& __cordl_internal_get_fullBufferIndex() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& __cordl_internal_get_fullBufferRTHandles() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& __cordl_internal_get_fullBufferRTHandles() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_prevV() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_prevV() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_prevVRight() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_prevVRight() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_raymarchMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_raymarchMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_reprojectMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_reprojectMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_shadowMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_shadowMat() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_undersampleBuffer() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_undersampleBuffer() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_undersampleBufferHandle() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_undersampleBufferHandle() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_undersampleRTBufferHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_undersampleRTBufferHandle() ;

constexpr void __cordl_internal_set_blendAndLightingMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_depthMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_downsampledDepth(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_downsampledDepthHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_downsampledRTDepthHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_firstFrame(bool  value) ;

constexpr void __cordl_internal_set_frame(int32_t  value) ;

constexpr void __cordl_internal_set_fullBuffer(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value) ;

constexpr void __cordl_internal_set_fullBufferHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  value) ;

constexpr void __cordl_internal_set_fullBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set_fullBufferRTHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*>  value) ;

constexpr void __cordl_internal_set_prevV(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_prevVRight(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_raymarchMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_reprojectMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_shadowMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_undersampleBuffer(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_undersampleBufferHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_undersampleRTBufferHandle(::UnityEngine::Rendering::RTHandle*  value) ;

/// @brief Method .ctor, addr 0x18061fbd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroVolumetricCloudRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricCloudRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroVolumetricCloudRenderer(EnviroVolumetricCloudRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricCloudRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroVolumetricCloudRenderer(EnviroVolumetricCloudRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18504};

/// @brief Field camera, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

/// @brief Field raymarchMat, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___raymarchMat;

/// @brief Field reprojectMat, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___reprojectMat;

/// @brief Field depthMat, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___depthMat;

/// @brief Field blendAndLightingMat, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blendAndLightingMat;

/// @brief Field shadowMat, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___shadowMat;

/// @brief Field fullBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  ___fullBuffer;

/// @brief Field fullBufferIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___fullBufferIndex;

/// @brief Field undersampleBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___undersampleBuffer;

/// @brief Field downsampledDepth, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___downsampledDepth;

/// @brief Field prevV, offset: 0x60, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___prevV;

/// @brief Field prevVRight, offset: 0xa0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___prevVRight;

/// @brief Field frame, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___frame;

/// @brief Field firstFrame, offset: 0xe4, size: 0x1, def value: None
 bool  ___firstFrame;

/// @brief Field fullBufferHandles, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  ___fullBufferHandles;

/// @brief Field undersampleBufferHandle, offset: 0xf0, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___undersampleBufferHandle;

/// @brief Field downsampledDepthHandle, offset: 0x100, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___downsampledDepthHandle;

/// @brief Field fullBufferRTHandles, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RTHandle*>  ___fullBufferRTHandles;

/// @brief Field undersampleRTBufferHandle, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___undersampleRTBufferHandle;

/// @brief Field downsampledRTDepthHandle, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___downsampledRTDepthHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___camera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___raymarchMat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___reprojectMat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___depthMat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___blendAndLightingMat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___shadowMat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___fullBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___fullBufferIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___undersampleBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___downsampledDepth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___prevV) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___prevVRight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___frame) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___firstFrame) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___fullBufferHandles) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___undersampleBufferHandle) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___downsampledDepthHandle) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___fullBufferRTHandles) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___undersampleRTBufferHandle) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudRenderer, ___downsampledRTDepthHandle) == 0x120, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroVolumetricCloudRenderer) == 0x128, "Size mismatch!");

} // namespace end def Enviro
