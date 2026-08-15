#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/JsonHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GoogleSheetsForUnity/zzzz__JsonHelper_def.hpp"
#include "GoogleSheetsForUnity/zzzz__JsonHelper_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr ::ArrayW<T> const& GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr void GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>::__cordl_internal_set_array(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
template<typename T>
inline void GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>* GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>::JsonHelper_Wrapper_1()   {
}
//  Writing Method size for method: ::GoogleSheetsForUnity::JsonHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GoogleSheetsForUnity::JsonHelper::*)()>(&::GoogleSheetsForUnity::JsonHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::JsonHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::ArrayW<T> GoogleSheetsForUnity::JsonHelper::ArrayFromJson(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GoogleSheetsForUnity::JsonHelper*>(),
                    {"ArrayFromJson", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, json);
}
template<typename T>
inline ::StringW GoogleSheetsForUnity::JsonHelper::ToJson(::ArrayW<T>  array, bool  prettyPrint)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GoogleSheetsForUnity::JsonHelper*>(),
                    {"ToJson", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, array, prettyPrint);
}
inline void GoogleSheetsForUnity::JsonHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::JsonHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GoogleSheetsForUnity::JsonHelper* GoogleSheetsForUnity::JsonHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GoogleSheetsForUnity::JsonHelper*>());
}
// Ctor Parameters []
constexpr ::GoogleSheetsForUnity::JsonHelper::JsonHelper()   {
}
