#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenLODGroupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityGPUDrivenLODGroupData)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupData;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct LODFadeMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::InternalBridge::GPUDriven {
struct UnityGPUDrivenLODGroupData;
}
// Write type traits
MARK_VAL_T(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData, "MA.InternalBridge.GPUDriven", "UnityGPUDrivenLODGroupData");
// Dependencies UnityEngine.Rendering.GPUDrivenLODGroupData
namespace MA::InternalBridge::GPUDriven {
// Is value type: true
// CS Name: MA.InternalBridge.GPUDriven.UnityGPUDrivenLODGroupData
struct CORDL_TYPE UnityGPUDrivenLODGroupData {
public:
// Declarations
 __declspec(property(get=get_fadeMode)) ::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode>  fadeMode;

 __declspec(property(get=get_invalidLODGroupID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  invalidLODGroupID;

 __declspec(property(get=get_lastLODIsBillboard)) ::Unity::Collections::NativeArray_1<bool>  lastLODIsBillboard;

 __declspec(property(get=get_lodCount)) ::Unity::Collections::NativeArray_1<int32_t>  lodCount;

 __declspec(property(get=get_lodFadeTransitionWidth)) ::Unity::Collections::NativeArray_1<float_t>  lodFadeTransitionWidth;

 __declspec(property(get=get_lodGroupID)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  lodGroupID;

 __declspec(property(get=get_lodOffset)) ::Unity::Collections::NativeArray_1<int32_t>  lodOffset;

 __declspec(property(get=get_lodRenderersCount)) ::Unity::Collections::NativeArray_1<int16_t>  lodRenderersCount;

 __declspec(property(get=get_lodScreenRelativeTransitionHeight)) ::Unity::Collections::NativeArray_1<float_t>  lodScreenRelativeTransitionHeight;

 __declspec(property(get=get_renderersCount)) ::Unity::Collections::NativeArray_1<int16_t>  renderersCount;

 __declspec(property(get=get_worldSpaceReferencePoint)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  worldSpaceReferencePoint;

 __declspec(property(get=get_worldSpaceSize)) ::Unity::Collections::NativeArray_1<float_t>  worldSpaceSize;

/// @brief Method get_fadeMode, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode> get_fadeMode() ;

/// @brief Method get_invalidLODGroupID, addr 0x181ecdeb0, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_invalidLODGroupID() ;

/// @brief Method get_lastLODIsBillboard, addr 0x1817f1380, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<bool> get_lastLODIsBillboard() ;

/// @brief Method get_lodCount, addr 0x1802f41b0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_lodCount() ;

/// @brief Method get_lodFadeTransitionWidth, addr 0x1803717d0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<float_t> get_lodFadeTransitionWidth() ;

/// @brief Method get_lodGroupID, addr 0x181ecdf60, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> get_lodGroupID() ;

/// @brief Method get_lodOffset, addr 0x1802e5810, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_lodOffset() ;

/// @brief Method get_lodRenderersCount, addr 0x1804f6820, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int16_t> get_lodRenderersCount() ;

/// @brief Method get_lodScreenRelativeTransitionHeight, addr 0x1813fdb10, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<float_t> get_lodScreenRelativeTransitionHeight() ;

/// @brief Method get_renderersCount, addr 0x181788310, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int16_t> get_renderersCount() ;

/// @brief Method get_worldSpaceReferencePoint, addr 0x18052ca40, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_worldSpaceReferencePoint() ;

/// @brief Method get_worldSpaceSize, addr 0x180e3e650, size 0xbb40, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<float_t> get_worldSpaceSize() ;

/// @brief Method op_Implicit, addr 0x181ece000, size 0x80, virtual false, abstract: false, final false
static inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenLODGroupData(::UnityEngine::Rendering::GPUDrivenLODGroupData  lodGroupData) ;

/// @brief Method op_Implicit, addr 0x181ece000, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUDrivenLODGroupData op_Implicit___UnityEngine__Rendering__GPUDrivenLODGroupData(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData  lodGroupData) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityGPUDrivenLODGroupData() ;

// Ctor Parameters [CppParam { name: "m_LODGroupData", ty: "::UnityEngine::Rendering::GPUDrivenLODGroupData", modifiers: "", def_value: None }]
constexpr UnityGPUDrivenLODGroupData(::UnityEngine::Rendering::GPUDrivenLODGroupData  m_LODGroupData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field m_LODGroupData, offset: 0x0, size: 0xd0, def value: None
 ::UnityEngine::Rendering::GPUDrivenLODGroupData  m_LODGroupData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData, m_LODGroupData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData) == 0xd0, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
