#pragma once
// IWYU pragma private; include "Animancer/Examples/Layers/LayeredCharacterAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Layers/zzzz__LayeredCharacterAnimations_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredCharacterAnimations.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::LayeredCharacterAnimations::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802fdff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredCharacterAnimations.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::LayeredCharacterAnimations::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fe1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredCharacterAnimations.UpdateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::LayeredCharacterAnimations::UpdateMovement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802fe160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"UpdateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredCharacterAnimations.UpdateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::LayeredCharacterAnimations::UpdateAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802fe120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"UpdateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredCharacterAnimations.OnActionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::LayeredCharacterAnimations::OnActionEnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fe0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"OnActionEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredCharacterAnimations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::LayeredCharacterAnimations::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fe250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__Idle(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__Move(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__Action(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Action = value;
}
constexpr ::UnityW<::UnityEngine::AvatarMask>& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__ActionMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionMask;
}
constexpr ::UnityW<::UnityEngine::AvatarMask> const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__ActionMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionMask;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__ActionMask(::UnityW<::UnityEngine::AvatarMask>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionMask = value;
}
constexpr float_t& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__ActionFadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionFadeOutDuration;
}
constexpr float_t const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__ActionFadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionFadeOutDuration;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__ActionFadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionFadeOutDuration = value;
}
constexpr ::Animancer::AnimancerLayer*& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__BaseLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseLayer;
}
constexpr ::Animancer::AnimancerLayer* const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__BaseLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseLayer;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__BaseLayer(::Animancer::AnimancerLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseLayer = value;
}
constexpr ::Animancer::AnimancerLayer*& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__ActionLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionLayer;
}
constexpr ::Animancer::AnimancerLayer* const& Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_get__ActionLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionLayer;
}
constexpr void Animancer::Examples::Layers::LayeredCharacterAnimations::__cordl_internal_set__ActionLayer(::Animancer::AnimancerLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionLayer = value;
}
inline void Animancer::Examples::Layers::LayeredCharacterAnimations::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredCharacterAnimations::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredCharacterAnimations::UpdateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"UpdateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredCharacterAnimations::UpdateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"UpdateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredCharacterAnimations::OnActionEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {"OnActionEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredCharacterAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredCharacterAnimations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Layers::LayeredCharacterAnimations* Animancer::Examples::Layers::LayeredCharacterAnimations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Layers::LayeredCharacterAnimations*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Layers::LayeredCharacterAnimations::LayeredCharacterAnimations()   {
}
