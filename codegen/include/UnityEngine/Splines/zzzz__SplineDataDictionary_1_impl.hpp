#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineDataDictionary_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataDictionary_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataDictionary_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataKeyValuePair_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1___c<T>::setStaticF___9(::UnityEngine::Splines::SplineDataDictionary_1___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*, "<>9", ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(std::forward<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::Splines::SplineDataDictionary_1___c<T>* UnityEngine::Splines::SplineDataDictionary_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*, "<>9", ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>();
}
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1___c<T>::setStaticF___9__2_0(::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>*, "<>9__2_0", ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(std::forward<::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>*>(value));
}
template<typename T>
inline ::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>* UnityEngine::Splines::SplineDataDictionary_1___c<T>::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>*, "<>9__2_0", ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>();
}
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1___c<T>::setStaticF___9__4_0(::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>*, "<>9__4_0", ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(std::forward<::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>*>(value));
}
template<typename T>
inline ::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>* UnityEngine::Splines::SplineDataDictionary_1___c<T>::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>*, "<>9__4_0", ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>();
}
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW UnityEngine::Splines::SplineDataDictionary_1___c<T>::_get_Keys_b__2_0(::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(),
                        {"<get_Keys>b__2_0", {}, {::i2c::type_of<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1<T>* UnityEngine::Splines::SplineDataDictionary_1___c<T>::_get_Values_b__4_0(::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>(),
                        {"<get_Values>b__4_0", {}, {::i2c::type_of<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<T>*>(this, ___internal_method, x);
}
template<typename T>
inline ::UnityEngine::Splines::SplineDataDictionary_1___c<T>* UnityEngine::Splines::SplineDataDictionary_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineDataDictionary_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineDataDictionary_1___c<T>::SplineDataDictionary_1___c()   {
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*& UnityEngine::Splines::SplineDataDictionary_1<T>::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* const& UnityEngine::Splines::SplineDataDictionary_1<T>::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
template<typename T>
constexpr void UnityEngine::Splines::SplineDataDictionary_1<T>::__cordl_internal_set_m_Data(::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Data = value;
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::Splines::SplineDataDictionary_1<T>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<T>*>* UnityEngine::Splines::SplineDataDictionary_1<T>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::Splines::SplineDataDictionary_1<T>::FindIndex(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"FindIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template<typename T>
inline bool UnityEngine::Splines::SplineDataDictionary_1<T>::TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<T>*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineData_1<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1<T>* UnityEngine::Splines::SplineDataDictionary_1<T>::GetOrCreate(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"GetOrCreate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<T>*>(this, ___internal_method, key);
}
template<typename T>
inline ::UnityEngine::Splines::SplineData_1<T>* UnityEngine::Splines::SplineDataDictionary_1<T>::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineData_1<T>*>(this, ___internal_method, key);
}
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1<T>::set_Item(::StringW  key, ::UnityEngine::Splines::SplineData_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Splines::SplineData_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename T>
inline bool UnityEngine::Splines::SplineDataDictionary_1<T>::Contains(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* UnityEngine::Splines::SplineDataDictionary_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* UnityEngine::Splines::SplineDataDictionary_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Splines::SplineDataDictionary_1<T>::Remove(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1<T>::RemoveEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {"RemoveEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineDataDictionary_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataDictionary_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::SplineDataDictionary_1<T>* UnityEngine::Splines::SplineDataDictionary_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineDataDictionary_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>"
template<typename T>
constexpr  UnityEngine::Splines::SplineDataDictionary_1<T>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* UnityEngine::Splines::SplineDataDictionary_1<T>::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__SplineDataKeyValuePair_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  UnityEngine::Splines::SplineDataDictionary_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::SplineDataDictionary_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineDataDictionary_1<T>::SplineDataDictionary_1()   {
}
