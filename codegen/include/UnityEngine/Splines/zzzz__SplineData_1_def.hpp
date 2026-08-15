#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__DataPoint_1_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineData_1)
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
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::Splines {
template<typename T>
class DataPointComparer_1;
}
namespace UnityEngine::Splines {
template<typename TDataType>
struct DataPoint_1;
}
namespace UnityEngine::Splines {
class ISplineModificationHandler;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1__GetEnumerator_d__46;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1___c__DisplayClass32_0;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1___c;
}
namespace UnityEngine::Splines {
struct SplineModificationData;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1__GetEnumerator_d__46;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1___c;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1___c__DisplayClass32_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineData_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46);
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineData_1___c);
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineData_1, "UnityEngine.Splines", "SplineData`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46, "UnityEngine.Splines", "SplineData`1/<GetEnumerator>d__46");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineData_1___c, "UnityEngine.Splines", "SplineData`1/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0, "UnityEngine.Splines", "SplineData`1/<>c__DisplayClass32_0");
// Dependencies System.Object
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineData`1/<>c<T>
class CORDL_TYPE SplineData_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Splines::SplineData_1___c<T>*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>*  __9__17_0;

static inline ::UnityEngine::Splines::SplineData_1___c<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Indexes>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t _get_Indexes_b__17_0(::UnityEngine::Splines::DataPoint_1<T>  dp) ;

static inline ::UnityEngine::Splines::SplineData_1___c<T>* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>* getStaticF___9__17_0() ;

static inline void setStaticF___9(::UnityEngine::Splines::SplineData_1___c<T>*  value) ;

static inline void setStaticF___9__17_0(::System::Func_2<::UnityEngine::Splines::DataPoint_1<T>,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineData_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineData_1___c(SplineData_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineData_1___c(SplineData_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineData`1/<>c__DisplayClass32_0<T>
class CORDL_TYPE SplineData_1___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field t, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) float_t  t;

static inline ::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>* New_ctor() ;

/// @brief Method <RemoveDataPoint>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _RemoveDataPoint_b__0(::UnityEngine::Splines::DataPoint_1<T>  point) ;

constexpr float_t const& __cordl_internal_get_t() const;

constexpr float_t& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_t(float_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineData_1___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineData_1___c__DisplayClass32_0(SplineData_1___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineData_1___c__DisplayClass32_0(SplineData_1___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18722};

/// @brief Field t, offset: 0x10, size: 0x4, def value: None
 float_t  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Splines.DataPoint`1<TDataType>
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineData`1/<GetEnumerator>d__46<T>
class CORDL_TYPE SplineData_1__GetEnumerator_d__46 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Splines_DataPoint_T___get_Current)) ::UnityEngine::Splines::DataPoint_1<T>  System_Collections_Generic_IEnumerator_UnityEngine_Splines_DataPoint_T___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Splines::DataPoint_1<T>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Splines::SplineData_1<T>*  __4__this;

/// @brief Field <c>5__3, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__c_5__3, put=__cordl_internal_set__c_5__3)) int32_t  _c_5__3;

/// @brief Field <i>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Splines.DataPoint<T>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::DataPoint_1<T> System_Collections_Generic_IEnumerator_UnityEngine_Splines_DataPoint_T___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Splines::DataPoint_1<T> const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Splines::DataPoint_1<T>& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Splines::SplineData_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Splines::SplineData_1<T>*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__c_5__3() const;

constexpr int32_t& __cordl_internal_get__c_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Splines::DataPoint_1<T>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Splines::SplineData_1<T>*  value) ;

constexpr void __cordl_internal_set__c_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Splines__DataPoint_1_T__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineData_1__GetEnumerator_d__46() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1__GetEnumerator_d__46", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineData_1__GetEnumerator_d__46(SplineData_1__GetEnumerator_d__46 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1__GetEnumerator_d__46", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineData_1__GetEnumerator_d__46(SplineData_1__GetEnumerator_d__46 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18723};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Splines::DataPoint_1<T>  _____2__current;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineData_1<T>*  _____4__this;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  ____i_5__2;

