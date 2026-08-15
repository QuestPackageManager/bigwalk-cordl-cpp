#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSourceCoreShared.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCoreShared_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared.CompletionSentinel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared::CompletionSentinel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e696c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared*>(),
                        {"CompletionSentinel", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared::setStaticF_s_sentinel(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_sentinel", ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared::getStaticF_s_sentinel()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_sentinel", ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared*>();
}
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared::CompletionSentinel(::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared*>(),
                        {"CompletionSentinel", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCoreShared::UniTaskCompletionSourceCoreShared()   {
}
