#pragma once
// IWYU pragma private; include "Shipmate/Utils/Extensions/GenericListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Utils/Extensions/zzzz__GenericListExtensions_def.hpp"
#include "Shipmate/Utils/Extensions/zzzz__GenericListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::__cordl_internal_get_copy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copy;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::__cordl_internal_get_copy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copy;
}
template<typename T>
constexpr void Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::__cordl_internal_set_copy(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copy = value;
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::_CopyList_b__0(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>*>(),
                        {"<CopyList>b__0", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline ::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>* Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>::GenericListExtensions___c__DisplayClass40_0_1()   {
}
template<typename T>
inline int32_t Shipmate::Utils::Extensions::GenericListExtensions::IndexOf(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aValidator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"IndexOf", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, aList, aValidator);
}
template<typename T,typename U>
inline int32_t Shipmate::Utils::Extensions::GenericListExtensions::IndexOf(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aValidator, U  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"IndexOf", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, aList, aValidator, aParameter);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomForEach(::System::Collections::Generic::List_1<T>*  aList, ::System::Action_1<T>*  aActionToApplyToList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomForEach", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList);
}
template<typename T,typename U>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomForEach(::System::Collections::Generic::List_1<T>*  aList, ::System::Action_2<T,U>*  aActionToApplyToList, U  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomForEach", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Action_2<T,U>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList, aParameter);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomForEach(::ArrayW<T>  aList, ::System::Action_1<T>*  aActionToApplyToList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomForEach", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList);
}
template<typename T,typename U>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomForEach(::ArrayW<T>  aList, ::System::Action_2<T,U>*  aActionToApplyToList, U  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomForEach", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Action_2<T,U>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList, aParameter);
}
template<typename T,typename U,typename V>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomForEach(::ArrayW<T>  aList, ::System::Action_3<T,U,V>*  aActionToApplyToList, U  aParam1, V  aParam2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomForEach", {::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<V>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Action_3<T,U,V>*>(), ::i2c::type_of<U>(), ::i2c::type_of<V>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList, aParam1, aParam2);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomInvertedForEach(::System::Collections::Generic::List_1<T>*  aList, ::System::Action_1<T>*  aActionToApplyToList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomInvertedForEach", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomInvertedForEach(::ArrayW<T>  aList, ::System::Action_1<T>*  aActionToApplyToList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomInvertedForEach", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aActionToApplyToList);
}
template<typename T>
inline T Shipmate::Utils::Extensions::GenericListExtensions::CustomFirstOrDefault(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomFirstOrDefault", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename U>
inline T Shipmate::Utils::Extensions::GenericListExtensions::CustomFirstOrDefault(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aCustomParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomFirstOrDefault", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList, aFindFunc, aCustomParameter);
}
template<typename T,typename U,typename V>
inline T Shipmate::Utils::Extensions::GenericListExtensions::CustomFirstOrDefault(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_4<T,U,V,bool>*  aFindFunc, U  aCustomParam1, V  aCustomParam2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomFirstOrDefault", {::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<V>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_4<T,U,V,bool>*>(), ::i2c::type_of<U>(), ::i2c::type_of<V>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList, aFindFunc, aCustomParam1, aCustomParam2);
}
template<typename T>
inline T Shipmate::Utils::Extensions::GenericListExtensions::CustomFirstOrDefault(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomFirstOrDefault", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename U>
inline T Shipmate::Utils::Extensions::GenericListExtensions::CustomFirstOrDefault(::ArrayW<T>  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aCustomParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomFirstOrDefault", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList, aFindFunc, aCustomParameter);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomContains(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aToFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomContains", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aToFindFunc);
}
template<typename T,typename U>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomContains(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aToFindFunc, U  aToFind)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomContains", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aToFindFunc, aToFind);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomContains(::System::Collections::Generic::List_1<T>*  aList, T  aToFind)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomContains", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aToFind);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomContains(::ArrayW<T>  aList, T  aToFind)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomContains", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aToFind);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomContains(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aToFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomContains", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aToFindFunc);
}
template<typename T,typename U>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomContains(::ArrayW<T>  aList, ::System::Func_3<T,U,bool>*  aToFindFunc, U  aToFind)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomContains", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aToFindFunc, aToFind);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Shipmate::Utils::Extensions::GenericListExtensions::CustomWhere(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aWhereFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomWhere", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, aList, aWhereFunc);
}
template<typename T,typename Y>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomWhereNonAlloc(::System::Collections::Generic::List_1<T>*  aList, ::System::Collections::Generic::List_1<T>*  aListToFill, ::System::Func_3<T,Y,bool>*  aWhereFunc, Y  aParam)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomWhereNonAlloc", {::i2c::class_of<T>(), ::i2c::class_of<Y>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,Y,bool>*>(), ::i2c::type_of<Y>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<Y>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aListToFill, aWhereFunc, aParam);
}
template<typename T1,typename T2,typename T3>
inline void Shipmate::Utils::Extensions::GenericListExtensions::CustomSelectNonAlloc(::System::Collections::Generic::IList_1<T1>*  aList, ::System::Collections::Generic::List_1<T3>*  aListToFill, ::System::Func_3<T1,T2,T3>*  aWhereFunc, T2  aParam)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomSelectNonAlloc", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T1>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T3>*>(), ::i2c::type_of<::System::Func_3<T1,T2,T3>*>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aList, aListToFill, aWhereFunc, aParam);
}
template<typename T,typename Y>
inline ::System::Collections::Generic::List_1<Y>* Shipmate::Utils::Extensions::GenericListExtensions::CustomSelect(::System::Collections::Generic::IList_1<T>*  aList, ::System::Func_2<T,Y>*  aWhereFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomSelect", {::i2c::class_of<T>(), ::i2c::class_of<Y>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Func_2<T,Y>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<Y>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<Y>*>(nullptr, ___internal_method, aList, aWhereFunc);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAll(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAll", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename Y>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAll(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,Y,bool>*  aFindFunc, Y  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAll", {::i2c::class_of<T>(), ::i2c::class_of<Y>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,Y,bool>*>(), ::i2c::type_of<Y>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<Y>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc, aParameter);
}
template<typename T>
inline int32_t Shipmate::Utils::Extensions::GenericListExtensions::CustomCount(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomCount", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename U>
inline int32_t Shipmate::Utils::Extensions::GenericListExtensions::CustomCount(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aToFind)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomCount", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, aList, aFindFunc, aToFind);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAll(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAll", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename Y>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAll(::ArrayW<T>  aList, ::System::Func_3<T,Y,bool>*  aFindFunc, Y  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAll", {::i2c::class_of<T>(), ::i2c::class_of<Y>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_3<T,Y,bool>*>(), ::i2c::type_of<Y>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<Y>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc, aParameter);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAny(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAny", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename U>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAny(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAny", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc, aParameter);
}
template<typename T>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAny(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aFindFunc)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAny", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_2<T,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc);
}
template<typename T,typename U>
inline bool Shipmate::Utils::Extensions::GenericListExtensions::CustomAny(::ArrayW<T>  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CustomAny", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_3<T,U,bool>*>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aList, aFindFunc, aParameter);
}
template<typename T>
inline T Shipmate::Utils::Extensions::GenericListExtensions::Pop(::System::Collections::Generic::List_1<T>*  aList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"Pop", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList);
}
template<typename T>
inline T Shipmate::Utils::Extensions::GenericListExtensions::Shift(::System::Collections::Generic::List_1<T>*  aList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"Shift", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::Shuffle(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"Shuffle", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::Shuffle(::ArrayW<T>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"Shuffle", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::Shuffle(::System::Collections::Generic::List_1<T>*  list, int32_t  seed)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"Shuffle", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, seed);
}
template<typename T>
inline void Shipmate::Utils::Extensions::GenericListExtensions::Shuffle(::ArrayW<T>  list, int32_t  seed)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"Shuffle", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, seed);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Shipmate::Utils::Extensions::GenericListExtensions::CopyList(::System::Collections::Generic::List_1<T>*  aList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"CopyList", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, aList);
}
template<typename T>
inline T Shipmate::Utils::Extensions::GenericListExtensions::GetRandomItem(::System::Collections::Generic::List_1<T>*  aList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"GetRandomItem", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aList);
}
template<typename T>
inline T Shipmate::Utils::Extensions::GenericListExtensions::GetRandomItem(::ArrayW<T>  aArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Utils::Extensions::GenericListExtensions*>(),
                    {"GetRandomItem", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, aArray);
}
// Ctor Parameters []
constexpr ::Shipmate::Utils::Extensions::GenericListExtensions::GenericListExtensions()   {
}
