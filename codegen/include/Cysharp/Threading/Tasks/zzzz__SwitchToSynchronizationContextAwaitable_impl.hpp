#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToSynchronizationContextAwaitable.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToSynchronizationContextAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToSynchronizationContextAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::*)(::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x180e981b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::*)()>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::*)()>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e5ce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter.Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::Callback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e5cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::setStaticF_switchToCallback(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "switchToCallback", ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::getStaticF_switchToCallback()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "switchToCallback", ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>();
}
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::_ctor(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, synchronizationContext, cancellationToken);
}
inline bool Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::Callback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::SwitchToSynchronizationContextAwaitable_Awaiter(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->synchronizationContext = synchronizationContext;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter::SwitchToSynchronizationContextAwaitable_Awaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::*)(::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x180e981b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter (::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::*)()>(&::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e62ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::_ctor(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, synchronizationContext, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::SwitchToSynchronizationContextAwaitable(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->synchronizationContext = synchronizationContext;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable::SwitchToSynchronizationContextAwaitable()   {
}
