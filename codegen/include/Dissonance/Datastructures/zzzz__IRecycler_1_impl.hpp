#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/IRecycler_1.hpp"
#include "Dissonance/Datastructures/zzzz__IRecycler_1_def.hpp"
template<typename T>
inline void Dissonance::Datastructures::IRecycler_1<T>::Recycle(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::IRecycler_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
