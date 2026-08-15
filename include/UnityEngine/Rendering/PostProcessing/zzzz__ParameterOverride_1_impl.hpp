#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ParameterOverride_1.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_def.hpp"
template<typename T>
constexpr T& UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::_ctor(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::_ctor(T  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::Interp(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  from, ::UnityEngine::Rendering::PostProcessing::ParameterOverride*  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::Interp(T  from, T  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::Override(T  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(),
                        {"Override", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::SetValue(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter);
}
template<typename T>
inline int32_t UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::GetHash()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::op_Implicit_T(::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prop);
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>* UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>());
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>* UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::New_ctor(T  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(value));
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>* UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::New_ctor(T  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>*>(value, overrideState));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<T>::ParameterOverride_1()   {
}
