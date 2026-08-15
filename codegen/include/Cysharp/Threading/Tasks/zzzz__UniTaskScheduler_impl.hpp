#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskScheduler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskScheduler_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskScheduler.add_UnobservedTaskException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Exception*>*)>(&::Cysharp::Threading::Tasks::UniTaskScheduler::add_UnobservedTaskException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e83d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"add_UnobservedTaskException", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskScheduler.remove_UnobservedTaskException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Exception*>*)>(&::Cysharp::Threading::Tasks::UniTaskScheduler::remove_UnobservedTaskException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e83df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"remove_UnobservedTaskException", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskScheduler.InvokeUnobservedTaskException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::UniTaskScheduler::InvokeUnobservedTaskException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e839e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"InvokeUnobservedTaskException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskScheduler.PublishUnobservedTaskException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::UniTaskScheduler::PublishUnobservedTaskException)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181e83a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"PublishUnobservedTaskException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UniTaskScheduler::setStaticF_UnobservedTaskException(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "UnobservedTaskException", ::Cysharp::Threading::Tasks::UniTaskScheduler*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Cysharp::Threading::Tasks::UniTaskScheduler::getStaticF_UnobservedTaskException()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "UnobservedTaskException", ::Cysharp::Threading::Tasks::UniTaskScheduler*>();
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::setStaticF_PropagateOperationCanceledException(bool  value)  {
::cordl_internals::setStaticField<bool, "PropagateOperationCanceledException", ::Cysharp::Threading::Tasks::UniTaskScheduler*>(std::forward<bool>(value));
}
inline bool Cysharp::Threading::Tasks::UniTaskScheduler::getStaticF_PropagateOperationCanceledException()  {
return ::cordl_internals::getStaticField<bool, "PropagateOperationCanceledException", ::Cysharp::Threading::Tasks::UniTaskScheduler*>();
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::setStaticF_UnobservedExceptionWriteLogType(::UnityEngine::LogType  value)  {
::cordl_internals::setStaticField<::UnityEngine::LogType, "UnobservedExceptionWriteLogType", ::Cysharp::Threading::Tasks::UniTaskScheduler*>(std::forward<::UnityEngine::LogType>(value));
}
inline ::UnityEngine::LogType Cysharp::Threading::Tasks::UniTaskScheduler::getStaticF_UnobservedExceptionWriteLogType()  {
return ::cordl_internals::getStaticField<::UnityEngine::LogType, "UnobservedExceptionWriteLogType", ::Cysharp::Threading::Tasks::UniTaskScheduler*>();
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::setStaticF_DispatchUnityMainThread(bool  value)  {
::cordl_internals::setStaticField<bool, "DispatchUnityMainThread", ::Cysharp::Threading::Tasks::UniTaskScheduler*>(std::forward<bool>(value));
}
inline bool Cysharp::Threading::Tasks::UniTaskScheduler::getStaticF_DispatchUnityMainThread()  {
return ::cordl_internals::getStaticField<bool, "DispatchUnityMainThread", ::Cysharp::Threading::Tasks::UniTaskScheduler*>();
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::setStaticF_handleExceptionInvoke(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "handleExceptionInvoke", ::Cysharp::Threading::Tasks::UniTaskScheduler*>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* Cysharp::Threading::Tasks::UniTaskScheduler::getStaticF_handleExceptionInvoke()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "handleExceptionInvoke", ::Cysharp::Threading::Tasks::UniTaskScheduler*>();
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::add_UnobservedTaskException(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"add_UnobservedTaskException", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::remove_UnobservedTaskException(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"remove_UnobservedTaskException", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::InvokeUnobservedTaskException(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"InvokeUnobservedTaskException", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void Cysharp::Threading::Tasks::UniTaskScheduler::PublishUnobservedTaskException(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskScheduler*>(),
                        {"PublishUnobservedTaskException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskScheduler::UniTaskScheduler()   {
}
