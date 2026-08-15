#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplinePath_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplinePath_1)
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
namespace UnityEngine::Splines {
struct BezierCurve;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class IHasEmptyCurves;
}
namespace UnityEngine::Splines {
class ISpline;
}
namespace UnityEngine::Splines {
struct SplineKnotIndex;
}
namespace UnityEngine::Splines {
template<typename T>
class SplinePath_1__GetEnumerator_d__7;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
class SplinePath_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplinePath_1__GetEnumerator_d__7;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplinePath_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplinePath_1__GetEnumerator_d__7);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplinePath_1, "UnityEngine.Splines", "SplinePath`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplinePath_1__GetEnumerator_d__7, "UnityEngine.Splines", "SplinePath`1/<GetEnumerator>d__7");
// Dependencies System.Object, UnityEngine.Splines.BezierKnot
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplinePath`1/<GetEnumerator>d__7<T>
class CORDL_TYPE SplinePath_1__GetEnumerator_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Splines_BezierKnot__get_Current)) ::UnityEngine::Splines::BezierKnot  System_Collections_Generic_IEnumerator_UnityEngine_Splines_BezierKnot__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x34 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Splines::BezierKnot  __2__current;

/// @brief Field <>4__this, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Splines::SplinePath_1<T>*  __4__this;

/// @brief Field <>7__wrap1, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::ArrayW<T>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) int32_t  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*  __7__wrap3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Splines::SplinePath_1__GetEnumerator_d__7<T>* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityEngine::Splines::SplinePath_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Splines::SplinePath_1<T>*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<T> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<T>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* const& __cordl_internal_get___7__wrap3() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*& __cordl_internal_get___7__wrap3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Splines::BezierKnot  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Splines::SplinePath_1<T>*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set___7__wrap2(int32_t  value) ;

constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

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
constexpr SplinePath_1__GetEnumerator_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePath_1__GetEnumerator_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePath_1__GetEnumerator_d__7(SplinePath_1__GetEnumerator_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePath_1__GetEnumerator_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePath_1__GetEnumerator_d__7(SplinePath_1__GetEnumerator_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18755};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x34, def value: None
 ::UnityEngine::Splines::BezierKnot  _____2__current;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Splines::SplinePath_1<T>*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<T>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x58, size: 0x4, def value: None
 int32_t  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*  _____7__wrap3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplinePath`1<T>
class CORDL_TYPE SplinePath_1 : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__7 = ::UnityEngine::Splines::SplinePath_1__GetEnumerator_d__7<T>;

 __declspec(property(get=get_Closed)) bool  Closed;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_EmptyCurves)) ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  EmptyCurves;

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::BezierKnot  Item[];

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::BezierKnot  Item[];

 __declspec(property(get=get_Slices, put=set_Slices)) ::System::Collections::Generic::IReadOnlyList_1<T>*  Slices;

/// @brief Field m_Splines, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Splines, put=__cordl_internal_set_m_Splines)) ::ArrayW<T>  m_Splines;

/// @brief Field m_Splits, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Splits, put=__cordl_internal_set_m_Splits)) ::ArrayW<int32_t>  m_Splits;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Splines::IHasEmptyCurves"
constexpr operator  ::UnityEngine::Splines::IHasEmptyCurves*() noexcept;

/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr operator  ::UnityEngine::Splines::ISpline*() noexcept;

/// @brief Method BuildSplitData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BuildSplitData() ;

/// @brief Method GetBranchKnotIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineKnotIndex GetBranchKnotIndex(int32_t  knot) ;

/// @brief Method GetCurve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierCurve GetCurve(int32_t  knot) ;

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

/// @brief Method IsDegenerate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsDegenerate(int32_t  index) ;

static inline ::UnityEngine::Splines::SplinePath_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  slices) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_m_Splines() const;

constexpr ::ArrayW<T>& __cordl_internal_get_m_Splines() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_Splits() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_Splits() ;

constexpr void __cordl_internal_set_m_Splines(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_m_Splits(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  slices) ;

/// @brief Method get_Closed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_Closed() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_EmptyCurves, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* get_EmptyCurves() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierKnot get_Item(::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierKnot get_Item(int32_t  index) ;

/// @brief Method get_Slices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<T>* get_Slices() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::Splines::IHasEmptyCurves"
constexpr ::UnityEngine::Splines::IHasEmptyCurves* i___UnityEngine__Splines__IHasEmptyCurves() noexcept;

/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* i___UnityEngine__Splines__ISpline() noexcept;

/// @brief Method set_Slices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Slices(::System::Collections::Generic::IReadOnlyList_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePath_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePath_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePath_1(SplinePath_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePath_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePath_1(SplinePath_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18756};

/// @brief Field m_Splines, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___m_Splines;

/// @brief Field m_Splits, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_Splits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
