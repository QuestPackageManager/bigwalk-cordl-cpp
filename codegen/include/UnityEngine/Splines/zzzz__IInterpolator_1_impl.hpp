#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IInterpolator_1.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
template<typename T>
inline T UnityEngine::Splines::IInterpolator_1<T>::Interpolate(T  from, T  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IInterpolator_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, from, to, t);
}
