#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyExclusion_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterBody)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
struct WaterBodyAffects;
}
namespace WaveHarmonic::Crest {
struct WaterBodyExclusion;
}
namespace WaveHarmonic::Crest {
class WaterBody_ClipInput;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class WaterBody;
}
namespace WaveHarmonic::Crest {
class WaterBody_ClipInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::WaterBody*);
MARK_REF_T(::WaveHarmonic::Crest::WaterBody_ClipInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterBody*, "WaveHarmonic.Crest", "WaterBody");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterBody_ClipInput*, "WaveHarmonic.Crest", "WaterBody/ClipInput");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterBody/ClipInput
class CORDL_TYPE WaterBody_ClipInput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _Owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Owner, put=__cordl_internal_set__Owner)) ::UnityW<::WaveHarmonic::Crest::WaterBody>  _Owner;

/// @brief Field _Queue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Queue, put=__cordl_internal_set__Queue)) int32_t  _Queue;

/// @brief Field _Transform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transform, put=__cordl_internal_set__Transform)) ::UnityW<::UnityEngine::Transform>  _Transform;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x18258a9b0, size 0x4a0, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::WaterBody_ClipInput* New_ctor(::WaveHarmonic::Crest::WaterBody*  owner) ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody> const& __cordl_internal_get__Owner() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody>& __cordl_internal_get__Owner() ;

constexpr int32_t const& __cordl_internal_get__Queue() const;

constexpr int32_t& __cordl_internal_get__Queue() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform() ;

constexpr void __cordl_internal_set__Owner(::UnityW<::WaveHarmonic::Crest::WaterBody>  value) ;

constexpr void __cordl_internal_set__Queue(int32_t  value) ;

constexpr void __cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x18258ae50, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterBody*  owner) ;

/// @brief Method get_Component, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x18258aea0, size 0x50, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x180396ee0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x18258aef0, size 0x90, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterBody_ClipInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterBody_ClipInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterBody_ClipInput(WaterBody_ClipInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterBody_ClipInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterBody_ClipInput(WaterBody_ClipInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16670};

/// @brief Field _Owner, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterBody>  ____Owner;

/// @brief Field _Transform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Transform;

/// @brief Field _Queue, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterBody_ClipInput, ____Owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody_ClipInput, ____Transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody_ClipInput, ____Queue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterBody_ClipInput) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Bounds, UnityEngine.Rect, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>, WaveHarmonic.Crest.WaterBodyAffects, WaveHarmonic.Crest.WaterBodyExclusion
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterBody
class CORDL_TYPE WaterBody : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using ClipInput = ::WaveHarmonic::Crest::WaterBody_ClipInput;

 __declspec(property(get=get_AABB)) ::UnityEngine::Bounds  AABB;

 __declspec(property(get=get_AboveOrBelowSurfaceMaterial)) ::UnityW<::UnityEngine::Material>  AboveOrBelowSurfaceMaterial;

 __declspec(property(get=get_AboveSurfaceMaterial, put=set_AboveSurfaceMaterial)) ::UnityW<::UnityEngine::Material>  AboveSurfaceMaterial;

 __declspec(property(get=get_Affects, put=set_Affects)) ::WaveHarmonic::Crest::WaterBodyAffects  Affects;

 __declspec(property(get=get_BelowSurfaceMaterial, put=set_BelowSurfaceMaterial)) ::UnityW<::UnityEngine::Material>  BelowSurfaceMaterial;

 __declspec(property(get=get_Clipped, put=set_Clipped)) bool  Clipped;

 __declspec(property(get=get_Conservative, put=set_Conservative)) bool  Conservative;

 __declspec(property(get=get_Exclusion, put=set_Exclusion)) ::WaveHarmonic::Crest::WaterBodyExclusion  Exclusion;

 __declspec(property(get=get_OnLateUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnLateUpdateMethod;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_OverrideMaterials, put=set_OverrideMaterials)) bool  OverrideMaterials;

 __declspec(property(get=get_Precise, put=set_Precise)) bool  Precise;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_RequiresClipInput)) bool  RequiresClipInput;

 __declspec(property(get=get_Vertical, put=set_Vertical)) bool  Vertical;

 __declspec(property(get=get_VolumeMaterial, put=set_VolumeMaterial)) ::UnityW<::UnityEngine::Material>  VolumeMaterial;

