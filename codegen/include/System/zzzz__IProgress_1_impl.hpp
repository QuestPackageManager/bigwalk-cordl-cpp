#pragma once
// IWYU pragma private; include "System/IProgress_1.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
template<typename T>
inline void System::IProgress_1<T>::Report(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IProgress_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
