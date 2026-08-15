#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplineMeshUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineMeshUtility)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class SplinePoint;
}
namespace WaveHarmonic::Crest::Splines {
class Spline;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class SplineMeshUtility;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::SplineMeshUtility*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::SplineMeshUtility*, "WaveHarmonic.Crest.Splines", "SplineMeshUtility");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.SplineMeshUtility
class CORDL_TYPE SplineMeshUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_SplinePoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SplinePoints, put=setStaticF_s_SplinePoints)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  s_SplinePoints;

/// @brief Method GenerateMeshFromSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool GenerateMeshFromSpline(::WaveHarmonic::Crest::Splines::Spline*  spline, ::UnityEngine::Transform*  transform, int32_t  subdivisions, float_t  radius, ::UnityEngine::Vector4  customDataDefault, ::by_ref<::UnityEngine::Mesh*>  mesh, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  verts) ;

/// @brief Method ResolveOverlaps, addr 0x18256fd10, size 0x160, virtual false, abstract: false, final false
static inline void ResolveOverlaps(::System::Span_1<::UnityEngine::Vector3>  points, ::System::Span_1<::UnityEngine::Vector3>  pointsOnSpline) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>* getStaticF_s_SplinePoints() ;

static inline void setStaticF_s_SplinePoints(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineMeshUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineMeshUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineMeshUtility(SplineMeshUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineMeshUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineMeshUtility(SplineMeshUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Splines::SplineMeshUtility) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
