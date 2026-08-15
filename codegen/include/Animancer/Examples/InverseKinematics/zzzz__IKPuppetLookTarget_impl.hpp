#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/IKPuppetLookTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__IKPuppetLookTarget_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppetLookTarget.UpdateAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppetLookTarget::*)(::UnityEngine::Animator*)>(&::Animancer::Examples::InverseKinematics::IKPuppetLookTarget::UpdateAnimatorIK)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802fce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*>(),
                        {"UpdateAnimatorIK", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppetLookTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppetLookTarget::*)()>(&::Animancer::Examples::InverseKinematics::IKPuppetLookTarget::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fcf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__BodyWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BodyWeight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__BodyWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BodyWeight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_set__BodyWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BodyWeight = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__HeadWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeadWeight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__HeadWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeadWeight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_set__HeadWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HeadWeight = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__EyesWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EyesWeight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__EyesWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EyesWeight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_set__EyesWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EyesWeight = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__ClampWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClampWeight;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_get__ClampWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClampWeight;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::__cordl_internal_set__ClampWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClampWeight = value;
}
inline void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::UpdateAnimatorIK(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*>(),
                        {"UpdateAnimatorIK", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator);
}
inline void Animancer::Examples::InverseKinematics::IKPuppetLookTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::IKPuppetLookTarget* Animancer::Examples::InverseKinematics::IKPuppetLookTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::IKPuppetLookTarget::IKPuppetLookTarget()   {
}
