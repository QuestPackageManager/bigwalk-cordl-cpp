#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IAsyncClickEventHandler.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncClickEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::IAsyncClickEventHandler.OnClickAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::IAsyncClickEventHandler::*)()>(&::Cysharp::Threading::Tasks::IAsyncClickEventHandler::OnClickAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::IAsyncClickEventHandler::OnClickAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::IAsyncClickEventHandler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::IAsyncClickEventHandler::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
