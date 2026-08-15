#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/GenericSafeHandle_1.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__GenericSafeHandle_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
template<typename HandleType>
constexpr HandleType& PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::__cordl_internal_get_handleObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleObject;
}
template<typename HandleType>
constexpr HandleType const& PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::__cordl_internal_get_handleObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleObject;
}
template<typename HandleType>
constexpr void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::__cordl_internal_set_handleObject(HandleType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleObject = value;
}
template<typename HandleType>
constexpr bool& PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::__cordl_internal_get_disposedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedValue;
}
template<typename HandleType>
constexpr bool const& PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::__cordl_internal_get_disposedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedValue;
}
template<typename HandleType>
constexpr void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::__cordl_internal_set_disposedValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposedValue = value;
}
template<typename HandleType>
inline void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::_ctor(HandleType  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(),
                        {".ctor", {}, {::i2c::type_of<HandleType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template<typename HandleType>
inline void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::CurrentDomain_UnhandledException(::System::Object*  sender, ::System::UnhandledExceptionEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(),
                        {"CurrentDomain_UnhandledException", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::UnhandledExceptionEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
template<typename HandleType>
inline void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename HandleType>
inline bool PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename HandleType>
inline void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename HandleType>
inline void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename HandleType>
inline void PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename HandleType>
inline ::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>* PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::New_ctor(HandleType  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>*>(handle));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename HandleType>
constexpr  PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename HandleType>
constexpr ::System::IDisposable* PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename HandleType>
constexpr ::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<HandleType>::GenericSafeHandle_1()   {
}
