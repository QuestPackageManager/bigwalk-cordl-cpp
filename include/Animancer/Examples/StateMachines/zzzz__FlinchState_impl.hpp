#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/FlinchState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__FlinchState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterStatePriority_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::FlinchState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::FlinchState::*)()>(&::Animancer::Examples::StateMachines::FlinchState::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802fb480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::FlinchState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::FlinchState::*)()>(&::Animancer::Examples::StateMachines::FlinchState::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::FlinchState.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterStatePriority (::Animancer::Examples::StateMachines::FlinchState::*)()>(&::Animancer::Examples::StateMachines::FlinchState::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::FlinchState.get_CanInterruptSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::FlinchState::*)()>(&::Animancer::Examples::StateMachines::FlinchState::get_CanInterruptSelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::FlinchState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::FlinchState::*)()>(&::Animancer::Examples::StateMachines::FlinchState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::FlinchState._Awake_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::FlinchState::*)()>(&::Animancer::Examples::StateMachines::FlinchState::_Awake_b__1_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fb9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {"<Awake>b__1_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ClipTransition*& Animancer::Examples::StateMachines::FlinchState::__cordl_internal_get__Animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::StateMachines::FlinchState::__cordl_internal_get__Animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr void Animancer::Examples::StateMachines::FlinchState::__cordl_internal_set__Animation(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animation = value;
}
inline void Animancer::Examples::StateMachines::FlinchState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::FlinchState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterStatePriority Animancer::Examples::StateMachines::FlinchState::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterStatePriority>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::FlinchState::get_CanInterruptSelf()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::FlinchState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::FlinchState::_Awake_b__1_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::FlinchState*>(),
                        {"<Awake>b__1_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::FlinchState* Animancer::Examples::StateMachines::FlinchState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::FlinchState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::FlinchState::FlinchState()   {
}
