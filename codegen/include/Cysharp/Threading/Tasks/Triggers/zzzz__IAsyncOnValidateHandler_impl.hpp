#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnValidateHandler.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnValidateHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler.OnValidateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler::*)()>(&::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler::OnValidateAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler::OnValidateAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
