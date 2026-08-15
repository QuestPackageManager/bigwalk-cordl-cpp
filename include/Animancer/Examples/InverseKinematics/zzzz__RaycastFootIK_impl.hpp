#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/RaycastFootIK.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__RaycastFootIK_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimatedFloat_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::RaycastFootIK.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::InverseKinematics::RaycastFootIK::*)()>(&::Animancer::Examples::InverseKinematics::RaycastFootIK::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180300a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"get_ApplyAnimatorIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::RaycastFootIK.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::RaycastFootIK::*)(bool)>(&::Animancer::Examples::InverseKinematics::RaycastFootIK::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180300ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"set_ApplyAnimatorIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::RaycastFootIK.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::RaycastFootIK::*)()>(&::Animancer::Examples::InverseKinematics::RaycastFootIK::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803002e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::RaycastFootIK.OnAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::RaycastFootIK::*)(int32_t)>(&::Animancer::Examples::InverseKinematics::RaycastFootIK::OnAnimatorIK)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180300440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"OnAnimatorIK", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::RaycastFootIK.UpdateFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::RaycastFootIK::*)(::UnityEngine::Transform*, ::UnityEngine::AvatarIKGoal, float_t, float_t)>(&::Animancer::Examples::InverseKinematics::RaycastFootIK::UpdateFootIK)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x180300520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"UpdateFootIK", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::RaycastFootIK._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::RaycastFootIK::*)()>(&::Animancer::Examples::InverseKinematics::RaycastFootIK::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180300a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__RaycastOriginY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RaycastOriginY;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__RaycastOriginY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RaycastOriginY;
}
constexpr void Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_set__RaycastOriginY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RaycastOriginY = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__RaycastEndY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RaycastEndY;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__RaycastEndY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RaycastEndY;
}
constexpr void Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_set__RaycastEndY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RaycastEndY = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__LeftFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__LeftFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftFoot;
}
constexpr void Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_set__LeftFoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LeftFoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__RightFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RightFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__RightFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RightFoot;
}
constexpr void Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_set__RightFoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RightFoot = value;
}
constexpr ::Animancer::AnimatedFloat*& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__FootWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootWeights;
}
constexpr ::Animancer::AnimatedFloat* const& Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_get__FootWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootWeights;
}
constexpr void Animancer::Examples::InverseKinematics::RaycastFootIK::__cordl_internal_set__FootWeights(::Animancer::AnimatedFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FootWeights = value;
}
inline bool Animancer::Examples::InverseKinematics::RaycastFootIK::get_ApplyAnimatorIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"get_ApplyAnimatorIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::RaycastFootIK::set_ApplyAnimatorIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"set_ApplyAnimatorIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::InverseKinematics::RaycastFootIK::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::RaycastFootIK::OnAnimatorIK(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"OnAnimatorIK", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex);
}
inline void Animancer::Examples::InverseKinematics::RaycastFootIK::UpdateFootIK(::UnityEngine::Transform*  footTransform, ::UnityEngine::AvatarIKGoal  goal, float_t  weight, float_t  footBottomHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {"UpdateFootIK", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AvatarIKGoal>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, footTransform, goal, weight, footBottomHeight);
}
inline void Animancer::Examples::InverseKinematics::RaycastFootIK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::RaycastFootIK*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::RaycastFootIK* Animancer::Examples::InverseKinematics::RaycastFootIK::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::RaycastFootIK*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::RaycastFootIK::RaycastFootIK()   {
}
