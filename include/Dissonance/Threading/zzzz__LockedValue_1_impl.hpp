#pragma once
// IWYU pragma private; include "Dissonance/Threading/LockedValue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Threading/zzzz__LockedValue_1_def.hpp"
#include "Dissonance/Threading/zzzz__LockedValue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::Dissonance::Threading::LockedValue_1<T>*& Dissonance::Threading::LockedValue_1_Unlocker<T>::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
template<typename T>
constexpr ::Dissonance::Threading::LockedValue_1<T>* const& Dissonance::Threading::LockedValue_1_Unlocker<T>::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
template<typename T>
constexpr void Dissonance::Threading::LockedValue_1_Unlocker<T>::__cordl_internal_set__parent(::Dissonance::Threading::LockedValue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
template<typename T>
inline T Dissonance::Threading::LockedValue_1_Unlocker<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1_Unlocker<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Threading::LockedValue_1_Unlocker<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1_Unlocker<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Dissonance::Threading::LockedValue_1_Unlocker<T>::_ctor(::Dissonance::Threading::LockedValue_1<T>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1_Unlocker<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Threading::LockedValue_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
template<typename T>
inline void Dissonance::Threading::LockedValue_1_Unlocker<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1_Unlocker<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Threading::LockedValue_1_Unlocker<T>* Dissonance::Threading::LockedValue_1_Unlocker<T>::New_ctor(::Dissonance::Threading::LockedValue_1<T>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Threading::LockedValue_1_Unlocker<T>*>(parent));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Dissonance::Threading::LockedValue_1_Unlocker<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Dissonance::Threading::LockedValue_1_Unlocker<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Threading::LockedValue_1_Unlocker<T>::LockedValue_1_Unlocker()   {
}
template<typename T>
constexpr T& Dissonance::Threading::LockedValue_1<T>::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr T const& Dissonance::Threading::LockedValue_1<T>::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr void Dissonance::Threading::LockedValue_1<T>::__cordl_internal_set__value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
template<typename T>
constexpr ::System::Object*& Dissonance::Threading::LockedValue_1<T>::__cordl_internal_get__lockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
template<typename T>
constexpr ::System::Object* const& Dissonance::Threading::LockedValue_1<T>::__cordl_internal_get__lockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
template<typename T>
constexpr void Dissonance::Threading::LockedValue_1<T>::__cordl_internal_set__lockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockObject = value;
}
template<typename T>
constexpr ::Dissonance::Threading::LockedValue_1_Unlocker<T>*& Dissonance::Threading::LockedValue_1<T>::__cordl_internal_get__unlocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlocker;
}
template<typename T>
constexpr ::Dissonance::Threading::LockedValue_1_Unlocker<T>* const& Dissonance::Threading::LockedValue_1<T>::__cordl_internal_get__unlocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlocker;
}
template<typename T>
constexpr void Dissonance::Threading::LockedValue_1<T>::__cordl_internal_set__unlocker(::Dissonance::Threading::LockedValue_1_Unlocker<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unlocker = value;
}
template<typename T>
inline void Dissonance::Threading::LockedValue_1<T>::_ctor(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Dissonance::Threading::LockedValue_1_Unlocker<T>* Dissonance::Threading::LockedValue_1<T>::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1<T>*>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Threading::LockedValue_1_Unlocker<T>*>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Threading::LockedValue_1<T>::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::LockedValue_1<T>*>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Threading::LockedValue_1<T>* Dissonance::Threading::LockedValue_1<T>::New_ctor(T  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Threading::LockedValue_1<T>*>(value));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Threading::LockedValue_1<T>::LockedValue_1()   {
}
