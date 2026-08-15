#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityGauge.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__ProximityGauge_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProximityGauge.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityGauge::*)()>(&::GlobalNamespace::ProximityGauge::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1804121f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityGauge*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityGauge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityGauge::*)()>(&::GlobalNamespace::ProximityGauge::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityGauge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::ProximityGauge::__cordl_internal_get_chargeLightSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeLightSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::ProximityGauge::__cordl_internal_get_chargeLightSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeLightSystem;
}
constexpr void GlobalNamespace::ProximityGauge::__cordl_internal_set_chargeLightSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeLightSystem = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::ProximityGauge::__cordl_internal_get_needles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needles;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::ProximityGauge::__cordl_internal_get_needles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needles;
}
constexpr void GlobalNamespace::ProximityGauge::__cordl_internal_set_needles(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needles = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::ProximityGauge::__cordl_internal_get_partners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partners;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::ProximityGauge::__cordl_internal_get_partners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partners;
}
constexpr void GlobalNamespace::ProximityGauge::__cordl_internal_set_partners(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partners = value;
}
constexpr float_t& GlobalNamespace::ProximityGauge::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::ProximityGauge::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::ProximityGauge::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr float_t& GlobalNamespace::ProximityGauge::__cordl_internal_get_minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr float_t const& GlobalNamespace::ProximityGauge::__cordl_internal_get_minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr void GlobalNamespace::ProximityGauge::__cordl_internal_set_minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistance = value;
}
constexpr bool& GlobalNamespace::ProximityGauge::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ProximityGauge::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ProximityGauge::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::ProximityGauge::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityGauge*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityGauge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityGauge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProximityGauge* GlobalNamespace::ProximityGauge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProximityGauge*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProximityGauge::ProximityGauge()   {
}
