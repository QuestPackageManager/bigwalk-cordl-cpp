#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ExceptionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ExceptionExtensions_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ExceptionExtensions.IsOperationCanceledException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::ExceptionExtensions::IsOperationCanceledException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e60430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionExtensions*>(),
                        {"IsOperationCanceledException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::ExceptionExtensions::IsOperationCanceledException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ExceptionExtensions*>(),
                        {"IsOperationCanceledException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::ExceptionExtensions::ExceptionExtensions()   {
}
