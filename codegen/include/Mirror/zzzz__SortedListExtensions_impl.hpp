#pragma once
// IWYU pragma private; include "Mirror/SortedListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__SortedListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
template<typename T,typename U>
inline void Mirror::SortedListExtensions::RemoveRange(::System::Collections::Generic::SortedList_2<T,U>*  list, int32_t  amount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::SortedListExtensions*>(),
                    {"RemoveRange", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<T,U>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, amount);
}
// Ctor Parameters []
constexpr ::Mirror::SortedListExtensions::SortedListExtensions()   {
}
