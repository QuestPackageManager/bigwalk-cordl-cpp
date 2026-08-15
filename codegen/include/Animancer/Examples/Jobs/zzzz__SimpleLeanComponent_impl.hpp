#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/SimpleLeanComponent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "Animancer/Examples/Jobs/zzzz__SimpleLeanComponent_def.hpp"
#include "Animancer/Examples/Jobs/zzzz__SimpleLean_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLeanComponent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLeanComponent::*)()>(&::Animancer::Examples::Jobs::SimpleLeanComponent::Awake)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180301280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLeanComponent.get_Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Examples::Jobs::SimpleLeanComponent::*)()>(&::Animancer::Examples::Jobs::SimpleLeanComponent::get_Angle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180301550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"get_Angle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLeanComponent.set_Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLeanComponent::*)(float_t)>(&::Animancer::Examples::Jobs::SimpleLeanComponent::set_Angle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180301570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"set_Angle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLeanComponent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLeanComponent::*)()>(&::Animancer::Examples::Jobs::SimpleLeanComponent::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180301480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLeanComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLeanComponent::*)()>(&::Animancer::Examples::Jobs::SimpleLeanComponent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bones;
}
constexpr void Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_set__Bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bones = value;
}
constexpr ::Animancer::Examples::Jobs::SimpleLean*& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Lean()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Lean;
}
constexpr ::Animancer::Examples::Jobs::SimpleLean* const& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Lean() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Lean;
}
constexpr void Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_set__Lean(::Animancer::Examples::Jobs::SimpleLean*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Lean = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_get__Axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis;
}
constexpr void Animancer::Examples::Jobs::SimpleLeanComponent::__cordl_internal_set__Axis(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Axis = value;
}
inline void Animancer::Examples::Jobs::SimpleLeanComponent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::Examples::Jobs::SimpleLeanComponent::get_Angle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"get_Angle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::SimpleLeanComponent::set_Angle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"set_Angle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::Jobs::SimpleLeanComponent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::SimpleLeanComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLeanComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Jobs::SimpleLeanComponent* Animancer::Examples::Jobs::SimpleLeanComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Jobs::SimpleLeanComponent*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::SimpleLeanComponent::SimpleLeanComponent()   {
}
