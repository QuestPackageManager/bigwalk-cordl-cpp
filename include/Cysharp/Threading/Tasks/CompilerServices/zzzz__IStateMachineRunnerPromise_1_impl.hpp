#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/IStateMachineRunnerPromise_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunnerPromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename T>
inline ::System::Action* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::get_MoveNext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::get_Task()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::SetResult(T  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::SetException(::System::Exception*  exception)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
