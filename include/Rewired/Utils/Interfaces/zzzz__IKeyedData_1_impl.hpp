#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IKeyedData_1.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IKeyedData_1_def.hpp"
template<typename TKey>
template<typename T>
inline bool Rewired::Utils::Interfaces::IKeyedData_1<TKey>::TryGetValue(TKey  key, ::by_ref<T>  value)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Rewired::Utils::Interfaces::IKeyedData_1<TKey>*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey>
template<typename T>
inline bool Rewired::Utils::Interfaces::IKeyedData_1<TKey>::TrySetValue(TKey  key, T  value)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Rewired::Utils::Interfaces::IKeyedData_1<TKey>*>(), 1}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
