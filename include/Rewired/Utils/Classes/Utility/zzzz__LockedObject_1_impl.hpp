#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/LockedObject_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__LockedObject_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr T& Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
template<typename T>
constexpr T const& Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_set_item(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
template<typename T>
constexpr ::System::Object*& Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_get_kuYoptQMkRYJZoFPRxOZYXpCVQgy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kuYoptQMkRYJZoFPRxOZYXpCVQgy;
}
template<typename T>
constexpr ::System::Object* const& Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_get_kuYoptQMkRYJZoFPRxOZYXpCVQgy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kuYoptQMkRYJZoFPRxOZYXpCVQgy;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_set_kuYoptQMkRYJZoFPRxOZYXpCVQgy(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kuYoptQMkRYJZoFPRxOZYXpCVQgy = value;
}
template<typename T>
constexpr bool& Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_get_DNhlWcNjpqQLwZdKRbqPajuWnWPHA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DNhlWcNjpqQLwZdKRbqPajuWnWPHA;
}
template<typename T>
constexpr bool const& Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_get_DNhlWcNjpqQLwZdKRbqPajuWnWPHA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DNhlWcNjpqQLwZdKRbqPajuWnWPHA;
}
template<typename T>
constexpr void Rewired::Utils::Classes::Utility::LockedObject_1<T>::__cordl_internal_set_DNhlWcNjpqQLwZdKRbqPajuWnWPHA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DNhlWcNjpqQLwZdKRbqPajuWnWPHA = value;
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::LockedObject_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::LockedObject_1<T>::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::LockedObject_1<T>::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::LockedObject_1<T>::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::LockedObject_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Rewired::Utils::Classes::Utility::LockedObject_1<T>* Rewired::Utils::Classes::Utility::LockedObject_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>());
}
template<typename T>
inline ::Rewired::Utils::Classes::Utility::LockedObject_1<T>* Rewired::Utils::Classes::Utility::LockedObject_1<T>::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::LockedObject_1<T>*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Rewired::Utils::Classes::Utility::LockedObject_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::LockedObject_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::LockedObject_1<T>::LockedObject_1()   {
}
