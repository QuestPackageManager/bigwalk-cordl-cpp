#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineDataKeyValuePair_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataKeyValuePair_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
template<typename T>
constexpr ::StringW& UnityEngine::Splines::SplineDataKeyValuePair_1<T>::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
template<typename T>
constexpr ::StringW const& UnityEngine::Splines::SplineDataKeyValuePair_1<T>::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineDataKeyValuePair_1<T>::__cordl_internal_set_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1<T>*& UnityEngine::Splines::SplineDataKeyValuePair_1<T>::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
template<typename T>
constexpr ::UnityEngine::Splines::SplineData_1<T>* const& UnityEngine::Splines::SplineDataKeyValuePair_1<T>::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineDataKeyValuePair_1<T>::__cordl_internal_set_Value(::UnityEngine::Splines::SplineData_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
template<typename T>
inline void UnityEngine::Splines::SplineDataKeyValuePair_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::SplineDataKeyValuePair_1<T>* UnityEngine::Splines::SplineDataKeyValuePair_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineDataKeyValuePair_1<T>::SplineDataKeyValuePair_1()   {
}
