#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/EmptyDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__EmptyDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::EmptyDisposable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::EmptyDisposable::*)()>(&::Cysharp::Threading::Tasks::Internal::EmptyDisposable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::EmptyDisposable.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::EmptyDisposable::*)()>(&::Cysharp::Threading::Tasks::Internal::EmptyDisposable::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Internal::EmptyDisposable::setStaticF_Instance(::Cysharp::Threading::Tasks::Internal::EmptyDisposable*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*, "Instance", ::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>(std::forward<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>(value));
}
inline ::Cysharp::Threading::Tasks::Internal::EmptyDisposable* Cysharp::Threading::Tasks::Internal::EmptyDisposable::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*, "Instance", ::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>();
}
inline void Cysharp::Threading::Tasks::Internal::EmptyDisposable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::EmptyDisposable::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::EmptyDisposable* Cysharp::Threading::Tasks::Internal::EmptyDisposable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::EmptyDisposable*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::Internal::EmptyDisposable::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Internal::EmptyDisposable::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::EmptyDisposable::EmptyDisposable()   {
}
