#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineInfo_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineKnotIndex_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineUtility_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/Splines/zzzz__TangentMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility_Segment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineUtility_Segment::*)(float_t, float_t)>(&::UnityEngine::Splines::SplineUtility_Segment::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility_Segment>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::SplineUtility_Segment::_ctor(float_t  start, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility_Segment>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, length);
}
// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SplineUtility_Segment::SplineUtility_Segment(float_t  start, float_t  length) noexcept  {
this->start = start;
this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineUtility_Segment::SplineUtility_Segment()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.EvaluateNurbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*, ::System::Collections::Generic::List_1<double_t>*, int32_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::SplineUtility::EvaluateNurbs)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18217de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"EvaluateNurbs", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<double_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetNurbsBasisFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(int32_t, float_t, ::System::Collections::Generic::List_1<double_t>*, int32_t)>(&::UnityEngine::Splines::SplineUtility::GetNurbsBasisFunctions)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x182181f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetNurbsBasisFunctions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<double_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetSegmentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, int32_t)>(&::UnityEngine::Splines::SplineUtility::GetSegmentCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182182260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetSegmentCount", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetSubdivisionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, int32_t)>(&::UnityEngine::Splines::SplineUtility::GetSubdivisionCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182182260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetSubdivisionCount", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.WrapInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, bool)>(&::UnityEngine::Splines::SplineUtility::WrapInterpolation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182184320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"WrapInterpolation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.PreviousIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, bool)>(&::UnityEngine::Splines::SplineUtility::PreviousIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182182c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"PreviousIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.NextIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, bool)>(&::UnityEngine::Splines::SplineUtility::NextIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182182c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"NextIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetExplicitLinearTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::GetExplicitLinearTangent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182181740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetExplicitLinearTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetExplicitLinearTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::BezierKnot)>(&::UnityEngine::Splines::SplineUtility::GetExplicitLinearTangent)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182181580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetExplicitLinearTangent", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetCatmullRomTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::GetCatmullRomTangent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182181490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetCatmullRomTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetAutoSmoothTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::Splines::SplineUtility::GetAutoSmoothTangent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182181090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetAutoSmoothTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::Splines::SplineUtility::GetAutoSmoothTangent)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x182181190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetUniformAutoSmoothTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::Splines::SplineUtility::GetUniformAutoSmoothTangent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1821822c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetUniformAutoSmoothTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetAutoSmoothKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::GetAutoSmoothKnot)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182180fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetAutoSmoothKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::GetAutoSmoothKnot)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182180f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetAutoSmoothKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::Splines::SplineUtility::GetAutoSmoothKnot)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x182180cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GetKnotRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::GetKnotRotation)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x1821817a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetKnotRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.SetPivot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::SplineContainer*, ::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineUtility::SetPivot)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x182183de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"SetPivot", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.FitSplineToPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*, float_t, bool, ::by_ref<::UnityEngine::Splines::Spline*>)>(&::UnityEngine::Splines::SplineUtility::FitSplineToPoints)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x18217f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"FitSplineToPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::Spline*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.FitSplineToPointsStepInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*, int32_t, int32_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, bool, bool, ::by_ref<::UnityEngine::Splines::Spline*>)>(&::UnityEngine::Splines::SplineUtility::FitSplineToPointsStepInternal)> {
  constexpr static std::size_t size = 0x1440;
  constexpr static std::size_t addrs = 0x18217e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"FitSplineToPointsStepInternal", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::Spline*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.CalculatePreferredNormalForDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::CalculatePreferredNormalForDirection)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x18217d2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"CalculatePreferredNormalForDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.CalculateCenterTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::CalculateCenterTangent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18217d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"CalculateCenterTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.Bernstein
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::ArrayW<::Unity::Mathematics::float3>, int32_t)>(&::UnityEngine::Splines::SplineUtility::Bernstein)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18217d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"Bernstein", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.GenerateSplineFromTValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*, int32_t, int32_t, bool, ::ArrayW<float_t>, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::SplineUtility::GenerateSplineFromTValues)> {
  constexpr static std::size_t size = 0xc70;
  constexpr static std::size_t addrs = 0x182180040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GenerateSplineFromTValues", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.ComputeMaxError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<float_t,int32_t> (*)(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*, int32_t, int32_t, ::ArrayW<::Unity::Mathematics::float3>, float_t, bool)>(&::UnityEngine::Splines::SplineUtility::ComputeMaxError)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18217d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ComputeMaxError", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.AreKnotLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Splines::ISplineContainer*, ::UnityEngine::Splines::SplineKnotIndex, ::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::SplineUtility::AreKnotLinked)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18217cf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"AreKnotLinked", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.AreTangentsModifiable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Splines::TangentMode)>(&::UnityEngine::Splines::SplineUtility::AreTangentsModifiable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18217d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"AreTangentsModifiable", {}, {::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.ReverseFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::ISplineContainer*, int32_t)>(&::UnityEngine::Splines::SplineUtility::ReverseFlow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182182c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ReverseFlow", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.ReverseFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::SplineInfo)>(&::UnityEngine::Splines::SplineUtility::ReverseFlow)> {
  constexpr static std::size_t size = 0xa30;
  constexpr static std::size_t addrs = 0x1821833b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ReverseFlow", {}, {::i2c::type_of<::UnityEngine::Splines::SplineInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.ReverseFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::SplineUtility::ReverseFlow)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x182182ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ReverseFlow", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.JoinSplinesOnKnots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineKnotIndex (*)(::UnityEngine::Splines::ISplineContainer*, ::UnityEngine::Splines::SplineKnotIndex, ::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::SplineUtility::JoinSplinesOnKnots)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x182182310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"JoinSplinesOnKnots", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.DuplicateKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineKnotIndex (*)(::UnityEngine::Splines::ISplineContainer*, ::UnityEngine::Splines::SplineKnotIndex, int32_t)>(&::UnityEngine::Splines::SplineUtility::DuplicateKnot)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18217da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"DuplicateKnot", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.DuplicateSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::ISplineContainer*, ::UnityEngine::Splines::SplineKnotIndex, ::UnityEngine::Splines::SplineKnotIndex, ::by_ref<int32_t>)>(&::UnityEngine::Splines::SplineUtility::DuplicateSpline)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18217db70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"DuplicateSpline", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineUtility.SplitSplineOnKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineKnotIndex (*)(::UnityEngine::Splines::ISplineContainer*, ::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::SplineUtility::SplitSplineOnKnot)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x182183fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"SplitSplineOnKnot", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline bool UnityEngine::Splines::SplineUtility::Evaluate(T  spline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"Evaluate", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline, t, position, tangent, upVector);
}
inline bool UnityEngine::Splines::SplineUtility::EvaluateNurbs(float_t  t, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  controlPoints, ::System::Collections::Generic::List_1<double_t>*  knotVector, int32_t  order, ::by_ref<::Unity::Mathematics::float3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"EvaluateNurbs", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<double_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t, controlPoints, knotVector, order, position);
}
inline ::ArrayW<float_t> UnityEngine::Splines::SplineUtility::GetNurbsBasisFunctions(int32_t  degree, float_t  t, ::System::Collections::Generic::List_1<double_t>*  knotVector, int32_t  span)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetNurbsBasisFunctions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<double_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, degree, t, knotVector, span);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::EvaluatePosition(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluatePosition", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::EvaluateTangent(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateTangent", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::EvaluateUpVector(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateUpVector", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::CalculateUpVector(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"CalculateUpVector", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::CalculateUpVector(T  spline, int32_t  curveIndex, float_t  curveT)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"CalculateUpVector", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, curveIndex, curveT);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::EvaluateUpVectorsForCurve(T  spline, int32_t  curveIndex, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  upVectors)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateUpVectorsForCurve", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, curveIndex, upVectors);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::EvaluateUpVectorsForCurve(T  spline, int32_t  curveIndex, ::ArrayW<::Unity::Mathematics::float3>  upVectors)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateUpVectorsForCurve", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, curveIndex, upVectors);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::EvaluateAcceleration(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateAcceleration", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::EvaluateCurvature(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateCurvature", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::EvaluateCurvatureCenter(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"EvaluateCurvatureCenter", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, t);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineUtility::SplineToCurveT(T  spline, float_t  splineT, ::by_ref<float_t>  curveT)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"SplineToCurveT", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, spline, splineT, curveT);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineUtility::SplineToCurveT(T  spline, float_t  splineT, ::by_ref<float_t>  curveT, bool  useLUT)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"SplineToCurveT", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, spline, splineT, curveT, useLUT);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::CurveToSplineT(T  spline, float_t  curve)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"CurveToSplineT", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, curve);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::CalculateLength(T  spline, ::Unity::Mathematics::float4x4  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"CalculateLength", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, transform);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineUtility::GetCurveCount(T  spline)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetCurveCount", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, spline);
}
template<typename T>
inline ::UnityEngine::Bounds UnityEngine::Splines::SplineUtility::GetBounds(T  spline)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetBounds", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, spline);
}
template<typename T>
inline ::UnityEngine::Bounds UnityEngine::Splines::SplineUtility::GetBounds(T  spline, ::Unity::Mathematics::float4x4  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetBounds", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, spline, transform);
}
inline int32_t UnityEngine::Splines::SplineUtility::GetSegmentCount(float_t  length, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetSegmentCount", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, length, resolution);
}
inline int32_t UnityEngine::Splines::SplineUtility::GetSubdivisionCount(float_t  length, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetSubdivisionCount", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, length, resolution);
}
template<typename T>
inline ::UnityEngine::Splines::SplineUtility_Segment UnityEngine::Splines::SplineUtility::GetNearestPoint(T  spline, ::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::UnityEngine::Splines::SplineUtility_Segment  range, ::by_ref<float_t>  distance, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  time, int32_t  segments)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetNearestPoint", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Splines::SplineUtility_Segment>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineUtility_Segment>(nullptr, ___internal_method, spline, ro, rd, range, distance, nearest, time, segments);
}
template<typename T>
inline ::UnityEngine::Splines::SplineUtility_Segment UnityEngine::Splines::SplineUtility::GetNearestPoint(T  spline, ::Unity::Mathematics::float3  point, ::UnityEngine::Splines::SplineUtility_Segment  range, ::by_ref<float_t>  distance, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  time, int32_t  segments)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetNearestPoint", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Splines::SplineUtility_Segment>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineUtility_Segment>(nullptr, ___internal_method, spline, point, range, distance, nearest, time, segments);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::GetNearestPoint(T  spline, ::UnityEngine::Ray  ray, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  t, int32_t  resolution, int32_t  iterations)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetNearestPoint", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, ray, nearest, t, resolution, iterations);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::GetNearestPoint(T  spline, ::Unity::Mathematics::float3  point, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  t, int32_t  resolution, int32_t  iterations)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetNearestPoint", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, point, nearest, t, resolution, iterations);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetPointAtLinearDistance(T  spline, float_t  fromT, float_t  relativeDistance, ::by_ref<float_t>  resultPointT)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetPointAtLinearDistance", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, spline, fromT, relativeDistance, resultPointT);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::ConvertIndexUnit(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"ConvertIndexUnit", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, t, targetPathUnit);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::ConvertIndexUnit(T  spline, float_t  value, ::UnityEngine::Splines::PathIndexUnit  fromPathUnit, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"ConvertIndexUnit", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, value, fromPathUnit, targetPathUnit);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::ConvertNormalizedIndexUnit(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"ConvertNormalizedIndexUnit", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, t, targetPathUnit);
}
inline float_t UnityEngine::Splines::SplineUtility::WrapInterpolation(float_t  t, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"WrapInterpolation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t, closed);
}
template<typename T>
inline float_t UnityEngine::Splines::SplineUtility::GetNormalizedInterpolation(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  originalPathUnit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"GetNormalizedInterpolation", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spline, t, originalPathUnit);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineUtility::PreviousIndex(T  spline, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"PreviousIndex", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, spline, index);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineUtility::NextIndex(T  spline, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"NextIndex", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, spline, index);
}
template<typename T>
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineUtility::Previous(T  spline, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"Previous", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, spline, index);
}
template<typename T>
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineUtility::Next(T  spline, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"Next", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, spline, index);
}
inline int32_t UnityEngine::Splines::SplineUtility::PreviousIndex(int32_t  index, int32_t  count, bool  wrap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"PreviousIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, count, wrap);
}
inline int32_t UnityEngine::Splines::SplineUtility::NextIndex(int32_t  index, int32_t  count, bool  wrap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"NextIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, count, wrap);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetExplicitLinearTangent(::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetExplicitLinearTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, point, to);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetExplicitLinearTangent(::UnityEngine::Splines::BezierKnot  from, ::UnityEngine::Splines::BezierKnot  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetExplicitLinearTangent", {}, {::i2c::type_of<::UnityEngine::Splines::BezierKnot>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, from, to);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetCatmullRomTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetCatmullRomTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, previous, next);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, previous, next, tension);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  current, ::Unity::Mathematics::float3  next, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, previous, current, next, tension);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::GetUniformAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetUniformAutoSmoothTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, previous, next, tension);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineUtility::GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, position, previous, next);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineUtility::GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, ::Unity::Mathematics::float3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, position, previous, next, normal);
}
inline ::UnityEngine::Splines::BezierKnot UnityEngine::Splines::SplineUtility::GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, ::Unity::Mathematics::float3  normal, float_t  tension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetAutoSmoothKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(nullptr, ___internal_method, position, previous, next, normal, tension);
}
inline ::Unity::Mathematics::quaternion UnityEngine::Splines::SplineUtility::GetKnotRotation(::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GetKnotRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, tangent, normal);
}
inline void UnityEngine::Splines::SplineUtility::SetPivot(::UnityEngine::Splines::SplineContainer*  container, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"SetPivot", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, position);
}
inline bool UnityEngine::Splines::SplineUtility::FitSplineToPoints(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  points, float_t  errorThreshold, bool  closed, ::by_ref<::UnityEngine::Splines::Spline*>  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"FitSplineToPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::Spline*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, points, errorThreshold, closed, spline);
}
inline bool UnityEngine::Splines::SplineUtility::FitSplineToPointsStepInternal(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, ::Unity::Mathematics::float3  leftTangent, ::Unity::Mathematics::float3  rightTangent, float_t  errorThreshold, bool  closed, bool  splineClosed, ::by_ref<::UnityEngine::Splines::Spline*>  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"FitSplineToPointsStepInternal", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::Spline*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allPoints, rangeStart, rangeEnd, leftTangent, rightTangent, errorThreshold, closed, splineClosed, spline);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::CalculatePreferredNormalForDirection(::Unity::Mathematics::float3  splineDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"CalculatePreferredNormalForDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, splineDirection);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::CalculateCenterTangent(::Unity::Mathematics::float3  prevPoint, ::Unity::Mathematics::float3  centerPoint, ::Unity::Mathematics::float3  nextPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"CalculateCenterTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, prevPoint, centerPoint, nextPoint);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineUtility::Bernstein(float_t  t, ::ArrayW<::Unity::Mathematics::float3>  bezier, int32_t  degree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"Bernstein", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, t, bezier, degree);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineUtility::GenerateSplineFromTValues(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, bool  closed, ::ArrayW<float_t>  tValues, ::Unity::Mathematics::float3  leftTangent, ::Unity::Mathematics::float3  rightTangent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"GenerateSplineFromTValues", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, allPoints, rangeStart, rangeEnd, closed, tValues, leftTangent, rightTangent);
}
inline ::System::ValueTuple_2<float_t,int32_t> UnityEngine::Splines::SplineUtility::ComputeMaxError(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, ::ArrayW<::Unity::Mathematics::float3>  positions, float_t  errorThreshold, bool  splineClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ComputeMaxError", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t,int32_t>>(nullptr, ___internal_method, allPoints, rangeStart, rangeEnd, positions, errorThreshold, splineClosed);
}
template<typename T>
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineUtility::AddSpline(T  container)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"AddSpline", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, container);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::AddSpline(T  container, ::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"AddSpline", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, spline);
}
template<typename T>
inline bool UnityEngine::Splines::SplineUtility::RemoveSplineAt(T  container, int32_t  splineIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"RemoveSplineAt", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, splineIndex);
}
template<typename T>
inline bool UnityEngine::Splines::SplineUtility::RemoveSpline(T  container, ::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"RemoveSpline", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, spline);
}
template<typename T>
inline bool UnityEngine::Splines::SplineUtility::ReorderSpline(T  container, int32_t  previousSplineIndex, int32_t  newSplineIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"ReorderSpline", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, previousSplineIndex, newSplineIndex);
}
template<typename T>
inline bool UnityEngine::Splines::SplineUtility::IsIndexValid(T  container, ::UnityEngine::Splines::SplineKnotIndex  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"IsIndexValid", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, index);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::SetLinkedKnotPosition(T  container, ::UnityEngine::Splines::SplineKnotIndex  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"SetLinkedKnotPosition", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, index);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::LinkKnots(T  container, ::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"LinkKnots", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, knotA, knotB);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::UnlinkKnots(T  container, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*  knots)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"UnlinkKnots", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, knots);
}
inline bool UnityEngine::Splines::SplineUtility::AreKnotLinked(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"AreKnotLinked", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, knotA, knotB);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::CopyKnotLinks(T  container, int32_t  srcSplineIndex, int32_t  destSplineIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"CopyKnotLinks", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, srcSplineIndex, destSplineIndex);
}
template<typename T>
inline ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* UnityEngine::Splines::SplineUtility::ReducePoints(T  line, float_t  epsilon)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"ReducePoints", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(nullptr, ___internal_method, line, epsilon);
}
template<typename T>
inline void UnityEngine::Splines::SplineUtility::ReducePoints(T  line, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  results, float_t  epsilon)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                    {"ReducePoints", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, line, results, epsilon);
}
inline bool UnityEngine::Splines::SplineUtility::AreTangentsModifiable(::UnityEngine::Splines::TangentMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"AreTangentsModifiable", {}, {::i2c::type_of<::UnityEngine::Splines::TangentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
inline void UnityEngine::Splines::SplineUtility::ReverseFlow(::UnityEngine::Splines::ISplineContainer*  container, int32_t  splineIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ReverseFlow", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, splineIndex);
}
inline void UnityEngine::Splines::SplineUtility::ReverseFlow(::UnityEngine::Splines::SplineInfo  splineInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ReverseFlow", {}, {::i2c::type_of<::UnityEngine::Splines::SplineInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, splineInfo);
}
inline void UnityEngine::Splines::SplineUtility::ReverseFlow(::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"ReverseFlow", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline);
}
inline ::UnityEngine::Splines::SplineKnotIndex UnityEngine::Splines::SplineUtility::JoinSplinesOnKnots(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  mainKnot, ::UnityEngine::Splines::SplineKnotIndex  otherKnot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"JoinSplinesOnKnots", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineKnotIndex>(nullptr, ___internal_method, container, mainKnot, otherKnot);
}
inline ::UnityEngine::Splines::SplineKnotIndex UnityEngine::Splines::SplineUtility::DuplicateKnot(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  originalKnot, int32_t  targetIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"DuplicateKnot", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineKnotIndex>(nullptr, ___internal_method, container, originalKnot, targetIndex);
}
inline void UnityEngine::Splines::SplineUtility::DuplicateSpline(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  fromKnot, ::UnityEngine::Splines::SplineKnotIndex  toKnot, ::by_ref<int32_t>  newSplineIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"DuplicateSpline", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, fromKnot, toKnot, newSplineIndex);
}
inline ::UnityEngine::Splines::SplineKnotIndex UnityEngine::Splines::SplineUtility::SplitSplineOnKnot(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  knotInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineUtility*>(),
                        {"SplitSplineOnKnot", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineKnotIndex>(nullptr, ___internal_method, container, knotInfo);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineUtility::SplineUtility()   {
}
