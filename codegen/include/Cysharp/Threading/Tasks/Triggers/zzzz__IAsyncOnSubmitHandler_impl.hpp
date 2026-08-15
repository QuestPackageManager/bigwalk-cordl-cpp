#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnSubmitHandler.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnSubmitHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler.OnSubmitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> (::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler::*)()>(&::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler::OnSubmitAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler::OnSubmitAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>>(this, ___internal_method);
}