/// @brief Field _AboveSurfaceMaterial, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__AboveSurfaceMaterial, put=__cordl_internal_set__AboveSurfaceMaterial)) ::UnityW<::UnityEngine::Material>  _AboveSurfaceMaterial;

/// @brief Field _Affects, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Affects, put=__cordl_internal_set__Affects)) ::WaveHarmonic::Crest::WaterBodyAffects  _Affects;

/// @brief Field _BelowSurfaceMaterial, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__BelowSurfaceMaterial, put=__cordl_internal_set__BelowSurfaceMaterial)) ::UnityW<::UnityEngine::Material>  _BelowSurfaceMaterial;

/// @brief Field _Bounds, offset 0x94, size 0x18 
 __declspec(property(get=__cordl_internal_get__Bounds, put=__cordl_internal_set__Bounds)) ::UnityEngine::Bounds  _Bounds;

/// @brief Field _BoundsArea, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BoundsArea, put=__cordl_internal_set__BoundsArea)) float_t  _BoundsArea;

/// @brief Field _BoundsVolume, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__BoundsVolume, put=__cordl_internal_set__BoundsVolume)) float_t  _BoundsVolume;

/// @brief Field _ClipInput, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipInput, put=__cordl_internal_set__ClipInput)) ::WaveHarmonic::Crest::WaterBody_ClipInput*  _ClipInput;

/// @brief Field _Conservative, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Conservative, put=__cordl_internal_set__Conservative)) bool  _Conservative;

/// @brief Field _Exclusion, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Exclusion, put=__cordl_internal_set__Exclusion)) ::WaveHarmonic::Crest::WaterBodyExclusion  _Exclusion;

/// @brief Field _ForceClipInput, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceClipInput, put=__cordl_internal_set__ForceClipInput)) bool  _ForceClipInput;

/// @brief Field _MotionVectorMaterial, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__MotionVectorMaterial, put=__cordl_internal_set__MotionVectorMaterial)) ::UnityW<::UnityEngine::Material>  _MotionVectorMaterial;

/// @brief Field _OverrideMaterials, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideMaterials, put=__cordl_internal_set__OverrideMaterials)) bool  _OverrideMaterials;

/// @brief Field _Precise, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get__Precise, put=__cordl_internal_set__Precise)) bool  _Precise;

/// @brief Field _RecalculateBounds, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateBounds, put=__cordl_internal_set__RecalculateBounds)) bool  _RecalculateBounds;

/// @brief Field _RecalculateRect, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateRect, put=__cordl_internal_set__RecalculateRect)) bool  _RecalculateRect;

/// @brief Field _Rect, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rect, put=__cordl_internal_set__Rect)) ::UnityEngine::Rect  _Rect;

/// @brief Field _SortedIndex, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__SortedIndex, put=__cordl_internal_set__SortedIndex)) int32_t  _SortedIndex;

/// @brief Field <SortedWaterBodies>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__SortedWaterBodies_k__BackingField, put=setStaticF__SortedWaterBodies_k__BackingField)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*  _SortedWaterBodies_k__BackingField;

/// @brief Field _Vertical, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__Vertical, put=__cordl_internal_set__Vertical)) bool  _Vertical;

/// @brief Field _VolumeMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__VolumeMaterial, put=__cordl_internal_set__VolumeMaterial)) ::UnityW<::UnityEngine::Material>  _VolumeMaterial;

/// @brief Field <WaterBodies>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WaterBodies_k__BackingField, put=setStaticF__WaterBodies_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*  _WaterBodies_k__BackingField;

/// @brief Field s_ClipSurfaceRegistrationNeedsUpdating, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_ClipSurfaceRegistrationNeedsUpdating, put=setStaticF_s_ClipSurfaceRegistrationNeedsUpdating)) bool  s_ClipSurfaceRegistrationNeedsUpdating;