/// @brief Field <c>5__3, offset: 0x34, size: 0x4, def value: None
 int32_t  ____c_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Splines.PathIndexUnit
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineData`1<T>
class CORDL_TYPE SplineData_1 : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__46 = ::UnityEngine::Splines::SplineData_1__GetEnumerator_d__46<T>;

using __c = ::UnityEngine::Splines::SplineData_1___c<T>;

using __c__DisplayClass32_0 = ::UnityEngine::Splines::SplineData_1___c__DisplayClass32_0<T>;

/// @brief Field Changed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Changed, put=__cordl_internal_set_Changed)) ::System::Action*  Changed;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_DefaultValue, put=set_DefaultValue)) T  DefaultValue;

 __declspec(property(get=get_Indexes)) ::System::Collections::Generic::IEnumerable_1<float_t>*  Indexes;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Splines::DataPoint_1<T>  Item[];

 __declspec(property(get=get_PathIndexUnit, put=set_PathIndexUnit)) ::UnityEngine::Splines::PathIndexUnit  PathIndexUnit;

/// @brief Field changed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_changed, put=__cordl_internal_set_changed)) ::System::Action*  changed;

/// @brief Field k_DataPointComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DataPointComparer, put=setStaticF_k_DataPointComparer)) ::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>*  k_DataPointComparer;

/// @brief Field m_DataPoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DataPoints, put=__cordl_internal_set_m_DataPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>*  m_DataPoints;

/// @brief Field m_DefaultValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultValue, put=__cordl_internal_set_m_DefaultValue)) T  m_DefaultValue;

/// @brief Field m_IndexUnit, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_IndexUnit, put=__cordl_internal_set_m_IndexUnit)) ::UnityEngine::Splines::PathIndexUnit  m_IndexUnit;

/// @brief Field m_NeedsSort, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NeedsSort, put=__cordl_internal_set_m_NeedsSort)) bool  m_NeedsSort;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Splines::ISplineModificationHandler"
constexpr operator  ::UnityEngine::Splines::ISplineModificationHandler*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Add(::UnityEngine::Splines::DataPoint_1<T>  dataPoint) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(float_t  t, T  data) ;

/// @brief Method AddDataPointWithDefaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddDataPointWithDefaultValue(float_t  t, bool  useDefaultValue) ;

/// @brief Method ClampInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline float_t ClampInt(float_t  index, int32_t  lowerBound, int32_t  upperBound) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ConvertPathUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSplineType>
inline void ConvertPathUnit(TSplineType  spline, ::UnityEngine::Splines::PathIndexUnit  toUnit) ;

/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSpline,typename TInterpolator>
inline T Evaluate(TSpline  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  indexUnit, TInterpolator  interpolator) ;

/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSpline,typename TInterpolator>
inline T Evaluate(TSpline  spline, float_t  t, TInterpolator  interpolator) ;

/// @brief Method ForceSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ForceSort() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::DataPoint_1<T>>* GetEnumerator() ;

/// @brief Method GetIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_3<int32_t,int32_t,float_t> GetIndex(float_t  t, float_t  splineLength, int32_t  knotCount, bool  closed) ;

/// @brief Method GetNormalizedInterpolation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSplineType>
inline float_t GetNormalizedInterpolation(TSplineType  spline, float_t  t) ;

/// @brief Method MoveDataPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t MoveDataPoint(int32_t  index, float_t  newIndex) ;

static inline ::UnityEngine::Splines::SplineData_1<T>* New_ctor() ;

static inline ::UnityEngine::Splines::SplineData_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*  dataPoints) ;

static inline ::UnityEngine::Splines::SplineData_1<T>* New_ctor(T  init) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveDataPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RemoveDataPoint(float_t  t) ;

/// @brief Method ResolveBinaryIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ResolveBinaryIndex(int32_t  index, bool  wrap) ;

/// @brief Method SetDataPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetDataPoint(int32_t  index, ::UnityEngine::Splines::DataPoint_1<T>  value) ;

/// @brief Method SetDataPointNoSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetDataPointNoSort(int32_t  index, ::UnityEngine::Splines::DataPoint_1<T>  value) ;

/// @brief Method SetDirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SortIfNecessary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SortIfNecessary() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method UnityEngine.Splines.ISplineModificationHandler.OnSplineModified, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_Splines_ISplineModificationHandler_OnSplineModified(::UnityEngine::Splines::SplineModificationData  data) ;

/// @brief Method Wrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t Wrap(int32_t  value, int32_t  lowerBound, int32_t  upperBound) ;

/// @brief Method WrapInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline float_t WrapInt(float_t  index, int32_t  lowerBound, int32_t  upperBound) ;

constexpr ::System::Action* const& __cordl_internal_get_Changed() const;

constexpr ::System::Action*& __cordl_internal_get_Changed() ;

constexpr ::System::Action* const& __cordl_internal_get_changed() const;

constexpr ::System::Action*& __cordl_internal_get_changed() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>* const& __cordl_internal_get_m_DataPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>*& __cordl_internal_get_m_DataPoints() ;

constexpr T const& __cordl_internal_get_m_DefaultValue() const;

constexpr T& __cordl_internal_get_m_DefaultValue() ;

constexpr ::UnityEngine::Splines::PathIndexUnit const& __cordl_internal_get_m_IndexUnit() const;

constexpr ::UnityEngine::Splines::PathIndexUnit& __cordl_internal_get_m_IndexUnit() ;

constexpr bool const& __cordl_internal_get_m_NeedsSort() const;

constexpr bool& __cordl_internal_get_m_NeedsSort() ;

constexpr void __cordl_internal_set_Changed(::System::Action*  value) ;

constexpr void __cordl_internal_set_changed(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_DataPoints(::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>*  value) ;

constexpr void __cordl_internal_set_m_DefaultValue(T  value) ;

constexpr void __cordl_internal_set_m_IndexUnit(::UnityEngine::Splines::PathIndexUnit  value) ;

constexpr void __cordl_internal_set_m_NeedsSort(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>*  dataPoints) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  init) ;

/// @brief Method add_Changed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_Changed(::System::Action*  value) ;

/// @brief Method add_changed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_changed(::System::Action*  value) ;

static inline ::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>* getStaticF_k_DataPointComparer() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_DefaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_DefaultValue() ;

/// @brief Method get_Indexes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<float_t>* get_Indexes() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::DataPoint_1<T> get_Item(int32_t  index) ;

/// @brief Method get_PathIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::PathIndexUnit get_PathIndexUnit() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::DataPoint_1<T>>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__DataPoint_1_T__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::Splines::ISplineModificationHandler"
constexpr ::UnityEngine::Splines::ISplineModificationHandler* i___UnityEngine__Splines__ISplineModificationHandler() noexcept;

/// @brief Method remove_Changed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_Changed(::System::Action*  value) ;

/// @brief Method remove_changed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_changed(::System::Action*  value) ;

static inline void setStaticF_k_DataPointComparer(::UnityEngine::Splines::DataPointComparer_1<::UnityEngine::Splines::DataPoint_1<T>>*  value) ;

/// @brief Method set_DefaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DefaultValue(T  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::UnityEngine::Splines::DataPoint_1<T>  value) ;

/// @brief Method set_PathIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_PathIndexUnit(::UnityEngine::Splines::PathIndexUnit  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineData_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineData_1(SplineData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineData_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineData_1(SplineData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18724};

/// @brief Field m_IndexUnit, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Splines::PathIndexUnit  ___m_IndexUnit;

/// @brief Field m_DefaultValue, offset: 0x18, size: 0x8, def value: None
 T  ___m_DefaultValue;

/// @brief Field m_DataPoints, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>*  ___m_DataPoints;

/// @brief Field m_NeedsSort, offset: 0x28, size: 0x1, def value: None
 bool  ___m_NeedsSort;

/// @brief Field changed, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___changed;

/// @brief Field Changed, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___Changed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
