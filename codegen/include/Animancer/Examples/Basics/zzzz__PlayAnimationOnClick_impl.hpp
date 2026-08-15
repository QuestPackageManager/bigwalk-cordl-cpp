#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/PlayAnimationOnClick.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Basics/zzzz__PlayAnimationOnClick_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayAnimationOnClick.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayAnimationOnClick::*)()>(&::Animancer::Examples::Basics::PlayAnimationOnClick::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fc530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayAnimationOnClick*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayAnimationOnClick.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayAnimationOnClick::*)()>(&::Animancer::Examples::Basics::PlayAnimationOnClick::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180300160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayAnimationOnClick*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayAnimationOnClick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayAnimationOnClick::*)()>(&::Animancer::Examples::Basics::PlayAnimationOnClick::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayAnimationOnClick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_set__Idle(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_get__Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_get__Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr void Animancer::Examples::Basics::PlayAnimationOnClick::__cordl_internal_set__Action(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Action = value;
}
inline void Animancer::Examples::Basics::PlayAnimationOnClick::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayAnimationOnClick*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::PlayAnimationOnClick::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayAnimationOnClick*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::PlayAnimationOnClick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayAnimationOnClick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Basics::PlayAnimationOnClick* Animancer::Examples::Basics::PlayAnimationOnClick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Basics::PlayAnimationOnClick*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Basics::PlayAnimationOnClick::PlayAnimationOnClick()   {
}
