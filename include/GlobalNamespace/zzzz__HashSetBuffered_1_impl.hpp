#pragma once
// IWYU pragma private; include "GlobalNamespace/HashSetBuffered_1.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HashSetBuffered_1_def.hpp"
#include "GlobalNamespace/zzzz__HashSetBuffered_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1_Enumerator<T>::_ctor(::GlobalNamespace::HashSetBuffered_1<T>*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner);
}
template<typename T>
inline T GlobalNamespace::HashSetBuffered_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::HashSetBuffered_1_Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1_Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1_Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1_Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::HashSetBuffered_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1_Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HashSetBuffered_1_Enumerator<T>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1_Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::HashSetBuffered_1_Enumerator<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_owner", ty: "::GlobalNamespace::HashSetBuffered_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_inner", ty: "::System::Collections::Generic::HashSet_1_Enumerator<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::GlobalNamespace::HashSetBuffered_1_Enumerator<T>::HashSetBuffered_1_Enumerator(::GlobalNamespace::HashSetBuffered_1<T>*  _owner, ::System::Collections::Generic::HashSet_1_Enumerator<T>  _inner, bool  _disposed) noexcept  {
this->_owner = _owner;
this->_inner = _inner;
this->_disposed = _disposed;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::HashSetBuffered_1_Enumerator<T>::HashSetBuffered_1_Enumerator()   {
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inner;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inner;
}
template<typename T>
constexpr void GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_set__inner(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inner = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__toAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAdd;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__toAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAdd;
}
template<typename T>
constexpr void GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_set__toAdd(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toAdd = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__toRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemove;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__toRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemove;
}
template<typename T>
constexpr void GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_set__toRemove(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRemove = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__iterationDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterationDepth;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_get__iterationDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterationDepth;
}
template<typename T>
constexpr void GlobalNamespace::HashSetBuffered_1<T>::__cordl_internal_set__iterationDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterationDepth = value;
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, comparer);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::get_IsIterating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"get_IsIterating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::HashSetBuffered_1<T>::get_PendingCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"get_PendingCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::HashSetBuffered_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::System_Collections_Generic_ICollection_T__Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"System.Collections.Generic.ICollection<T>.Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::CopyTo(::ArrayW<T>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::HashSetBuffered_1<T>::FlushPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"FlushPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::HashSetBuffered_1<T>::LogicalSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"LogicalSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::Overlaps(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"Overlaps", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"SetEquals", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"IsSupersetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"IsProperSubsetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool GlobalNamespace::HashSetBuffered_1<T>::IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"IsProperSupersetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline ::GlobalNamespace::HashSetBuffered_1_Enumerator<T> GlobalNamespace::HashSetBuffered_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HashSetBuffered_1_Enumerator<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::HashSetBuffered_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::HashSetBuffered_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashSetBuffered_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::HashSetBuffered_1<T>* GlobalNamespace::HashSetBuffered_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HashSetBuffered_1<T>*>());
}
template<typename T>
inline ::GlobalNamespace::HashSetBuffered_1<T>* GlobalNamespace::HashSetBuffered_1<T>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HashSetBuffered_1<T>*>(comparer));
}
template<typename T>
inline ::GlobalNamespace::HashSetBuffered_1<T>* GlobalNamespace::HashSetBuffered_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HashSetBuffered_1<T>*>(collection));
}
template<typename T>
inline ::GlobalNamespace::HashSetBuffered_1<T>* GlobalNamespace::HashSetBuffered_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HashSetBuffered_1<T>*>(collection, comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* GlobalNamespace::HashSetBuffered_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::HashSetBuffered_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::HashSetBuffered_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  GlobalNamespace::HashSetBuffered_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* GlobalNamespace::HashSetBuffered_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::HashSetBuffered_1<T>::HashSetBuffered_1()   {
}
