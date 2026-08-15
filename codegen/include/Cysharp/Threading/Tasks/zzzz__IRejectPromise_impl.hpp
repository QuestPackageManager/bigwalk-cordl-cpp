#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IRejectPromise.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IRejectPromise.TrySetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::IRejectPromise::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::IRejectPromise::TrySetException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IRejectPromise*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IRejectPromise*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::IRejectPromise::TrySetException(::System::Exception*  exception)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IRejectPromise*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
