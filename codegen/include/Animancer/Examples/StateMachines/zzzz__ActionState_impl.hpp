#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/ActionState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__ActionState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterStatePriority_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::ActionState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::ActionState::*)()>(&::Animancer::Examples::StateMachines::ActionState::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f63e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::ActionState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::ActionState::*)()>(&::Animancer::Examples::StateMachines::ActionState::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::ActionState.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterStatePriority (::Animancer::Examples::StateMachines::ActionState::*)()>(&::Animancer::Examples::StateMachines::ActionState::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::ActionState.get_CanInterruptSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::ActionState::*)()>(&::Animancer::Examples::StateMachines::ActionState::get_CanInterruptSelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::ActionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::ActionState::*)()>(&::Animancer::Examples::StateMachines::ActionState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ClipTransition*& Animancer::Examples::StateMachines::ActionState::__cordl_internal_get__Animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::StateMachines::ActionState::__cordl_internal_get__Animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr void Animancer::Examples::StateMachines::ActionState::__cordl_internal_set__Animation(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animation = value;
}
inline void Animancer::Examples::StateMachines::ActionState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::ActionState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterStatePriority Animancer::Examples::StateMachines::ActionState::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterStatePriority>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::ActionState::get_CanInterruptSelf()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::ActionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::ActionState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::ActionState* Animancer::Examples::StateMachines::ActionState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::ActionState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::ActionState::ActionState()   {
}
