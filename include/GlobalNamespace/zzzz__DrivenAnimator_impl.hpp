#pragma once
// IWYU pragma private; include "GlobalNamespace/DrivenAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DrivenAnimator_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "GlobalNamespace/zzzz__MovementDriver_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrivenAnimator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrivenAnimator::*)()>(&::GlobalNamespace::DrivenAnimator::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803fbf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrivenAnimator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrivenAnimator.OnPositionUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrivenAnimator::*)(double_t)>(&::GlobalNamespace::DrivenAnimator::OnPositionUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803fc050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrivenAnimator*>(),
                        {"OnPositionUpdate", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrivenAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrivenAnimator::*)()>(&::GlobalNamespace::DrivenAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrivenAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MovementDriver>& GlobalNamespace::DrivenAnimator::__cordl_internal_get_movementDriver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementDriver;
}
constexpr ::UnityW<::GlobalNamespace::MovementDriver> const& GlobalNamespace::DrivenAnimator::__cordl_internal_get_movementDriver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementDriver;
}
constexpr void GlobalNamespace::DrivenAnimator::__cordl_internal_set_movementDriver(::UnityW<::GlobalNamespace::MovementDriver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementDriver = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::DrivenAnimator::__cordl_internal_get_animancerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::DrivenAnimator::__cordl_internal_get_animancerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr void GlobalNamespace::DrivenAnimator::__cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerComponent = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::DrivenAnimator::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::DrivenAnimator::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void GlobalNamespace::DrivenAnimator::__cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
constexpr ::Animancer::AnimancerState*& GlobalNamespace::DrivenAnimator::__cordl_internal_get__animancerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animancerState;
}
constexpr ::Animancer::AnimancerState* const& GlobalNamespace::DrivenAnimator::__cordl_internal_get__animancerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animancerState;
}
constexpr void GlobalNamespace::DrivenAnimator::__cordl_internal_set__animancerState(::Animancer::AnimancerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animancerState = value;
}
inline void GlobalNamespace::DrivenAnimator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrivenAnimator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DrivenAnimator::OnPositionUpdate(double_t  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrivenAnimator*>(),
                        {"OnPositionUpdate", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::DrivenAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrivenAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DrivenAnimator* GlobalNamespace::DrivenAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrivenAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrivenAnimator::DrivenAnimator()   {
}
