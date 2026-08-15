#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/IStateMachineRunnerPromise.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunnerPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise.get_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::get_MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise.SetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::SetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise.SetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::SetException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::System::Action* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::get_MoveNext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::get_Task()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::SetResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::SetException(::System::Exception*  exception)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
