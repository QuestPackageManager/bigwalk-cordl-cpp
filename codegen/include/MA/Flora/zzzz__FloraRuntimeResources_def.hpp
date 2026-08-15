#pragma once
// IWYU pragma private; include "MA/Flora/FloraRuntimeResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraRuntimeResources)
namespace MA::Flora {
struct FloraRuntimeResources_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace MA::Flora {
struct FloraRuntimeResources_Version;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraRuntimeResources_Version);
MARK_REF_T(::MA::Flora::FloraRuntimeResources*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRuntimeResources_Version, "MA.Flora", "FloraRuntimeResources/Version");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRuntimeResources*, "MA.Flora", "FloraRuntimeResources");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraRuntimeResources/Version
struct CORDL_TYPE FloraRuntimeResources_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraRuntimeResources_Version_Unwrapped
enum struct __FloraRuntimeResources_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_Count = static_cast<int32_t>(0x1),
__E_Latest = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraRuntimeResources_Version_Unwrapped () const noexcept {
return static_cast<__FloraRuntimeResources_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraRuntimeResources_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraRuntimeResources_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(1)
static ::MA::Flora::FloraRuntimeResources_Version const Count;

/// @brief Field Initial value: I32(0)
static ::MA::Flora::FloraRuntimeResources_Version const Initial;

/// @brief Field Latest value: I32(0)
static ::MA::Flora::FloraRuntimeResources_Version const Latest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13361};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRuntimeResources_Version, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRuntimeResources_Version) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRuntimeResources::Version, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRuntimeResources
class CORDL_TYPE FloraRuntimeResources : public ::System::Object {
public:
// Declarations
using Version = ::MA::Flora::FloraRuntimeResources_Version;

 __declspec(property(get=get_CullingGridCS, put=set_CullingGridCS)) ::UnityW<::UnityEngine::ComputeShader>  CullingGridCS;

 __declspec(property(get=get_DebugCullingGridCS, put=set_DebugCullingGridCS)) ::UnityW<::UnityEngine::ComputeShader>  DebugCullingGridCS;

 __declspec(property(get=get_DebugLineShader, put=set_DebugLineShader)) ::UnityW<::UnityEngine::Shader>  DebugLineShader;

 __declspec(property(get=get_DebugOccluderShader, put=set_DebugOccluderShader)) ::UnityW<::UnityEngine::Shader>  DebugOccluderShader;

 __declspec(property(get=get_DebugOcclusionCS, put=set_DebugOcclusionCS)) ::UnityW<::UnityEngine::ComputeShader>  DebugOcclusionCS;

 __declspec(property(get=get_DebugOcclusionTestShader, put=set_DebugOcclusionTestShader)) ::UnityW<::UnityEngine::Shader>  DebugOcclusionTestShader;

 __declspec(property(get=get_GraphicsBufferUtilityCS, put=set_GraphicsBufferUtilityCS)) ::UnityW<::UnityEngine::ComputeShader>  GraphicsBufferUtilityCS;

 __declspec(property(get=get_IndirectCullingChunksCS, put=set_IndirectCullingChunksCS)) ::UnityW<::UnityEngine::ComputeShader>  IndirectCullingChunksCS;

 __declspec(property(get=get_IndirectCullingDrawsCS, put=set_IndirectCullingDrawsCS)) ::UnityW<::UnityEngine::ComputeShader>  IndirectCullingDrawsCS;

 __declspec(property(get=get_IndirectCullingInstancesCS, put=set_IndirectCullingInstancesCS)) ::UnityW<::UnityEngine::ComputeShader>  IndirectCullingInstancesCS;

 __declspec(property(get=get_InstanceBufferUploadCS, put=set_InstanceBufferUploadCS)) ::UnityW<::UnityEngine::ComputeShader>  InstanceBufferUploadCS;

 __declspec(property(get=get_OccluderDepthPyramidKernelsCS, put=set_OccluderDepthPyramidKernelsCS)) ::UnityW<::UnityEngine::ComputeShader>  OccluderDepthPyramidKernelsCS;

