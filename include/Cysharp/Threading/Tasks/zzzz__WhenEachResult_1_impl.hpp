#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/WhenEachResult_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__WhenEachResult_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename T>
inline T Cysharp::Threading::Tasks::WhenEachResult_1<T>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::System::Exception* Cysharp::Threading::Tasks::WhenEachResult_1<T>::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {"get_Exception", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::WhenEachResult_1<T>::get_IsCompletedSuccessfully()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {"get_IsCompletedSuccessfully", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::WhenEachResult_1<T>::get_IsFaulted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {"get_IsFaulted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::WhenEachResult_1<T>::_ctor(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template<typename T>
inline void Cysharp::Threading::Tasks::WhenEachResult_1<T>::_ctor(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template<typename T>
inline void Cysharp::Threading::Tasks::WhenEachResult_1<T>::TryThrow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {"TryThrow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline T Cysharp::Threading::Tasks::WhenEachResult_1<T>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::StringW Cysharp::Threading::Tasks::WhenEachResult_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Exception_k__BackingField", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::WhenEachResult_1<T>::WhenEachResult_1(T  _Result_k__BackingField, ::System::Exception*  _Exception_k__BackingField) noexcept  {
this->_Result_k__BackingField = _Result_k__BackingField;
this->_Exception_k__BackingField = _Exception_k__BackingField;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::WhenEachResult_1<T>::WhenEachResult_1()   {
}
