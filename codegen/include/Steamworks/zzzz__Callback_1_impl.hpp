#pragma once
// IWYU pragma private; include "Steamworks/Callback_1.hpp"
#include "Steamworks/zzzz__Callback_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline void Steamworks::Callback_1_DispatchDelegate<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1_DispatchDelegate<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Steamworks::Callback_1_DispatchDelegate<T>::Invoke(T  param)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1_DispatchDelegate<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
template<typename T>
inline ::System::IAsyncResult* Steamworks::Callback_1_DispatchDelegate<T>::BeginInvoke(T  param, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1_DispatchDelegate<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, param, callback, object);
}
template<typename T>
inline void Steamworks::Callback_1_DispatchDelegate<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1_DispatchDelegate<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::Steamworks::Callback_1_DispatchDelegate<T>* Steamworks::Callback_1_DispatchDelegate<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::Callback_1_DispatchDelegate<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Steamworks::Callback_1_DispatchDelegate<T>::Callback_1_DispatchDelegate()   {
}
template<typename T>
constexpr ::Steamworks::Callback_1_DispatchDelegate<T>*& Steamworks::Callback_1<T>::__cordl_internal_get_m_Func()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Func;
}
template<typename T>
constexpr ::Steamworks::Callback_1_DispatchDelegate<T>* const& Steamworks::Callback_1<T>::__cordl_internal_get_m_Func() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Func;
}
template<typename T>
constexpr void Steamworks::Callback_1<T>::__cordl_internal_set_m_Func(::Steamworks::Callback_1_DispatchDelegate<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Func = value;
}
template<typename T>
constexpr bool& Steamworks::Callback_1<T>::__cordl_internal_get_m_bGameServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bGameServer;
}
template<typename T>
constexpr bool const& Steamworks::Callback_1<T>::__cordl_internal_get_m_bGameServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bGameServer;
}
template<typename T>
constexpr void Steamworks::Callback_1<T>::__cordl_internal_set_m_bGameServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bGameServer = value;
}
template<typename T>
constexpr bool& Steamworks::Callback_1<T>::__cordl_internal_get_m_bIsRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bIsRegistered;
}
template<typename T>
constexpr bool const& Steamworks::Callback_1<T>::__cordl_internal_get_m_bIsRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bIsRegistered;
}
template<typename T>
constexpr void Steamworks::Callback_1<T>::__cordl_internal_set_m_bIsRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bIsRegistered = value;
}
template<typename T>
constexpr bool& Steamworks::Callback_1<T>::__cordl_internal_get_m_bDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bDisposed;
}
template<typename T>
constexpr bool const& Steamworks::Callback_1<T>::__cordl_internal_get_m_bDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bDisposed;
}
template<typename T>
constexpr void Steamworks::Callback_1<T>::__cordl_internal_set_m_bDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bDisposed = value;
}
template<typename T>
inline void Steamworks::Callback_1<T>::add_m_Func(::Steamworks::Callback_1_DispatchDelegate<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"add_m_Func", {}, {::i2c::type_of<::Steamworks::Callback_1_DispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Steamworks::Callback_1<T>::remove_m_Func(::Steamworks::Callback_1_DispatchDelegate<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"remove_m_Func", {}, {::i2c::type_of<::Steamworks::Callback_1_DispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Steamworks::Callback_1<T>* Steamworks::Callback_1<T>::Create(::Steamworks::Callback_1_DispatchDelegate<T>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"Create", {}, {::i2c::type_of<::Steamworks::Callback_1_DispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::Callback_1<T>*>(nullptr, ___internal_method, func);
}
template<typename T>
inline ::Steamworks::Callback_1<T>* Steamworks::Callback_1<T>::CreateGameServer(::Steamworks::Callback_1_DispatchDelegate<T>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"CreateGameServer", {}, {::i2c::type_of<::Steamworks::Callback_1_DispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::Callback_1<T>*>(nullptr, ___internal_method, func);
}
template<typename T>
inline void Steamworks::Callback_1<T>::_ctor(::Steamworks::Callback_1_DispatchDelegate<T>*  func, bool  bGameServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::Callback_1_DispatchDelegate<T>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, func, bGameServer);
}
template<typename T>
inline void Steamworks::Callback_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::Callback_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::Callback_1<T>::Register(::Steamworks::Callback_1_DispatchDelegate<T>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"Register", {}, {::i2c::type_of<::Steamworks::Callback_1_DispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, func);
}
template<typename T>
inline void Steamworks::Callback_1<T>::Unregister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Callback_1<T>*>(),
                        {"Unregister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Steamworks::Callback_1<T>::get_IsGameServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Type* Steamworks::Callback_1<T>::GetCallbackType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::Callback_1<T>::OnRunCallback(::System::IntPtr  pvParam)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvParam);
}
template<typename T>
inline void Steamworks::Callback_1<T>::SetUnregistered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::Callback_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Steamworks::Callback_1<T>* Steamworks::Callback_1<T>::New_ctor(::Steamworks::Callback_1_DispatchDelegate<T>*  func, bool  bGameServer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::Callback_1<T>*>(func, bGameServer));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Steamworks::Callback_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Steamworks::Callback_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Steamworks::Callback_1<T>::Callback_1()   {
}
