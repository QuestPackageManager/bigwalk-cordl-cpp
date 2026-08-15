#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineUtility)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class ISplineContainer;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineInfo;
}
namespace UnityEngine::Splines {
struct SplineKnotIndex;
}
namespace UnityEngine::Splines {
struct SplineUtility_Segment;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine::Splines {
struct TangentMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineUtility;
}
namespace UnityEngine::Splines {
struct SplineUtility_Segment;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineUtility*);
MARK_VAL_T(::UnityEngine::Splines::SplineUtility_Segment);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineUtility*, "UnityEngine.Splines", "SplineUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineUtility_Segment, "UnityEngine.Splines", "SplineUtility/Segment");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineUtility/Segment
struct CORDL_TYPE SplineUtility_Segment {
public:
// Declarations
/// @brief Method .ctor, addr 0x1802d5750, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  start, float_t  length) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineUtility_Segment() ;

// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None }]
constexpr SplineUtility_Segment(float_t  start, float_t  length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field start, offset: 0x0, size: 0x4, def value: None
 float_t  start;

/// @brief Field length, offset: 0x4, size: 0x4, def value: None
 float_t  length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineUtility_Segment, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineUtility_Segment, length) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineUtility_Segment) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineUtility
class CORDL_TYPE SplineUtility : public ::System::Object {
public:
// Declarations
using Segment = ::UnityEngine::Splines::SplineUtility_Segment;

/// @brief Method AddSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Splines::Spline* AddSpline(T  container) ;

/// @brief Method AddSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AddSpline(T  container, ::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method AreKnotLinked, addr 0x18217cf10, size 0x140, virtual false, abstract: false, final false
static inline bool AreKnotLinked(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB) ;

/// @brief Method AreTangentsModifiable, addr 0x18217d050, size 0x20, virtual false, abstract: false, final false
static inline bool AreTangentsModifiable(::UnityEngine::Splines::TangentMode  mode) ;

/// @brief Method Bernstein, addr 0x18217d070, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Bernstein(float_t  t, ::ArrayW<::Unity::Mathematics::float3>  bezier, int32_t  degree) ;

/// @brief Method CalculateCenterTangent, addr 0x18217d1a0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 CalculateCenterTangent(::Unity::Mathematics::float3  prevPoint, ::Unity::Mathematics::float3  centerPoint, ::Unity::Mathematics::float3  nextPoint) ;

/// @brief Method CalculateLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t CalculateLength(T  spline, ::Unity::Mathematics::float4x4  transform) ;

/// @brief Method CalculatePreferredNormalForDirection, addr 0x18217d2e0, size 0x580, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 CalculatePreferredNormalForDirection(::Unity::Mathematics::float3  splineDirection) ;

/// @brief Method CalculateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 CalculateUpVector(T  spline, int32_t  curveIndex, float_t  curveT) ;

/// @brief Method CalculateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 CalculateUpVector(T  spline, float_t  t) ;

/// @brief Method ComputeMaxError, addr 0x18217d860, size 0x220, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<float_t,int32_t> ComputeMaxError(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, ::ArrayW<::Unity::Mathematics::float3>  positions, float_t  errorThreshold, bool  splineClosed) ;

/// @brief Method ConvertIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t ConvertIndexUnit(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit) ;

/// @brief Method ConvertIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t ConvertIndexUnit(T  spline, float_t  value, ::UnityEngine::Splines::PathIndexUnit  fromPathUnit, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit) ;

/// @brief Method ConvertNormalizedIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t ConvertNormalizedIndexUnit(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit) ;

/// @brief Method CopyKnotLinks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyKnotLinks(T  container, int32_t  srcSplineIndex, int32_t  destSplineIndex) ;

/// @brief Method CurveToSplineT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t CurveToSplineT(T  spline, float_t  curve) ;

/// @brief Method DuplicateKnot, addr 0x18217da80, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::SplineKnotIndex DuplicateKnot(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  originalKnot, int32_t  targetIndex) ;

/// @brief Method DuplicateSpline, addr 0x18217db70, size 0x2f0, virtual false, abstract: false, final false
static inline void DuplicateSpline(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  fromKnot, ::UnityEngine::Splines::SplineKnotIndex  toKnot, ::by_ref<int32_t>  newSplineIndex) ;

/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool Evaluate(T  spline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector) ;

/// @brief Method EvaluateAcceleration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 EvaluateAcceleration(T  spline, float_t  t) ;

/// @brief Method EvaluateCurvature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t EvaluateCurvature(T  spline, float_t  t) ;

/// @brief Method EvaluateCurvatureCenter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 EvaluateCurvatureCenter(T  spline, float_t  t) ;

/// @brief Method EvaluateNurbs, addr 0x18217de60, size 0x240, virtual false, abstract: false, final false
static inline bool EvaluateNurbs(float_t  t, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  controlPoints, ::System::Collections::Generic::List_1<double_t>*  knotVector, int32_t  order, ::by_ref<::Unity::Mathematics::float3>  position) ;

/// @brief Method EvaluatePosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 EvaluatePosition(T  spline, float_t  t) ;

/// @brief Method EvaluateTangent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 EvaluateTangent(T  spline, float_t  t) ;

/// @brief Method EvaluateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 EvaluateUpVector(T  spline, float_t  t) ;

/// @brief Method EvaluateUpVectorsForCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EvaluateUpVectorsForCurve(T  spline, int32_t  curveIndex, ::ArrayW<::Unity::Mathematics::float3>  upVectors) ;

/// @brief Method EvaluateUpVectorsForCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EvaluateUpVectorsForCurve(T  spline, int32_t  curveIndex, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  upVectors) ;

/// @brief Method FitSplineToPoints, addr 0x18217f4e0, size 0xb60, virtual false, abstract: false, final false
static inline bool FitSplineToPoints(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  points, float_t  errorThreshold, bool  closed, ::by_ref<::UnityEngine::Splines::Spline*>  spline) ;

/// @brief Method FitSplineToPointsStepInternal, addr 0x18217e0a0, size 0x1440, virtual false, abstract: false, final false
static inline bool FitSplineToPointsStepInternal(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, ::Unity::Mathematics::float3  leftTangent, ::Unity::Mathematics::float3  rightTangent, float_t  errorThreshold, bool  closed, bool  splineClosed, ::by_ref<::UnityEngine::Splines::Spline*>  spline) ;

/// @brief Method GenerateSplineFromTValues, addr 0x182180040, size 0xc70, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* GenerateSplineFromTValues(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, bool  closed, ::ArrayW<float_t>  tValues, ::Unity::Mathematics::float3  leftTangent, ::Unity::Mathematics::float3  rightTangent) ;

/// @brief Method GetAutoSmoothKnot, addr 0x182180fe0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next) ;

/// @brief Method GetAutoSmoothKnot, addr 0x182180f40, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, ::Unity::Mathematics::float3  normal) ;

/// @brief Method GetAutoSmoothKnot, addr 0x182180cb0, size 0x290, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, ::Unity::Mathematics::float3  normal, float_t  tension) ;

/// @brief Method GetAutoSmoothTangent, addr 0x182181190, size 0x300, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  current, ::Unity::Mathematics::float3  next, float_t  tension) ;

/// @brief Method GetAutoSmoothTangent, addr 0x182181090, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, float_t  tension) ;

/// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Bounds GetBounds(T  spline) ;

/// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Bounds GetBounds(T  spline, ::Unity::Mathematics::float4x4  transform) ;

/// @brief Method GetCatmullRomTangent, addr 0x182181490, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetCatmullRomTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next) ;

/// @brief Method GetCurveCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetCurveCount(T  spline) ;

/// @brief Method GetExplicitLinearTangent, addr 0x182181580, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetExplicitLinearTangent(::UnityEngine::Splines::BezierKnot  from, ::UnityEngine::Splines::BezierKnot  to) ;

/// @brief Method GetExplicitLinearTangent, addr 0x182181740, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetExplicitLinearTangent(::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  to) ;

/// @brief Method GetKnotRotation, addr 0x1821817a0, size 0x7d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion GetKnotRotation(::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  normal) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Splines::SplineUtility_Segment GetNearestPoint(T  spline, ::Unity::Mathematics::float3  point, ::UnityEngine::Splines::SplineUtility_Segment  range, ::by_ref<float_t>  distance, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  time, int32_t  segments) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Splines::SplineUtility_Segment GetNearestPoint(T  spline, ::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::UnityEngine::Splines::SplineUtility_Segment  range, ::by_ref<float_t>  distance, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  time, int32_t  segments) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t GetNearestPoint(T  spline, ::Unity::Mathematics::float3  point, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  t, int32_t  resolution, int32_t  iterations) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t GetNearestPoint(T  spline, ::UnityEngine::Ray  ray, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  t, int32_t  resolution, int32_t  iterations) ;

/// @brief Method GetNormalizedInterpolation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t GetNormalizedInterpolation(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  originalPathUnit) ;

/// @brief Method GetNurbsBasisFunctions, addr 0x182181f70, size 0x2f0, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> GetNurbsBasisFunctions(int32_t  degree, float_t  t, ::System::Collections::Generic::List_1<double_t>*  knotVector, int32_t  span) ;

/// @brief Method GetPointAtLinearDistance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Mathematics::float3 GetPointAtLinearDistance(T  spline, float_t  fromT, float_t  relativeDistance, ::by_ref<float_t>  resultPointT) ;

/// @brief Method GetSegmentCount, addr 0x182182260, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetSegmentCount(float_t  length, int32_t  resolution) ;

/// @brief Method GetSubdivisionCount, addr 0x182182260, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetSubdivisionCount(float_t  length, int32_t  resolution) ;

/// @brief Method GetUniformAutoSmoothTangent, addr 0x1821822c0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetUniformAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, float_t  tension) ;

/// @brief Method IsIndexValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsIndexValid(T  container, ::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method JoinSplinesOnKnots, addr 0x182182310, size 0x940, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::SplineKnotIndex JoinSplinesOnKnots(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  mainKnot, ::UnityEngine::Splines::SplineKnotIndex  otherKnot) ;

/// @brief Method LinkKnots, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LinkKnots(T  container, ::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB) ;

/// @brief Method Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Splines::BezierKnot Next(T  spline, int32_t  index) ;

/// @brief Method NextIndex, addr 0x182182c50, size 0x20, virtual false, abstract: false, final false
static inline int32_t NextIndex(int32_t  index, int32_t  count, bool  wrap) ;

/// @brief Method NextIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t NextIndex(T  spline, int32_t  index) ;

/// @brief Method Previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Splines::BezierKnot Previous(T  spline, int32_t  index) ;

/// @brief Method PreviousIndex, addr 0x182182c70, size 0x20, virtual false, abstract: false, final false
static inline int32_t PreviousIndex(int32_t  index, int32_t  count, bool  wrap) ;

/// @brief Method PreviousIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t PreviousIndex(T  spline, int32_t  index) ;

/// @brief Method ReducePoints, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* ReducePoints(T  line, float_t  epsilon) ;

/// @brief Method ReducePoints, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ReducePoints(T  line, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  results, float_t  epsilon) ;

/// @brief Method RemoveSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool RemoveSpline(T  container, ::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method RemoveSplineAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool RemoveSplineAt(T  container, int32_t  splineIndex) ;

/// @brief Method ReorderSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ReorderSpline(T  container, int32_t  previousSplineIndex, int32_t  newSplineIndex) ;

/// @brief Method ReverseFlow, addr 0x182182c90, size 0x50, virtual false, abstract: false, final false
static inline void ReverseFlow(::UnityEngine::Splines::ISplineContainer*  container, int32_t  splineIndex) ;

/// @brief Method ReverseFlow, addr 0x182182ce0, size 0x6d0, virtual false, abstract: false, final false
static inline void ReverseFlow(::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method ReverseFlow, addr 0x1821833b0, size 0xa30, virtual false, abstract: false, final false
static inline void ReverseFlow(::UnityEngine::Splines::SplineInfo  splineInfo) ;

/// @brief Method SetLinkedKnotPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetLinkedKnotPosition(T  container, ::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method SetPivot, addr 0x182183de0, size 0x200, virtual false, abstract: false, final false
static inline void SetPivot(::UnityEngine::Splines::SplineContainer*  container, ::UnityEngine::Vector3  position) ;

/// @brief Method SplineToCurveT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t SplineToCurveT(T  spline, float_t  splineT, ::by_ref<float_t>  curveT) ;

/// @brief Method SplineToCurveT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t SplineToCurveT(T  spline, float_t  splineT, ::by_ref<float_t>  curveT, bool  useLUT) ;

/// @brief Method SplitSplineOnKnot, addr 0x182183fe0, size 0x340, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::SplineKnotIndex SplitSplineOnKnot(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  knotInfo) ;

/// @brief Method UnlinkKnots, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void UnlinkKnots(T  container, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*  knots) ;

/// @brief Method WrapInterpolation, addr 0x182184320, size 0xa0, virtual false, abstract: false, final false
static inline float_t WrapInterpolation(float_t  t, bool  closed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineUtility(SplineUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineUtility(SplineUtility const& ) = delete;

/// @brief Field CatmullRomTension offset 0xffffffff size 0x4
static constexpr float_t  CatmullRomTension{static_cast<float_t>(0.5f)};

/// @brief Field DefaultTension offset 0xffffffff size 0x4
static constexpr float_t  DefaultTension{static_cast<float_t>(0.33333334f)};

/// @brief Field DrawResolutionDefault offset 0xffffffff size 0x4
static constexpr int32_t  DrawResolutionDefault{static_cast<int32_t>(0xa)};

/// @brief Field PickResolutionDefault offset 0xffffffff size 0x4
static constexpr int32_t  PickResolutionDefault{static_cast<int32_t>(0x4)};

/// @brief Field PickResolutionMax offset 0xffffffff size 0x4
static constexpr int32_t  PickResolutionMax{static_cast<int32_t>(0x40)};

/// @brief Field PickResolutionMin offset 0xffffffff size 0x4
static constexpr int32_t  PickResolutionMin{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18766};

/// @brief Field k_SubdivisionCountMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SubdivisionCountMax{static_cast<int32_t>(0x400)};

/// @brief Field k_SubdivisionCountMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SubdivisionCountMin{static_cast<int32_t>(0x6)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
