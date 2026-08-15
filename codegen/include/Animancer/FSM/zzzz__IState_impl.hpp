#pragma once
// IWYU pragma private; include "Animancer/FSM/IState.hpp"
#include "Animancer/FSM/zzzz__IState_def.hpp"
//  Writing Method size for method: ::Animancer::FSM::IState.get_CanEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IState::*)()>(&::Animancer::FSM::IState::get_CanEnterState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IState*>(),
                    {::i2c::class_of<::Animancer::FSM::IState*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IState.get_CanExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::IState::*)()>(&::Animancer::FSM::IState::get_CanExitState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IState*>(),
                    {::i2c::class_of<::Animancer::FSM::IState*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IState.OnEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::IState::*)()>(&::Animancer::FSM::IState::OnEnterState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IState*>(),
                    {::i2c::class_of<::Animancer::FSM::IState*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::IState.OnExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::IState::*)()>(&::Animancer::FSM::IState::OnExitState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IState*>(),
                    {::i2c::class_of<::Animancer::FSM::IState*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Animancer::FSM::IState::get_CanEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IState*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::FSM::IState::get_CanExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IState*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::FSM::IState::OnEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IState*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::FSM::IState::OnExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IState*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
