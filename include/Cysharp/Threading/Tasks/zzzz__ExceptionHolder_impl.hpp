#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ExceptionHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ExceptionHolder_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ExceptionHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ExceptionHolder::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(&::Cysharp::Threading::Tasks::ExceptionHolder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ExceptionHolder.GetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::Cysharp::Threading::Tasks::ExceptionHolder::*)()>(&::Cysharp::Threading::Tasks::ExceptionHolder::GetException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e604b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(),
                        {"GetException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ExceptionHolder.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ExceptionHolder::*)()>(&::Cysharp::Threading::Tasks::ExceptionHolder::Finalize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e60480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(), 1}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Cysharp::Threading::Tasks::ExceptionHolder::__cordl_internal_get_exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& Cysharp::Threading::Tasks::ExceptionHolder::__cordl_internal_get_exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
constexpr void Cysharp::Threading::Tasks::ExceptionHolder::__cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exception = value;
}
constexpr bool& Cysharp::Threading::Tasks::ExceptionHolder::__cordl_internal_get_calledGet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledGet;
}
constexpr bool const& Cysharp::Threading::Tasks::ExceptionHolder::__cordl_internal_get_calledGet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledGet;
}
constexpr void Cysharp::Threading::Tasks::ExceptionHolder::__cordl_internal_set_calledGet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calledGet = value;
}
inline void Cysharp::Threading::Tasks::ExceptionHolder::_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Cysharp::Threading::Tasks::ExceptionHolder::GetException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(),
                        {"GetException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::ExceptionHolder::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionHolder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::ExceptionHolder* Cysharp::Threading::Tasks::ExceptionHolder::New_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ExceptionHolder*>(exception));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::ExceptionHolder::ExceptionHolder()   {
}
