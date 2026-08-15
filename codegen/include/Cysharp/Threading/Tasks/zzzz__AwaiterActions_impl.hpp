#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AwaiterActions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AwaiterActions_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AwaiterActions.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AwaiterActions::Continuation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e5cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AwaiterActions*>(),
                        {"Continuation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AwaiterActions::setStaticF_InvokeContinuationDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "InvokeContinuationDelegate", ::Cysharp::Threading::Tasks::AwaiterActions*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AwaiterActions::getStaticF_InvokeContinuationDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "InvokeContinuationDelegate", ::Cysharp::Threading::Tasks::AwaiterActions*>();
}
inline void Cysharp::Threading::Tasks::AwaiterActions::Continuation(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AwaiterActions*>(),
                        {"Continuation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AwaiterActions::AwaiterActions()   {
}
