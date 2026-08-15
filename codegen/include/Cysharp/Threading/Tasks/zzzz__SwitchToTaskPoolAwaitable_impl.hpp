#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToTaskPoolAwaitable.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToTaskPoolAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToTaskPoolAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::*)()>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::*)()>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181e5cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181e5cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter.Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::Callback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e5cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::setStaticF_switchToCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "switchToCallback", ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::getStaticF_switchToCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "switchToCallback", ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>();
}
inline bool Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::Callback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter::SwitchToTaskPoolAwaitable_Awaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter (::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::*)()>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::SwitchToTaskPoolAwaitable()   {
}
