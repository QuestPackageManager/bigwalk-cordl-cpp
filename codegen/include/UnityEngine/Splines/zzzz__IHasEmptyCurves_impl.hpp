#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IHasEmptyCurves.hpp"
#include "UnityEngine/Splines/zzzz__IHasEmptyCurves_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::IHasEmptyCurves.get_EmptyCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<int32_t>* (::UnityEngine::Splines::IHasEmptyCurves::*)()>(&::UnityEngine::Splines::IHasEmptyCurves::get_EmptyCurves)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IHasEmptyCurves*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IHasEmptyCurves*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* UnityEngine::Splines::IHasEmptyCurves::get_EmptyCurves()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IHasEmptyCurves*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(this, ___internal_method);
}
