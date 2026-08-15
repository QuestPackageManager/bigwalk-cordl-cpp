#pragma once
// IWYU pragma private; include "HandyCollections/Heap/IMinHeap_1.hpp"
#include "HandyCollections/Heap/zzzz__IMinHeap_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template<typename T>
inline int32_t HandyCollections::Heap::IMinHeap_1<T>::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T HandyCollections::Heap::IMinHeap_1<T>::get_Minimum()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void HandyCollections::Heap::IMinHeap_1<T>::Add(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void HandyCollections::Heap::IMinHeap_1<T>::Add(::System::Collections::Generic::IEnumerable_1<T>*  items)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
template<typename T>
inline T HandyCollections::Heap::IMinHeap_1<T>::RemoveMin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T HandyCollections::Heap::IMinHeap_1<T>::RemoveAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline int32_t HandyCollections::Heap::IMinHeap_1<T>::IndexOf(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template<typename T>
inline int32_t HandyCollections::Heap::IMinHeap_1<T>::IndexOf(::System::Predicate_1<T>*  predicate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, predicate);
}
template<typename T>
inline void HandyCollections::Heap::IMinHeap_1<T>::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HandyCollections::Heap::IMinHeap_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
