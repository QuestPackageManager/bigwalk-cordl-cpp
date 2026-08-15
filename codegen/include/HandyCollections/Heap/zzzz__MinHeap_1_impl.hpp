#pragma once
// IWYU pragma private; include "HandyCollections/Heap/MinHeap_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HandyCollections/Heap/zzzz__MinHeap_1_def.hpp"
#include "HandyCollections/Heap/zzzz__IMinHeap_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_get__heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_get__heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
template<typename T>
constexpr void HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_set__heap(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heap = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IComparer_1<T>*& HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_get__comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparer;
}
template<typename T>
constexpr ::System::Collections::Generic::IComparer_1<T>* const& HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_get__comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparer;
}
template<typename T>
constexpr void HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_set__comparer(::System::Collections::Generic::IComparer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparer = value;
}
template<typename T>
constexpr bool& HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_get__allowResize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowResize;
}
template<typename T>
constexpr bool const& HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_get__allowResize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowResize;
}
template<typename T>
constexpr void HandyCollections::Heap::MinHeap_1<T>::__cordl_internal_set__allowResize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowResize = value;
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T HandyCollections::Heap::MinHeap_1<T>::get_Minimum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"get_Minimum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool HandyCollections::Heap::MinHeap_1<T>::get_AllowHeapResize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"get_AllowHeapResize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::set_AllowHeapResize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"set_AllowHeapResize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::_ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, comparer);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::_ctor(::System::Collections::Generic::IComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::Add(::System::Collections::Generic::IEnumerable_1<T>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::Heapify()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"Heapify", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::Heapify(int32_t  mutated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"Heapify", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mutated);
}
template<typename T>
inline T HandyCollections::Heap::MinHeap_1<T>::RemoveMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"RemoveMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T HandyCollections::Heap::MinHeap_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::BubbleUp(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"BubbleUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::TrickleDown(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"TrickleDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::DebugCheckHeapProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"DebugCheckHeapProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool HandyCollections::Heap::MinHeap_1<T>::IsLessThan(T  a, T  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"IsLessThan", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::ParentIndex(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"ParentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
template<typename T>
inline void HandyCollections::Heap::MinHeap_1<T>::Swap(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"Swap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::LeftChild(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"LeftChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::RightChild(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"RightChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::SmallestChildSmallerThan(int32_t  i, T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"SmallestChildSmallerThan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i, item);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::IndexOf(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"IndexOf", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template<typename T>
inline int32_t HandyCollections::Heap::MinHeap_1<T>::IndexOf(::System::Predicate_1<T>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HandyCollections::Heap::MinHeap_1<T>*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Predicate_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, predicate);
}
template<typename T>
inline ::HandyCollections::Heap::MinHeap_1<T>* HandyCollections::Heap::MinHeap_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HandyCollections::Heap::MinHeap_1<T>*>());
}
template<typename T>
inline ::HandyCollections::Heap::MinHeap_1<T>* HandyCollections::Heap::MinHeap_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HandyCollections::Heap::MinHeap_1<T>*>(capacity));
}
template<typename T>
inline ::HandyCollections::Heap::MinHeap_1<T>* HandyCollections::Heap::MinHeap_1<T>::New_ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HandyCollections::Heap::MinHeap_1<T>*>(capacity, comparer));
}
template<typename T>
inline ::HandyCollections::Heap::MinHeap_1<T>* HandyCollections::Heap::MinHeap_1<T>::New_ctor(::System::Collections::Generic::IComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HandyCollections::Heap::MinHeap_1<T>*>(comparer));
}
/// @brief Convert operator to "::HandyCollections::Heap::IMinHeap_1<T>"
template<typename T>
constexpr  HandyCollections::Heap::MinHeap_1<T>::operator ::HandyCollections::Heap::IMinHeap_1<T>*() noexcept {
return static_cast<::HandyCollections::Heap::IMinHeap_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HandyCollections::Heap::IMinHeap_1<T>"
template<typename T>
constexpr ::HandyCollections::Heap::IMinHeap_1<T>* HandyCollections::Heap::MinHeap_1<T>::i___HandyCollections__Heap__IMinHeap_1_T_() noexcept {
return static_cast<::HandyCollections::Heap::IMinHeap_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::HandyCollections::Heap::MinHeap_1<T>::MinHeap_1()   {
}
