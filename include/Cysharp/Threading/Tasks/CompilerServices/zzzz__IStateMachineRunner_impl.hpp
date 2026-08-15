#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/IStateMachineRunner.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunner_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner.get_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::get_MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner.get_ReturnAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::get_ReturnAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::System::Action* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::get_MoveNext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::Return()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action* Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner::get_ReturnAction()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
