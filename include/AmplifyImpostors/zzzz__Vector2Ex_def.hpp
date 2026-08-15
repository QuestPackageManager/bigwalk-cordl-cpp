#pragma once
// IWYU pragma private; include "AmplifyImpostors/Vector2Ex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Ex)
namespace AmplifyImpostors {
class Vector2Ex___c;
}
namespace AmplifyImpostors {
class Vector2Ex___c__DisplayClass5_0;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace AmplifyImpostors {
class Vector2Ex;
}
namespace AmplifyImpostors {
class Vector2Ex___c;
}
namespace AmplifyImpostors {
class Vector2Ex___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::Vector2Ex*);
MARK_REF_T(::AmplifyImpostors::Vector2Ex___c*);
MARK_REF_T(::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Vector2Ex*, "AmplifyImpostors", "Vector2Ex");
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Vector2Ex___c*, "AmplifyImpostors", "Vector2Ex/<>c");
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0*, "AmplifyImpostors", "Vector2Ex/<>c__DisplayClass5_0");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.Vector2Ex/<>c
class CORDL_TYPE Vector2Ex___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::AmplifyImpostors::Vector2Ex___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Comparison_1<::UnityEngine::Vector2>*  __9__3_0;

static inline ::AmplifyImpostors::Vector2Ex___c* New_ctor() ;

/// @brief Method <ConvexHull>b__3_0, addr 0x1802db4b0, size 0x50, virtual false, abstract: false, final false
inline int32_t _ConvexHull_b__3_0(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::AmplifyImpostors::Vector2Ex___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityEngine::Vector2>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::AmplifyImpostors::Vector2Ex___c*  value) ;

static inline void setStaticF___9__3_0(::System::Comparison_1<::UnityEngine::Vector2>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2Ex___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2Ex___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2Ex___c(Vector2Ex___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Ex___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2Ex___c(Vector2Ex___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::Vector2Ex___c) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
// Dependencies System.Object, UnityEngine.Vector2
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.Vector2Ex/<>c__DisplayClass5_0
class CORDL_TYPE Vector2Ex___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field P, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_P, put=__cordl_internal_set_P)) ::ArrayW<::UnityEngine::Vector2>  P;

/// @brief Field smallestIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallestIndex, put=__cordl_internal_set_smallestIndex)) int32_t  smallestIndex;

static inline ::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <ReduceLeastSignificantVertice>b__0, addr 0x1802db500, size 0x30, virtual false, abstract: false, final false
inline bool _ReduceLeastSignificantVertice_b__0(::UnityEngine::Vector2  x) ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_P() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_P() ;

constexpr int32_t const& __cordl_internal_get_smallestIndex() const;

constexpr int32_t& __cordl_internal_get_smallestIndex() ;

constexpr void __cordl_internal_set_P(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_smallestIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2Ex___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2Ex___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2Ex___c__DisplayClass5_0(Vector2Ex___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Ex___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2Ex___c__DisplayClass5_0(Vector2Ex___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20965};

/// @brief Field P, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___P;

/// @brief Field smallestIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___smallestIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0, ___P) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0, ___smallestIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def AmplifyImpostors
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.Vector2Ex
class CORDL_TYPE Vector2Ex : public ::System::Object {
public:
// Declarations
using __c = ::AmplifyImpostors::Vector2Ex___c;

using __c__DisplayClass5_0 = ::AmplifyImpostors::Vector2Ex___c__DisplayClass5_0;

/// @brief Method ConvexHull, addr 0x1802db620, size 0x2a0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> ConvexHull(::ArrayW<::UnityEngine::Vector2>  P) ;

/// @brief Method Cross, addr 0x1802db8c0, size 0x60, virtual false, abstract: false, final false
static inline float_t Cross(::UnityEngine::Vector2  O, ::UnityEngine::Vector2  A, ::UnityEngine::Vector2  B) ;

/// @brief Method GetIntersectionPointCoordinates, addr 0x1802db920, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetIntersectionPointCoordinates(::UnityEngine::Vector2  A1, ::UnityEngine::Vector2  A2, ::UnityEngine::Vector2  B1, ::UnityEngine::Vector2  B2) ;

/// @brief Method OutsideBounds, addr 0x1802dba70, size 0x70, virtual false, abstract: false, final false
static inline float_t OutsideBounds(::UnityEngine::Vector2  P) ;

/// @brief Method ReduceLeastSignificantVertice, addr 0x1802dbae0, size 0x3c0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> ReduceLeastSignificantVertice(::ArrayW<::UnityEngine::Vector2>  P) ;

/// @brief Method ReduceVertices, addr 0x1802dbea0, size 0x150, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> ReduceVertices(::ArrayW<::UnityEngine::Vector2>  P, int32_t  maxVertices) ;

/// @brief Method ScaleAlongNormals, addr 0x1802dbff0, size 0x1b0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> ScaleAlongNormals(::ArrayW<::UnityEngine::Vector2>  P, float_t  scaleAmount) ;

/// @brief Method TriangleArea, addr 0x1802dc1a0, size 0x70, virtual false, abstract: false, final false
static inline float_t TriangleArea(::UnityEngine::Vector2  O, ::UnityEngine::Vector2  A, ::UnityEngine::Vector2  B) ;

/// @brief Method TriangleArea, addr 0x1802dc210, size 0x50, virtual false, abstract: false, final false
static inline float_t TriangleArea(::UnityEngine::Vector3  O, ::UnityEngine::Vector3  A, ::UnityEngine::Vector3  B) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2Ex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2Ex", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2Ex(Vector2Ex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Ex", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2Ex(Vector2Ex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::Vector2Ex) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
