#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/TwoBoneIK.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Jobs/zzzz__TwoBoneIK_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIK.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::TwoBoneIK::*)()>(&::Animancer::Examples::Jobs::TwoBoneIK::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180303200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIK*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIK._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::TwoBoneIK::*)()>(&::Animancer::Examples::Jobs::TwoBoneIK::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIK*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_get__EndBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_get__EndBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndBone;
}
constexpr void Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_set__EndBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_get__Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_get__Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr void Animancer::Examples::Jobs::TwoBoneIK::__cordl_internal_set__Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Target = value;
}
inline void Animancer::Examples::Jobs::TwoBoneIK::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIK*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::TwoBoneIK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIK*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Jobs::TwoBoneIK* Animancer::Examples::Jobs::TwoBoneIK::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Jobs::TwoBoneIK*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::TwoBoneIK::TwoBoneIK()   {
}
