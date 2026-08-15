#pragma once
// IWYU pragma private; include "Rewired/InputSourceWrapper_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__InputSourceWrapper_1_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputSource_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
constexpr T& Rewired::InputSourceWrapper_1<T>::__cordl_internal_get_AwmlGpPLlxhNkAJHiFvTdPlZTzoL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AwmlGpPLlxhNkAJHiFvTdPlZTzoL;
}
template<typename T>
constexpr T const& Rewired::InputSourceWrapper_1<T>::__cordl_internal_get_AwmlGpPLlxhNkAJHiFvTdPlZTzoL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AwmlGpPLlxhNkAJHiFvTdPlZTzoL;
}
template<typename T>
constexpr void Rewired::InputSourceWrapper_1<T>::__cordl_internal_set_AwmlGpPLlxhNkAJHiFvTdPlZTzoL(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AwmlGpPLlxhNkAJHiFvTdPlZTzoL = value;
}
template<typename T>
constexpr bool& Rewired::InputSourceWrapper_1<T>::__cordl_internal_get_qOppAezfvkCHiiAysmWTLcYdtxrU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qOppAezfvkCHiiAysmWTLcYdtxrU;
}
template<typename T>
constexpr bool const& Rewired::InputSourceWrapper_1<T>::__cordl_internal_get_qOppAezfvkCHiiAysmWTLcYdtxrU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qOppAezfvkCHiiAysmWTLcYdtxrU;
}
template<typename T>
constexpr void Rewired::InputSourceWrapper_1<T>::__cordl_internal_set_qOppAezfvkCHiiAysmWTLcYdtxrU(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qOppAezfvkCHiiAysmWTLcYdtxrU = value;
}
template<typename T>
inline T Rewired::InputSourceWrapper_1<T>::get_source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"get_source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::_ctor(T  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::add_DeviceChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"add_DeviceChangedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::remove_DeviceChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"remove_DeviceChangedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::SystemDeviceConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"SystemDeviceConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::SystemDeviceDisconnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"SystemDeviceDisconnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::UpdateDevices(::Rewired::UpdateLoopType  updateLoop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"UpdateDevices", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::UpdateFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"UpdateFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
template<typename TJoy>
inline ::System::Collections::Generic::IList_1<TJoy>* Rewired::InputSourceWrapper_1<T>::GetJoysticks()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                    {"GetJoysticks", {::i2c::class_of<TJoy>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TJoy>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TJoy>*>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Rewired::InputSourceWrapper_1<T>::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputSourceWrapper_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename T>
inline ::Rewired::InputSourceWrapper_1<T>* Rewired::InputSourceWrapper_1<T>::New_ctor(T  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputSourceWrapper_1<T>*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IInputSource"
template<typename T>
constexpr  Rewired::InputSourceWrapper_1<T>::operator ::Rewired::Interfaces::IInputSource*() noexcept {
return static_cast<::Rewired::Interfaces::IInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IInputSource"
template<typename T>
constexpr ::Rewired::Interfaces::IInputSource* Rewired::InputSourceWrapper_1<T>::i___Rewired__Interfaces__IInputSource() noexcept {
return static_cast<::Rewired::Interfaces::IInputSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Rewired::InputSourceWrapper_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Rewired::InputSourceWrapper_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::InputSourceWrapper_1<T>::InputSourceWrapper_1()   {
}
