#pragma once
// IWYU pragma private; include "Steamworks/CallResult_1.hpp"
#include "Steamworks/zzzz__CallResult_impl.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Steamworks/zzzz__CallResult_1_def.hpp"
#include "Steamworks/zzzz__CallResult_1_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline void Steamworks::CallResult_1_APIDispatchDelegate<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Steamworks::CallResult_1_APIDispatchDelegate<T>::Invoke(T  param, bool  bIOFailure)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param, bIOFailure);
}
template<typename T>
inline ::System::IAsyncResult* Steamworks::CallResult_1_APIDispatchDelegate<T>::BeginInvoke(T  param, bool  bIOFailure, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, param, bIOFailure, callback, object);
}
template<typename T>
inline void Steamworks::CallResult_1_APIDispatchDelegate<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::Steamworks::CallResult_1_APIDispatchDelegate<T>* Steamworks::CallResult_1_APIDispatchDelegate<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Steamworks::CallResult_1_APIDispatchDelegate<T>::CallResult_1_APIDispatchDelegate()   {
}
template<typename T>
constexpr ::Steamworks::CallResult_1_APIDispatchDelegate<T>*& Steamworks::CallResult_1<T>::__cordl_internal_get_m_Func()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Func;
}
template<typename T>
constexpr ::Steamworks::CallResult_1_APIDispatchDelegate<T>* const& Steamworks::CallResult_1<T>::__cordl_internal_get_m_Func() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Func;
}
template<typename T>
constexpr void Steamworks::CallResult_1<T>::__cordl_internal_set_m_Func(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Func = value;
}
template<typename T>
constexpr ::Steamworks::SteamAPICall_t& Steamworks::CallResult_1<T>::__cordl_internal_get_m_hAPICall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hAPICall;
}
template<typename T>
constexpr ::Steamworks::SteamAPICall_t const& Steamworks::CallResult_1<T>::__cordl_internal_get_m_hAPICall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hAPICall;
}
template<typename T>
constexpr void Steamworks::CallResult_1<T>::__cordl_internal_set_m_hAPICall(::Steamworks::SteamAPICall_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hAPICall = value;
}
template<typename T>
constexpr bool& Steamworks::CallResult_1<T>::__cordl_internal_get_m_bDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bDisposed;
}
template<typename T>
constexpr bool const& Steamworks::CallResult_1<T>::__cordl_internal_get_m_bDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bDisposed;
}
template<typename T>
constexpr void Steamworks::CallResult_1<T>::__cordl_internal_set_m_bDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bDisposed = value;
}
template<typename T>
inline void Steamworks::CallResult_1<T>::add_m_Func(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"add_m_Func", {}, {::i2c::type_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::remove_m_Func(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"remove_m_Func", {}, {::i2c::type_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Steamworks::SteamAPICall_t Steamworks::CallResult_1<T>::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(this, ___internal_method);
}
template<typename T>
inline ::Steamworks::CallResult_1<T>* Steamworks::CallResult_1<T>::Create(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"Create", {}, {::i2c::type_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CallResult_1<T>*>(nullptr, ___internal_method, func);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::_ctor(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, func);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::Set(::Steamworks::SteamAPICall_t  hAPICall, ::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"Set", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::Steamworks::CallResult_1_APIDispatchDelegate<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hAPICall, func);
}
template<typename T>
inline bool Steamworks::CallResult_1<T>::IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallResult_1<T>*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Type* Steamworks::CallResult_1<T>::GetCallbackType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::OnRunCallResult(::System::IntPtr  pvParam, bool  bFailed, uint64_t  hSteamAPICall_)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvParam, bFailed, hSteamAPICall_);
}
template<typename T>
inline void Steamworks::CallResult_1<T>::SetUnregistered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CallResult_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Steamworks::CallResult_1<T>* Steamworks::CallResult_1<T>::New_ctor(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::CallResult_1<T>*>(func));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Steamworks::CallResult_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Steamworks::CallResult_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Steamworks::CallResult_1<T>::CallResult_1()   {
}
