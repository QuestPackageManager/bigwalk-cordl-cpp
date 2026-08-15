#pragma once
// IWYU pragma private; include "Mirror/SyncIDictionary_2.hpp"
#include "Mirror/zzzz__SyncObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mirror/zzzz__SyncIDictionary_2_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__SyncIDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>::Invoke(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  op, TKey  key, TValue  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, key, item);
}
template<typename TKey,typename TValue>
inline ::System::IAsyncResult* Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>::BeginInvoke(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  op, TKey  key, TValue  item, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, op, key, item, callback, object);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TKey,typename TValue>
inline ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>* Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>(object, method));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>::SyncIDictionary_2_SyncDictionaryChanged()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>::SyncIDictionary_2_Operation(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>::SyncIDictionary_2_Operation()   {
}
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  Mirror::SyncIDictionary_2_Operation<TKey,TValue>::OP_ADD{static_cast<uint8_t>(0x0u)};
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  Mirror::SyncIDictionary_2_Operation<TKey,TValue>::OP_CLEAR{static_cast<uint8_t>(0x1u)};
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  Mirror::SyncIDictionary_2_Operation<TKey,TValue>::OP_REMOVE{static_cast<uint8_t>(0x2u)};
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  Mirror::SyncIDictionary_2_Operation<TKey,TValue>::OP_SET{static_cast<uint8_t>(0x3u)};
// Ctor Parameters [CppParam { name: "operation", ty: "::Mirror::SyncIDictionary_2_Operation<TKey,TValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "item", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Change<TKey,TValue>::SyncIDictionary_2_Change(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  operation, TKey  key, TValue  item) noexcept  {
this->operation = operation;
this->key = key;
this->item = item;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_Change<TKey,TValue>::SyncIDictionary_2_Change()   {
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>*& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* const& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename TKey,typename TValue>
constexpr void Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_set_objects(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>* const& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
template<typename TKey,typename TValue>
constexpr void Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_set_Callback(::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Callback = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>*& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_changes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changes;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>* const& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_changes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changes;
}
template<typename TKey,typename TValue>
constexpr void Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_set_changes(::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changes = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_changesAhead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changesAhead;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_get_changesAhead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changesAhead;
}
template<typename TKey,typename TValue>
constexpr void Mirror::SyncIDictionary_2<TKey,TValue>::__cordl_internal_set_changesAhead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changesAhead = value;
}
template<typename TKey,typename TValue>
inline int32_t Mirror::SyncIDictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Mirror::SyncIDictionary_2<TKey,TValue>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::add_Callback(::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"add_Callback", {}, {::i2c::type_of<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::remove_Callback(::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"remove_Callback", {}, {::i2c::type_of<::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* Mirror::SyncIDictionary_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* Mirror::SyncIDictionary_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TKey>* Mirror::SyncIDictionary_2<TKey,TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>* Mirror::SyncIDictionary_2<TKey,TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::ClearChanges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objects);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::AddOperation(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  op, TKey  key, TValue  item, bool  checkAccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"AddOperation", {}, {::i2c::type_of<::Mirror::SyncIDictionary_2_Operation<TKey,TValue>>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, key, item, checkAccess);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::OnSerializeAll(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::OnSerializeDelta(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::OnDeserializeAll(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::OnDeserializeDelta(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Mirror::SyncIDictionary_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Mirror::SyncIDictionary_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline TValue Mirror::SyncIDictionary_2<TKey,TValue>::get_Item(TKey  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, i);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::set_Item(TKey  i, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"set_Item", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, value);
}
template<typename TKey,typename TValue>
inline bool Mirror::SyncIDictionary_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline bool Mirror::SyncIDictionary_2<TKey,TValue>::Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncIDictionary_2<TKey,TValue>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename TKey,typename TValue>
inline bool Mirror::SyncIDictionary_2<TKey,TValue>::Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Mirror::SyncIDictionary_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Mirror::SyncIDictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncIDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Mirror::SyncIDictionary_2<TKey,TValue>* Mirror::SyncIDictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  objects)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncIDictionary_2<TKey,TValue>*>(objects));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr  Mirror::SyncIDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* Mirror::SyncIDictionary_2<TKey,TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Mirror::SyncIDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Mirror::SyncIDictionary_2<TKey,TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Mirror::SyncIDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Mirror::SyncIDictionary_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Mirror::SyncIDictionary_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Mirror::SyncIDictionary_2<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr  Mirror::SyncIDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>* Mirror::SyncIDictionary_2<TKey,TValue>::i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Mirror::SyncIDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Mirror::SyncIDictionary_2<TKey,TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncIDictionary_2<TKey,TValue>::SyncIDictionary_2()   {
}
