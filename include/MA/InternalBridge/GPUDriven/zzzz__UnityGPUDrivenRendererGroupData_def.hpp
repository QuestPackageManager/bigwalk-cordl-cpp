#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenRendererGroupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityGPUDrivenRendererGroupData)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedRendererData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererEditorData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace MA::InternalBridge::GPUDriven {
struct UnityGPUDrivenRendererGroupData;
}
// Write type traits
MARK_VAL_T(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData, "MA.InternalBridge.GPUDriven", "UnityGPUDrivenRendererGroupData");
// Dependencies UnityEngine.Rendering.GPUDrivenRendererGroupData
namespace MA::InternalBridge::GPUDriven {
// Is value type: true
// CS Name: MA.InternalBridge.GPUDriven.UnityGPUDrivenRendererGroupData
struct CORDL_TYPE UnityGPUDrivenRendererGroupData {
public:
// Declarations
 __declspec(property(get=get_editorData)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData>  editorData;

 __declspec(property(get=get_gameObjectLayer)) ::Unity::Collections::NativeArray_1<int32_t>  gameObjectLayer;

 __declspec(property(get=get_instancesCount)) ::Unity::Collections::NativeArray_1<int32_t>  instancesCount;

 __declspec(property(get=get_instancesOffset)) ::Unity::Collections::NativeArray_1<int32_t>  instancesOffset;

 __declspec(property(get=get_invalidRendererGroupID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  invalidRendererGroupID;

 __declspec(property(get=get_lightmapIndex)) ::Unity::Collections::NativeArray_1<int32_t>  lightmapIndex;

 __declspec(property(get=get_lightmapScaleOffset)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  lightmapScaleOffset;

 __declspec(property(get=get_localBounds)) ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>  localBounds;

 __declspec(property(get=get_localToWorldMatrix)) ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrix;

 __declspec(property(get=get_lodGroupID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  lodGroupID;

 __declspec(property(get=get_materialFilterFlags)) ::Unity::Collections::NativeArray_1<int32_t>  materialFilterFlags;

 __declspec(property(get=get_materialID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialID;

 __declspec(property(get=get_materialIndex)) ::Unity::Collections::NativeArray_1<int32_t>  materialIndex;

 __declspec(property(get=get_materialsCount)) ::Unity::Collections::NativeArray_1<int16_t>  materialsCount;

 __declspec(property(get=get_materialsOffset)) ::Unity::Collections::NativeArray_1<int32_t>  materialsOffset;

 __declspec(property(get=get_meshID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshID;

 __declspec(property(get=get_meshIndex)) ::Unity::Collections::NativeArray_1<int32_t>  meshIndex;

 __declspec(property(get=get_packedMaterialData)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialData;

 __declspec(property(get=get_packedRendererData)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>  packedRendererData;

 __declspec(property(get=get_prevLocalToWorldMatrix)) ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  prevLocalToWorldMatrix;

 __declspec(property(get=get_rendererGroupID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  rendererGroupID;

 __declspec(property(get=get_rendererGroupIndex)) ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIndex;

 __declspec(property(get=get_rendererPriority)) ::Unity::Collections::NativeArray_1<int32_t>  rendererPriority;

 __declspec(property(get=get_renderingLayerMask)) ::Unity::Collections::NativeArray_1<uint32_t>  renderingLayerMask;

 __declspec(property(get=get_subMeshCount)) ::Unity::Collections::NativeArray_1<int16_t>  subMeshCount;

 __declspec(property(get=get_subMeshDesc)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor>  subMeshDesc;

 __declspec(property(get=get_subMeshDescOffset)) ::Unity::Collections::NativeArray_1<int32_t>  subMeshDescOffset;

 __declspec(property(get=get_subMeshStartIndex)) ::Unity::Collections::NativeArray_1<int16_t>  subMeshStartIndex;

/// @brief Method get_editorData, addr 0x181465d40, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData> get_editorData() ;

/// @brief Method get_gameObjectLayer, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_gameObjectLayer() ;

/// @brief Method get_instancesCount, addr 0x181ece430, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_instancesCount() ;

/// @brief Method get_instancesOffset, addr 0x181ece470, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_instancesOffset() ;

/// @brief Method get_invalidRendererGroupID, addr 0x181ece4b0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_invalidRendererGroupID() ;

/// @brief Method get_lightmapIndex, addr 0x1817f1380, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_lightmapIndex() ;

/// @brief Method get_lightmapScaleOffset, addr 0x1802f41b0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> get_lightmapScaleOffset() ;

/// @brief Method get_localBounds, addr 0x1802e5810, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> get_localBounds() ;

/// @brief Method get_localToWorldMatrix, addr 0x180371680, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> get_localToWorldMatrix() ;

/// @brief Method get_lodGroupID, addr 0x181ece500, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_lodGroupID() ;

/// @brief Method get_materialFilterFlags, addr 0x181ece550, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_materialFilterFlags() ;

/// @brief Method get_materialID, addr 0x181ece590, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_materialID() ;

/// @brief Method get_materialIndex, addr 0x181465d30, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_materialIndex() ;

/// @brief Method get_materialsCount, addr 0x181ece5e0, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int16_t> get_materialsCount() ;

/// @brief Method get_materialsOffset, addr 0x1803717d0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_materialsOffset() ;

/// @brief Method get_meshID, addr 0x181ece620, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_meshID() ;

/// @brief Method get_meshIndex, addr 0x1804f6820, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_meshIndex() ;

/// @brief Method get_packedMaterialData, addr 0x181ece670, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> get_packedMaterialData() ;

/// @brief Method get_packedRendererData, addr 0x1813fdaa0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> get_packedRendererData() ;

/// @brief Method get_prevLocalToWorldMatrix, addr 0x181465d80, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> get_prevLocalToWorldMatrix() ;

/// @brief Method get_rendererGroupID, addr 0x181ecdf60, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_rendererGroupID() ;

/// @brief Method get_rendererGroupIndex, addr 0x181465d50, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_rendererGroupIndex() ;

/// @brief Method get_rendererPriority, addr 0x180eb4ac0, size 0x2d20, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_rendererPriority() ;

/// @brief Method get_renderingLayerMask, addr 0x18052ca40, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint32_t> get_renderingLayerMask() ;

/// @brief Method get_subMeshCount, addr 0x181465d60, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int16_t> get_subMeshCount() ;

/// @brief Method get_subMeshDesc, addr 0x181465d90, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor> get_subMeshDesc() ;

/// @brief Method get_subMeshDescOffset, addr 0x181465da0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_subMeshDescOffset() ;

/// @brief Method get_subMeshStartIndex, addr 0x1813fdb10, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int16_t> get_subMeshStartIndex() ;

/// @brief Method op_Implicit, addr 0x181ece710, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenRendererGroupData(::UnityEngine::Rendering::GPUDrivenRendererGroupData  rendererGroupData) ;

/// @brief Method op_Implicit, addr 0x181ece710, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUDrivenRendererGroupData op_Implicit___UnityEngine__Rendering__GPUDrivenRendererGroupData(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData  rendererGroupData) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityGPUDrivenRendererGroupData() ;

// Ctor Parameters [CppParam { name: "m_RendererGroupData", ty: "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: None }]
constexpr UnityGPUDrivenRendererGroupData(::UnityEngine::Rendering::GPUDrivenRendererGroupData  m_RendererGroupData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1f0};

/// @brief Field m_RendererGroupData, offset: 0x0, size: 0x1f0, def value: None
 ::UnityEngine::Rendering::GPUDrivenRendererGroupData  m_RendererGroupData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData, m_RendererGroupData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData) == 0x1f0, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
