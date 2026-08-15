#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/IKPuppet.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__IKPuppetTarget_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__IKPuppet_def.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__IKPuppetLookTarget_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppet.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppet::*)()>(&::Animancer::Examples::InverseKinematics::IKPuppet::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppet*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppet.OnAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppet::*)(int32_t)>(&::Animancer::Examples::InverseKinematics::IKPuppet::OnAnimatorIK)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1802fd0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppet*>(),
                        {"OnAnimatorIK", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::IKPuppet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::IKPuppet::*)()>(&::Animancer::Examples::InverseKinematics::IKPuppet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__BodyTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BodyTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__BodyTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BodyTarget;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_set__BodyTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BodyTarget = value;
}
constexpr ::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget>& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__LookTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LookTarget;
}
constexpr ::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget> const& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__LookTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LookTarget;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_set__LookTarget(::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LookTarget = value;
}
constexpr ::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>>& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__IKTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IKTargets;
}
constexpr ::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>> const& Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_get__IKTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IKTargets;
}
constexpr void Animancer::Examples::InverseKinematics::IKPuppet::__cordl_internal_set__IKTargets(::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IKTargets = value;
}
inline void Animancer::Examples::InverseKinematics::IKPuppet::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppet*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::IKPuppet::OnAnimatorIK(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppet*>(),
                        {"OnAnimatorIK", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex);
}
inline void Animancer::Examples::InverseKinematics::IKPuppet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::IKPuppet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::IKPuppet* Animancer::Examples::InverseKinematics::IKPuppet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::IKPuppet*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::IKPuppet::IKPuppet()   {
}
