#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskVoid.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskVoid.Forget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskVoid::*)()>(&::Cysharp::Threading::Tasks::UniTaskVoid::Forget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskVoid>(),
                        {"Forget", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UniTaskVoid::Forget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskVoid>(),
                        {"Forget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskVoid::UniTaskVoid()   {
}
