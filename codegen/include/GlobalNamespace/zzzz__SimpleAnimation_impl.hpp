#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleAnimation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleAnimation_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleAnimation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleAnimation::*)()>(&::GlobalNamespace::SimpleAnimation::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fc530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleAnimation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleAnimation::*)()>(&::GlobalNamespace::SimpleAnimation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::SimpleAnimation::__cordl_internal_get_animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::SimpleAnimation::__cordl_internal_get_animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancer;
}
constexpr void GlobalNamespace::SimpleAnimation::__cordl_internal_set_animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancer = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::SimpleAnimation::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::SimpleAnimation::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void GlobalNamespace::SimpleAnimation::__cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
inline void GlobalNamespace::SimpleAnimation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleAnimation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleAnimation* GlobalNamespace::SimpleAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleAnimation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleAnimation::SimpleAnimation()   {
}
