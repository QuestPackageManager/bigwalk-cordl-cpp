#pragma once
// IWYU pragma private; include "MA/Flora/NoAllocHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__NoAllocHelpers_def.hpp"
#include "MA/Flora/zzzz__NoAllocHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::ArrayW<T> const& MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_set__items(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
constexpr int32_t& MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
template<typename T>
constexpr int32_t const& MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
template<typename T>
constexpr void MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_set__size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
template<typename T>
constexpr int32_t& MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
template<typename T>
constexpr int32_t const& MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
template<typename T>
constexpr void MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
template<typename T>
inline void MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>* MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NoAllocHelpers_ListPrivateFieldAccess_1<T>::NoAllocHelpers_ListPrivateFieldAccess_1()   {
}
//  Writing Method size for method: ::MA::Flora::NoAllocHelpers.SafeLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*)>(&::MA::Flora::NoAllocHelpers::SafeLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181460910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                        {"SafeLength", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NoAllocHelpers.PrepareListForNativeFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Object*, ::System::Type*, int32_t)>(&::MA::Flora::NoAllocHelpers::PrepareListForNativeFill)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181460870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                        {"PrepareListForNativeFill", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void MA::Flora::NoAllocHelpers::EnsureListElemCount(::System::Collections::Generic::List_1<T>*  list, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"EnsureListElemCount", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, count);
}
inline int32_t MA::Flora::NoAllocHelpers::SafeLength(::System::Array*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                        {"SafeLength", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, values);
}
template<typename T>
inline int32_t MA::Flora::NoAllocHelpers::SafeLength(::System::Collections::Generic::List_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"SafeLength", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, values);
}
template<typename T>
inline ::ArrayW<T> MA::Flora::NoAllocHelpers::ExtractArrayFromList(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"ExtractArrayFromList", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
template<typename T>
inline ::System::Span_1<T> MA::Flora::NoAllocHelpers::CreateSpan(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"CreateSpan", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, list);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> MA::Flora::NoAllocHelpers::CreateReadOnlySpan(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"CreateReadOnlySpan", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, list);
}
template<typename T>
inline void MA::Flora::NoAllocHelpers::ResetListContents(::System::Collections::Generic::List_1<T>*  list, ::System::ReadOnlySpan_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"ResetListContents", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, span);
}
template<typename T>
inline void MA::Flora::NoAllocHelpers::ResetListContents(::System::Collections::Generic::List_1<T>*  list, ::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"ResetListContents", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, array);
}
template<typename T>
inline void MA::Flora::NoAllocHelpers::ResetListSize(::System::Collections::Generic::List_1<T>*  list, int32_t  size)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"ResetListSize", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, size);
}
inline ::System::Array* MA::Flora::NoAllocHelpers::PrepareListForNativeFill(::System::Object*  list, ::System::Type*  elementType, int32_t  newSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                        {"PrepareListForNativeFill", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, list, elementType, newSize);
}
template<typename T>
inline T MA::Flora::NoAllocHelpers::ObjectAs(::System::Object*  from)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NoAllocHelpers*>(),
                    {"ObjectAs", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, from);
}
// Ctor Parameters []
constexpr ::MA::Flora::NoAllocHelpers::NoAllocHelpers()   {
}