 __declspec(property(get=get_TerrainGrassMaterial, put=set_TerrainGrassMaterial)) ::UnityW<::UnityEngine::Material>  TerrainGrassMaterial;

 __declspec(property(get=get_TerrainGrassPlaceholderPrefab, put=set_TerrainGrassPlaceholderPrefab)) ::UnityW<::UnityEngine::GameObject>  TerrainGrassPlaceholderPrefab;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

/// @brief Field m_CullingGridCS, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingGridCS, put=__cordl_internal_set_m_CullingGridCS)) ::UnityW<::UnityEngine::ComputeShader>  m_CullingGridCS;

/// @brief Field m_DebugCullingGridCS, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugCullingGridCS, put=__cordl_internal_set_m_DebugCullingGridCS)) ::UnityW<::UnityEngine::ComputeShader>  m_DebugCullingGridCS;

/// @brief Field m_DebugLineShader, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugLineShader, put=__cordl_internal_set_m_DebugLineShader)) ::UnityW<::UnityEngine::Shader>  m_DebugLineShader;

/// @brief Field m_DebugOccluderShader, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugOccluderShader, put=__cordl_internal_set_m_DebugOccluderShader)) ::UnityW<::UnityEngine::Shader>  m_DebugOccluderShader;

/// @brief Field m_DebugOcclusionTestShader, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugOcclusionTestShader, put=__cordl_internal_set_m_DebugOcclusionTestShader)) ::UnityW<::UnityEngine::Shader>  m_DebugOcclusionTestShader;

/// @brief Field m_GraphicsBufferUtilityCS, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GraphicsBufferUtilityCS, put=__cordl_internal_set_m_GraphicsBufferUtilityCS)) ::UnityW<::UnityEngine::ComputeShader>  m_GraphicsBufferUtilityCS;

/// @brief Field m_IndirectCullingChunksCS, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndirectCullingChunksCS, put=__cordl_internal_set_m_IndirectCullingChunksCS)) ::UnityW<::UnityEngine::ComputeShader>  m_IndirectCullingChunksCS;

/// @brief Field m_IndirectCullingDrawsCS, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndirectCullingDrawsCS, put=__cordl_internal_set_m_IndirectCullingDrawsCS)) ::UnityW<::UnityEngine::ComputeShader>  m_IndirectCullingDrawsCS;

/// @brief Field m_IndirectCullingInstancesCS, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndirectCullingInstancesCS, put=__cordl_internal_set_m_IndirectCullingInstancesCS)) ::UnityW<::UnityEngine::ComputeShader>  m_IndirectCullingInstancesCS;

/// @brief Field m_InstanceBufferUploadCS, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceBufferUploadCS, put=__cordl_internal_set_m_InstanceBufferUploadCS)) ::UnityW<::UnityEngine::ComputeShader>  m_InstanceBufferUploadCS;

/// @brief Field m_OccluderDepthPyramidKernelsCS, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OccluderDepthPyramidKernelsCS, put=__cordl_internal_set_m_OccluderDepthPyramidKernelsCS)) ::UnityW<::UnityEngine::ComputeShader>  m_OccluderDepthPyramidKernelsCS;

/// @brief Field m_OcclusionCullingDebugCS, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OcclusionCullingDebugCS, put=__cordl_internal_set_m_OcclusionCullingDebugCS)) ::UnityW<::UnityEngine::ComputeShader>  m_OcclusionCullingDebugCS;

/// @brief Field m_TerrainGrassMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TerrainGrassMaterial, put=__cordl_internal_set_m_TerrainGrassMaterial)) ::UnityW<::UnityEngine::Material>  m_TerrainGrassMaterial;

/// @brief Field m_TerrainGrassPlaceholderPrefab, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TerrainGrassPlaceholderPrefab, put=__cordl_internal_set_m_TerrainGrassPlaceholderPrefab)) ::UnityW<::UnityEngine::GameObject>  m_TerrainGrassPlaceholderPrefab;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::MA::Flora::FloraRuntimeResources_Version  m_Version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

static inline ::MA::Flora::FloraRuntimeResources* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CullingGridCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CullingGridCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_DebugCullingGridCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_DebugCullingGridCS() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugLineShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugLineShader() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugOccluderShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugOccluderShader() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugOcclusionTestShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugOcclusionTestShader() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_GraphicsBufferUtilityCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_GraphicsBufferUtilityCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_IndirectCullingChunksCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_IndirectCullingChunksCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_IndirectCullingDrawsCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_IndirectCullingDrawsCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_IndirectCullingInstancesCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_IndirectCullingInstancesCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceBufferUploadCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceBufferUploadCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OccluderDepthPyramidKernelsCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OccluderDepthPyramidKernelsCS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OcclusionCullingDebugCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OcclusionCullingDebugCS() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_TerrainGrassMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_TerrainGrassMaterial() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_TerrainGrassPlaceholderPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_TerrainGrassPlaceholderPrefab() ;

constexpr ::MA::Flora::FloraRuntimeResources_Version const& __cordl_internal_get_m_Version() const;

constexpr ::MA::Flora::FloraRuntimeResources_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_CullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_DebugCullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_DebugLineShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_DebugOccluderShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_DebugOcclusionTestShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_GraphicsBufferUtilityCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_IndirectCullingChunksCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_IndirectCullingDrawsCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_IndirectCullingInstancesCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_InstanceBufferUploadCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_OccluderDepthPyramidKernelsCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_OcclusionCullingDebugCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_TerrainGrassMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_TerrainGrassPlaceholderPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_Version(::MA::Flora::FloraRuntimeResources_Version  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CullingGridCS, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_CullingGridCS() ;

/// @brief Method get_DebugCullingGridCS, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_DebugCullingGridCS() ;

/// @brief Method get_DebugLineShader, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_DebugLineShader() ;

/// @brief Method get_DebugOccluderShader, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_DebugOccluderShader() ;

/// @brief Method get_DebugOcclusionCS, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_DebugOcclusionCS() ;

/// @brief Method get_DebugOcclusionTestShader, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_DebugOcclusionTestShader() ;

/// @brief Method get_GraphicsBufferUtilityCS, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_GraphicsBufferUtilityCS() ;

/// @brief Method get_IndirectCullingChunksCS, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_IndirectCullingChunksCS() ;

/// @brief Method get_IndirectCullingDrawsCS, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_IndirectCullingDrawsCS() ;

/// @brief Method get_IndirectCullingInstancesCS, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_IndirectCullingInstancesCS() ;

/// @brief Method get_InstanceBufferUploadCS, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_InstanceBufferUploadCS() ;

/// @brief Method get_OccluderDepthPyramidKernelsCS, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_OccluderDepthPyramidKernelsCS() ;

/// @brief Method get_TerrainGrassMaterial, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_TerrainGrassMaterial() ;

/// @brief Method get_TerrainGrassPlaceholderPrefab, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_TerrainGrassPlaceholderPrefab() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

/// @brief Method set_CullingGridCS, addr 0x1814f8460, size 0x30, virtual false, abstract: false, final false
inline void set_CullingGridCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_DebugCullingGridCS, addr 0x1814f8490, size 0x30, virtual false, abstract: false, final false
inline void set_DebugCullingGridCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_DebugLineShader, addr 0x1814f84c0, size 0x30, virtual false, abstract: false, final false
inline void set_DebugLineShader(::UnityEngine::Shader*  value) ;

/// @brief Method set_DebugOccluderShader, addr 0x1814f84f0, size 0x30, virtual false, abstract: false, final false
inline void set_DebugOccluderShader(::UnityEngine::Shader*  value) ;

/// @brief Method set_DebugOcclusionCS, addr 0x1814f8520, size 0x30, virtual false, abstract: false, final false
inline void set_DebugOcclusionCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_DebugOcclusionTestShader, addr 0x1814f8550, size 0x30, virtual false, abstract: false, final false
inline void set_DebugOcclusionTestShader(::UnityEngine::Shader*  value) ;

/// @brief Method set_GraphicsBufferUtilityCS, addr 0x1814f8580, size 0x30, virtual false, abstract: false, final false
inline void set_GraphicsBufferUtilityCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_IndirectCullingChunksCS, addr 0x1814f85b0, size 0x30, virtual false, abstract: false, final false
inline void set_IndirectCullingChunksCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_IndirectCullingDrawsCS, addr 0x1814f85e0, size 0x30, virtual false, abstract: false, final false
inline void set_IndirectCullingDrawsCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_IndirectCullingInstancesCS, addr 0x1814f8610, size 0x30, virtual false, abstract: false, final false
inline void set_IndirectCullingInstancesCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_InstanceBufferUploadCS, addr 0x1814f8640, size 0x30, virtual false, abstract: false, final false
inline void set_InstanceBufferUploadCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_OccluderDepthPyramidKernelsCS, addr 0x1814f8670, size 0x30, virtual false, abstract: false, final false
inline void set_OccluderDepthPyramidKernelsCS(::UnityEngine::ComputeShader*  value) ;

/// @brief Method set_TerrainGrassMaterial, addr 0x1814f86a0, size 0x30, virtual false, abstract: false, final false
inline void set_TerrainGrassMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_TerrainGrassPlaceholderPrefab, addr 0x1814f86d0, size 0x30, virtual false, abstract: false, final false
inline void set_TerrainGrassPlaceholderPrefab(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRuntimeResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRuntimeResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRuntimeResources(FloraRuntimeResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRuntimeResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRuntimeResources(FloraRuntimeResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13362};

/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::FloraRuntimeResources_Version  ___m_Version;

/// @brief Field m_GraphicsBufferUtilityCS, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_GraphicsBufferUtilityCS;

/// @brief Field m_InstanceBufferUploadCS, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_InstanceBufferUploadCS;

/// @brief Field m_CullingGridCS, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_CullingGridCS;

/// @brief Field m_IndirectCullingChunksCS, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_IndirectCullingChunksCS;

/// @brief Field m_IndirectCullingInstancesCS, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_IndirectCullingInstancesCS;

/// @brief Field m_IndirectCullingDrawsCS, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_IndirectCullingDrawsCS;

/// @brief Field m_OccluderDepthPyramidKernelsCS, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_OccluderDepthPyramidKernelsCS;

/// @brief Field m_OcclusionCullingDebugCS, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_OcclusionCullingDebugCS;

/// @brief Field m_DebugOccluderShader, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___m_DebugOccluderShader;

/// @brief Field m_DebugOcclusionTestShader, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___m_DebugOcclusionTestShader;

/// @brief Field m_TerrainGrassPlaceholderPrefab, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_TerrainGrassPlaceholderPrefab;

/// @brief Field m_TerrainGrassMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_TerrainGrassMaterial;

/// @brief Field m_DebugCullingGridCS, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_DebugCullingGridCS;

/// @brief Field m_DebugLineShader, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___m_DebugLineShader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_GraphicsBufferUtilityCS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_InstanceBufferUploadCS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_CullingGridCS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_IndirectCullingChunksCS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_IndirectCullingInstancesCS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_IndirectCullingDrawsCS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_OccluderDepthPyramidKernelsCS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_OcclusionCullingDebugCS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_DebugOccluderShader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_DebugOcclusionTestShader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_TerrainGrassPlaceholderPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_TerrainGrassMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_DebugCullingGridCS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeResources, ___m_DebugLineShader) == 0x80, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRuntimeResources) == 0x88, "Size mismatch!");

} // namespace end def MA::Flora
