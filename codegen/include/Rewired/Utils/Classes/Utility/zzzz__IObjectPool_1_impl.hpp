#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/IObjectPool_1.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IObjectPool_1_def.hpp"
template<typename T>
inline void Rewired::Utils::Classes::Utility::IObjectPool_1<T>::Clear(bool  reduceSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reduceSize);
}
template<typename T>
inline T Rewired::Utils::Classes::Utility::IObjectPool_1<T>::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Utils::Classes::Utility::IObjectPool_1<T>::Return(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
