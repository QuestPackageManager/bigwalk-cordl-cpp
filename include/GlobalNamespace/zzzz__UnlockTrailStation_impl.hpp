#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockTrailStation.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__UnlockTrailStation_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTween_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnlockTrailStation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrailStation::*)()>(&::GlobalNamespace::UnlockTrailStation::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18041a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockTrailStation.OnCutPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrailStation::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::UnlockTrailStation::OnCutPeck)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18041a2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"OnCutPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockTrailStation.OnBite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrailStation::*)()>(&::GlobalNamespace::UnlockTrailStation::OnBite)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18041a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"OnBite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockTrailStation.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrailStation::*)()>(&::GlobalNamespace::UnlockTrailStation::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18041a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockTrailStation.PlateTween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrailStation::*)(float_t)>(&::GlobalNamespace::UnlockTrailStation::PlateTween)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18041a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"PlateTween", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockTrailStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrailStation::*)()>(&::GlobalNamespace::UnlockTrailStation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_arrowTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrowTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_arrowTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrowTransform;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_arrowTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrowTransform = value;
}
constexpr int32_t& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_stationIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationIndex;
}
constexpr int32_t const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_stationIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationIndex;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_stationIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stationIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_cuttingHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuttingHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_cuttingHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuttingHome;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_cuttingHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cuttingHome = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_cutSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_cutSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutSystem;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_cutSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutSystem = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_cuttingPositioner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuttingPositioner;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_cuttingPositioner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuttingPositioner;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_cuttingPositioner(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cuttingPositioner = value;
}
constexpr float_t& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_gap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gap;
}
constexpr float_t const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_gap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gap;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_gap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gap = value;
}
constexpr float_t& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosition;
}
constexpr float_t const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosition;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_startPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTween>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_peckTween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckTween;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTween> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_peckTween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckTween;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_peckTween(::UnityW<::GlobalNamespace::PeckEffectTween>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckTween = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_plates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plates;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_plates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plates;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_plates(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plates = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_targetPlate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlate;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get_targetPlate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlate;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set_targetPlate(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlate = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::UnlockTrailStation::__cordl_internal_get__plateInitialRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plateInitialRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::UnlockTrailStation::__cordl_internal_get__plateInitialRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plateInitialRotations;
}
constexpr void GlobalNamespace::UnlockTrailStation::__cordl_internal_set__plateInitialRotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____plateInitialRotations = value;
}
inline void GlobalNamespace::UnlockTrailStation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockTrailStation::OnCutPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"OnCutPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::UnlockTrailStation::OnBite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"OnBite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockTrailStation::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockTrailStation::PlateTween(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {"PlateTween", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::UnlockTrailStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrailStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnlockTrailStation* GlobalNamespace::UnlockTrailStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnlockTrailStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnlockTrailStation::UnlockTrailStation()   {
}
