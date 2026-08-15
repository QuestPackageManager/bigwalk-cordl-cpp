#pragma once
// IWYU pragma private; include "Mirror/SyncList_1.hpp"
#include "Mirror/zzzz__SyncObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mirror/zzzz__SyncList_1_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__SyncList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template<typename T>
inline void Mirror::SyncList_1_SyncListChanged<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_SyncListChanged<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Mirror::SyncList_1_SyncListChanged<T>::Invoke(::Mirror::SyncList_1_Operation<T>  op, int32_t  itemIndex, T  oldItem, T  newItem)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1_SyncListChanged<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, itemIndex, oldItem, newItem);
}
template<typename T>
inline ::System::IAsyncResult* Mirror::SyncList_1_SyncListChanged<T>::BeginInvoke(::Mirror::SyncList_1_Operation<T>  op, int32_t  itemIndex, T  oldItem, T  newItem, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1_SyncListChanged<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, op, itemIndex, oldItem, newItem, callback, object);
}
template<typename T>
inline void Mirror::SyncList_1_SyncListChanged<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1_SyncListChanged<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::Mirror::SyncList_1_SyncListChanged<T>* Mirror::SyncList_1_SyncListChanged<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncList_1_SyncListChanged<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncList_1_SyncListChanged<T>::SyncList_1_SyncListChanged()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>::SyncList_1_Operation(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>::SyncList_1_Operation()   {
}
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>  Mirror::SyncList_1_Operation<T>::OP_ADD{static_cast<uint8_t>(0x0u)};
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>  Mirror::SyncList_1_Operation<T>::OP_CLEAR{static_cast<uint8_t>(0x1u)};
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>  Mirror::SyncList_1_Operation<T>::OP_INSERT{static_cast<uint8_t>(0x2u)};
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>  Mirror::SyncList_1_Operation<T>::OP_REMOVEAT{static_cast<uint8_t>(0x3u)};
template<typename T>
constexpr ::Mirror::SyncList_1_Operation<T>  Mirror::SyncList_1_Operation<T>::OP_SET{static_cast<uint8_t>(0x4u)};
// Ctor Parameters [CppParam { name: "operation", ty: "::Mirror::SyncList_1_Operation<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Mirror::SyncList_1_Change<T>::SyncList_1_Change(::Mirror::SyncList_1_Operation<T>  operation, int32_t  index, T  item) noexcept  {
this->operation = operation;
this->index = index;
this->item = item;
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncList_1_Change<T>::SyncList_1_Change()   {
}
template<typename T>
inline T Mirror::SyncList_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1_Enumerator<T>::set_Current(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {"set_Current", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void Mirror::SyncList_1_Enumerator<T>::_ctor(::Mirror::SyncList_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SyncList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline bool Mirror::SyncList_1_Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1_Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::System::Object* Mirror::SyncList_1_Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1_Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1_Enumerator<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  Mirror::SyncList_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Mirror::SyncList_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  Mirror::SyncList_1_Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* Mirror::SyncList_1_Enumerator<T>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Mirror::SyncList_1_Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Mirror::SyncList_1_Enumerator<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "list", ty: "::Mirror::SyncList_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Current_k__BackingField", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Mirror::SyncList_1_Enumerator<T>::SyncList_1_Enumerator(::Mirror::SyncList_1<T>*  list, int32_t  index, T  _Current_k__BackingField) noexcept  {
this->list = list;
this->index = index;
this->_Current_k__BackingField = _Current_k__BackingField;
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncList_1_Enumerator<T>::SyncList_1_Enumerator()   {
}
template<typename T>
constexpr ::System::Collections::Generic::IList_1<T>*& Mirror::SyncList_1<T>::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr ::System::Collections::Generic::IList_1<T>* const& Mirror::SyncList_1<T>::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr void Mirror::SyncList_1<T>::__cordl_internal_set_objects(::System::Collections::Generic::IList_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& Mirror::SyncList_1<T>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename T>
constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& Mirror::SyncList_1<T>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename T>
constexpr void Mirror::SyncList_1<T>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename T>
constexpr ::Mirror::SyncList_1_SyncListChanged<T>*& Mirror::SyncList_1<T>::__cordl_internal_get_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
template<typename T>
constexpr ::Mirror::SyncList_1_SyncListChanged<T>* const& Mirror::SyncList_1<T>::__cordl_internal_get_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
template<typename T>
constexpr void Mirror::SyncList_1<T>::__cordl_internal_set_Callback(::Mirror::SyncList_1_SyncListChanged<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Callback = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>*& Mirror::SyncList_1<T>::__cordl_internal_get_changes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changes;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>* const& Mirror::SyncList_1<T>::__cordl_internal_get_changes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changes;
}
template<typename T>
constexpr void Mirror::SyncList_1<T>::__cordl_internal_set_changes(::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changes = value;
}
template<typename T>
constexpr int32_t& Mirror::SyncList_1<T>::__cordl_internal_get_changesAhead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changesAhead;
}
template<typename T>
constexpr int32_t const& Mirror::SyncList_1<T>::__cordl_internal_get_changesAhead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changesAhead;
}
template<typename T>
constexpr void Mirror::SyncList_1<T>::__cordl_internal_set_changesAhead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changesAhead = value;
}
template<typename T>
inline int32_t Mirror::SyncList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Mirror::SyncList_1<T>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1<T>::add_Callback(::Mirror::SyncList_1_SyncListChanged<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"add_Callback", {}, {::i2c::type_of<::Mirror::SyncList_1_SyncListChanged<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Mirror::SyncList_1<T>::remove_Callback(::Mirror::SyncList_1_SyncListChanged<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"remove_Callback", {}, {::i2c::type_of<::Mirror::SyncList_1_SyncListChanged<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Mirror::SyncList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1<T>::_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template<typename T>
inline void Mirror::SyncList_1<T>::_ctor(::System::Collections::Generic::IList_1<T>*  objects, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objects, comparer);
}
template<typename T>
inline void Mirror::SyncList_1<T>::ClearChanges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1<T>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncList_1<T>::AddOperation(::Mirror::SyncList_1_Operation<T>  op, int32_t  itemIndex, T  oldItem, T  newItem, bool  checkAccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"AddOperation", {}, {::i2c::type_of<::Mirror::SyncList_1_Operation<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, itemIndex, oldItem, newItem, checkAccess);
}
template<typename T>
inline void Mirror::SyncList_1<T>::OnSerializeAll(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template<typename T>
inline void Mirror::SyncList_1<T>::OnSerializeDelta(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template<typename T>
inline void Mirror::SyncList_1<T>::OnDeserializeAll(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename T>
inline void Mirror::SyncList_1<T>::OnDeserializeDelta(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncList_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename T>
inline void Mirror::SyncList_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void Mirror::SyncList_1<T>::AddRange(::System::Collections::Generic::IEnumerable_1<T>*  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range);
}
template<typename T>
inline void Mirror::SyncList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Mirror::SyncList_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Mirror::SyncList_1<T>::CopyTo(::ArrayW<T>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename T>
inline int32_t Mirror::SyncList_1<T>::IndexOf(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"IndexOf", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template<typename T>
inline int32_t Mirror::SyncList_1<T>::FindIndex(::System::Predicate_1<T>*  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"FindIndex", {}, {::i2c::type_of<::System::Predicate_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, match);
}
template<typename T>
inline T Mirror::SyncList_1<T>::Find(::System::Predicate_1<T>*  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"Find", {}, {::i2c::type_of<::System::Predicate_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, match);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Mirror::SyncList_1<T>::FindAll(::System::Predicate_1<T>*  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"FindAll", {}, {::i2c::type_of<::System::Predicate_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method, match);
}
template<typename T>
inline void Mirror::SyncList_1<T>::Insert(int32_t  index, T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template<typename T>
inline void Mirror::SyncList_1<T>::InsertRange(int32_t  index, ::System::Collections::Generic::IEnumerable_1<T>*  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"InsertRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, range);
}
template<typename T>
inline bool Mirror::SyncList_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Mirror::SyncList_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline int32_t Mirror::SyncList_1<T>::RemoveAll(::System::Predicate_1<T>*  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"RemoveAll", {}, {::i2c::type_of<::System::Predicate_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, match);
}
template<typename T>
inline T Mirror::SyncList_1<T>::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, i);
}
template<typename T>
inline void Mirror::SyncList_1<T>::set_Item(int32_t  i, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, value);
}
template<typename T>
inline ::Mirror::SyncList_1_Enumerator<T> Mirror::SyncList_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SyncList_1_Enumerator<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Mirror::SyncList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Mirror::SyncList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncList_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline ::Mirror::SyncList_1<T>* Mirror::SyncList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncList_1<T>*>());
}
template<typename T>
inline ::Mirror::SyncList_1<T>* Mirror::SyncList_1<T>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncList_1<T>*>(comparer));
}
template<typename T>
inline ::Mirror::SyncList_1<T>* Mirror::SyncList_1<T>::New_ctor(::System::Collections::Generic::IList_1<T>*  objects, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncList_1<T>*>(objects, comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template<typename T>
constexpr  Mirror::SyncList_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IList_1<T>* Mirror::SyncList_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr  Mirror::SyncList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* Mirror::SyncList_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Mirror::SyncList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Mirror::SyncList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Mirror::SyncList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Mirror::SyncList_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr  Mirror::SyncList_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* Mirror::SyncList_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  Mirror::SyncList_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* Mirror::SyncList_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncList_1<T>::SyncList_1()   {
}
