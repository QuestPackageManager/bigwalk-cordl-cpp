#pragma once
// IWYU pragma private; include "GlobalNamespace/TelescopeRotator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TelescopeRotator_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTelescope_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TelescopeRotator.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TelescopeRotator::*)()>(&::GlobalNamespace::TelescopeRotator::Rotate)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1803f1c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TelescopeRotator*>(),
                        {"Rotate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TelescopeRotator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TelescopeRotator::*)()>(&::GlobalNamespace::TelescopeRotator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TelescopeRotator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TelescopeRotator::__cordl_internal_get_swivlerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swivlerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TelescopeRotator::__cordl_internal_get_swivlerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swivlerTransform;
}
constexpr void GlobalNamespace::TelescopeRotator::__cordl_internal_set_swivlerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swivlerTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TelescopeRotator::__cordl_internal_get_scopeTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scopeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TelescopeRotator::__cordl_internal_get_scopeTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scopeTransform;
}
constexpr void GlobalNamespace::TelescopeRotator::__cordl_internal_set_scopeTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scopeTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TelescopeRotator::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TelescopeRotator::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::TelescopeRotator::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTelescope>& GlobalNamespace::TelescopeRotator::__cordl_internal_get_peckEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffect;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTelescope> const& GlobalNamespace::TelescopeRotator::__cordl_internal_get_peckEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffect;
}
constexpr void GlobalNamespace::TelescopeRotator::__cordl_internal_set_peckEffect(::UnityW<::GlobalNamespace::PeckEffectTelescope>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckEffect = value;
}
inline void GlobalNamespace::TelescopeRotator::Rotate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TelescopeRotator*>(),
                        {"Rotate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TelescopeRotator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TelescopeRotator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TelescopeRotator* GlobalNamespace::TelescopeRotator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TelescopeRotator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TelescopeRotator::TelescopeRotator()   {
}
