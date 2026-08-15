#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Spline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Splines/zzzz__BezierTangent_impl.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineType_impl.hpp"
#include "UnityEngine/Splines/zzzz__TangentMode_impl.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierTangent_def.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataType_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineModificationHandler_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataDictionary_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataKeyValuePair_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineType_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/Splines/zzzz__TangentMode_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::Spline_MetaData.get_DistanceToInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> (::UnityEngine::Splines::Spline_MetaData::*)()>(&::UnityEngine::Splines::Spline_MetaData::get_DistanceToInterpolation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1821676f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {"get_DistanceToInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline_MetaData.get_UpVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Unity::Mathematics::float3> (::UnityEngine::Splines::Spline_MetaData::*)()>(&::UnityEngine::Splines::Spline_MetaData::get_UpVectors)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182167740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {"get_UpVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline_MetaData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline_MetaData::*)()>(&::UnityEngine::Splines::Spline_MetaData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182167680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline_MetaData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline_MetaData::*)(::UnityEngine::Splines::Spline_MetaData*)>(&::UnityEngine::Splines::Spline_MetaData::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x182167460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline_MetaData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline_MetaData.InvalidateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline_MetaData::*)()>(&::UnityEngine::Splines::Spline_MetaData::InvalidateCache)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1821673b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {"InvalidateCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::TangentMode& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mode;
}
constexpr ::UnityEngine::Splines::TangentMode const& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mode;
}
constexpr void UnityEngine::Splines::Spline_MetaData::__cordl_internal_set_Mode(::UnityEngine::Splines::TangentMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mode = value;
}
constexpr float_t& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_Tension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tension;
}
constexpr float_t const& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_Tension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tension;
}
constexpr void UnityEngine::Splines::Spline_MetaData::__cordl_internal_set_Tension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tension = value;
}
constexpr ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_m_DistanceToInterpolation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceToInterpolation;
}
constexpr ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> const& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_m_DistanceToInterpolation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceToInterpolation;
}
constexpr void UnityEngine::Splines::Spline_MetaData::__cordl_internal_set_m_DistanceToInterpolation(::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DistanceToInterpolation = value;
}
constexpr ::ArrayW<::Unity::Mathematics::float3>& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_m_UpVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpVectors;
}
constexpr ::ArrayW<::Unity::Mathematics::float3> const& UnityEngine::Splines::Spline_MetaData::__cordl_internal_get_m_UpVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpVectors;
}
constexpr void UnityEngine::Splines::Spline_MetaData::__cordl_internal_set_m_UpVectors(::ArrayW<::Unity::Mathematics::float3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpVectors = value;
}
inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> UnityEngine::Splines::Spline_MetaData::get_DistanceToInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {"get_DistanceToInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>>(this, ___internal_method);
}
inline ::ArrayW<::Unity::Mathematics::float3> UnityEngine::Splines::Spline_MetaData::get_UpVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {"get_UpVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Unity::Mathematics::float3>>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline_MetaData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline_MetaData::_ctor(::UnityEngine::Splines::Spline_MetaData*  toCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline_MetaData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toCopy);
}
inline void UnityEngine::Splines::Spline_MetaData::InvalidateCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline_MetaData*>(),
                        {"InvalidateCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::Spline_MetaData* UnityEngine::Splines::Spline_MetaData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline_MetaData*>());
}
inline ::UnityEngine::Splines::Spline_MetaData* UnityEngine::Splines::Spline_MetaData::New_ctor(::UnityEngine::Splines::Spline_MetaData*  toCopy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline_MetaData*>(toCopy));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Spline_MetaData::Spline_MetaData()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)(int32_t)>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18217a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x18217a330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally1)> {
  constexpr static std::size_t size = 0x1040;
  constexpr static std::size_t addrs = 0x180d73d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally2)> {
  constexpr static std::size_t size = 0x1c10;
  constexpr static std::size_t addrs = 0x180d6e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.__m__Finally3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818289d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.__m__Finally4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180d70080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.System_Collections_Generic_IEnumerator_UnityEngine_Splines_ISplineModificationHandler__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::ISplineModificationHandler* (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_Generic_IEnumerator_UnityEngine_Splines_ISplineModificationHandler__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Splines.ISplineModificationHandler>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.System_Collections_Generic_IEnumerable_UnityEngine_Splines_ISplineModificationHandler__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>* (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_Generic_IEnumerable_UnityEngine_Splines_ISplineModificationHandler__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18217a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.Splines.ISplineModificationHandler>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::*)()>(&::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18217a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::Splines::ISplineModificationHandler*& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::Splines::ISplineModificationHandler* const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___2__current(::UnityEngine::Splines::ISplineModificationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::Splines::Spline*& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityEngine::Splines::Spline* const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___4__this(::UnityEngine::Splines::Spline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>*& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>* const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<int32_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>*& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>* const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>*& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>* const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::Unity::Mathematics::float4>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap3 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>*& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>* const& UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_get___7__wrap4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<::UnityW<::UnityEngine::Object>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap4 = value;
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::__m__Finally4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"<>m__Finally4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::ISplineModificationHandler* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_Generic_IEnumerator_UnityEngine_Splines_ISplineModificationHandler__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Splines.ISplineModificationHandler>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::ISplineModificationHandler*>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_Generic_IEnumerable_UnityEngine_Splines_ISplineModificationHandler__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.Splines.ISplineModificationHandler>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr  UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__ISplineModificationHandler__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr  UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Splines__ISplineModificationHandler__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::ISplineModificationHandler*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Spline__get_embeddedSplineData_d__15::Spline__get_embeddedSplineData_d__15()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_embeddedSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::get_embeddedSplineData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182179f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_embeddedSplineData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.TryGetFloatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW, ::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>)>(&::UnityEngine::Splines::Spline::TryGetFloatData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182178e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetFloatData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.TryGetFloat4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW, ::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>)>(&::UnityEngine::Splines::Spline::TryGetFloat4Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182178e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetFloat4Data", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.TryGetIntData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW, ::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>)>(&::UnityEngine::Splines::Spline::TryGetIntData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182178e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetIntData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.TryGetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW, ::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>)>(&::UnityEngine::Splines::Spline::TryGetObjectData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182178e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetObjectData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetOrCreateFloatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<float_t>* (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::GetOrCreateFloatData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateFloatData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetOrCreateFloat4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>* (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::GetOrCreateFloat4Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateFloat4Data", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetOrCreateIntData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<int32_t>* (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::GetOrCreateIntData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateIntData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetOrCreateObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::GetOrCreateObjectData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateObjectData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.RemoveFloatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::RemoveFloatData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182177be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveFloatData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.RemoveFloat4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::RemoveFloat4Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182177bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveFloat4Data", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.RemoveIntData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::RemoveIntData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182177bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveIntData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.RemoveObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::StringW)>(&::UnityEngine::Splines::Spline::RemoveObjectData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182177c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveObjectData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetFloatDataKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetFloatDataKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloatDataKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetFloat4DataKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetFloat4DataKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloat4DataKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetIntDataKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetIntDataKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetIntDataKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetObjectDataKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetObjectDataKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetObjectDataKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetSplineDataKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::EmbeddedSplineDataType)>(&::UnityEngine::Splines::Spline::GetSplineDataKeys)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182176590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetSplineDataKeys", {}, {::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetFloatDataValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<float_t>*>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetFloatDataValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloatDataValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetFloat4DataValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetFloat4DataValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloat4DataValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetIntDataValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<int32_t>*>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetIntDataValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetIntDataValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetObjectDataValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetObjectDataValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182176540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetObjectDataValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetFloatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::StringW, ::UnityEngine::Splines::SplineData_1<float_t>*)>(&::UnityEngine::Splines::Spline::SetFloatData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821786f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetFloatData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetFloat4Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::StringW, ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*)>(&::UnityEngine::Splines::Spline::SetFloat4Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821786e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetFloat4Data", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetIntData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::StringW, ::UnityEngine::Splines::SplineData_1<int32_t>*)>(&::UnityEngine::Splines::Spline::SetIntData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182178700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetIntData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::StringW, ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::Splines::Spline::SetObjectData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821788c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetObjectData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::get_Count)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x180df9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.add_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::System::Action*)>(&::UnityEngine::Splines::Spline::add_changed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fec9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"add_changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.remove_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::System::Action*)>(&::UnityEngine::Splines::Spline::remove_changed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fecd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"remove_changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.add_Changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*)>(&::UnityEngine::Splines::Spline::add_Changed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182179e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"add_Changed", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.remove_Changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*)>(&::UnityEngine::Splines::Spline::remove_Changed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182179fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"remove_Changed", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetDirtyNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::SetDirtyNoNotify)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182178350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetDirtyNoNotify", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineModification, int32_t)>(&::UnityEngine::Splines::Spline::SetDirty)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1821783b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::Splines::SplineModification>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.OnSplineChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::OnSplineChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                    {::i2c::class_of<::UnityEngine::Splines::Spline*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.EnsureMetaDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::EnsureMetaDataValid)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1821759c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"EnsureMetaDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.EnforceTangentModeNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::EnforceTangentModeNoNotify)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182175930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"EnforceTangentModeNoNotify", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.EnforceTangentModeNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineRange)>(&::UnityEngine::Splines::Spline::EnforceTangentModeNoNotify)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1821758c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"EnforceTangentModeNoNotify", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetTangentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::TangentMode (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::GetTangentMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182176630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetTangentMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetTangentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::SetTangentMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182178ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentMode", {}, {::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetTangentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::TangentMode, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::Spline::SetTangentMode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182178d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentMode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetTangentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineRange, ::UnityEngine::Splines::TangentMode, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::Spline::SetTangentMode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x182178b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentMode", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetTangentModeNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::TangentMode, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::Spline::SetTangentModeNoNotify)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1821788d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentModeNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.ApplyTangentModeNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::Spline::ApplyTangentModeNoNotify)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x182175210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"ApplyTangentModeNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetAutoSmoothTension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::GetAutoSmoothTension)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182175ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetAutoSmoothTension", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetAutoSmoothTension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, float_t)>(&::UnityEngine::Splines::Spline::SetAutoSmoothTension)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182178210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTension", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetAutoSmoothTension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineRange, float_t)>(&::UnityEngine::Splines::Spline::SetAutoSmoothTension)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1821780f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTension", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetAutoSmoothTensionNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, float_t)>(&::UnityEngine::Splines::Spline::SetAutoSmoothTensionNoNotify)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182177fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTensionNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetAutoSmoothTensionNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineRange, float_t)>(&::UnityEngine::Splines::Spline::SetAutoSmoothTensionNoNotify)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182177eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTensionNoNotify", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetAutoSmoothTensionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineRange, float_t, bool)>(&::UnityEngine::Splines::Spline::SetAutoSmoothTensionInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182177da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTensionInternal", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_EditType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineType (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::get_EditType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_EditType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.set_EditType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::SplineType)>(&::UnityEngine::Splines::Spline::set_EditType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18217a110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_EditType", {}, {::i2c::type_of<::UnityEngine::Splines::SplineType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_Knots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::get_Knots)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Knots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.set_Knots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*)>(&::UnityEngine::Splines::Spline::set_Knots)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18217a260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_Knots", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::get_Closed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Closed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.set_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(bool)>(&::UnityEngine::Splines::Spline::set_Closed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18217a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_Closed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.CheckAutoSmoothExtremityKnots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::CheckAutoSmoothExtremityKnots)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182175610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"CheckAutoSmoothExtremityKnots", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::Spline::IndexOf)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182176680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::Spline::Insert)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182177a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::Insert)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182177860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::TangentMode, float_t)>(&::UnityEngine::Splines::Spline::Insert)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182177780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.InsertNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::TangentMode, float_t)>(&::UnityEngine::Splines::Spline::InsertNoNotify)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1821766c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.InsertOnCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, float_t)>(&::UnityEngine::Splines::Spline::InsertOnCurve)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0x182176840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertOnCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::RemoveAt)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182177ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182179f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::Spline::set_Item)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18217a1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::Spline::SetKnot)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1821787f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetKnot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.SetKnotNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::BezierTangent)>(&::UnityEngine::Splines::Spline::SetKnotNoNotify)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182178710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetKnotNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182179580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, bool)>(&::UnityEngine::Splines::Spline::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1821790e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*, bool)>(&::UnityEngine::Splines::Spline::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x182179270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*, ::UnityEngine::Splines::TangentMode, bool)>(&::UnityEngine::Splines::Spline::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1821793f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::Spline::_ctor)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x1821796c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierCurve (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::GetCurve)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1821762c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetCurveLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::GetCurveLength)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182175ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetLength)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182176490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetCurveDistanceLut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::GetCurveDistanceLut)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x182175af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveDistanceLut", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetCurveInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::Spline::*)(int32_t, float_t)>(&::UnityEngine::Splines::Spline::GetCurveInterpolation)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182175cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.WarmUpCurveUps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::WarmUpCurveUps)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182178e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"WarmUpCurveUps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetCurveUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::Spline::*)(int32_t, float_t)>(&::UnityEngine::Splines::Spline::GetCurveUpVector)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x182176030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Warmup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::Warmup)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x182178f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Warmup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::Resize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182177cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Splines::BezierKnot> (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::ToArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182178df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::Spline::Copy)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182175760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Copy", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1821763b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1821763b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::Spline::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182174d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::Unity::Mathematics::float3, ::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::Add)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182174ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*, ::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::AddRange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182174d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::Unity::Mathematics::float3, ::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::Insert)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1821778b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.InsertRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*, ::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::InsertRange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182177740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.InsertRangeNoNotify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t, ::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*, ::UnityEngine::Splines::TangentMode, bool)>(&::UnityEngine::Splines::Spline::InsertRangeNoNotify)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x182177330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertRangeNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::Spline::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1821751b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::TangentMode, float_t)>(&::UnityEngine::Splines::Spline::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182174de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::Spline::Add)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182174e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1821756b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::Spline::Contains)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182175710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(::ArrayW<::UnityEngine::Splines::BezierKnot>, int32_t)>(&::UnityEngine::Splines::Spline::CopyTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182175750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Splines::BezierKnot>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::Spline::*)(::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::Spline::Remove)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182177c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.RemoveUnusedSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)()>(&::UnityEngine::Splines::Spline::RemoveUnusedSplineData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182177c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveUnusedSplineData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::Spline.CacheKnotOperationCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::Spline::*)(int32_t)>(&::UnityEngine::Splines::Spline::CacheKnotOperationCurves)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1821755b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"CacheKnotOperationCurves", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::SplineType& UnityEngine::Splines::Spline::__cordl_internal_get_m_EditModeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EditModeType;
}
constexpr ::UnityEngine::Splines::SplineType const& UnityEngine::Splines::Spline::__cordl_internal_get_m_EditModeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EditModeType;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_EditModeType(::UnityEngine::Splines::SplineType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EditModeType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*& UnityEngine::Splines::Spline::__cordl_internal_get_m_Knots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Knots;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* const& UnityEngine::Splines::Spline::__cordl_internal_get_m_Knots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Knots;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_Knots(::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Knots = value;
}
constexpr float_t& UnityEngine::Splines::Spline::__cordl_internal_get_m_Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Length;
}
constexpr float_t const& UnityEngine::Splines::Spline::__cordl_internal_get_m_Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Length;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_Length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Length = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>*& UnityEngine::Splines::Spline::__cordl_internal_get_m_MetaData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MetaData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>* const& UnityEngine::Splines::Spline::__cordl_internal_get_m_MetaData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MetaData;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_MetaData(::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline_MetaData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MetaData = value;
}
constexpr bool& UnityEngine::Splines::Spline::__cordl_internal_get_m_Closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Closed;
}
constexpr bool const& UnityEngine::Splines::Spline::__cordl_internal_get_m_Closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Closed;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_Closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Closed = value;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<int32_t>*& UnityEngine::Splines::Spline::__cordl_internal_get_m_IntData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntData;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<int32_t>* const& UnityEngine::Splines::Spline::__cordl_internal_get_m_IntData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntData;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_IntData(::UnityEngine::Splines::SplineDataDictionary_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IntData = value;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<float_t>*& UnityEngine::Splines::Spline::__cordl_internal_get_m_FloatData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatData;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<float_t>* const& UnityEngine::Splines::Spline::__cordl_internal_get_m_FloatData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatData;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_FloatData(::UnityEngine::Splines::SplineDataDictionary_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FloatData = value;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>*& UnityEngine::Splines::Spline::__cordl_internal_get_m_Float4Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Float4Data;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>* const& UnityEngine::Splines::Spline::__cordl_internal_get_m_Float4Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Float4Data;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_Float4Data(::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Float4Data = value;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::Splines::Spline::__cordl_internal_get_m_ObjectData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectData;
}
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::Splines::Spline::__cordl_internal_get_m_ObjectData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectData;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_ObjectData(::UnityEngine::Splines::SplineDataDictionary_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectData = value;
}
constexpr ::System::Action*& UnityEngine::Splines::Spline::__cordl_internal_get_changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
constexpr ::System::Action* const& UnityEngine::Splines::Spline::__cordl_internal_get_changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_changed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changed = value;
}
constexpr ::System::ValueTuple_2<float_t,float_t>& UnityEngine::Splines::Spline::__cordl_internal_get_m_LastKnotChangeCurveLengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastKnotChangeCurveLengths;
}
constexpr ::System::ValueTuple_2<float_t,float_t> const& UnityEngine::Splines::Spline::__cordl_internal_get_m_LastKnotChangeCurveLengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastKnotChangeCurveLengths;
}
constexpr void UnityEngine::Splines::Spline::__cordl_internal_set_m_LastKnotChangeCurveLengths(::System::ValueTuple_2<float_t,float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastKnotChangeCurveLengths = value;
}
inline void UnityEngine::Splines::Spline::setStaticF_Changed(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*, "Changed", ::UnityEngine::Splines::Spline*>(std::forward<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*>(value));
}
inline ::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>* UnityEngine::Splines::Spline::getStaticF_Changed()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*, "Changed", ::UnityEngine::Splines::Spline*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>* UnityEngine::Splines::Spline::get_embeddedSplineData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_embeddedSplineData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::ISplineModificationHandler*>*>(this, ___internal_method);
}
inline bool UnityEngine::Splines::Spline::TryGetFloatData(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetFloatData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, data);
}
inline bool UnityEngine::Splines::Spline::TryGetFloat4Data(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetFloat4Data", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, data);
}
inline bool UnityEngine::Splines::Spline::TryGetIntData(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetIntData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, data);
}
inline bool UnityEngine::Splines::Spline::TryGetObjectData(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"TryGetObjectData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, data);
}
inline ::UnityEngine::Splines::SplineData_1<float_t>* UnityEngine::Splines::Spline::GetOrCreateFloatData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateFloatData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<float_t>*>(this, ___internal_method, key);
}
inline ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>* UnityEngine::Splines::Spline::GetOrCreateFloat4Data(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateFloat4Data", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>(this, ___internal_method, key);
}
inline ::UnityEngine::Splines::SplineData_1<int32_t>* UnityEngine::Splines::Spline::GetOrCreateIntData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateIntData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<int32_t>*>(this, ___internal_method, key);
}
inline ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>* UnityEngine::Splines::Spline::GetOrCreateObjectData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetOrCreateObjectData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method, key);
}
inline bool UnityEngine::Splines::Spline::RemoveFloatData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveFloatData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool UnityEngine::Splines::Spline::RemoveFloat4Data(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveFloat4Data", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool UnityEngine::Splines::Spline::RemoveIntData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveIntData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool UnityEngine::Splines::Spline::RemoveObjectData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveObjectData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Splines::Spline::GetFloatDataKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloatDataKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Splines::Spline::GetFloat4DataKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloat4DataKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Splines::Spline::GetIntDataKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetIntDataKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Splines::Spline::GetObjectDataKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetObjectDataKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Splines::Spline::GetSplineDataKeys(::UnityEngine::Splines::EmbeddedSplineDataType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetSplineDataKeys", {}, {::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<float_t>*>* UnityEngine::Splines::Spline::GetFloatDataValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloatDataValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<float_t>*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>* UnityEngine::Splines::Spline::GetFloat4DataValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetFloat4DataValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<int32_t>*>* UnityEngine::Splines::Spline::GetIntDataValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetIntDataValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<int32_t>*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>* UnityEngine::Splines::Spline::GetObjectDataValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetObjectDataValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>*>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::SetFloatData(::StringW  key, ::UnityEngine::Splines::SplineData_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetFloatData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::Splines::Spline::SetFloat4Data(::StringW  key, ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetFloat4Data", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::Splines::Spline::SetIntData(::StringW  key, ::UnityEngine::Splines::SplineData_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetIntData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::Splines::Spline::SetObjectData(::StringW  key, ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetObjectData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline int32_t UnityEngine::Splines::Spline::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Splines::Spline::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::add_changed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"add_changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::Spline::remove_changed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"remove_changed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::Spline::add_Changed(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"add_Changed", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::Spline::remove_Changed(::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"remove_Changed", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Splines::Spline*,int32_t,::UnityEngine::Splines::SplineModification>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::Spline::SetDirtyNoNotify()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetDirtyNoNotify", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::SetDirty(::UnityEngine::Splines::SplineModification  modificationEvent, int32_t  knotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::Splines::SplineModification>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modificationEvent, knotIndex);
}
inline void UnityEngine::Splines::Spline::OnSplineChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::Spline*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::EnsureMetaDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"EnsureMetaDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::EnforceTangentModeNoNotify(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"EnforceTangentModeNoNotify", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::Spline::EnforceTangentModeNoNotify(::UnityEngine::Splines::SplineRange  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"EnforceTangentModeNoNotify", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range);
}
inline ::UnityEngine::Splines::TangentMode UnityEngine::Splines::Spline::GetTangentMode(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetTangentMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::TangentMode>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::Spline::SetTangentMode(::UnityEngine::Splines::TangentMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentMode", {}, {::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::Splines::Spline::SetTangentMode(int32_t  index, ::UnityEngine::Splines::TangentMode  mode, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentMode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, mode, main);
}
inline void UnityEngine::Splines::Spline::SetTangentMode(::UnityEngine::Splines::SplineRange  range, ::UnityEngine::Splines::TangentMode  mode, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentMode", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range, mode, main);
}
inline void UnityEngine::Splines::Spline::SetTangentModeNoNotify(int32_t  index, ::UnityEngine::Splines::TangentMode  mode, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetTangentModeNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, mode, main);
}
inline void UnityEngine::Splines::Spline::ApplyTangentModeNoNotify(int32_t  index, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"ApplyTangentModeNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, main);
}
inline float_t UnityEngine::Splines::Spline::GetAutoSmoothTension(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetAutoSmoothTension", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::Spline::SetAutoSmoothTension(int32_t  index, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTension", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, tension);
}
inline void UnityEngine::Splines::Spline::SetAutoSmoothTension(::UnityEngine::Splines::SplineRange  range, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTension", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range, tension);
}
inline void UnityEngine::Splines::Spline::SetAutoSmoothTensionNoNotify(int32_t  index, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTensionNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, tension);
}
inline void UnityEngine::Splines::Spline::SetAutoSmoothTensionNoNotify(::UnityEngine::Splines::SplineRange  range, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTensionNoNotify", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range, tension);
}
inline void UnityEngine::Splines::Spline::SetAutoSmoothTensionInternal(::UnityEngine::Splines::SplineRange  range, float_t  tension, bool  setDirty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetAutoSmoothTensionInternal", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range, tension, setDirty);
}
inline ::UnityEngine::Splines::SplineType UnityEngine::Splines::Spline::get_EditType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_EditType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineType>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::set_EditType(::UnityEngine::Splines::SplineType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_EditType", {}, {::i2c::type_of<::UnityEngine::Splines::SplineType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::get_Knots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Knots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::set_Knots(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_Knots", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Splines::Spline::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::set_Closed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_Closed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::Spline::CheckAutoSmoothExtremityKnots()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"CheckAutoSmoothExtremityKnots", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Splines::Spline::IndexOf(::UnityEngine::Splines::BezierKnot  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void UnityEngine::Splines::Spline::Insert(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knot);
}
inline void UnityEngine::Splines::Spline::Insert(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot, ::UnityEngine::Splines::TangentMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knot, mode);
}
inline void UnityEngine::Splines::Spline::Insert(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot, ::UnityEngine::Splines::TangentMode  mode, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knot, mode, tension);
}
inline void UnityEngine::Splines::Spline::InsertNoNotify(int32_t  index, ::UnityEngine::Splines::BezierKnot  knot, ::UnityEngine::Splines::TangentMode  mode, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knot, mode, tension);
}
inline void UnityEngine::Splines::Spline::InsertOnCurve(int32_t  index, float_t  curveT)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertOnCurve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, curveT);
}
inline void UnityEngine::Splines::Spline::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::Spline::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::Spline::set_Item(int32_t  index, ::UnityEngine::Splines::BezierKnot  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void UnityEngine::Splines::Spline::SetKnot(int32_t  index, ::UnityEngine::Splines::BezierKnot  value, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetKnot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value, main);
}
inline void UnityEngine::Splines::Spline::SetKnotNoNotify(int32_t  index, ::UnityEngine::Splines::BezierKnot  value, ::UnityEngine::Splines::BezierTangent  main)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"SetKnotNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::BezierTangent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value, main);
}
inline void UnityEngine::Splines::Spline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::_ctor(int32_t  knotCapacity, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knotCapacity, closed);
}
inline void UnityEngine::Splines::Spline::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knots, closed);
}
inline void UnityEngine::Splines::Spline::_ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knotPositions, tangentMode, closed);
}
inline void UnityEngine::Splines::Spline::_ctor(::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline);
}
inline ::UnityEngine::Splines::BezierCurve UnityEngine::Splines::Spline::GetCurve(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierCurve>(this, ___internal_method, index);
}
inline float_t UnityEngine::Splines::Spline::GetCurveLength(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t UnityEngine::Splines::Spline::GetLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> UnityEngine::Splines::Spline::GetCurveDistanceLut(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveDistanceLut", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>>(this, ___internal_method, index);
}
inline float_t UnityEngine::Splines::Spline::GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveInterpolation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, curveIndex, curveDistance);
}
inline void UnityEngine::Splines::Spline::WarmUpCurveUps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"WarmUpCurveUps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::Spline::GetCurveUpVector(int32_t  index, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetCurveUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, index, t);
}
inline void UnityEngine::Splines::Spline::Warmup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Warmup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::Resize(int32_t  newSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize);
}
inline ::ArrayW<::UnityEngine::Splines::BezierKnot> UnityEngine::Splines::Spline::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Splines::BezierKnot>>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::Copy(::UnityEngine::Splines::Spline*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Copy", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Splines::Spline::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::Add(::UnityEngine::Splines::BezierKnot  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::Splines::Spline::Add(::Unity::Mathematics::float3  knotPosition, ::UnityEngine::Splines::TangentMode  tangentMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knotPosition, tangentMode);
}
inline void UnityEngine::Splines::Spline::AddRange(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knotPositions, tangentMode);
}
inline void UnityEngine::Splines::Spline::Insert(int32_t  index, ::Unity::Mathematics::float3  knotPosition, ::UnityEngine::Splines::TangentMode  tangentMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knotPosition, tangentMode);
}
inline void UnityEngine::Splines::Spline::InsertRange(int32_t  index, ::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knotPositions, tangentMode);
}
inline void UnityEngine::Splines::Spline::InsertRangeNoNotify(int32_t  index, ::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode, bool  cacheCurves)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"InsertRangeNoNotify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, knotPositions, tangentMode, cacheCurves);
}
inline void UnityEngine::Splines::Spline::Add(::UnityEngine::Splines::BezierKnot  item, ::UnityEngine::Splines::TangentMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, mode);
}
inline void UnityEngine::Splines::Spline::Add(::UnityEngine::Splines::BezierKnot  item, ::UnityEngine::Splines::TangentMode  mode, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::TangentMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, mode, tension);
}
inline void UnityEngine::Splines::Spline::Add(::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline);
}
inline void UnityEngine::Splines::Spline::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Splines::Spline::Contains(::UnityEngine::Splines::BezierKnot  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::Splines::Spline::CopyTo(::ArrayW<::UnityEngine::Splines::BezierKnot>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Splines::BezierKnot>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool UnityEngine::Splines::Spline::Remove(::UnityEngine::Splines::BezierKnot  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::Splines::Spline::RemoveUnusedSplineData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"RemoveUnusedSplineData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::Spline::CacheKnotOperationCurves(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Spline*>(),
                        {"CacheKnotOperationCurves", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::Spline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline*>());
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::Spline::New_ctor(int32_t  knotCapacity, bool  closed)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline*>(knotCapacity, closed));
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::Spline::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*  knots, bool  closed)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline*>(knots, closed));
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::Spline::New_ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Mathematics::float3>*  knotPositions, ::UnityEngine::Splines::TangentMode  tangentMode, bool  closed)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline*>(knotPositions, tangentMode, closed));
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::Spline::New_ctor(::UnityEngine::Splines::Spline*  spline)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::Spline*>(spline));
}
/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr  UnityEngine::Splines::Spline::operator ::UnityEngine::Splines::ISpline*() noexcept {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* UnityEngine::Splines::Spline::i___UnityEngine__Splines__ISpline() noexcept {
return static_cast<::UnityEngine::Splines::ISpline*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::Spline::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::Spline::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Splines::Spline::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::Spline::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::Spline::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::Spline::operator ::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::i___System__Collections__Generic__IList_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr  UnityEngine::Splines::Spline::operator ::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>* UnityEngine::Splines::Spline::i___System__Collections__Generic__ICollection_1___UnityEngine__Splines__BezierKnot_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::Splines::BezierKnot>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Spline::Spline()   {
}
constexpr ::UnityEngine::Splines::TangentMode  UnityEngine::Splines::Spline::k_DefaultTangentMode{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Splines::BezierTangent  UnityEngine::Splines::Spline::k_DefaultMainTangent{static_cast<int32_t>(0x1)};
