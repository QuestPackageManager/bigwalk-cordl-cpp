#pragma once
// IWYU pragma private; include "UnityEngine/Splines/BezierCurve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierCurve)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct BezierCurve;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::BezierCurve);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::BezierCurve, "UnityEngine.Splines", "BezierCurve");
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.BezierCurve
struct CORDL_TYPE BezierCurve {
public:
// Declarations
 __declspec(property(get=get_Tangent0, put=set_Tangent0)) ::Unity::Mathematics::float3  Tangent0;

 __declspec(property(get=get_Tangent1, put=set_Tangent1)) ::Unity::Mathematics::float3  Tangent1;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Splines::BezierCurve>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Splines::BezierCurve>*() ;

/// @brief Method Equals, addr 0x182160a30, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181f79fd0, size 0x100, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Splines::BezierCurve  other) ;

/// @brief Method FromTangent, addr 0x182160ac0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierCurve FromTangent(::Unity::Mathematics::float3  pointA, ::Unity::Mathematics::float3  tangentOutA, ::Unity::Mathematics::float3  pointB, ::Unity::Mathematics::float3  tangentInB) ;

/// @brief Method GetHashCode, addr 0x182160b70, size 0x120, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInvertedCurve, addr 0x182160c90, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierCurve GetInvertedCurve() ;

/// @brief Method Transform, addr 0x182160d10, size 0x260, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierCurve Transform(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method .ctor, addr 0x182160ff0, size 0x340, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::BezierKnot  a, ::UnityEngine::Splines::BezierKnot  b) ;

/// @brief Method .ctor, addr 0x182160f70, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1) ;

/// @brief Method .ctor, addr 0x182161330, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2) ;

/// @brief Method .ctor, addr 0x181ed5030, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3) ;

/// @brief Method get_Tangent0, addr 0x181464b60, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Tangent0() ;

/// @brief Method get_Tangent1, addr 0x182161470, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Tangent1() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Splines::BezierCurve>"
constexpr ::System::IEquatable_1<::UnityEngine::Splines::BezierCurve>* i___System__IEquatable_1___UnityEngine__Splines__BezierCurve_() ;

/// @brief Method op_Equality, addr 0x1821614f0, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Splines::BezierCurve  left, ::UnityEngine::Splines::BezierCurve  right) ;

/// @brief Method op_Inequality, addr 0x182161520, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Splines::BezierCurve  left, ::UnityEngine::Splines::BezierCurve  right) ;

/// @brief Method set_Tangent0, addr 0x182161560, size 0x70, virtual false, abstract: false, final false
inline void set_Tangent0(::Unity::Mathematics::float3  value) ;

/// @brief Method set_Tangent1, addr 0x1821615d0, size 0x70, virtual false, abstract: false, final false
inline void set_Tangent1(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BezierCurve() ;

// Ctor Parameters [CppParam { name: "P0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "P1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "P2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "P3", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr BezierCurve(::Unity::Mathematics::float3  P0, ::Unity::Mathematics::float3  P1, ::Unity::Mathematics::float3  P2, ::Unity::Mathematics::float3  P3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18677};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field P0, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  P0;

/// @brief Field P1, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  P1;

/// @brief Field P2, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  P2;

/// @brief Field P3, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::float3  P3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::BezierCurve, P0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::BezierCurve, P1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::BezierCurve, P2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::BezierCurve, P3) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::BezierCurve) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Splines
