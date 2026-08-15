#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplineInterpolation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineInterpolation)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest::Splines {
class SplinePoint;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class SplineInterpolation;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::SplineInterpolation*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::SplineInterpolation*, "WaveHarmonic.Crest.Splines", "SplineInterpolation");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.SplineInterpolation
class CORDL_TYPE SplineInterpolation : public ::System::Object {
public:
// Declarations
/// @brief Method GenerateCubicSplineHull, addr 0x18256e660, size 0xc00, virtual false, abstract: false, final false
static inline bool GenerateCubicSplineHull(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  splinePoints, ::System::Span_1<::UnityEngine::Vector3>  splinePointsAndTangents, bool  closed) ;

/// @brief Method InterpolateCubicPosition, addr 0x18256f260, size 0x240, virtual false, abstract: false, final false
static inline void InterpolateCubicPosition(float_t  splinePointCount, ::System::Span_1<::UnityEngine::Vector3>  splinePointsAndTangents, float_t  t, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method InterpolateLinearPosition, addr 0x18256f4a0, size 0x110, virtual false, abstract: false, final false
static inline void InterpolateLinearPosition(::ArrayW<::UnityEngine::Vector3>  points, float_t  t, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method TangentAfter, addr 0x18256f5b0, size 0x270, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TangentAfter(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  splinePoints, int32_t  idx, bool  closed) ;

/// @brief Method TangentBefore, addr 0x18256f5b0, size 0x270, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TangentBefore(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  splinePoints, int32_t  idx, bool  closed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineInterpolation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineInterpolation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineInterpolation(SplineInterpolation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineInterpolation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineInterpolation(SplineInterpolation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21094};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Splines::SplineInterpolation) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
