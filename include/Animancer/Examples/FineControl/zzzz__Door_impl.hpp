#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/Door.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/FineControl/zzzz__Door_def.hpp"
#include "Animancer/Examples/FineControl/zzzz__IInteractable_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::Door.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::Door::*)()>(&::Animancer::Examples::FineControl::Door::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802fa550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::Door*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::Door.Interact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::Door::*)()>(&::Animancer::Examples::FineControl::Door::Interact)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802fa640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::Door*>(),
                        {"Interact", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::Door._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::Door::*)()>(&::Animancer::Examples::FineControl::Door::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::Door*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::FineControl::Door::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::FineControl::Door::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::FineControl::Door::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::FineControl::Door::__cordl_internal_get__Open()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Open;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::FineControl::Door::__cordl_internal_get__Open() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Open;
}
constexpr void Animancer::Examples::FineControl::Door::__cordl_internal_set__Open(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Open = value;
}
constexpr float_t& Animancer::Examples::FineControl::Door::__cordl_internal_get__Openness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Openness;
}
constexpr float_t const& Animancer::Examples::FineControl::Door::__cordl_internal_get__Openness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Openness;
}
constexpr void Animancer::Examples::FineControl::Door::__cordl_internal_set__Openness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Openness = value;
}
inline void Animancer::Examples::FineControl::Door::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::Door*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::Door::Interact()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::Door*>(),
                        {"Interact", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::Door::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::Door*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::FineControl::Door* Animancer::Examples::FineControl::Door::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::FineControl::Door*>());
}
/// @brief Convert operator to "::Animancer::Examples::FineControl::IInteractable"
constexpr  Animancer::Examples::FineControl::Door::operator ::Animancer::Examples::FineControl::IInteractable*() noexcept {
return static_cast<::Animancer::Examples::FineControl::IInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Examples::FineControl::IInteractable"
constexpr ::Animancer::Examples::FineControl::IInteractable* Animancer::Examples::FineControl::Door::i___Animancer__Examples__FineControl__IInteractable() noexcept {
return static_cast<::Animancer::Examples::FineControl::IInteractable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Examples::FineControl::Door::Door()   {
}