/// @brief Method CalculateBounds, addr 0x182598170, size 0x8a0, virtual false, abstract: false, final false
inline void CalculateBounds() ;

/// @brief Method Contains, addr 0x182598a10, size 0xe0, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  position) ;

/// @brief Method HandleClipInputRegistration, addr 0x182598af0, size 0x220, virtual false, abstract: false, final false
inline void HandleClipInputRegistration(bool  disable) ;

/// @brief Method Initialize, addr 0x182598d10, size 0xc0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsBetterMatch, addr 0x182598dd0, size 0x80, virtual false, abstract: false, final false
static inline bool IsBetterMatch(::WaveHarmonic::Crest::WaterBody*  newBody, ::WaveHarmonic::Crest::WaterBody*  oldBody) ;

static inline ::WaveHarmonic::Crest::WaterBody* New_ctor() ;

/// @brief Method OnDisable, addr 0x182598e50, size 0x70, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnLateUpdate, addr 0x182598ec0, size 0xa0, virtual false, abstract: false, final false
inline void OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnUpdate, addr 0x182598f60, size 0x40, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SetAffects, addr 0x182598fa0, size 0x30, virtual false, abstract: false, final false
inline void SetAffects(::WaveHarmonic::Crest::WaterBodyAffects  previous, ::WaveHarmonic::Crest::WaterBodyAffects  current) ;

/// @brief Method SetExclusion, addr 0x182598fa0, size 0x30, virtual false, abstract: false, final false
inline void SetExclusion(::WaveHarmonic::Crest::WaterBodyExclusion  previous, ::WaveHarmonic::Crest::WaterBodyExclusion  current) ;

/// @brief Method SetPrecise, addr 0x182598fd0, size 0x30, virtual false, abstract: false, final false
inline void SetPrecise(bool  previous, bool  current) ;

/// @brief Method SetVertical, addr 0x182599000, size 0x10, virtual false, abstract: false, final false
inline void SetVertical(bool  previous, bool  current) ;

/// @brief Method UpdateClipSurfaceRegistration, addr 0x182599010, size 0x190, virtual false, abstract: false, final false
static inline void UpdateClipSurfaceRegistration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__AboveSurfaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__AboveSurfaceMaterial() ;

constexpr ::WaveHarmonic::Crest::WaterBodyAffects const& __cordl_internal_get__Affects() const;

constexpr ::WaveHarmonic::Crest::WaterBodyAffects& __cordl_internal_get__Affects() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__BelowSurfaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__BelowSurfaceMaterial() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__Bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__Bounds() ;

constexpr float_t const& __cordl_internal_get__BoundsArea() const;

constexpr float_t& __cordl_internal_get__BoundsArea() ;

constexpr float_t const& __cordl_internal_get__BoundsVolume() const;

constexpr float_t& __cordl_internal_get__BoundsVolume() ;

constexpr ::WaveHarmonic::Crest::WaterBody_ClipInput* const& __cordl_internal_get__ClipInput() const;

constexpr ::WaveHarmonic::Crest::WaterBody_ClipInput*& __cordl_internal_get__ClipInput() ;

constexpr bool const& __cordl_internal_get__Conservative() const;

constexpr bool& __cordl_internal_get__Conservative() ;

constexpr ::WaveHarmonic::Crest::WaterBodyExclusion const& __cordl_internal_get__Exclusion() const;

constexpr ::WaveHarmonic::Crest::WaterBodyExclusion& __cordl_internal_get__Exclusion() ;

constexpr bool const& __cordl_internal_get__ForceClipInput() const;

constexpr bool& __cordl_internal_get__ForceClipInput() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__MotionVectorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__MotionVectorMaterial() ;

constexpr bool const& __cordl_internal_get__OverrideMaterials() const;

constexpr bool& __cordl_internal_get__OverrideMaterials() ;

constexpr bool const& __cordl_internal_get__Precise() const;

constexpr bool& __cordl_internal_get__Precise() ;

constexpr bool const& __cordl_internal_get__RecalculateBounds() const;

