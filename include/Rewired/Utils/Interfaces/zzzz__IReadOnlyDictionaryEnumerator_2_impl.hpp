#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IReadOnlyDictionaryEnumerator_2.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IReadOnlyDictionaryEnumerator_2_def.hpp"
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2<TKey,TValue>::get_Item(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2<TKey,TValue>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2<TKey,TValue>::ContainsKey(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2<TKey,TValue>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2<TKey,TValue>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
