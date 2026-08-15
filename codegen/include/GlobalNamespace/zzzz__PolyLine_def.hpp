#pragma once
// IWYU pragma private; include "GlobalNamespace/PolyLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyLine)
namespace GlobalNamespace {
class PolyLine_ClosestPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PolyLine;
}
namespace GlobalNamespace {
class PolyLine_ClosestPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PolyLine*);
MARK_REF_T(::GlobalNamespace::PolyLine_ClosestPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PolyLine*, "", "PolyLine");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PolyLine_ClosestPoint*, "", "PolyLine/ClosestPoint");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PolyLine/ClosestPoint
class CORDL_TYPE PolyLine_ClosestPoint : public ::System::Object {
public:
// Declarations
/// @brief Field DistanceSquared, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DistanceSquared, put=__cordl_internal_set_DistanceSquared)) float_t  DistanceSquared;

/// @brief Field Point, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_Point, put=__cordl_internal_set_Point)) ::UnityEngine::Vector3  Point;

/// @brief Field PrevIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrevIndex, put=__cordl_internal_set_PrevIndex)) int32_t  PrevIndex;

/// @brief Field SegmentProgress, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SegmentProgress, put=__cordl_internal_set_SegmentProgress)) float_t  SegmentProgress;

static inline ::GlobalNamespace::PolyLine_ClosestPoint* New_ctor() ;

constexpr float_t const& __cordl_internal_get_DistanceSquared() const;

constexpr float_t& __cordl_internal_get_DistanceSquared() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Point() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Point() ;

constexpr int32_t const& __cordl_internal_get_PrevIndex() const;

constexpr int32_t& __cordl_internal_get_PrevIndex() ;

constexpr float_t const& __cordl_internal_get_SegmentProgress() const;

constexpr float_t& __cordl_internal_get_SegmentProgress() ;

constexpr void __cordl_internal_set_DistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set_Point(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PrevIndex(int32_t  value) ;

constexpr void __cordl_internal_set_SegmentProgress(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyLine_ClosestPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyLine_ClosestPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyLine_ClosestPoint(PolyLine_ClosestPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyLine_ClosestPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyLine_ClosestPoint(PolyLine_ClosestPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17633};

/// @brief Field Point, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Point;

/// @brief Field DistanceSquared, offset: 0x1c, size: 0x4, def value: None
 float_t  ___DistanceSquared;

/// @brief Field SegmentProgress, offset: 0x20, size: 0x4, def value: None
 float_t  ___SegmentProgress;

/// @brief Field PrevIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___PrevIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PolyLine_ClosestPoint, ___Point) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLine_ClosestPoint, ___DistanceSquared) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLine_ClosestPoint, ___SegmentProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLine_ClosestPoint, ___PrevIndex) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PolyLine_ClosestPoint) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PolyLine::ClosestPoint, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PolyLine
class CORDL_TYPE PolyLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClosestPoint = ::GlobalNamespace::PolyLine_ClosestPoint;

 __declspec(property(get=get_ClosestPoints, put=set_ClosestPoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  ClosestPoints;

 __declspec(property(get=get_Points, put=set_Points)) ::ArrayW<::UnityEngine::Vector3>  Points;

 __declspec(property(get=get_Transforms, put=set_Transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  Transforms;

/// @brief Field <ClosestPoints>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClosestPoints_k__BackingField, put=__cordl_internal_set__ClosestPoints_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  _ClosestPoints_k__BackingField;

/// @brief Field _closestPointsUnsorted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__closestPointsUnsorted, put=__cordl_internal_set__closestPointsUnsorted)) ::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*>  _closestPointsUnsorted;

/// @brief Field _points, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::ArrayW<::UnityEngine::Vector3>  _points;

/// @brief Field _transforms, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transforms, put=__cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _transforms;

/// @brief Method Awake, addr 0x1804a1c10, size 0x270, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestPointOnLine, addr 0x1804a1e80, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnLine(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  line0, ::UnityEngine::Vector3  line1, ::by_ref<float_t>  t) ;

/// @brief Method GetClosestPoint, addr 0x1804a1fe0, size 0x3c0, virtual false, abstract: false, final false
inline ::GlobalNamespace::PolyLine_ClosestPoint* GetClosestPoint(::UnityEngine::Vector3  testPosWorld) ;

/// @brief Method GetClosestPoints, addr 0x1804a23a0, size 0x4c0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* GetClosestPoints(::UnityEngine::Vector3  testPosWorld) ;

static inline ::GlobalNamespace::PolyLine* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Update, addr 0x1804a2860, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* const& __cordl_internal_get__ClosestPoints_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*& __cordl_internal_get__ClosestPoints_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*> const& __cordl_internal_get__closestPointsUnsorted() const;

constexpr ::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*>& __cordl_internal_get__closestPointsUnsorted() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__points() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__transforms() ;

constexpr void __cordl_internal_set__ClosestPoints_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value) ;

constexpr void __cordl_internal_set__closestPointsUnsorted(::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*>  value) ;

constexpr void __cordl_internal_set__points(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1804a29a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClosestPoints, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* get_ClosestPoints() ;

/// @brief Method get_Points, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_Points() ;

/// @brief Method get_Transforms, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_Transforms() ;

/// @brief Method set_ClosestPoints, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_ClosestPoints(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value) ;

/// @brief Method set_Points, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Points(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_Transforms, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Transforms(::ArrayW<::UnityEngine::Transform*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyLine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyLine(PolyLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyLine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyLine(PolyLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17634};

/// @brief Field _points, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____points;

/// @brief Field _transforms, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____transforms;

/// @brief Field <ClosestPoints>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  ____ClosestPoints_k__BackingField;

/// @brief Field _closestPointsUnsorted, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*>  ____closestPointsUnsorted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PolyLine, ____points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLine, ____transforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLine, ____ClosestPoints_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLine, ____closestPointsUnsorted) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PolyLine) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
