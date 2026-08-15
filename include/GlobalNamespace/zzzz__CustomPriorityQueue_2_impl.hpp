#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomPriorityQueue_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomPriorityQueue_2_def.hpp"
template<typename TElement,typename TPriority>
constexpr ::ArrayW<TElement>& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
template<typename TElement,typename TPriority>
constexpr ::ArrayW<TElement> const& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
template<typename TElement,typename TPriority>
constexpr void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_set__elements(::ArrayW<TElement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elements = value;
}
template<typename TElement,typename TPriority>
constexpr ::ArrayW<TPriority>& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__priorities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priorities;
}
template<typename TElement,typename TPriority>
constexpr ::ArrayW<TPriority> const& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__priorities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priorities;
}
template<typename TElement,typename TPriority>
constexpr void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_set__priorities(::ArrayW<TPriority>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____priorities = value;
}
template<typename TElement,typename TPriority>
constexpr int32_t& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename TElement,typename TPriority>
constexpr int32_t const& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename TElement,typename TPriority>
constexpr void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
template<typename TElement,typename TPriority>
constexpr int32_t& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename TElement,typename TPriority>
constexpr int32_t const& GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_get__capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename TElement,typename TPriority>
constexpr void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::__cordl_internal_set__capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capacity = value;
}
template<typename TElement,typename TPriority>
inline int32_t GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TElement,typename TPriority>
inline void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::_ctor(int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCapacity);
}
template<typename TElement,typename TPriority>
inline void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::Enqueue(TElement  element, TPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"Enqueue", {}, {::i2c::type_of<TElement>(), ::i2c::type_of<TPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, priority);
}
template<typename TElement,typename TPriority>
inline TElement GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method);
}
template<typename TElement,typename TPriority>
inline bool GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::TryDequeue(::by_ref<TElement>  element, ::by_ref<TPriority>  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"TryDequeue", {}, {::i2c::type_of<::by_ref<TElement>>(), ::i2c::type_of<::by_ref<TPriority>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element, priority);
}
template<typename TElement,typename TPriority>
inline bool GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::TryPeek(::by_ref<TElement>  element, ::by_ref<TPriority>  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"TryPeek", {}, {::i2c::type_of<::by_ref<TElement>>(), ::i2c::type_of<::by_ref<TPriority>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element, priority);
}
template<typename TElement,typename TPriority>
inline void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::RemoveRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"RemoveRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TElement,typename TPriority>
inline void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::SiftDown(int32_t  index, TElement  element, TPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"SiftDown", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<TElement>(), ::i2c::type_of<TPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, element, priority);
}
template<typename TElement,typename TPriority>
inline void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::Grow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"Grow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TElement,typename TPriority>
inline void GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TElement,typename TPriority>
inline ::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>* GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::New_ctor(int32_t  initialCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>*>(initialCapacity));
}
// Ctor Parameters []
template<typename TElement,typename TPriority>
constexpr ::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>::CustomPriorityQueue_2()   {
}
