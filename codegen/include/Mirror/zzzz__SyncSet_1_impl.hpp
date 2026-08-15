#pragma once
// IWYU pragma private; include "Mirror/SyncSet_1.hpp"
#include "Mirror/zzzz__SyncObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mirror/zzzz__SyncSet_1_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__SyncSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void Mirror::SyncSet_1_SyncSetChanged<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1_SyncSetChanged<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Mirror::SyncSet_1_SyncSetChanged<T>::Invoke(::Mirror::SyncSet_1_Operation<T>  op, T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1_SyncSetChanged<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, item);
}
template<typename T>
inline ::System::IAsyncResult* Mirror::SyncSet_1_SyncSetChanged<T>::BeginInvoke(::Mirror::SyncSet_1_Operation<T>  op, T  item, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1_SyncSetChanged<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, op, item, callback, object);
}
template<typename T>
inline void Mirror::SyncSet_1_SyncSetChanged<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1_SyncSetChanged<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::Mirror::SyncSet_1_SyncSetChanged<T>* Mirror::SyncSet_1_SyncSetChanged<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncSet_1_SyncSetChanged<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncSet_1_SyncSetChanged<T>::SyncSet_1_SyncSetChanged()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Mirror::SyncSet_1_Operation<T>::SyncSet_1_Operation(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncSet_1_Operation<T>::SyncSet_1_Operation()   {
}
template<typename T>
constexpr ::Mirror::SyncSet_1_Operation<T>  Mirror::SyncSet_1_Operation<T>::OP_ADD{static_cast<uint8_t>(0x0u)};
template<typename T>
constexpr ::Mirror::SyncSet_1_Operation<T>  Mirror::SyncSet_1_Operation<T>::OP_CLEAR{static_cast<uint8_t>(0x1u)};
template<typename T>
constexpr ::Mirror::SyncSet_1_Operation<T>  Mirror::SyncSet_1_Operation<T>::OP_REMOVE{static_cast<uint8_t>(0x2u)};
// Ctor Parameters [CppParam { name: "operation", ty: "::Mirror::SyncSet_1_Operation<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Mirror::SyncSet_1_Change<T>::SyncSet_1_Change(::Mirror::SyncSet_1_Operation<T>  operation, T  item) noexcept  {
this->operation = operation;
this->item = item;
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncSet_1_Change<T>::SyncSet_1_Change()   {
}
template<typename T>
constexpr ::System::Collections::Generic::ISet_1<T>*& Mirror::SyncSet_1<T>::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr ::System::Collections::Generic::ISet_1<T>* const& Mirror::SyncSet_1<T>::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr void Mirror::SyncSet_1<T>::__cordl_internal_set_objects(::System::Collections::Generic::ISet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
template<typename T>
constexpr ::Mirror::SyncSet_1_SyncSetChanged<T>*& Mirror::SyncSet_1<T>::__cordl_internal_get_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
template<typename T>
constexpr ::Mirror::SyncSet_1_SyncSetChanged<T>* const& Mirror::SyncSet_1<T>::__cordl_internal_get_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
template<typename T>
constexpr void Mirror::SyncSet_1<T>::__cordl_internal_set_Callback(::Mirror::SyncSet_1_SyncSetChanged<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Callback = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>*& Mirror::SyncSet_1<T>::__cordl_internal_get_changes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changes;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>* const& Mirror::SyncSet_1<T>::__cordl_internal_get_changes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changes;
}
template<typename T>
constexpr void Mirror::SyncSet_1<T>::__cordl_internal_set_changes(::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changes = value;
}
template<typename T>
constexpr int32_t& Mirror::SyncSet_1<T>::__cordl_internal_get_changesAhead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changesAhead;
}
template<typename T>
constexpr int32_t const& Mirror::SyncSet_1<T>::__cordl_internal_get_changesAhead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changesAhead;
}
template<typename T>
constexpr void Mirror::SyncSet_1<T>::__cordl_internal_set_changesAhead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changesAhead = value;
}
template<typename T>
inline int32_t Mirror::SyncSet_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::add_Callback(::Mirror::SyncSet_1_SyncSetChanged<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"add_Callback", {}, {::i2c::type_of<::Mirror::SyncSet_1_SyncSetChanged<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::remove_Callback(::Mirror::SyncSet_1_SyncSetChanged<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"remove_Callback", {}, {::i2c::type_of<::Mirror::SyncSet_1_SyncSetChanged<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::_ctor(::System::Collections::Generic::ISet_1<T>*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::ISet_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objects);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::ClearChanges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::AddOperation(::Mirror::SyncSet_1_Operation<T>  op, T  item, bool  checkAccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"AddOperation", {}, {::i2c::type_of<::Mirror::SyncSet_1_Operation<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, item, checkAccess);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::AddOperation(::Mirror::SyncSet_1_Operation<T>  op, bool  checkAccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"AddOperation", {}, {::i2c::type_of<::Mirror::SyncSet_1_Operation<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, checkAccess);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::OnSerializeAll(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::OnSerializeDelta(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::OnDeserializeAll(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::OnDeserializeDelta(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncSet_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::System_Collections_Generic_ICollection_T__Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"System.Collections.Generic.ICollection<T>.Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::CopyTo(::ArrayW<T>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Mirror::SyncSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Mirror::SyncSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::ExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"ExceptWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::IntersectWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"IntersectWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::IntersectWithSet(::System::Collections::Generic::ISet_1<T>*  otherSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"IntersectWithSet", {}, {::i2c::type_of<::System::Collections::Generic::ISet_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherSet);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"IsProperSubsetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"IsProperSupersetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"IsSupersetOf", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::Overlaps(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"Overlaps", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool Mirror::SyncSet_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"SetEquals", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"SymmetricExceptWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline void Mirror::SyncSet_1<T>::UnionWith(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncSet_1<T>*>(),
                        {"UnionWith", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template<typename T>
inline ::Mirror::SyncSet_1<T>* Mirror::SyncSet_1<T>::New_ctor(::System::Collections::Generic::ISet_1<T>*  objects)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncSet_1<T>*>(objects));
}
/// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
template<typename T>
constexpr  Mirror::SyncSet_1<T>::operator ::System::Collections::Generic::ISet_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ISet_1<T>* Mirror::SyncSet_1<T>::i___System__Collections__Generic__ISet_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr  Mirror::SyncSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* Mirror::SyncSet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Mirror::SyncSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Mirror::SyncSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Mirror::SyncSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Mirror::SyncSet_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncSet_1<T>::SyncSet_1()   {
}
