#pragma once
// IWYU pragma private; include "Animancer/Examples/DirectionalSprites/DirectionalBasics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Animancer/Examples/DirectionalSprites/zzzz__DirectionalBasics_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalBasics.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalBasics::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalBasics::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802f9e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalBasics.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalBasics::*)(::Animancer::DirectionalAnimationSet*)>(&::Animancer::Examples::DirectionalSprites::DirectionalBasics::Play)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalBasics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalBasics::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalBasics::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Idles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idles;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Idles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idles;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_set__Idles(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idles = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Walks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walks;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Walks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walks;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_set__Walks(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Walks = value;
}
constexpr ::UnityEngine::Vector2& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Facing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Facing;
}
constexpr ::UnityEngine::Vector2 const& Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_get__Facing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Facing;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalBasics::__cordl_internal_set__Facing(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Facing = value;
}
inline void Animancer::Examples::DirectionalSprites::DirectionalBasics::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalBasics::Play(::Animancer::DirectionalAnimationSet*  animations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animations);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalBasics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::DirectionalSprites::DirectionalBasics* Animancer::Examples::DirectionalSprites::DirectionalBasics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::DirectionalSprites::DirectionalBasics*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::DirectionalSprites::DirectionalBasics::DirectionalBasics()   {
}
