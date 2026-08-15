#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FileRequestTransferWrapper_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FileRequestTransferWrapper_1_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IFileTransferRequest_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr T& PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::__cordl_internal_get__instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
template<typename T>
constexpr T const& PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::__cordl_internal_get__instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
template<typename T>
constexpr void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::__cordl_internal_set__instance(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance = value;
}
template<typename T>
constexpr bool& PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
template<typename T>
constexpr bool const& PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
template<typename T>
constexpr void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::_ctor(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::op_Equality(::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*  wrapper, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(),
                        {"op_Equality", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, wrapper, obj);
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::op_Inequality(::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*  wrapper, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, wrapper, obj);
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template<typename T>
inline int32_t PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::Epic::OnlineServices::Result PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::CancelRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename T>
inline ::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>* PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::New_ctor(T  instance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>*>(instance));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IFileTransferRequest"
template<typename T>
constexpr  PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::operator ::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IFileTransferRequest"
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::IFileTransferRequest* PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::i___PlayEveryWare__EpicOnlineServices__IFileTransferRequest() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<T>::FileRequestTransferWrapper_1()   {
}
