#pragma once
// IWYU pragma private; include "UnityEngine/Splines/NativeSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSpline)
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
namespace Unity::Collections {
struct Allocator;
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
template<typename T>
struct NativeSpline_Slice_1;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct NativeSpline;
}
namespace UnityEngine::Splines {
template<typename T>
struct NativeSpline_Slice_1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::NativeSpline);
MARK_GEN_VAL_T(::UnityEngine::Splines::NativeSpline_Slice_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::NativeSpline, "UnityEngine.Splines", "NativeSpline");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::NativeSpline_Slice_1, "UnityEngine.Splines", "NativeSpline/Slice`1");
// Dependencies Unity.Collections.NativeSlice`1<T>
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.NativeSpline/Slice`1<T>
struct CORDL_TYPE NativeSpline_Slice_1 {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<T>  array, int32_t  start, int32_t  count) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeSpline_Slice_1() ;

// Ctor Parameters [CppParam { name: "m_Slice", ty: "::Unity::Collections::NativeSlice_1<T>", modifiers: "", def_value: None }]
constexpr NativeSpline_Slice_1(::Unity::Collections::NativeSlice_1<T>  m_Slice) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Slice, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<T>  m_Slice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.Splines.BezierCurve, UnityEngine.Splines.BezierKnot, UnityEngine.Splines.DistanceToInterpolation
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.NativeSpline
struct CORDL_TYPE NativeSpline {
public:
// Declarations
template<typename T>
using Slice_1 = ::UnityEngine::Splines::NativeSpline_Slice_1<T>;

 __declspec(property(get=get_Closed)) bool  Closed;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Curves)) ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>  Curves;

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::BezierKnot  Item[];

 __declspec(property(get=get_Knots)) ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>  Knots;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr operator  ::UnityEngine::Splines::ISpline*() ;

/// @brief Method Dispose, addr 0x182167790, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetCurve, addr 0x180bd00b0, size 0x2f0, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierCurve GetCurve(int32_t  index) ;

/// @brief Method GetCurveInterpolation, addr 0x1821677e0, size 0xb0, virtual true, abstract: false, final true
inline float_t GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance) ;

/// @brief Method GetCurveLength, addr 0x182167890, size 0x20, virtual true, abstract: false, final true
inline float_t GetCurveLength(int32_t  curveIndex) ;

/// @brief Method GetCurveUpVector, addr 0x1821678b0, size 0x1e0, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float3 GetCurveUpVector(int32_t  index, float_t  t) ;

/// @brief Method GetEnumerator, addr 0x182167a90, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* GetEnumerator() ;

/// @brief Method GetLength, addr 0x1802e2d80, size 0x10, virtual true, abstract: false, final true
inline float_t GetLength() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x182167b20, size 0x20, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x182167c10, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed, ::Unity::Mathematics::float4x4  transform, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x182168830, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed, ::Unity::Mathematics::float4x4  transform, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x182167b40, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  splits, bool  closed, ::Unity::Mathematics::float4x4  transform, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x182167e00, size 0xa30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*  knots, ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  splits, bool  closed, ::Unity::Mathematics::float4x4  transform, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x182168970, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::ISpline*  spline, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x182168900, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::ISpline*  spline, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x1821689e0, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::ISpline*  spline, ::Unity::Mathematics::float4x4  transform, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x182167cd0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::ISpline*  spline, ::Unity::Mathematics::float4x4  transform, bool  cacheUpVectors, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method get_Closed, addr 0x180391c90, size 0x10, virtual true, abstract: false, final true
inline bool get_Closed() ;

/// @brief Method get_Count, addr 0x1802f1880, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Curves, addr 0x1802e5810, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve> get_Curves() ;

/// @brief Method get_Item, addr 0x180bd03a0, size 0x4650, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierKnot get_Item(int32_t  index) ;

/// @brief Method get_Knots, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot> get_Knots() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* i___UnityEngine__Splines__ISpline() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeSpline() ;

// Ctor Parameters [CppParam { name: "m_Knots", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>", modifiers: "", def_value: None }, CppParam { name: "m_Curves", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>", modifiers: "", def_value: None }, CppParam { name: "m_SegmentLengthsLookupTable", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>", modifiers: "", def_value: None }, CppParam { name: "m_UpVectorsLookupTable", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "m_Closed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: None }]
constexpr NativeSpline(::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>  m_Knots, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>  m_Curves, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>  m_SegmentLengthsLookupTable, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  m_UpVectorsLookupTable, bool  m_Closed, float_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field k_SegmentResolution offset 0xffffffff size 0x4
static constexpr int32_t  k_SegmentResolution{static_cast<int32_t>(0x1e)};

/// @brief Field m_Knots, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierKnot>  m_Knots;

/// @brief Field m_Curves, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::BezierCurve>  m_Curves;

/// @brief Field m_SegmentLengthsLookupTable, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>  m_SegmentLengthsLookupTable;

/// @brief Field m_UpVectorsLookupTable, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  m_UpVectorsLookupTable;

/// @brief Field m_Closed, offset: 0x40, size: 0x1, def value: None
 bool  m_Closed;

/// @brief Field m_Length, offset: 0x44, size: 0x4, def value: None
 float_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::NativeSpline, m_Knots) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::NativeSpline, m_Curves) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::NativeSpline, m_SegmentLengthsLookupTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::NativeSpline, m_UpVectorsLookupTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::NativeSpline, m_Closed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::NativeSpline, m_Length) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::NativeSpline) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Splines
