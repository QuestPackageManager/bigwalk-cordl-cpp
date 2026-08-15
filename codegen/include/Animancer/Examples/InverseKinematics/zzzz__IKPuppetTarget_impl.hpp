#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/IKPuppetTarget.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__IKPuppetTarget_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppetTarget.UpdateAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppetTarget::*)(::UnityEngine::Animator*)>(&::Animancer::Examples::InverseKinematics::IKPuppetTarget::UpdateAnimatorIK)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802fcf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetTarget*>(),
                        {"UpdateAnimatorIK", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppetTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppetTarget::*)()>(&::Animancer::Examples::InverseKinematics::IKPuppetTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AvatarIKGoal& Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_get__Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr ::UnityEngine::AvatarIKGoal const& Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_get__Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_set__Type(::UnityEngine::AvatarIKGoal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_get__PositionWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PositionWeight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_get__PositionWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PositionWeight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_set__PositionWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PositionWeight = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_get__RotationWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RotationWeight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_get__RotationWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RotationWeight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetTarget::__cordl_internal_set__RotationWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RotationWeight = value;
}
inline void Animancer::Examples::InverseKinematics::IKPuppetTarget::UpdateAnimatorIK(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetTarget*>(),
                        {"UpdateAnimatorIK", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator);
}
inline void Animancer::Examples::InverseKinematics::IKPuppetTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::IKPuppetTarget* Animancer::Examples::InverseKinematics::IKPuppetTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::IKPuppetTarget*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::IKPuppetTarget::IKPuppetTarget()   {
}
