#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace System {
class Enum;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct CopyTextureSupport;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingCaps;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct HDRDisplaySupportFlags;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::SystemInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetCompatibleFormat, addr 0x1822877f0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// @brief Method GetCopyTextureSupport, addr 0x182287800, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport() ;

/// @brief Method GetDeviceModel, addr 0x182287820, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetDeviceModel() ;

/// @brief Method GetDeviceModel_Injected, addr 0x182287810, size 0x10, virtual false, abstract: false, final false
static inline void GetDeviceModel_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetDeviceName, addr 0x1822878a0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetDeviceName() ;

/// @brief Method GetDeviceName_Injected, addr 0x182287890, size 0x10, virtual false, abstract: false, final false
static inline void GetDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetDeviceType, addr 0x182287910, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType GetDeviceType() ;

/// @brief Method GetDeviceUniqueIdentifier, addr 0x182287930, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetDeviceUniqueIdentifier() ;

/// @brief Method GetDeviceUniqueIdentifier_Injected, addr 0x182287920, size 0x10, virtual false, abstract: false, final false
static inline void GetDeviceUniqueIdentifier_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetFoveatedRenderingCaps, addr 0x1822879a0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FoveatedRenderingCaps GetFoveatedRenderingCaps() ;

/// @brief Method GetGraphicsDeviceName, addr 0x1822879c0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceName() ;

/// @brief Method GetGraphicsDeviceName_Injected, addr 0x1822879b0, size 0x10, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetGraphicsDeviceType, addr 0x182287a30, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType() ;

/// @brief Method GetGraphicsDeviceVendor, addr 0x182287a60, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVendor() ;

/// @brief Method GetGraphicsDeviceVendorID, addr 0x182287a40, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceVendorID() ;

/// @brief Method GetGraphicsDeviceVendor_Injected, addr 0x182287a50, size 0x10, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceVendor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetGraphicsDeviceVersion, addr 0x182287ae0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVersion() ;

/// @brief Method GetGraphicsDeviceVersion_Injected, addr 0x182287ad0, size 0x10, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetGraphicsFormat, addr 0x182287b50, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetGraphicsMemorySize, addr 0x182287b60, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetGraphicsMemorySize() ;

/// @brief Method GetGraphicsShaderLevel, addr 0x182287b70, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetGraphicsShaderLevel() ;

/// @brief Method GetGraphicsUVStartsAtTop, addr 0x182287b80, size 0x10, virtual false, abstract: false, final false
static inline bool GetGraphicsUVStartsAtTop() ;

/// @brief Method GetHDRDisplaySupportFlags, addr 0x182287b90, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::HDRDisplaySupportFlags GetHDRDisplaySupportFlags() ;

/// @brief Method GetMaxComputeWorkGroupSizeX, addr 0x182287ba0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMaxComputeWorkGroupSizeX() ;

/// @brief Method GetMaxComputeWorkGroupSizeY, addr 0x182287bb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMaxComputeWorkGroupSizeY() ;

/// @brief Method GetMaxRenderTextureSize, addr 0x182287bc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMaxRenderTextureSize() ;

/// @brief Method GetMaxTextureSize, addr 0x182287bd0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMaxTextureSize() ;

/// @brief Method GetOperatingSystem, addr 0x182287c00, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetOperatingSystem() ;

/// @brief Method GetOperatingSystemFamily, addr 0x182287be0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily() ;

/// @brief Method GetOperatingSystem_Injected, addr 0x182287bf0, size 0x10, virtual false, abstract: false, final false
static inline void GetOperatingSystem_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPhysicalMemoryMB, addr 0x182287c70, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetPhysicalMemoryMB() ;

/// @brief Method GetProcessorCount, addr 0x182287c80, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetProcessorCount() ;

/// @brief Method GetProcessorType, addr 0x182287ca0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetProcessorType() ;

