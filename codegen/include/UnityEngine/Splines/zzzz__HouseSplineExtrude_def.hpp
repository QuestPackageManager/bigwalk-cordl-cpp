#pragma once
// IWYU pragma private; include "UnityEngine/Splines/HouseSplineExtrude.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseSplineExtrude)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Splines {
class HouseSplineExtrude;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::HouseSplineExtrude*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::HouseSplineExtrude*, "UnityEngine.Splines", "HouseSplineExtrude");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.HouseSplineExtrude
class CORDL_TYPE HouseSplineExtrude : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Capped, put=set_Capped)) bool  Capped;

 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Range, put=set_Range)) ::UnityEngine::Vector2  Range;

 __declspec(property(get=get_RebuildFrequency, put=set_RebuildFrequency)) int32_t  RebuildFrequency;

 __declspec(property(get=get_RebuildOnSplineChange, put=set_RebuildOnSplineChange)) bool  RebuildOnSplineChange;

 __declspec(property(get=get_SegmentsPerUnit, put=set_SegmentsPerUnit)) float_t  SegmentsPerUnit;

 __declspec(property(get=get_Sides, put=set_Sides)) int32_t  Sides;

 __declspec(property(get=get_Spline)) ::UnityEngine::Splines::Spline*  Spline;

 __declspec(property(get=get_Splines)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  Splines;

 __declspec(property(get=get_capped)) bool  capped;

 __declspec(property(get=get_container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  container;

/// @brief Field m_Capped, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Capped, put=__cordl_internal_set_m_Capped)) bool  m_Capped;

/// @brief Field m_Container, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Container, put=__cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Container;

/// @brief Field m_Mesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Mesh, put=__cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh>  m_Mesh;

/// @brief Field m_NextScheduledRebuild, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextScheduledRebuild, put=__cordl_internal_set_m_NextScheduledRebuild)) float_t  m_NextScheduledRebuild;

/// @brief Field m_Radius, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Radius, put=__cordl_internal_set_m_Radius)) float_t  m_Radius;

/// @brief Field m_Range, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Range, put=__cordl_internal_set_m_Range)) ::UnityEngine::Vector2  m_Range;

/// @brief Field m_RebuildFrequency, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RebuildFrequency, put=__cordl_internal_set_m_RebuildFrequency)) int32_t  m_RebuildFrequency;

/// @brief Field m_RebuildOnSplineChange, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RebuildOnSplineChange, put=__cordl_internal_set_m_RebuildOnSplineChange)) bool  m_RebuildOnSplineChange;

/// @brief Field m_RebuildRequested, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RebuildRequested, put=__cordl_internal_set_m_RebuildRequested)) bool  m_RebuildRequested;

/// @brief Field m_SegmentsPerUnit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SegmentsPerUnit, put=__cordl_internal_set_m_SegmentsPerUnit)) float_t  m_SegmentsPerUnit;

/// @brief Field m_Sides, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Sides, put=__cordl_internal_set_m_Sides)) int32_t  m_Sides;

/// @brief Field m_UpdateColliders, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UpdateColliders, put=__cordl_internal_set_m_UpdateColliders)) bool  m_UpdateColliders;

 __declspec(property(get=get_radius)) float_t  radius;

 __declspec(property(get=get_range)) ::UnityEngine::Vector2  range;

 __declspec(property(get=get_rebuildFrequency)) int32_t  rebuildFrequency;

 __declspec(property(get=get_rebuildOnSplineChange)) bool  rebuildOnSplineChange;

 __declspec(property(get=get_segmentsPerUnit)) float_t  segmentsPerUnit;

 __declspec(property(get=get_sides)) int32_t  sides;

 __declspec(property(get=get_spline)) ::UnityEngine::Splines::Spline*  spline;

/// @brief Method CreateMeshAsset, addr 0x1803cba40, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> CreateMeshAsset() ;

static inline ::UnityEngine::Splines::HouseSplineExtrude* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803cba90, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803cbae0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChanged, addr 0x1803cbb30, size 0x70, virtual false, abstract: false, final false
inline void OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method OnValidate, addr 0x1803cbba0, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Rebuild, addr 0x1803cbbb0, size 0x130, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method Reset, addr 0x1803cbce0, size 0x130, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0x1803cbe10, size 0xb0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803cbec0, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_m_Capped() const;

constexpr bool& __cordl_internal_get_m_Capped() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Container() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh() ;

constexpr float_t const& __cordl_internal_get_m_NextScheduledRebuild() const;

constexpr float_t& __cordl_internal_get_m_NextScheduledRebuild() ;

constexpr float_t const& __cordl_internal_get_m_Radius() const;

constexpr float_t& __cordl_internal_get_m_Radius() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Range() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Range() ;

constexpr int32_t const& __cordl_internal_get_m_RebuildFrequency() const;

constexpr int32_t& __cordl_internal_get_m_RebuildFrequency() ;

constexpr bool const& __cordl_internal_get_m_RebuildOnSplineChange() const;

constexpr bool& __cordl_internal_get_m_RebuildOnSplineChange() ;

constexpr bool const& __cordl_internal_get_m_RebuildRequested() const;

constexpr bool& __cordl_internal_get_m_RebuildRequested() ;

constexpr float_t const& __cordl_internal_get_m_SegmentsPerUnit() const;

constexpr float_t& __cordl_internal_get_m_SegmentsPerUnit() ;

constexpr int32_t const& __cordl_internal_get_m_Sides() const;

constexpr int32_t& __cordl_internal_get_m_Sides() ;

constexpr bool const& __cordl_internal_get_m_UpdateColliders() const;

constexpr bool& __cordl_internal_get_m_UpdateColliders() ;

constexpr void __cordl_internal_set_m_Capped(bool  value) ;

constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_m_NextScheduledRebuild(float_t  value) ;

constexpr void __cordl_internal_set_m_Radius(float_t  value) ;

constexpr void __cordl_internal_set_m_Range(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_RebuildFrequency(int32_t  value) ;

constexpr void __cordl_internal_set_m_RebuildOnSplineChange(bool  value) ;

constexpr void __cordl_internal_set_m_RebuildRequested(bool  value) ;

constexpr void __cordl_internal_set_m_SegmentsPerUnit(float_t  value) ;

constexpr void __cordl_internal_set_m_Sides(int32_t  value) ;

constexpr void __cordl_internal_set_m_UpdateColliders(bool  value) ;

/// @brief Method .ctor, addr 0x1803cbf00, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Capped, addr 0x1803cbf40, size 0x10, virtual false, abstract: false, final false
inline bool get_Capped() ;

/// @brief Method get_Container, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_Radius, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Range, addr 0x1803cbf50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Range() ;

/// @brief Method get_RebuildFrequency, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_RebuildFrequency() ;

/// @brief Method get_RebuildOnSplineChange, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_RebuildOnSplineChange() ;

/// @brief Method get_SegmentsPerUnit, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SegmentsPerUnit() ;

/// @brief Method get_Sides, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Sides() ;

/// @brief Method get_Spline, addr 0x1803cbf60, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_Spline() ;

/// @brief Method get_Splines, addr 0x1803cbf80, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* get_Splines() ;

/// @brief Method get_capped, addr 0x1803cbf40, size 0x10, virtual false, abstract: false, final false
inline bool get_capped() ;

/// @brief Method get_container, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_container() ;

/// @brief Method get_radius, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_range, addr 0x1803cbfa0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_range() ;

/// @brief Method get_rebuildFrequency, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_rebuildFrequency() ;

/// @brief Method get_rebuildOnSplineChange, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_rebuildOnSplineChange() ;

/// @brief Method get_segmentsPerUnit, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_segmentsPerUnit() ;

/// @brief Method get_sides, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sides() ;

/// @brief Method get_spline, addr 0x1803cbf60, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::Spline* get_spline() ;

/// @brief Method set_Capped, addr 0x1803cbfc0, size 0x10, virtual false, abstract: false, final false
inline void set_Capped(bool  value) ;

/// @brief Method set_Container, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_Radius, addr 0x1803cbfd0, size 0x10, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Range, addr 0x1803cbfe0, size 0x30, virtual false, abstract: false, final false
inline void set_Range(::UnityEngine::Vector2  value) ;

/// @brief Method set_RebuildFrequency, addr 0x1803cc010, size 0x10, virtual false, abstract: false, final false
inline void set_RebuildFrequency(int32_t  value) ;

/// @brief Method set_RebuildOnSplineChange, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_RebuildOnSplineChange(bool  value) ;

/// @brief Method set_SegmentsPerUnit, addr 0x1803cc030, size 0x10, virtual false, abstract: false, final false
inline void set_SegmentsPerUnit(float_t  value) ;

/// @brief Method set_Sides, addr 0x1803cc040, size 0x10, virtual false, abstract: false, final false
inline void set_Sides(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseSplineExtrude() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseSplineExtrude", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseSplineExtrude(HouseSplineExtrude && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseSplineExtrude", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseSplineExtrude(HouseSplineExtrude const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5789};

/// @brief Field m_Container, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Container;

/// @brief Field m_RebuildOnSplineChange, offset: 0x28, size: 0x1, def value: None
 bool  ___m_RebuildOnSplineChange;

/// @brief Field m_RebuildFrequency, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___m_RebuildFrequency;

/// @brief Field m_UpdateColliders, offset: 0x30, size: 0x1, def value: None
 bool  ___m_UpdateColliders;

/// @brief Field m_Sides, offset: 0x34, size: 0x4, def value: None
 int32_t  ___m_Sides;

/// @brief Field m_SegmentsPerUnit, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_SegmentsPerUnit;

/// @brief Field m_Capped, offset: 0x3c, size: 0x1, def value: None
 bool  ___m_Capped;

/// @brief Field m_Radius, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_Radius;

/// @brief Field m_Range, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Range;

/// @brief Field m_Mesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_Mesh;

/// @brief Field m_RebuildRequested, offset: 0x58, size: 0x1, def value: None
 bool  ___m_RebuildRequested;

/// @brief Field m_NextScheduledRebuild, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_NextScheduledRebuild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_Container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_RebuildOnSplineChange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_RebuildFrequency) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_UpdateColliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_Sides) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_SegmentsPerUnit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_Capped) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_Radius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_Range) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_Mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_RebuildRequested) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineExtrude, ___m_NextScheduledRebuild) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::HouseSplineExtrude) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Splines
