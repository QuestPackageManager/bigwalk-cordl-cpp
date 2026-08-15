#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IGettable_1.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
template<typename T>
inline void Epic::OnlineServices::IGettable_1<T>::Get(::by_ref<T>  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::IGettable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