/// @brief Method GetProcessorType_Injected, addr 0x182287c90, size 0x10, virtual false, abstract: false, final false
static inline void GetProcessorType_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetRenderTextureSupportedMSAASampleCount, addr 0x182287d20, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetRenderTextureSupportedMSAASampleCount_Injected, addr 0x182287d10, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetRenderTextureSupportedMSAASampleCount_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method GetTiledRenderTargetStorageSize, addr 0x182287d40, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetTiledRenderTargetStorageSize(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  sampleCount) ;

/// @brief Method HasHiddenSurfaceRemovalOnGPU, addr 0x182287d50, size 0x10, virtual false, abstract: false, final false
static inline bool HasHiddenSurfaceRemovalOnGPU() ;

/// @brief Method HasRenderTextureNative, addr 0x182287d60, size 0x10, virtual false, abstract: false, final false
static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method IsFormatSupported, addr 0x182287d70, size 0x10, virtual false, abstract: false, final false
static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// @brief Method IsValidEnumValue, addr 0x182287d80, size 0x30, virtual false, abstract: false, final false
static inline bool IsValidEnumValue(::System::Enum*  value) ;

/// @brief Method MaxGraphicsBufferSize, addr 0x182287db0, size 0x10, virtual false, abstract: false, final false
static inline int64_t MaxGraphicsBufferSize() ;

/// @brief Method MaxTiledPixelStorageSize, addr 0x182287dc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t MaxTiledPixelStorageSize() ;

/// @brief Method MinConstantBufferOffsetAlignment, addr 0x182287dd0, size 0x10, virtual false, abstract: false, final false
static inline int32_t MinConstantBufferOffsetAlignment() ;

/// @brief Method SupportedRenderTargetCount, addr 0x182287de0, size 0x10, virtual false, abstract: false, final false
static inline int32_t SupportedRenderTargetCount() ;

/// @brief Method Supports2DArrayTextures, addr 0x182287df0, size 0x10, virtual false, abstract: false, final false
static inline bool Supports2DArrayTextures() ;

/// @brief Method Supports3DRenderTextures, addr 0x182287e00, size 0x10, virtual false, abstract: false, final false
static inline bool Supports3DRenderTextures() ;

/// @brief Method SupportsAsyncGPUReadback, addr 0x182287e10, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsAsyncGPUReadback() ;

/// @brief Method SupportsComputeShaders, addr 0x182287e20, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsComputeShaders() ;

/// @brief Method SupportsGPUFence, addr 0x182287e30, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsGPUFence() ;

/// @brief Method SupportsIndirectArgumentsBuffer, addr 0x182287e40, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsIndirectArgumentsBuffer() ;

/// @brief Method SupportsInstancing, addr 0x182287e50, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsInstancing() ;

/// @brief Method SupportsMemorylessTextures, addr 0x182287e60, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMemorylessTextures() ;

/// @brief Method SupportsMotionVectors, addr 0x182287e70, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMotionVectors() ;

/// @brief Method SupportsMultisampleAutoResolve, addr 0x182287e80, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMultisampleAutoResolve() ;

/// @brief Method SupportsMultisampleResolveDepth, addr 0x182287e90, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMultisampleResolveDepth() ;

/// @brief Method SupportsMultisampleResolveStencil, addr 0x182287ea0, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMultisampleResolveStencil() ;

/// @brief Method SupportsMultisampledBackBuffer, addr 0x182287eb0, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMultisampledBackBuffer() ;

/// @brief Method SupportsMultisampledShaderResolve, addr 0x182287ec0, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMultisampledShaderResolve() ;

/// @brief Method SupportsMultisampledTextures, addr 0x182287ed0, size 0x10, virtual false, abstract: false, final false
static inline int32_t SupportsMultisampledTextures() ;

/// @brief Method SupportsMultiview, addr 0x182287ee0, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsMultiview() ;

