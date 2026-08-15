#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterChunkRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterChunkRenderer)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class WaterChunkRenderer;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::WaterChunkRenderer*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterChunkRenderer*, "WaveHarmonic.Crest", "WaterChunkRenderer");
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Rect, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterChunkRenderer
class CORDL_TYPE WaterChunkRenderer : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
 __declspec(property(get=get_MaterialOverridden, put=set_MaterialOverridden)) bool  MaterialOverridden;

 __declspec(property(get=get_Rend, put=set_Rend)) ::UnityW<::UnityEngine::Renderer>  Rend;

 __declspec(property(get=get_UnexpandedBoundsXZ)) ::UnityEngine::Rect  UnexpandedBoundsXZ;

/// @brief Field _Culled, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get__Culled, put=__cordl_internal_set__Culled)) bool  _Culled;

/// @brief Field _CulledByVolume, offset 0x136, size 0x1 
 __declspec(property(get=__cordl_internal_get__CulledByVolume, put=__cordl_internal_set__CulledByVolume)) bool  _CulledByVolume;

/// @brief Field _CurrentObjectToWorld, offset 0x78, size 0x40 
 __declspec(property(get=__cordl_internal_get__CurrentObjectToWorld, put=__cordl_internal_set__CurrentObjectToWorld)) ::UnityEngine::Matrix4x4  _CurrentObjectToWorld;

/// @brief Field _DrawRenderBounds, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawRenderBounds, put=__cordl_internal_set__DrawRenderBounds)) bool  _DrawRenderBounds;

/// @brief Field _LocalBounds, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get__LocalBounds, put=__cordl_internal_set__LocalBounds)) ::UnityEngine::Bounds  _LocalBounds;

/// @brief Field _LocalScale, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__LocalScale, put=__cordl_internal_set__LocalScale)) float_t  _LocalScale;

/// @brief Field _LodIndex, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get__LodIndex, put=__cordl_internal_set__LodIndex)) int32_t  _LodIndex;

/// @brief Field <MaterialOverridden>k__BackingField, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__MaterialOverridden_k__BackingField, put=__cordl_internal_set__MaterialOverridden_k__BackingField)) bool  _MaterialOverridden_k__BackingField;

/// @brief Field _MaterialPropertyBlock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaterialPropertyBlock, put=__cordl_internal_set__MaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _MaterialPropertyBlock;

/// @brief Field _Mesh, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mesh, put=__cordl_internal_set__Mesh)) ::UnityW<::UnityEngine::Mesh>  _Mesh;

/// @brief Field _MotionVectorMaterial, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MotionVectorMaterial, put=__cordl_internal_set__MotionVectorMaterial)) ::UnityW<::UnityEngine::Material>  _MotionVectorMaterial;

/// @brief Field _PreviousObjectToWorld, offset 0xb8, size 0x40 
 __declspec(property(get=__cordl_internal_get__PreviousObjectToWorld, put=__cordl_internal_set__PreviousObjectToWorld)) ::UnityEngine::Matrix4x4  _PreviousObjectToWorld;

/// @brief Field <Rend>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rend_k__BackingField, put=__cordl_internal_set__Rend_k__BackingField)) ::UnityW<::UnityEngine::Renderer>  _Rend_k__BackingField;

/// @brief Field _SiblingIndex, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__SiblingIndex, put=__cordl_internal_set__SiblingIndex)) int32_t  _SiblingIndex;

/// @brief Field _SortingOrder, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__SortingOrder, put=__cordl_internal_set__SortingOrder)) int32_t  _SortingOrder;

/// @brief Field _Transform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transform, put=__cordl_internal_set__Transform)) ::UnityW<::UnityEngine::Transform>  _Transform;

/// @brief Field _UnexpandedBoundsXZ, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get__UnexpandedBoundsXZ, put=__cordl_internal_set__UnexpandedBoundsXZ)) ::UnityEngine::Rect  _UnexpandedBoundsXZ;

/// @brief Field _Visible, offset 0x135, size 0x1 
 __declspec(property(get=__cordl_internal_get__Visible, put=__cordl_internal_set__Visible)) bool  _Visible;

/// @brief Field _Water, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field _WaterDataHasBeenBound, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get__WaterDataHasBeenBound, put=__cordl_internal_set__WaterDataHasBeenBound)) bool  _WaterDataHasBeenBound;

