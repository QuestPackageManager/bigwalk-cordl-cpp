#pragma once
// IWYU pragma private; include "Mirror/SyncHashSet_1.hpp"
#include "Mirror/zzzz__SyncSet_1_impl.hpp"
#include "Mirror/zzzz__SyncHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template<typename T>
inline void Mirror::SyncHashSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncHashSet_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::SyncHashSet_1<T>::_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncHashSet_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1_Enumerator<T> Mirror::SyncHashSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncHashSet_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1_Enumerator<T>>(this, ___internal_method);
}
template<typename T>
inline ::Mirror::SyncHashSet_1<T>* Mirror::SyncHashSet_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncHashSet_1<T>*>());
}
template<typename T>
inline ::Mirror::SyncHashSet_1<T>* Mirror::SyncHashSet_1<T>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncHashSet_1<T>*>(comparer));
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::SyncHashSet_1<T>::SyncHashSet_1()   {
}