constexpr bool& __cordl_internal_get__RecalculateBounds() ;

constexpr bool const& __cordl_internal_get__RecalculateRect() const;

constexpr bool& __cordl_internal_get__RecalculateRect() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__Rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__Rect() ;

constexpr int32_t const& __cordl_internal_get__SortedIndex() const;

constexpr int32_t& __cordl_internal_get__SortedIndex() ;

constexpr bool const& __cordl_internal_get__Vertical() const;

constexpr bool& __cordl_internal_get__Vertical() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__VolumeMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__VolumeMaterial() ;

constexpr void __cordl_internal_set__AboveSurfaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Affects(::WaveHarmonic::Crest::WaterBodyAffects  value) ;

constexpr void __cordl_internal_set__BelowSurfaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__BoundsArea(float_t  value) ;

constexpr void __cordl_internal_set__BoundsVolume(float_t  value) ;

constexpr void __cordl_internal_set__ClipInput(::WaveHarmonic::Crest::WaterBody_ClipInput*  value) ;

constexpr void __cordl_internal_set__Conservative(bool  value) ;

constexpr void __cordl_internal_set__Exclusion(::WaveHarmonic::Crest::WaterBodyExclusion  value) ;

constexpr void __cordl_internal_set__ForceClipInput(bool  value) ;

constexpr void __cordl_internal_set__MotionVectorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__OverrideMaterials(bool  value) ;

constexpr void __cordl_internal_set__Precise(bool  value) ;

constexpr void __cordl_internal_set__RecalculateBounds(bool  value) ;

constexpr void __cordl_internal_set__RecalculateRect(bool  value) ;

constexpr void __cordl_internal_set__Rect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__SortedIndex(int32_t  value) ;

constexpr void __cordl_internal_set__Vertical(bool  value) ;

constexpr void __cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x182599270, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>* getStaticF__SortedWaterBodies_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>* getStaticF__WaterBodies_k__BackingField() ;

static inline bool getStaticF_s_ClipSurfaceRegistrationNeedsUpdating() ;

/// @brief Method get_AABB, addr 0x182599290, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_AABB() ;

/// @brief Method get_AboveOrBelowSurfaceMaterial, addr 0x1825992e0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_AboveOrBelowSurfaceMaterial() ;

/// @brief Method get_AboveSurfaceMaterial, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_AboveSurfaceMaterial() ;

/// @brief Method get_Affects, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterBodyAffects get_Affects() ;

/// @brief Method get_BelowSurfaceMaterial, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_BelowSurfaceMaterial() ;

/// @brief Method get_Clipped, addr 0x181d20b20, size 0x10, virtual false, abstract: false, final false
inline bool get_Clipped() ;

/// @brief Method get_Conservative, addr 0x1802e09d0, size 0x10, virtual false, abstract: false, final false
inline bool get_Conservative() ;

/// @brief Method get_Exclusion, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterBodyExclusion get_Exclusion() ;

/// @brief Method get_OnLateUpdateMethod, addr 0x182599310, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnLateUpdateMethod() ;

/// @brief Method get_OnUpdateMethod, addr 0x182599350, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_OverrideMaterials, addr 0x1802e09e0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideMaterials() ;

/// @brief Method get_Precise, addr 0x181d20b20, size 0x10, virtual false, abstract: false, final false
inline bool get_Precise() ;

/// @brief Method get_Rect, addr 0x182599390, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_RequiresClipInput, addr 0x182599410, size 0x30, virtual false, abstract: false, final false
inline bool get_RequiresClipInput() ;

/// @brief Method get_SortedWaterBodies, addr 0x182588ff0, size 0x40, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>* get_SortedWaterBodies() ;

/// @brief Method get_Vertical, addr 0x1813ef470, size 0x10, virtual false, abstract: false, final false
inline bool get_Vertical() ;

/// @brief Method get_VolumeMaterial, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_VolumeMaterial() ;

/// @brief Method get_WaterBodies, addr 0x182571120, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>* get_WaterBodies() ;

static inline void setStaticF__SortedWaterBodies_k__BackingField(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*  value) ;

