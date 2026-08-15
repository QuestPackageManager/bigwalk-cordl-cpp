#pragma once
// IWYU pragma private; include "Animancer/FSM/DelegateState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/FSM/zzzz__DelegateState_def.hpp"
#include "Animancer/FSM/zzzz__IState_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Animancer::FSM::DelegateState.get_CanEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::DelegateState::*)()>(&::Animancer::FSM::DelegateState::get_CanEnterState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::DelegateState*>(),
                    {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::DelegateState.get_CanExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FSM::DelegateState::*)()>(&::Animancer::FSM::DelegateState::get_CanExitState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803038b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::DelegateState*>(),
                    {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::DelegateState.OnEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::DelegateState::*)()>(&::Animancer::FSM::DelegateState::OnEnterState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802fc2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::DelegateState*>(),
                    {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::DelegateState.OnExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::DelegateState::*)()>(&::Animancer::FSM::DelegateState::OnExitState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::DelegateState*>(),
                    {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FSM::DelegateState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FSM::DelegateState::*)()>(&::Animancer::FSM::DelegateState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::DelegateState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& Animancer::FSM::DelegateState::__cordl_internal_get_canEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canEnter;
}
constexpr ::System::Func_1<bool>* const& Animancer::FSM::DelegateState::__cordl_internal_get_canEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canEnter;
}
constexpr void Animancer::FSM::DelegateState::__cordl_internal_set_canEnter(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canEnter = value;
}
constexpr ::System::Func_1<bool>*& Animancer::FSM::DelegateState::__cordl_internal_get_canExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExit;
}
constexpr ::System::Func_1<bool>* const& Animancer::FSM::DelegateState::__cordl_internal_get_canExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExit;
}
constexpr void Animancer::FSM::DelegateState::__cordl_internal_set_canExit(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canExit = value;
}
constexpr ::System::Action*& Animancer::FSM::DelegateState::__cordl_internal_get_onEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnter;
}
constexpr ::System::Action* const& Animancer::FSM::DelegateState::__cordl_internal_get_onEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnter;
}
constexpr void Animancer::FSM::DelegateState::__cordl_internal_set_onEnter(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnter = value;
}
constexpr ::System::Action*& Animancer::FSM::DelegateState::__cordl_internal_get_onExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExit;
}
constexpr ::System::Action* const& Animancer::FSM::DelegateState::__cordl_internal_get_onExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExit;
}
constexpr void Animancer::FSM::DelegateState::__cordl_internal_set_onExit(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onExit = value;
}
inline bool Animancer::FSM::DelegateState::get_CanEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::FSM::DelegateState::get_CanExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::FSM::DelegateState::OnEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::FSM::DelegateState::OnExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::DelegateState*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::FSM::DelegateState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::DelegateState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::FSM::DelegateState* Animancer::FSM::DelegateState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::DelegateState*>());
}
/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr  Animancer::FSM::DelegateState::operator ::Animancer::FSM::IState*() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* Animancer::FSM::DelegateState::i___Animancer__FSM__IState() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::FSM::DelegateState::DelegateState()   {
}
