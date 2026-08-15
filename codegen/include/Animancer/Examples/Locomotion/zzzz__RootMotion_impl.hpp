#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/RootMotion.hpp"
#include "Animancer/zzzz__ClipTransition_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/Locomotion/zzzz__RootMotion_def.hpp"
#include "Animancer/Examples/Locomotion/zzzz__RootMotion_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Locomotion::RootMotion_MotionTransition.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::RootMotion_MotionTransition::*)(::Animancer::AnimancerState*)>(&::Animancer::Examples::Locomotion::RootMotion_MotionTransition::Apply)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802fea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>(),
                    {::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::RootMotion_MotionTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::RootMotion_MotionTransition::*)()>(&::Animancer::Examples::Locomotion::RootMotion_MotionTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Animancer::Examples::Locomotion::RootMotion_MotionTransition::__cordl_internal_get__ApplyRootMotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyRootMotion;
}
constexpr bool const& Animancer::Examples::Locomotion::RootMotion_MotionTransition::__cordl_internal_get__ApplyRootMotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyRootMotion;
}
constexpr void Animancer::Examples::Locomotion::RootMotion_MotionTransition::__cordl_internal_set__ApplyRootMotion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyRootMotion = value;
}
inline void Animancer::Examples::Locomotion::RootMotion_MotionTransition::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::Examples::Locomotion::RootMotion_MotionTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Locomotion::RootMotion_MotionTransition* Animancer::Examples::Locomotion::RootMotion_MotionTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Locomotion::RootMotion_MotionTransition::RootMotion_MotionTransition()   {
}
//  Writing Method size for method: ::Animancer::Examples::Locomotion::RootMotion.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::RootMotion::*)()>(&::Animancer::Examples::Locomotion::RootMotion::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180300fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::RootMotion.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::RootMotion::*)(int32_t)>(&::Animancer::Examples::Locomotion::RootMotion::Play)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180301020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {"Play", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::RootMotion.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::RootMotion::*)()>(&::Animancer::Examples::Locomotion::RootMotion::FixedUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180300ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::RootMotion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::RootMotion::*)()>(&::Animancer::Examples::Locomotion::RootMotion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Locomotion::RootMotion::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr float_t& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__MaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxDistance;
}
constexpr float_t const& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__MaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxDistance;
}
constexpr void Animancer::Examples::Locomotion::RootMotion::__cordl_internal_set__MaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxDistance = value;
}
constexpr ::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__Animations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
constexpr ::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*> const& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__Animations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
constexpr void Animancer::Examples::Locomotion::RootMotion::__cordl_internal_set__Animations(::ArrayW<::Animancer::Examples::Locomotion::RootMotion_MotionTransition*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animations = value;
}
constexpr ::UnityEngine::Vector3& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__Start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Start;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::Locomotion::RootMotion::__cordl_internal_get__Start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Start;
}
constexpr void Animancer::Examples::Locomotion::RootMotion::__cordl_internal_set__Start(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Start = value;
}
inline void Animancer::Examples::Locomotion::RootMotion::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::RootMotion::Play(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {"Play", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Animancer::Examples::Locomotion::RootMotion::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::RootMotion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::RootMotion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Locomotion::RootMotion* Animancer::Examples::Locomotion::RootMotion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Locomotion::RootMotion*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Locomotion::RootMotion::RootMotion()   {
}
