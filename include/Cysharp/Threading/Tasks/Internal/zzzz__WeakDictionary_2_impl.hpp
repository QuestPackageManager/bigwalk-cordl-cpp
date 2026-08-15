#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/WeakDictionary_2.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__WeakDictionary_2_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__WeakDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
template<typename TKey,typename TValue>
constexpr ::System::WeakReference_1<TKey>*& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
template<typename TKey,typename TValue>
constexpr ::System::WeakReference_1<TKey>* const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_set_Key(::System::WeakReference_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
template<typename TKey,typename TValue>
constexpr TValue& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
template<typename TKey,typename TValue>
constexpr TValue const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_set_Value(TValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hash;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hash;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_set_Hash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hash = value;
}
template<typename TKey,typename TValue>
constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
template<typename TKey,typename TValue>
constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>* const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_set_Prev(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
template<typename TKey,typename TValue>
constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
template<typename TKey,typename TValue>
constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>* const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::__cordl_internal_set_Next(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
template<typename TKey,typename TValue>
inline ::StringW Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>* Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>());
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>::WeakDictionary_2_Entry()   {
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_buckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*> const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_buckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_set_buckets(::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buckets = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_set_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Threading::SpinLock& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
template<typename TKey,typename TValue>
constexpr ::System::Threading::SpinLock const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_set_gate(::System::Threading::SpinLock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
template<typename TKey,typename TValue>
constexpr float_t& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_loadFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFactor;
}
template<typename TKey,typename TValue>
constexpr float_t const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_loadFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFactor;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_set_loadFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadFactor = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_keyEqualityComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyEqualityComparer;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_get_keyEqualityComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyEqualityComparer;
}
template<typename TKey,typename TValue>
constexpr void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::__cordl_internal_set_keyEqualityComparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyEqualityComparer = value;
}
template<typename TKey,typename TValue>
inline void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::_ctor(int32_t  capacity, float_t  loadFactor, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  keyComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, loadFactor, keyComparer);
}
template<typename TKey,typename TValue>
inline bool Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::TryAdd(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"TryAdd", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::TryRemove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"TryRemove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::TryAddInternal(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"TryAddInternal", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::AddToBuckets(::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  targetBuckets, TKey  newKey, TValue  value, int32_t  keyHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"AddToBuckets", {}, {::i2c::type_of<::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetBuckets, newKey, value, keyHash);
}
template<typename TKey,typename TValue>
inline bool Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::TryGetEntry(TKey  key, ::by_ref<int32_t>  hashIndex, ::by_ref<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"TryGetEntry", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, hashIndex, entry);
}
template<typename TKey,typename TValue>
inline void Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::Remove(int32_t  hashIndex, ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashIndex, entry);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::ToList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"ToList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::ToList(::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>  list, bool  clear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"ToList", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, list, clear);
}
template<typename TKey,typename TValue>
inline int32_t Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::CalculateCapacity(int32_t  collectionSize, float_t  loadFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(),
                        {"CalculateCapacity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collectionSize, loadFactor);
}
template<typename TKey,typename TValue>
inline ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>* Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::New_ctor(int32_t  capacity, float_t  loadFactor, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  keyComparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>*>(capacity, loadFactor, keyComparer));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>::WeakDictionary_2()   {
}
