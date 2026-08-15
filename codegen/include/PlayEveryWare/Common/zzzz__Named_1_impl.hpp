#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Named_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/Common/zzzz__Named_1_def.hpp"
#include "PlayEveryWare/Common/zzzz__ValueChangedEventArgs_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*& PlayEveryWare::Common::Named_1<T>::__cordl_internal_get_NameChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameChanged;
}
template<typename T>
constexpr ::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>* const& PlayEveryWare::Common::Named_1<T>::__cordl_internal_get_NameChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameChanged;
}
template<typename T>
constexpr void PlayEveryWare::Common::Named_1<T>::__cordl_internal_set_NameChanged(::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NameChanged = value;
}
template<typename T>
constexpr ::StringW& PlayEveryWare::Common::Named_1<T>::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
template<typename T>
constexpr ::StringW const& PlayEveryWare::Common::Named_1<T>::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
template<typename T>
constexpr void PlayEveryWare::Common::Named_1<T>::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
template<typename T>
constexpr T& PlayEveryWare::Common::Named_1<T>::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
template<typename T>
constexpr T const& PlayEveryWare::Common::Named_1<T>::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
template<typename T>
constexpr void PlayEveryWare::Common::Named_1<T>::__cordl_internal_set_Value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
template<typename T>
inline void PlayEveryWare::Common::Named_1<T>::add_NameChanged(::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"add_NameChanged", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void PlayEveryWare::Common::Named_1<T>::remove_NameChanged(::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"remove_NameChanged", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::StringW PlayEveryWare::Common::Named_1<T>::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::Common::Named_1<T>::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void PlayEveryWare::Common::Named_1<T>::_ctor(::StringW  name, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
template<typename T>
inline bool PlayEveryWare::Common::Named_1<T>::TrySetName(::StringW  newName, bool  notify)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"TrySetName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newName, notify);
}
template<typename T>
inline int32_t PlayEveryWare::Common::Named_1<T>::CompareTo(::PlayEveryWare::Common::Named_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"CompareTo", {}, {::i2c::type_of<::PlayEveryWare::Common::Named_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
template<typename T>
inline bool PlayEveryWare::Common::Named_1<T>::Equals(T  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"Equals", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline bool PlayEveryWare::Common::Named_1<T>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template<typename T>
inline bool PlayEveryWare::Common::Named_1<T>::Equals(::PlayEveryWare::Common::Named_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(),
                        {"Equals", {}, {::i2c::type_of<::PlayEveryWare::Common::Named_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline int32_t PlayEveryWare::Common::Named_1<T>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::StringW PlayEveryWare::Common::Named_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::Common::Named_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::PlayEveryWare::Common::Named_1<T>* PlayEveryWare::Common::Named_1<T>::New_ctor(::StringW  name, T  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::Common::Named_1<T>*>(name, value));
}
/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>"
template<typename T>
constexpr  PlayEveryWare::Common::Named_1<T>::operator ::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>*() noexcept {
return static_cast<::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>"
template<typename T>
constexpr ::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>* PlayEveryWare::Common::Named_1<T>::i___System__IEquatable_1___PlayEveryWare__Common__Named_1_T___() noexcept {
return static_cast<::System::IEquatable_1<::PlayEveryWare::Common::Named_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>"
template<typename T>
constexpr  PlayEveryWare::Common::Named_1<T>::operator ::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>*() noexcept {
return static_cast<::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>"
template<typename T>
constexpr ::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>* PlayEveryWare::Common::Named_1<T>::i___System__IComparable_1___PlayEveryWare__Common__Named_1_T___() noexcept {
return static_cast<::System::IComparable_1<::PlayEveryWare::Common::Named_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<T>"
template<typename T>
constexpr  PlayEveryWare::Common::Named_1<T>::operator ::System::IEquatable_1<T>*() noexcept {
return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<T>"
template<typename T>
constexpr ::System::IEquatable_1<T>* PlayEveryWare::Common::Named_1<T>::i___System__IEquatable_1_T_() noexcept {
return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayEveryWare::Common::Named_1<T>::Named_1()   {
}
