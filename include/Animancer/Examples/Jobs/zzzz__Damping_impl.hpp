#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/Damping.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Jobs/zzzz__Damping_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Jobs::Damping.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::Damping::*)()>(&::Animancer::Examples::Jobs::Damping::Awake)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x1802f95b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::Damping*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::Damping.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::Damping::*)()>(&::Animancer::Examples::Jobs::Damping::OnValidate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802f9ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::Damping*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::Damping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::Damping::*)()>(&::Animancer::Examples::Jobs::Damping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f9ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::Damping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Jobs::Damping::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Jobs::Damping::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Jobs::Damping::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::Jobs::Damping::__cordl_internal_get__EndBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::Jobs::Damping::__cordl_internal_get__EndBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndBone;
}
constexpr void Animancer::Examples::Jobs::Damping::__cordl_internal_set__EndBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndBone = value;
}
constexpr int32_t& Animancer::Examples::Jobs::Damping::__cordl_internal_get__BoneCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoneCount;
}
constexpr int32_t const& Animancer::Examples::Jobs::Damping::__cordl_internal_get__BoneCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoneCount;
}
constexpr void Animancer::Examples::Jobs::Damping::__cordl_internal_set__BoneCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BoneCount = value;
}
inline void Animancer::Examples::Jobs::Damping::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::Damping*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::Damping::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::Damping*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::Damping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::Damping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Jobs::Damping* Animancer::Examples::Jobs::Damping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Jobs::Damping*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::Damping::Damping()   {
}
