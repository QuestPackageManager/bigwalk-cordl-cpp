#pragma once
// IWYU pragma private; include "Mirror/SyncDictionary_2.hpp"
#include "Mirror/zzzz__SyncIDictionary_2_impl.hpp"
#include "Mirror/zzzz__SyncDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template<typename TKey,typename TValue>
inline void Mirror::SyncDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncDictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  eq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eq);
}
template<typename TKey,typename TValue>
inline void Mirror::SyncDictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>* Mirror::SyncDictionary_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncDictionary_2<TKey,TValue>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>* Mirror::SyncDictionary_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncDictionary_2<TKey,TValue>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2_Enumerator<TKey,TValue> Mirror::SyncDictionary_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncDictionary_2<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_Enumerator<TKey,TValue>>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Mirror::SyncDictionary_2<TKey,TValue>* Mirror::SyncDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncDictionary_2<TKey,TValue>*>());
}
template<typename TKey,typename TValue>
inline ::Mirror::SyncDictionary_2<TKey,TValue>* Mirror::SyncDictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  eq)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncDictionary_2<TKey,TValue>*>(eq));
}
template<typename TKey,typename TValue>
inline ::Mirror::SyncDictionary_2<TKey,TValue>* Mirror::SyncDictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  d)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncDictionary_2<TKey,TValue>*>(d));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Mirror::SyncDictionary_2<TKey,TValue>::SyncDictionary_2()   {
}