/// @brief Field s_UpdateMeshBoundsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UpdateMeshBoundsMarker, put=setStaticF_s_UpdateMeshBoundsMarker)) ::Unity::Profiling::ProfilerMarker  s_UpdateMeshBoundsMarker;

/// @brief Method Bind, addr 0x1825a5190, size 0xd0, virtual false, abstract: false, final false
inline void Bind() ;

/// @brief Method ComputeBounds, addr 0x1825a5260, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ComputeBounds(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds) ;

/// @brief Method ExpandBoundsForDisplacements, addr 0x1825a5380, size 0x5b0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ExpandBoundsForDisplacements(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds) ;

/// @brief Method Initialize, addr 0x1825a5930, size 0x60, virtual false, abstract: false, final false
inline void Initialize(int32_t  index, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  mesh) ;

static inline ::WaveHarmonic::Crest::WaterChunkRenderer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1825a5990, size 0x30, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLateUpdate, addr 0x1825a59c0, size 0x110, virtual false, abstract: false, final false
inline void OnLateUpdate() ;

/// @brief Method OnStart, addr 0x1825a5ad0, size 0x20, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnWillRenderObject, addr 0x1825a5af0, size 0x100, virtual false, abstract: false, final false
inline void OnWillRenderObject() ;

/// @brief Method RenderMotionVectors, addr 0x1825a5bf0, size 0x310, virtual false, abstract: false, final false
inline void RenderMotionVectors(::WaveHarmonic::Crest::SurfaceRenderer*  surface, ::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldRender, addr 0x1825a5f00, size 0x20, virtual false, abstract: false, final false
inline bool ShouldRender(bool  culled) ;

/// @brief Method UpdateMeshBounds, addr 0x1825a5fc0, size 0x200, virtual false, abstract: false, final false
inline void UpdateMeshBounds() ;

/// @brief Method UpdateMeshBounds, addr 0x1825a5f20, size 0xa0, virtual false, abstract: false, final false
inline void UpdateMeshBounds(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::SurfaceRenderer*  surface) ;

constexpr bool const& __cordl_internal_get__Culled() const;

constexpr bool& __cordl_internal_get__Culled() ;

constexpr bool const& __cordl_internal_get__CulledByVolume() const;

constexpr bool& __cordl_internal_get__CulledByVolume() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__CurrentObjectToWorld() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__CurrentObjectToWorld() ;

constexpr bool const& __cordl_internal_get__DrawRenderBounds() const;

constexpr bool& __cordl_internal_get__DrawRenderBounds() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__LocalBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__LocalBounds() ;

constexpr float_t const& __cordl_internal_get__LocalScale() const;

constexpr float_t& __cordl_internal_get__LocalScale() ;

constexpr int32_t const& __cordl_internal_get__LodIndex() const;

constexpr int32_t& __cordl_internal_get__LodIndex() ;

constexpr bool const& __cordl_internal_get__MaterialOverridden_k__BackingField() const;

constexpr bool& __cordl_internal_get__MaterialOverridden_k__BackingField() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__MaterialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__MaterialPropertyBlock() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__Mesh() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__MotionVectorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__MotionVectorMaterial() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__PreviousObjectToWorld() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__PreviousObjectToWorld() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__Rend_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__Rend_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SiblingIndex() const;

constexpr int32_t& __cordl_internal_get__SiblingIndex() ;

constexpr int32_t const& __cordl_internal_get__SortingOrder() const;

constexpr int32_t& __cordl_internal_get__SortingOrder() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__UnexpandedBoundsXZ() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__UnexpandedBoundsXZ() ;

constexpr bool const& __cordl_internal_get__Visible() const;

constexpr bool& __cordl_internal_get__Visible() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr bool const& __cordl_internal_get__WaterDataHasBeenBound() const;

constexpr bool& __cordl_internal_get__WaterDataHasBeenBound() ;

constexpr void __cordl_internal_set__Culled(bool  value) ;

constexpr void __cordl_internal_set__CulledByVolume(bool  value) ;

constexpr void __cordl_internal_set__CurrentObjectToWorld(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__DrawRenderBounds(bool  value) ;

constexpr void __cordl_internal_set__LocalBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__LocalScale(float_t  value) ;

constexpr void __cordl_internal_set__LodIndex(int32_t  value) ;

constexpr void __cordl_internal_set__MaterialOverridden_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__MotionVectorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__PreviousObjectToWorld(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__Rend_k__BackingField(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__SiblingIndex(int32_t  value) ;

constexpr void __cordl_internal_set__SortingOrder(int32_t  value) ;

constexpr void __cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__UnexpandedBoundsXZ(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__Visible(bool  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

constexpr void __cordl_internal_set__WaterDataHasBeenBound(bool  value) ;

/// @brief Method .ctor, addr 0x1825a6200, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateMeshBoundsMarker() ;

/// @brief Method get_MaterialOverridden, addr 0x180371700, size 0x10, virtual false, abstract: false, final false
inline bool get_MaterialOverridden() ;

/// @brief Method get_Rend, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Rend() ;

/// @brief Method get_UnexpandedBoundsXZ, addr 0x181b65ce0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_UnexpandedBoundsXZ() ;

static inline void setStaticF_s_UpdateMeshBoundsMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_MaterialOverridden, addr 0x1825a6220, size 0x10, virtual false, abstract: false, final false
inline void set_MaterialOverridden(bool  value) ;

/// @brief Method set_Rend, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_Rend(::UnityEngine::Renderer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterChunkRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterChunkRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterChunkRenderer(WaterChunkRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterChunkRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterChunkRenderer(WaterChunkRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16695};

/// @brief Field k_UpdateMeshBoundsMarker offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UpdateMeshBoundsMarker{u"Crest.WaterChunkRenderer.UpdateMeshBounds"};

/// @brief Field _DrawRenderBounds, offset: 0x50, size: 0x1, def value: None
 bool  ____DrawRenderBounds;

/// @brief Field _Transform, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Transform;

/// @brief Field _Mesh, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____Mesh;

/// @brief Field <Rend>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____Rend_k__BackingField;

/// @brief Field _MaterialPropertyBlock, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____MaterialPropertyBlock;

/// @brief Field _CurrentObjectToWorld, offset: 0x78, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____CurrentObjectToWorld;

/// @brief Field _PreviousObjectToWorld, offset: 0xb8, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____PreviousObjectToWorld;

/// @brief Field _MotionVectorMaterial, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____MotionVectorMaterial;

/// @brief Field _SortingOrder, offset: 0x100, size: 0x4, def value: None
 int32_t  ____SortingOrder;

/// @brief Field _SiblingIndex, offset: 0x104, size: 0x4, def value: None
 int32_t  ____SiblingIndex;

/// @brief Field _UnexpandedBoundsXZ, offset: 0x108, size: 0x10, def value: None
 ::UnityEngine::Rect  ____UnexpandedBoundsXZ;

/// @brief Field _LocalBounds, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____LocalBounds;

/// @brief Field _LocalScale, offset: 0x130, size: 0x4, def value: None
 float_t  ____LocalScale;

/// @brief Field _Culled, offset: 0x134, size: 0x1, def value: None
 bool  ____Culled;

/// @brief Field _Visible, offset: 0x135, size: 0x1, def value: None
 bool  ____Visible;

/// @brief Field _CulledByVolume, offset: 0x136, size: 0x1, def value: None
 bool  ____CulledByVolume;

/// @brief Field _Water, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field <MaterialOverridden>k__BackingField, offset: 0x140, size: 0x1, def value: None
 bool  ____MaterialOverridden_k__BackingField;

/// @brief Field _WaterDataHasBeenBound, offset: 0x141, size: 0x1, def value: None
 bool  ____WaterDataHasBeenBound;

/// @brief Field _LodIndex, offset: 0x144, size: 0x4, def value: None
 int32_t  ____LodIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____DrawRenderBounds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____Transform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____Mesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____Rend_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____MaterialPropertyBlock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____CurrentObjectToWorld) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____PreviousObjectToWorld) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____MotionVectorMaterial) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____SortingOrder) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____SiblingIndex) == 0x104, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____UnexpandedBoundsXZ) == 0x108, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____LocalBounds) == 0x118, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____LocalScale) == 0x130, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____Culled) == 0x134, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____Visible) == 0x135, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____CulledByVolume) == 0x136, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____Water) == 0x138, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____MaterialOverridden_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____WaterDataHasBeenBound) == 0x141, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterChunkRenderer, ____LodIndex) == 0x144, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterChunkRenderer) == 0x148, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
