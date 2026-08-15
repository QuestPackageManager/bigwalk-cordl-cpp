#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplinePath.hpp"
#include "UnityEngine/Splines/zzzz__SplinePath_1_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineSlice_1_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplinePath_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineSlice_1_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplinePath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplinePath::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*)>(&::UnityEngine::Splines::SplinePath::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18217c9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePath*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::SplinePath::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePath*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slices);
}
inline ::UnityEngine::Splines::SplinePath* UnityEngine::Splines::SplinePath::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*  slices)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplinePath*>(slices));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplinePath::SplinePath()   {
}
