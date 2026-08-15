#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/HybridBasics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/zzzz__HybridBasics_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)()>(&::Animancer::Examples::AnimatorControllers::HybridBasics::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics.SetMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)(bool)>(&::Animancer::Examples::AnimatorControllers::HybridBasics::SetMove)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802fc560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"SetMove", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics.PlaySeparateAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)()>(&::Animancer::Examples::AnimatorControllers::HybridBasics::PlaySeparateAnimation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fc530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"PlaySeparateAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics.PlayAnimatorController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)()>(&::Animancer::Examples::AnimatorControllers::HybridBasics::PlayAnimatorController)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"PlayAnimatorController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics.FadeSeparateAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)()>(&::Animancer::Examples::AnimatorControllers::HybridBasics::FadeSeparateAnimation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802fc470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"FadeSeparateAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics.FadeAnimatorController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)()>(&::Animancer::Examples::AnimatorControllers::HybridBasics::FadeAnimatorController)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802fc3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"FadeAnimatorController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridBasics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridBasics::*)()>(&::Animancer::Examples::AnimatorControllers::HybridBasics::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::AnimatorControllers::HybridBasics::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::AnimatorControllers::HybridBasics::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::AnimatorControllers::HybridBasics::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::AnimatorControllers::HybridBasics::__cordl_internal_get__SeparateAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SeparateAnimation;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::AnimatorControllers::HybridBasics::__cordl_internal_get__SeparateAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SeparateAnimation;
}
constexpr void Animancer::Examples::AnimatorControllers::HybridBasics::__cordl_internal_set__SeparateAnimation(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SeparateAnimation = value;
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::setStaticF_MoveParameterID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MoveParameterID", ::Animancer::Examples::AnimatorControllers::HybridBasics*>(std::forward<int32_t>(value));
}
inline int32_t Animancer::Examples::AnimatorControllers::HybridBasics::getStaticF_MoveParameterID()  {
return ::cordl_internals::getStaticField<int32_t, "MoveParameterID", ::Animancer::Examples::AnimatorControllers::HybridBasics*>();
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::SetMove(bool  move)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"SetMove", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, move);
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::PlaySeparateAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"PlaySeparateAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::PlayAnimatorController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"PlayAnimatorController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::FadeSeparateAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"FadeSeparateAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::FadeAnimatorController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {"FadeAnimatorController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridBasics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridBasics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::HybridBasics* Animancer::Examples::AnimatorControllers::HybridBasics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::HybridBasics*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::HybridBasics::HybridBasics()   {
}
