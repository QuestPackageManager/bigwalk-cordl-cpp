#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineModificationData.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineModificationData_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineModificationData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineModificationData::*)(::UnityEngine::Splines::Spline*, ::UnityEngine::Splines::SplineModification, int32_t, float_t, float_t)>(&::UnityEngine::Splines::SplineModificationData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18217c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineModificationData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::SplineModificationData::_ctor(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Splines::SplineModification  modification, int32_t  knotIndex, float_t  prevCurveLength, float_t  nextCurveLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineModificationData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline, modification, knotIndex, prevCurveLength, nextCurveLength);
}
// Ctor Parameters [CppParam { name: "Spline", ty: "::UnityEngine::Splines::Spline*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Modification", ty: "::UnityEngine::Splines::SplineModification", modifiers: "", def_value: Some("{}") }, CppParam { name: "KnotIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrevCurveLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NextCurveLength", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SplineModificationData::SplineModificationData(::UnityEngine::Splines::Spline*  Spline, ::UnityEngine::Splines::SplineModification  Modification, int32_t  KnotIndex, float_t  PrevCurveLength, float_t  NextCurveLength) noexcept  {
this->Spline = Spline;
this->Modification = Modification;
this->KnotIndex = KnotIndex;
this->PrevCurveLength = PrevCurveLength;
this->NextCurveLength = NextCurveLength;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineModificationData::SplineModificationData()   {
}
