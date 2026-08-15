#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineFactory)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Splines {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineFactory;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineFactory*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineFactory*, "UnityEngine.Splines", "SplineFactory");
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineFactory
class CORDL_TYPE SplineFactory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateCatmullRom, addr 0x18216d910, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateCatmullRom(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, bool  closed) ;

/// @brief Method CreateCatmullRom, addr 0x18216d440, size 0x4d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateCatmullRom(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, ::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*  rotations, bool  closed) ;

/// @brief Method CreateCircle, addr 0x18216d920, size 0x360, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateCircle(float_t  radius) ;

/// @brief Method CreateHelix, addr 0x18216dc80, size 0xb50, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateHelix(float_t  radius, float_t  height, int32_t  revolutions) ;

/// @brief Method CreateLinear, addr 0x18216e7d0, size 0x200, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateLinear(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, bool  closed) ;

/// @brief Method CreateLinear, addr 0x18216e9d0, size 0x230, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateLinear(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, ::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*  rotations, bool  closed) ;

/// @brief Method CreatePolygon, addr 0x18216ec00, size 0x2b0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreatePolygon(float_t  edgeSize, int32_t  sides) ;

/// @brief Method CreateRoundedCornerSquare, addr 0x18216eeb0, size 0xa30, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateRoundedCornerSquare(float_t  size, float_t  cornerRadius) ;

/// @brief Method CreateRoundedSquare, addr 0x18216f8e0, size 0x6a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateRoundedSquare(float_t  radius, float_t  rounding) ;

/// @brief Method CreateSquare, addr 0x18216ff80, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateSquare(float_t  size) ;

/// @brief Method CreateStarPolygon, addr 0x1821700f0, size 0x400, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* CreateStarPolygon(float_t  edgeSize, int32_t  corners, float_t  concavity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineFactory(SplineFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineFactory(SplineFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18730};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineFactory) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
