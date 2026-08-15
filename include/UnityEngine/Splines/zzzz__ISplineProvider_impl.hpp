#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISplineProvider.hpp"
#include "UnityEngine/Splines/zzzz__ISplineProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ISplineProvider.get_Splines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::Spline*>* (::UnityEngine::Splines::ISplineProvider::*)()>(&::UnityEngine::Splines::ISplineProvider::get_Splines)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISplineProvider*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISplineProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::Spline*>* UnityEngine::Splines::ISplineProvider::get_Splines()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISplineProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::Spline*>*>(this, ___internal_method);
}