static inline void setStaticF__WaterBodies_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*  value) ;

static inline void setStaticF_s_ClipSurfaceRegistrationNeedsUpdating(bool  value) ;

/// @brief Method set_AboveSurfaceMaterial, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_AboveSurfaceMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_Affects, addr 0x182599440, size 0x40, virtual false, abstract: false, final false
inline void set_Affects(::WaveHarmonic::Crest::WaterBodyAffects  value) ;

/// @brief Method set_BelowSurfaceMaterial, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_BelowSurfaceMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_Clipped, addr 0x1820bdb40, size 0x10, virtual false, abstract: false, final false
inline void set_Clipped(bool  value) ;

/// @brief Method set_Conservative, addr 0x18051e980, size 0x10, virtual false, abstract: false, final false
inline void set_Conservative(bool  value) ;

/// @brief Method set_Exclusion, addr 0x182599480, size 0x40, virtual false, abstract: false, final false
inline void set_Exclusion(::WaveHarmonic::Crest::WaterBodyExclusion  value) ;

/// @brief Method set_OverrideMaterials, addr 0x18051e960, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideMaterials(bool  value) ;

/// @brief Method set_Precise, addr 0x1825994c0, size 0x40, virtual false, abstract: false, final false
inline void set_Precise(bool  value) ;

/// @brief Method set_Vertical, addr 0x182599500, size 0x10, virtual false, abstract: false, final false
inline void set_Vertical(bool  value) ;

/// @brief Method set_VolumeMaterial, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_VolumeMaterial(::UnityEngine::Material*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterBody(WaterBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterBody(WaterBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16671};

/// @brief Field _Affects, offset: 0x50, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterBodyAffects  ____Affects;

/// @brief Field _Vertical, offset: 0x54, size: 0x1, def value: None
 bool  ____Vertical;

/// @brief Field _Precise, offset: 0x55, size: 0x1, def value: None
 bool  ____Precise;

/// @brief Field _Exclusion, offset: 0x58, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterBodyExclusion  ____Exclusion;

/// @brief Field _Conservative, offset: 0x5c, size: 0x1, def value: None
 bool  ____Conservative;

/// @brief Field _OverrideMaterials, offset: 0x5d, size: 0x1, def value: None
 bool  ____OverrideMaterials;

/// @brief Field _AboveSurfaceMaterial, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____AboveSurfaceMaterial;

/// @brief Field _BelowSurfaceMaterial, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____BelowSurfaceMaterial;

/// @brief Field _VolumeMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____VolumeMaterial;

/// @brief Field _RecalculateRect, offset: 0x78, size: 0x1, def value: None
 bool  ____RecalculateRect;

/// @brief Field _RecalculateBounds, offset: 0x79, size: 0x1, def value: None
 bool  ____RecalculateBounds;

/// @brief Field _BoundsArea, offset: 0x7c, size: 0x4, def value: None
 float_t  ____BoundsArea;

/// @brief Field _BoundsVolume, offset: 0x80, size: 0x4, def value: None
 float_t  ____BoundsVolume;

/// @brief Field _MotionVectorMaterial, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____MotionVectorMaterial;

/// @brief Field _SortedIndex, offset: 0x90, size: 0x4, def value: None
 int32_t  ____SortedIndex;

/// @brief Field _Bounds, offset: 0x94, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____Bounds;

/// @brief Field _Rect, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Rect  ____Rect;

/// @brief Field _ClipInput, offset: 0xc0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterBody_ClipInput*  ____ClipInput;

/// @brief Field _ForceClipInput, offset: 0xc8, size: 0x1, def value: None
 bool  ____ForceClipInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Affects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Vertical) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Precise) == 0x55, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Exclusion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Conservative) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____OverrideMaterials) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____AboveSurfaceMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____BelowSurfaceMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____VolumeMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____RecalculateRect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____RecalculateBounds) == 0x79, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____BoundsArea) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____BoundsVolume) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____MotionVectorMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____SortedIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Bounds) == 0x94, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____Rect) == 0xac, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____ClipInput) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterBody, ____ForceClipInput) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterBody) == 0xd0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
