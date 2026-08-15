#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineSlice_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineSlice_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
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
struct BezierCurve;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class ISpline;
}
namespace UnityEngine::Splines {
struct SplineRange;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineSlice_1__GetEnumerator_d__10;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
class SplineSlice_1__GetEnumerator_d__10;
}
namespace UnityEngine::Splines {
template<typename T>
struct SplineSlice_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10);
MARK_GEN_VAL_T(::UnityEngine::Splines::SplineSlice_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10, "UnityEngine.Splines", "SplineSlice`1/<GetEnumerator>d__10");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::SplineSlice_1, "UnityEngine.Splines", "SplineSlice`1");
// Dependencies Unity.Mathematics.float4x4, UnityEngine.Splines.SplineRange
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.SplineSlice`1<T>
struct CORDL_TYPE SplineSlice_1 {
public:
// Declarations
using _GetEnumerator_d__10 = ::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>;

 __declspec(property(get=get_Closed)) bool  Closed;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::BezierKnot  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr operator  ::UnityEngine::Splines::ISpline*() ;

/// @brief Method FlipTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot FlipTangents(::UnityEngine::Splines::BezierKnot  knot) ;

/// @brief Method GetCurve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierCurve GetCurve(int32_t  index) ;

/// @brief Method GetCurveInterpolation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance) ;

/// @brief Method GetCurveLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t GetCurveLength(int32_t  index) ;

/// @brief Method GetCurveUpVector, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float3 GetCurveUpVector(int32_t  index, float_t  t) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* GetEnumerator() ;

/// @brief Method GetLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t GetLength() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  spline, ::UnityEngine::Splines::SplineRange  range) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  spline, ::UnityEngine::Splines::SplineRange  range, ::Unity::Mathematics::float4x4  transform) ;

/// @brief Method get_Closed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_Closed() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierKnot get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* i___UnityEngine__Splines__ISpline() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineSlice_1() ;

// Ctor Parameters [CppParam { name: "Spline", ty: "T", modifiers: "", def_value: None }, CppParam { name: "Range", ty: "::UnityEngine::Splines::SplineRange", modifiers: "", def_value: None }, CppParam { name: "Transform", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None }]
constexpr SplineSlice_1(T  Spline, ::UnityEngine::Splines::SplineRange  Range, ::Unity::Mathematics::float4x4  Transform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18762};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Spline, offset: 0x0, size: 0x8, def value: None
 T  Spline;

/// @brief Field Range, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Splines::SplineRange  Range;

/// @brief Field Transform, offset: 0x14, size: 0x40, def value: None
 ::Unity::Mathematics::float4x4  Transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Splines.BezierKnot, UnityEngine.Splines.SplineSlice`1<T>
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineSlice`1/<GetEnumerator>d__10<T>
class CORDL_TYPE SplineSlice_1__GetEnumerator_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Splines_BezierKnot__get_Current)) ::UnityEngine::Splines::BezierKnot  System_Collections_Generic_IEnumerator_UnityEngine_Splines_BezierKnot__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x34 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Splines::BezierKnot  __2__current;

/// @brief Field <>4__this, offset 0x48, size 0x58 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Splines::SplineSlice_1<T>  __4__this;

/// @brief Field <c>5__3, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__c_5__3, put=__cordl_internal_set__c_5__3)) int32_t  _c_5__3;

/// @brief Field <i>5__2, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Splines::SplineSlice_1__GetEnumerator_d__10<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Splines.BezierKnot>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierKnot System_Collections_Generic_IEnumerator_UnityEngine_Splines_BezierKnot__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Splines::BezierKnot const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Splines::BezierKnot& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Splines::SplineSlice_1<T> const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Splines::SplineSlice_1<T>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__c_5__3() const;

constexpr int32_t& __cordl_internal_get__c_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Splines::BezierKnot  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Splines::SplineSlice_1<T>  value) ;

constexpr void __cordl_internal_set__c_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineSlice_1__GetEnumerator_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineSlice_1__GetEnumerator_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineSlice_1__GetEnumerator_d__10(SplineSlice_1__GetEnumerator_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineSlice_1__GetEnumerator_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineSlice_1__GetEnumerator_d__10(SplineSlice_1__GetEnumerator_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18761};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x34, def value: None
 ::UnityEngine::Splines::BezierKnot  _____2__current;

/// @brief Field <>4__this, offset: 0x48, size: 0x58, def value: None
 ::UnityEngine::Splines::SplineSlice_1<T>  _____4__this;

/// @brief Field <i>5__2, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____i_5__2;

/// @brief Field <c>5__3, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____c_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