/// @brief Method SupportsRandomWriteOnRenderTextureFormat, addr 0x182287f00, size 0x70, virtual false, abstract: false, final false
static inline bool SupportsRandomWriteOnRenderTextureFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method SupportsRandomWriteOnRenderTextureFormatNative, addr 0x182287ef0, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsRandomWriteOnRenderTextureFormatNative(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method SupportsRayTracing, addr 0x182287f70, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsRayTracing() ;

/// @brief Method SupportsRenderTargetArrayIndexFromVertexShader, addr 0x182287f80, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsRenderTargetArrayIndexFromVertexShader() ;

/// @brief Method SupportsRenderTextureFormat, addr 0x182287f90, size 0x70, virtual false, abstract: false, final false
static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method SupportsShadows, addr 0x182288000, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsShadows() ;

/// @brief Method SupportsStoreAndResolveAction, addr 0x182288010, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsStoreAndResolveAction() ;

/// @brief Method SupportsTextureFormat, addr 0x182288030, size 0x70, virtual false, abstract: false, final false
static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method SupportsTextureFormatNative, addr 0x182288020, size 0x10, virtual false, abstract: false, final false
static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat  format) ;

/// @brief Method UsesLoadStoreActions, addr 0x1822880a0, size 0x10, virtual false, abstract: false, final false
static inline bool UsesLoadStoreActions() ;

/// @brief Method UsesReversedZBuffer, addr 0x1822880b0, size 0x10, virtual false, abstract: false, final false
static inline bool UsesReversedZBuffer() ;

/// @brief Method get_constantBufferOffsetAlignment, addr 0x182287dd0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_constantBufferOffsetAlignment() ;

/// @brief Method get_copyTextureSupport, addr 0x182287800, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport() ;

/// @brief Method get_deviceModel, addr 0x1822880c0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_deviceModel() ;

/// @brief Method get_deviceName, addr 0x1822880d0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_deviceName() ;

/// @brief Method get_deviceType, addr 0x182287910, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType get_deviceType() ;

/// @brief Method get_deviceUniqueIdentifier, addr 0x1822880e0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_deviceUniqueIdentifier() ;

/// @brief Method get_foveatedRenderingCaps, addr 0x1822879a0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FoveatedRenderingCaps get_foveatedRenderingCaps() ;

/// @brief Method get_graphicsDeviceName, addr 0x1822880f0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceName() ;

/// @brief Method get_graphicsDeviceType, addr 0x182287a30, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceVendor, addr 0x182288100, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVendor() ;

/// @brief Method get_graphicsDeviceVendorID, addr 0x182287a40, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceVendorID() ;

/// @brief Method get_graphicsDeviceVersion, addr 0x182288110, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVersion() ;

/// @brief Method get_graphicsMemorySize, addr 0x182287b60, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_graphicsMemorySize() ;

/// @brief Method get_graphicsShaderLevel, addr 0x182287b70, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_graphicsShaderLevel() ;

/// @brief Method get_graphicsUVStartsAtTop, addr 0x182287b80, size 0x10, virtual false, abstract: false, final false
static inline bool get_graphicsUVStartsAtTop() ;

/// @brief Method get_hasHiddenSurfaceRemovalOnGPU, addr 0x182287d50, size 0x10, virtual false, abstract: false, final false
static inline bool get_hasHiddenSurfaceRemovalOnGPU() ;

/// @brief Method get_hdrDisplaySupportFlags, addr 0x182287b90, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::HDRDisplaySupportFlags get_hdrDisplaySupportFlags() ;

/// @brief Method get_maxComputeWorkGroupSizeX, addr 0x182287ba0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maxComputeWorkGroupSizeX() ;

/// @brief Method get_maxComputeWorkGroupSizeY, addr 0x182287bb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maxComputeWorkGroupSizeY() ;

/// @brief Method get_maxGraphicsBufferSize, addr 0x182287db0, size 0x10, virtual false, abstract: false, final false
static inline int64_t get_maxGraphicsBufferSize() ;

