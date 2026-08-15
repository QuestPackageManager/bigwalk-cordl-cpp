#pragma once
// IWYU pragma private; include "GlobalNamespace/BeamCaster.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__BeamCaster_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeamCaster.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeamCaster::*)()>(&::GlobalNamespace::BeamCaster::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803f78c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeamCaster*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeamCaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeamCaster::*)()>(&::GlobalNamespace::BeamCaster::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeamCaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BeamCaster::__cordl_internal_get_placeAtHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeAtHit;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BeamCaster::__cordl_internal_get_placeAtHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeAtHit;
}
constexpr void GlobalNamespace::BeamCaster::__cordl_internal_set_placeAtHit(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeAtHit = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::BeamCaster::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::BeamCaster::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::BeamCaster::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::BeamCaster::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::BeamCaster::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::BeamCaster::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::BeamCaster::__cordl_internal_get_hit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::BeamCaster::__cordl_internal_get_hit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr void GlobalNamespace::BeamCaster::__cordl_internal_set_hit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hit = value;
}
constexpr bool& GlobalNamespace::BeamCaster::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::BeamCaster::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::BeamCaster::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::BeamCaster::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeamCaster*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeamCaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeamCaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeamCaster* GlobalNamespace::BeamCaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeamCaster*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeamCaster::BeamCaster()   {
}
