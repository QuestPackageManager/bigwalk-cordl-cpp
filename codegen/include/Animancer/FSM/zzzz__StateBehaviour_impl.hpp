#pragma once
// IWYU pragma private; include "Animancer/FSM/StateBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/FSM/zzzz__StateBehaviour_def.hpp"
#include "Animancer/FSM/zzzz__IState_def.hpp"
//  Writing Method size for method: ::Animancer::FSM::StateBehaviour.get_CanEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::StateBehaviour::*)()>(&::Animancer::FSM::StateBehaviour::get_CanEnterState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateBehaviour*>(),
                    {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::StateBehaviour.get_CanExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::StateBehaviour::*)()>(&::Animancer::FSM::StateBehaviour::get_CanExitState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateBehaviour*>(),
                    {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::StateBehaviour.OnEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::StateBehaviour::*)()>(&::Animancer::FSM::StateBehaviour::OnEnterState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803038d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateBehaviour*>(),
                    {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::StateBehaviour.OnExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::StateBehaviour::*)()>(&::Animancer::FSM::StateBehaviour::OnExitState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803038e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateBehaviour*>(),
                    {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::StateBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::StateBehaviour::*)()>(&::Animancer::FSM::StateBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Animancer::FSM::StateBehaviour::get_CanEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::FSM::StateBehaviour::get_CanExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::FSM::StateBehaviour::OnEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::FSM::StateBehaviour::OnExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateBehaviour*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::FSM::StateBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::FSM::StateBehaviour* Animancer::FSM::StateBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateBehaviour*>());
}
/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr  Animancer::FSM::StateBehaviour::operator ::Animancer::FSM::IState*() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* Animancer::FSM::StateBehaviour::i___Animancer__FSM__IState() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::FSM::StateBehaviour::StateBehaviour()   {
}
