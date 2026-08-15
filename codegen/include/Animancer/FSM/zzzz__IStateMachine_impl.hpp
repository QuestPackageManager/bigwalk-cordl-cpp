#pragma once
// IWYU pragma private; include "Animancer/FSM/IStateMachine.hpp"
#include "Animancer/FSM/zzzz__IStateMachine_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::FSM::IStateMachine::*)()>(&::Animancer::FSM::IStateMachine::get_CurrentState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.get_PreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::FSM::IStateMachine::*)()>(&::Animancer::FSM::IStateMachine::get_PreviousState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.get_NextState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::FSM::IStateMachine::*)()>(&::Animancer::FSM::IStateMachine::get_NextState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.CanSetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IStateMachine::*)(::System::Object*)>(&::Animancer::FSM::IStateMachine::CanSetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.CanSetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::FSM::IStateMachine::*)(::System::Collections::IList*)>(&::Animancer::FSM::IStateMachine::CanSetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.TrySetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IStateMachine::*)(::System::Object*)>(&::Animancer::FSM::IStateMachine::TrySetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.TrySetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IStateMachine::*)(::System::Collections::IList*)>(&::Animancer::FSM::IStateMachine::TrySetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.TryResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IStateMachine::*)(::System::Object*)>(&::Animancer::FSM::IStateMachine::TryResetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.TryResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IStateMachine::*)(::System::Collections::IList*)>(&::Animancer::FSM::IStateMachine::TryResetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.ForceSetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::IStateMachine::*)(::System::Object*)>(&::Animancer::FSM::IStateMachine::ForceSetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IStateMachine.SetAllowNullStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::IStateMachine::*)(bool)>(&::Animancer::FSM::IStateMachine::SetAllowNullStates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IStateMachine*>(),
                    {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 10}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* Animancer::FSM::IStateMachine::get_CurrentState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Animancer::FSM::IStateMachine::get_PreviousState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Animancer::FSM::IStateMachine::get_NextState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Animancer::FSM::IStateMachine::CanSetState(::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline ::System::Object* Animancer::FSM::IStateMachine::CanSetState(::System::Collections::IList*  states)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, states);
}
inline bool Animancer::FSM::IStateMachine::TrySetState(::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline bool Animancer::FSM::IStateMachine::TrySetState(::System::Collections::IList*  states)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, states);
}
inline bool Animancer::FSM::IStateMachine::TryResetState(::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline bool Animancer::FSM::IStateMachine::TryResetState(::System::Collections::IList*  states)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, states);
}
inline void Animancer::FSM::IStateMachine::ForceSetState(::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::FSM::IStateMachine::SetAllowNullStates(bool  allow)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IStateMachine*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allow);
}
