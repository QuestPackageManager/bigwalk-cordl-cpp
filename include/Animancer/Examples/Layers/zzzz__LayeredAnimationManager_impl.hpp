#pragma once
// IWYU pragma private; include "Animancer/Examples/Layers/LayeredAnimationManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Layers/zzzz__LayeredAnimationManager_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredAnimationManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredAnimationManager::*)()>(&::Animancer::Examples::Layers::LayeredAnimationManager::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802fdd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredAnimationManager.PlayBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredAnimationManager::*)(::Animancer::ITransition*, bool)>(&::Animancer::Examples::Layers::LayeredAnimationManager::PlayBase)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fdf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"PlayBase", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredAnimationManager.PlayAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredAnimationManager::*)(::Animancer::ITransition*)>(&::Animancer::Examples::Layers::LayeredAnimationManager::PlayAction)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802fde80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"PlayAction", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredAnimationManager.PlayActionFullBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredAnimationManager::*)(float_t)>(&::Animancer::Examples::Layers::LayeredAnimationManager::PlayActionFullBody)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802fdde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"PlayActionFullBody", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredAnimationManager.FadeOutUpperBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredAnimationManager::*)()>(&::Animancer::Examples::Layers::LayeredAnimationManager::FadeOutUpperBody)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"FadeOutUpperBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::LayeredAnimationManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::LayeredAnimationManager::*)()>(&::Animancer::Examples::Layers::LayeredAnimationManager::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fdfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::AvatarMask>& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__ActionMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionMask;
}
constexpr ::UnityW<::UnityEngine::AvatarMask> const& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__ActionMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionMask;
}
constexpr void Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_set__ActionMask(::UnityW<::UnityEngine::AvatarMask>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionMask = value;
}
constexpr float_t& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__ActionFadeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionFadeDuration;
}
constexpr float_t const& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__ActionFadeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionFadeDuration;
}
constexpr void Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_set__ActionFadeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionFadeDuration = value;
}
constexpr ::Animancer::AnimancerLayer*& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__BaseLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseLayer;
}
constexpr ::Animancer::AnimancerLayer* const& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__BaseLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseLayer;
}
constexpr void Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_set__BaseLayer(::Animancer::AnimancerLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseLayer = value;
}
constexpr ::Animancer::AnimancerLayer*& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__ActionLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionLayer;
}
constexpr ::Animancer::AnimancerLayer* const& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__ActionLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionLayer;
}
constexpr void Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_set__ActionLayer(::Animancer::AnimancerLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionLayer = value;
}
constexpr bool& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__CanPlayActionFullBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanPlayActionFullBody;
}
constexpr bool const& Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_get__CanPlayActionFullBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanPlayActionFullBody;
}
constexpr void Animancer::Examples::Layers::LayeredAnimationManager::__cordl_internal_set__CanPlayActionFullBody(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CanPlayActionFullBody = value;
}
inline void Animancer::Examples::Layers::LayeredAnimationManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredAnimationManager::PlayBase(::Animancer::ITransition*  transition, bool  canPlayActionFullBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"PlayBase", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transition, canPlayActionFullBody);
}
inline void Animancer::Examples::Layers::LayeredAnimationManager::PlayAction(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"PlayAction", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transition);
}
inline void Animancer::Examples::Layers::LayeredAnimationManager::PlayActionFullBody(float_t  fadeDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"PlayActionFullBody", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeDuration);
}
inline void Animancer::Examples::Layers::LayeredAnimationManager::FadeOutUpperBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {"FadeOutUpperBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::LayeredAnimationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::LayeredAnimationManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Layers::LayeredAnimationManager* Animancer::Examples::Layers::LayeredAnimationManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Layers::LayeredAnimationManager*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Layers::LayeredAnimationManager::LayeredAnimationManager()   {
}
