#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/SingleAssignmentDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__SingleAssignmentDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable.get_IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::*)()>(&::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::get_IsDisposed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e80270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"get_IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable.get_Disposable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::*)()>(&::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::get_Disposable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"get_Disposable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable.set_Disposable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::*)(::System::IDisposable*)>(&::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::set_Disposable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e80310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"set_Disposable", {}, {::i2c::type_of<::System::IDisposable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::*)()>(&::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e801a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::*)()>(&::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d7ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr void Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_set_gate(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
constexpr ::System::IDisposable*& Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr ::System::IDisposable* const& Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr void Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_set_current(::System::IDisposable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
constexpr bool& Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
inline bool Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::get_IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"get_IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IDisposable* Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::get_Disposable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"get_Disposable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::set_Disposable(::System::IDisposable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"set_Disposable", {}, {::i2c::type_of<::System::IDisposable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable::SingleAssignmentDisposable()   {
}
