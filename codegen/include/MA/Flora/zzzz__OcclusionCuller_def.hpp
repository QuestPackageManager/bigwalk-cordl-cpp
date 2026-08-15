#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__ConstantBufferRef_1_def.hpp"
#include "MA/Flora/zzzz__OcclusionCullingCommonShaderVariables_def.hpp"
#include "MA/Flora/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
#include "MA/Flora/zzzz__SilhouettePlaneCache_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCuller)
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct InstanceOcclusionTestSubviewSettings;
}
namespace MA::Flora {
struct OccluderHandles;
}
namespace MA::Flora {
struct OccluderParameters;
}
namespace MA::Flora {
struct OcclusionContext;
}
namespace MA::Flora {
struct OcclusionCuller_ContextSlot;
}
namespace MA::Flora {
struct OcclusionDebugOutput;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace MA::Flora {
class OcclusionCuller;
}
namespace MA::Flora {
struct OcclusionCuller_ContextSlot;
}
// Write type traits
MARK_REF_T(::MA::Flora::OcclusionCuller*);
MARK_VAL_T(::MA::Flora::OcclusionCuller_ContextSlot);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionCuller*, "MA.Flora", "OcclusionCuller");
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionCuller_ContextSlot, "MA.Flora", "OcclusionCuller/ContextSlot");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OcclusionCuller/ContextSlot
struct CORDL_TYPE OcclusionCuller_ContextSlot {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCuller_ContextSlot() ;

// Ctor Parameters [CppParam { name: "Valid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }]
constexpr OcclusionCuller_ContextSlot(bool  Valid, int32_t  LastUsedFrameIndex, ::UnityEngine::EntityId  ViewId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13236};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Valid, offset: 0x0, size: 0x1, def value: None
 bool  Valid;

/// @brief Field LastUsedFrameIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  LastUsedFrameIndex;

/// @brief Field ViewId, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::EntityId  ViewId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OcclusionCuller_ContextSlot, Valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller_ContextSlot, LastUsedFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller_ContextSlot, ViewId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OcclusionCuller_ContextSlot) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ConstantBufferRef`1<T>, MA.Flora.OcclusionCuller::ContextSlot, MA.Flora.OcclusionCullingCommonShaderVariables, MA.Flora.OcclusionCullingDebugShaderVariables, MA.Flora.SilhouettePlaneCache, System.Object, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.OcclusionCuller
class CORDL_TYPE OcclusionCuller : public ::System::Object {
public:
// Declarations
using ContextSlot = ::MA::Flora::OcclusionCuller_ContextSlot;

/// @brief Field CommonConstantBuffer, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get_CommonConstantBuffer, put=__cordl_internal_set_CommonConstantBuffer)) ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables>  CommonConstantBuffer;

/// @brief Field ContextSlots, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_ContextSlots, put=__cordl_internal_set_ContextSlots)) ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot>  ContextSlots;

/// @brief Field Contexts, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Contexts, put=__cordl_internal_set_Contexts)) ::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>*  Contexts;

/// @brief Field DebugConstantBuffer, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get_DebugConstantBuffer, put=__cordl_internal_set_DebugConstantBuffer)) ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables>  DebugConstantBuffer;

/// @brief Field FrameIndex, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_FrameIndex, put=__cordl_internal_set_FrameIndex)) int32_t  FrameIndex;

/// @brief Field FreeContextSlots, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get_FreeContextSlots, put=__cordl_internal_set_FreeContextSlots)) ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  FreeContextSlots;

/// @brief Field SilhouettePlaneCache, offset 0x10, size 0x48 
 __declspec(property(get=__cordl_internal_get_SilhouettePlaneCache, put=__cordl_internal_set_SilhouettePlaneCache)) ::MA::Flora::SilhouettePlaneCache  SilhouettePlaneCache;

/// @brief Field ViewIDToSlotMap, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_ViewIDToSlotMap, put=__cordl_internal_set_ViewIDToSlotMap)) ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  ViewIDToSlotMap;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BuildOcclusionDepth, addr 0x1814d0bc0, size 0x4f0, virtual false, abstract: false, final false
inline bool BuildOcclusionDepth(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OccluderParameters>  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviewUpdates) ;

/// @brief Method CreateDepthPyramid, addr 0x1814d10b0, size 0x290, virtual false, abstract: false, final false
inline void CreateDepthPyramid(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::OccluderParameters  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviewUpdates, ::by_ref<::MA::Flora::OccluderHandles>  handles) ;

/// @brief Method DeleteContext, addr 0x1814d1340, size 0x190, virtual false, abstract: false, final false
inline void DeleteContext(::UnityEngine::EntityId  viewId) ;

/// @brief Method DispatchDebugClear, addr 0x1814d14d0, size 0x2e0, virtual false, abstract: false, final false
inline void DispatchDebugClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewEntityId) ;

/// @brief Method Dispose, addr 0x1814d17b0, size 0x1b0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetOcclusionTestDebugOutput, addr 0x1814d1960, size 0x190, virtual false, abstract: false, final false
inline ::MA::Flora::OcclusionDebugOutput GetOcclusionTestDebugOutput(::UnityEngine::EntityId  viewId) ;

/// @brief Method NewContext, addr 0x1814d1af0, size 0x210, virtual false, abstract: false, final false
inline int32_t NewContext(::UnityEngine::EntityId  viewId) ;

static inline ::MA::Flora::OcclusionCuller* New_ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

/// @brief Method NextFrame, addr 0x1814d1d00, size 0x1d0, virtual false, abstract: false, final false
inline void NextFrame() ;

/// @brief Method PrepareForCulling, addr 0x1814d1ed0, size 0x450, virtual false, abstract: false, final false
inline void PrepareForCulling(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OcclusionContext>  occlusionContext, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  testSubviewSettings, ::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>  shaders) ;

/// @brief Method PrepareOcclusionHandles, addr 0x1814d2320, size 0x220, virtual false, abstract: false, final false
inline ::MA::Flora::OccluderHandles PrepareOcclusionHandles(::by_ref<::MA::Flora::OccluderParameters>  input) ;

/// @brief Method PrepareOcclusionHandles, addr 0x1814d2540, size 0x220, virtual false, abstract: false, final false
inline ::MA::Flora::OccluderHandles PrepareOcclusionHandles(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::by_ref<::MA::Flora::OccluderParameters>  input) ;

/// @brief Method RenderDebugTestOverlay, addr 0x1814d2760, size 0x2c0, virtual false, abstract: false, final false
inline void RenderDebugTestOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId) ;

