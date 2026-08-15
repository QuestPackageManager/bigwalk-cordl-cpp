#pragma once
// IWYU pragma private; include "UnityEngine/Splines/CurveUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveUtility)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct BezierCurve;
}
namespace UnityEngine::Splines {
struct CurveUtility_FrenetFrame;
}
namespace UnityEngine::Splines {
struct DistanceToInterpolation;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine::Splines {
class CurveUtility;
}
namespace UnityEngine::Splines {
struct CurveUtility_FrenetFrame;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::CurveUtility*);
MARK_VAL_T(::UnityEngine::Splines::CurveUtility_FrenetFrame);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::CurveUtility*, "UnityEngine.Splines", "CurveUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::CurveUtility_FrenetFrame, "UnityEngine.Splines", "CurveUtility/FrenetFrame");
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.CurveUtility/FrenetFrame
struct CORDL_TYPE CurveUtility_FrenetFrame {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_FrenetFrame() ;

// Ctor Parameters [CppParam { name: "origin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "tangent", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "binormal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr CurveUtility_FrenetFrame(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float3  binormal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field origin, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  origin;

/// @brief Field tangent, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  tangent;

/// @brief Field normal, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  normal;

/// @brief Field binormal, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::float3  binormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::CurveUtility_FrenetFrame, origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::CurveUtility_FrenetFrame, tangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::CurveUtility_FrenetFrame, normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::CurveUtility_FrenetFrame, binormal) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::CurveUtility_FrenetFrame) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Splines.DistanceToInterpolation
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.CurveUtility
class CORDL_TYPE CurveUtility : public ::System::Object {
public:
// Declarations
using FrenetFrame = ::UnityEngine::Splines::CurveUtility_FrenetFrame;

/// @brief Field k_DistanceLUT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DistanceLUT, put=setStaticF_k_DistanceLUT)) ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  k_DistanceLUT;

/// @brief Method ApproximateLength, addr 0x182162ac0, size 0x130, virtual false, abstract: false, final false
static inline float_t ApproximateLength(::UnityEngine::Splines::BezierCurve  curve) ;

/// @brief Method Approximately, addr 0x182162bf0, size 0x80, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method CalculateCurveLengths, addr 0x182162e40, size 0x80, virtual false, abstract: false, final false
static inline void CalculateCurveLengths(::UnityEngine::Splines::BezierCurve  curve, ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  lookupTable) ;

/// @brief Method CalculateCurveLengths, addr 0x182162c70, size 0x1d0, virtual false, abstract: false, final false
static inline void CalculateCurveLengths(::UnityEngine::Splines::BezierCurve  curve, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>  lookupTable) ;

/// @brief Method CalculateLength, addr 0x182162ec0, size 0x190, virtual false, abstract: false, final false
static inline float_t CalculateLength(::UnityEngine::Splines::BezierCurve  curve, int32_t  resolution) ;

/// @brief Method DeCasteljau, addr 0x182163050, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 DeCasteljau(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateAcceleration, addr 0x182163220, size 0x190, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateAcceleration(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateCurvature, addr 0x1821633b0, size 0x1c0, virtual false, abstract: false, final false
static inline float_t EvaluateCurvature(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluatePosition, addr 0x182163570, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluatePosition(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateTangent, addr 0x182163740, size 0x1c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateTangent(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateUpVector, addr 0x182163900, size 0x10e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateUpVector(::UnityEngine::Splines::BezierCurve  curve, float_t  t, ::Unity::Mathematics::float3  startUp, ::Unity::Mathematics::float3  endUp, bool  fixEndUpMismatch) ;

/// @brief Method EvaluateUpVectors, addr 0x1821649e0, size 0x160, virtual false, abstract: false, final false
static inline void EvaluateUpVectors(::UnityEngine::Splines::BezierCurve  curve, ::Unity::Mathematics::float3  startUp, ::Unity::Mathematics::float3  endUp, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  upVectors) ;

/// @brief Method GetDistanceToInterpolation, addr 0x182164b40, size 0xc0, virtual false, abstract: false, final false
static inline float_t GetDistanceToInterpolation(::UnityEngine::Splines::BezierCurve  curve, float_t  distance) ;

/// @brief Method GetDistanceToInterpolation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline float_t GetDistanceToInterpolation(T  lut, float_t  distance) ;

/// @brief Method GetNearestPoint, addr 0x182164f40, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetNearestPoint(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Ray  ray, int32_t  resolution) ;

/// @brief Method GetNearestPoint, addr 0x182164c00, size 0x340, virtual false, abstract: false, final false
static inline float_t GetNearestPoint(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Ray  ray, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<float_t>  interpolation, int32_t  resolution) ;

/// @brief Method GetNextRotationMinimizingFrame, addr 0x182164fc0, size 0x450, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::CurveUtility_FrenetFrame GetNextRotationMinimizingFrame(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Splines::CurveUtility_FrenetFrame  previousRMFrame, float_t  nextRMFrameT) ;

/// @brief Method Split, addr 0x182165410, size 0x340, virtual false, abstract: false, final false
static inline void Split(::UnityEngine::Splines::BezierCurve  curve, float_t  t, ::by_ref<::UnityEngine::Splines::BezierCurve>  left, ::by_ref<::UnityEngine::Splines::BezierCurve>  right) ;

static inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> getStaticF_k_DistanceLUT() ;

static inline void setStaticF_k_DistanceLUT(::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility(CurveUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility(CurveUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18682};

/// @brief Field k_Epsilon offset 0xffffffff size 0x4
static constexpr float_t  k_Epsilon{static_cast<float_t>(0.0001f)};

/// @brief Field k_NormalsPerCurve offset 0xffffffff size 0x4
static constexpr int32_t  k_NormalsPerCurve{static_cast<int32_t>(0x10)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::CurveUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
