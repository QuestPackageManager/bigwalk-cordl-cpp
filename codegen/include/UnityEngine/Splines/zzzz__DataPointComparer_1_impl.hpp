#pragma once
// IWYU pragma private; include "UnityEngine/Splines/DataPointComparer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__DataPointComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<typename T>
inline int32_t UnityEngine::Splines::DataPointComparer_1<T>::Compare(T  x, T  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPointComparer_1<T>*>(),
                        {"Compare", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template<typename T>
inline void UnityEngine::Splines::DataPointComparer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPointComparer_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::DataPointComparer_1<T>* UnityEngine::Splines::DataPointComparer_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::DataPointComparer_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template<typename T>
constexpr  UnityEngine::Splines::DataPointComparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IComparer_1<T>* UnityEngine::Splines::DataPointComparer_1<T>::i___System__Collections__Generic__IComparer_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::DataPointComparer_1<T>::DataPointComparer_1()   {
}