/// @brief Method RenderDebugViewOverlay, addr 0x1814d2a20, size 0x430, virtual false, abstract: false, final false
inline void RenderDebugViewOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId, ::UnityEngine::Vector2  positionScreen, float_t  maxHeight) ;

/// @brief Method TryGetContext, addr 0x1814d2e50, size 0x120, virtual false, abstract: false, final false
inline bool TryGetContext(::UnityEngine::EntityId  viewId, ::by_ref<::MA::Flora::OcclusionContext>  occlusionContext) ;

/// @brief Method UpdateSilhouettePlanes, addr 0x1814d2f70, size 0x30, virtual false, abstract: false, final false
inline void UpdateSilhouettePlanes(::UnityEngine::EntityId  viewId, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes) ;

constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables> const& __cordl_internal_get_CommonConstantBuffer() const;

constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables>& __cordl_internal_get_CommonConstantBuffer() ;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot> const& __cordl_internal_get_ContextSlots() const;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot>& __cordl_internal_get_ContextSlots() ;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>* const& __cordl_internal_get_Contexts() const;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>*& __cordl_internal_get_Contexts() ;

constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables> const& __cordl_internal_get_DebugConstantBuffer() const;

constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables>& __cordl_internal_get_DebugConstantBuffer() ;

constexpr int32_t const& __cordl_internal_get_FrameIndex() const;

constexpr int32_t& __cordl_internal_get_FrameIndex() ;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t> const& __cordl_internal_get_FreeContextSlots() const;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>& __cordl_internal_get_FreeContextSlots() ;

constexpr ::MA::Flora::SilhouettePlaneCache const& __cordl_internal_get_SilhouettePlaneCache() const;

constexpr ::MA::Flora::SilhouettePlaneCache& __cordl_internal_get_SilhouettePlaneCache() ;

constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t> const& __cordl_internal_get_ViewIDToSlotMap() const;

constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>& __cordl_internal_get_ViewIDToSlotMap() ;

constexpr void __cordl_internal_set_CommonConstantBuffer(::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables>  value) ;

constexpr void __cordl_internal_set_ContextSlots(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot>  value) ;

constexpr void __cordl_internal_set_Contexts(::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>*  value) ;

constexpr void __cordl_internal_set_DebugConstantBuffer(::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables>  value) ;

constexpr void __cordl_internal_set_FrameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_FreeContextSlots(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  value) ;

constexpr void __cordl_internal_set_SilhouettePlaneCache(::MA::Flora::SilhouettePlaneCache  value) ;

constexpr void __cordl_internal_set_ViewIDToSlotMap(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  value) ;

/// @brief Method .ctor, addr 0x1814d2fa0, size 0x3f0, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCuller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionCuller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionCuller(OcclusionCuller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionCuller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionCuller(OcclusionCuller const& ) = delete;

/// @brief Field MaxUnusedFrames offset 0xffffffff size 0x4
static constexpr int32_t  MaxUnusedFrames{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13237};

/// @brief Field SilhouettePlaneCache, offset: 0x10, size: 0x48, def value: None
 ::MA::Flora::SilhouettePlaneCache  ___SilhouettePlaneCache;

/// @brief Field ViewIDToSlotMap, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  ___ViewIDToSlotMap;

/// @brief Field Contexts, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>*  ___Contexts;

/// @brief Field ContextSlots, offset: 0x70, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot>  ___ContextSlots;

/// @brief Field FreeContextSlots, offset: 0x88, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  ___FreeContextSlots;

/// @brief Field CommonConstantBuffer, offset: 0xa0, size: 0x18, def value: None
 ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables>  ___CommonConstantBuffer;

/// @brief Field DebugConstantBuffer, offset: 0xb8, size: 0x18, def value: None
 ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables>  ___DebugConstantBuffer;

/// @brief Field FrameIndex, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___FrameIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OcclusionCuller, ___SilhouettePlaneCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___ViewIDToSlotMap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___Contexts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___ContextSlots) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___FreeContextSlots) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___CommonConstantBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___DebugConstantBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionCuller, ___FrameIndex) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OcclusionCuller) == 0xd8, "Size mismatch!");

} // namespace end def MA::Flora