/// @brief Method get_maxRenderTextureSize, addr 0x182287bc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maxRenderTextureSize() ;

/// @brief Method get_maxTextureSize, addr 0x182287bd0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maxTextureSize() ;

/// @brief Method get_maxTiledPixelStorageSize, addr 0x182287dc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maxTiledPixelStorageSize() ;

/// @brief Method get_operatingSystem, addr 0x182288120, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_operatingSystem() ;

/// @brief Method get_operatingSystemFamily, addr 0x182287be0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily() ;

/// @brief Method get_processorCount, addr 0x182287c80, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_processorCount() ;

/// @brief Method get_processorType, addr 0x182288130, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_processorType() ;

/// @brief Method get_supportedRenderTargetCount, addr 0x182287de0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_supportedRenderTargetCount() ;

/// @brief Method get_supports2DArrayTextures, addr 0x182287df0, size 0x10, virtual false, abstract: false, final false
static inline bool get_supports2DArrayTextures() ;

/// @brief Method get_supports3DRenderTextures, addr 0x182287e00, size 0x10, virtual false, abstract: false, final false
static inline bool get_supports3DRenderTextures() ;

/// @brief Method get_supportsAsyncGPUReadback, addr 0x182287e10, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsAsyncGPUReadback() ;

/// @brief Method get_supportsComputeShaders, addr 0x182287e20, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsComputeShaders() ;

/// @brief Method get_supportsGraphicsFence, addr 0x182287e30, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsGraphicsFence() ;

/// @brief Method get_supportsIndirectArgumentsBuffer, addr 0x182287e40, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsIndirectArgumentsBuffer() ;

/// @brief Method get_supportsInstancing, addr 0x182287e50, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsInstancing() ;

/// @brief Method get_supportsMemorylessTextures, addr 0x182287e60, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMemorylessTextures() ;

/// @brief Method get_supportsMotionVectors, addr 0x182287e70, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMotionVectors() ;

/// @brief Method get_supportsMultisampleAutoResolve, addr 0x182287e80, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleAutoResolve() ;

/// @brief Method get_supportsMultisampleResolveDepth, addr 0x182287e90, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleResolveDepth() ;

/// @brief Method get_supportsMultisampleResolveStencil, addr 0x182287ea0, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleResolveStencil() ;

/// @brief Method get_supportsMultisampledBackBuffer, addr 0x182287eb0, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMultisampledBackBuffer() ;

/// @brief Method get_supportsMultisampledShaderResolve, addr 0x182287ec0, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMultisampledShaderResolve() ;

/// @brief Method get_supportsMultisampledTextures, addr 0x182287ed0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_supportsMultisampledTextures() ;

/// @brief Method get_supportsMultiview, addr 0x182287ee0, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsMultiview() ;

/// @brief Method get_supportsRayTracing, addr 0x182287f70, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsRayTracing() ;

/// @brief Method get_supportsRenderTargetArrayIndexFromVertexShader, addr 0x182287f80, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsRenderTargetArrayIndexFromVertexShader() ;

/// @brief Method get_supportsShadows, addr 0x182288000, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsShadows() ;

/// @brief Method get_supportsStoreAndResolveAction, addr 0x182288010, size 0x10, virtual false, abstract: false, final false
static inline bool get_supportsStoreAndResolveAction() ;

/// @brief Method get_systemMemorySize, addr 0x182287c70, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_systemMemorySize() ;

/// @brief Method get_usesLoadStoreActions, addr 0x1822880a0, size 0x10, virtual false, abstract: false, final false
static inline bool get_usesLoadStoreActions() ;

/// @brief Method get_usesReversedZBuffer, addr 0x1822880b0, size 0x10, virtual false, abstract: false, final false
static inline bool get_usesReversedZBuffer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemInfo(SystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemInfo(SystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SystemInfo) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
