#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/RespawnState.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__RespawnState_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180300b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180300bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180300bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState.get_CanExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::get_CanExitState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                    {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ClipTransition*& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__Animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__Animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_set__Animation(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animation = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__OnEnterState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnEnterState;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__OnEnterState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnEnterState;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_set__OnEnterState(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnEnterState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__OnExitState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnExitState;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__OnExitState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnExitState;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_set__OnExitState(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnExitState = value;
}
constexpr ::UnityEngine::Vector3& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__StartingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartingPosition;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_get__StartingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartingPosition;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::__cordl_internal_set__StartingPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartingPosition = value;
}
inline void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::Examples::AnimatorControllers::GameKit::RespawnState::get_CanExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::RespawnState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState* Animancer::Examples::AnimatorControllers::GameKit::RespawnState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::GameKit::RespawnState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::GameKit::RespawnState::RespawnState()   {
}
