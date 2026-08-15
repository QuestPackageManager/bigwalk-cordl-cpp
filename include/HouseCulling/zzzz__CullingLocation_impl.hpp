#pragma once
// IWYU pragma private; include "HouseCulling/CullingLocation.hpp"
#include "GlobalNamespace/zzzz__HouseLight_impl.hpp"
#include "HouseCulling/zzzz__CullingRegion_impl.hpp"
#include "HouseCulling/zzzz__CullingState_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "HouseCulling/zzzz__CullingLocation_def.hpp"
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "HouseCulling/zzzz__CullingState_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::HouseCulling::CullingLocation.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HouseCulling::CullingState (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::get_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803becf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.set_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingLocation::*)(::HouseCulling::CullingState)>(&::HouseCulling::CullingLocation::set_state)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1803bed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"set_state", {}, {::i2c::type_of<::HouseCulling::CullingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.SwapToDebugMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(&::HouseCulling::CullingLocation::SwapToDebugMaterial)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803bec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"SwapToDebugMaterial", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::GetBounds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803be5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"GetBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.DrawGizmoBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::DrawGizmoBounds)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803be3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"DrawGizmoBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.DrawRegionGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::HouseCulling::CullingRegion*, ::HouseCulling::CullingLocation*)>(&::HouseCulling::CullingLocation::DrawRegionGizmos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"DrawRegionGizmos", {}, {::i2c::type_of<::HouseCulling::CullingRegion*>(), ::i2c::type_of<::HouseCulling::CullingLocation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803be810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::OnEnable)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803bea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803be780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingLocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingLocation::*)()>(&::HouseCulling::CullingLocation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HouseCulling::CullingRegion>& HouseCulling::CullingLocation::__cordl_internal_get_region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr ::UnityW<::HouseCulling::CullingRegion> const& HouseCulling::CullingLocation::__cordl_internal_get_region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___region;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_region(::UnityW<::HouseCulling::CullingRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___region = value;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>& HouseCulling::CullingLocation::__cordl_internal_get_regions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regions;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>> const& HouseCulling::CullingLocation::__cordl_internal_get_regions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regions;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_regions(::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regions = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& HouseCulling::CullingLocation::__cordl_internal_get_staticRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& HouseCulling::CullingLocation::__cordl_internal_get_staticRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticRenderers;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_staticRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticRenderers = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::HouseLight>>& HouseCulling::CullingLocation::__cordl_internal_get_staticLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::HouseLight>> const& HouseCulling::CullingLocation::__cordl_internal_get_staticLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticLights;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_staticLights(::ArrayW<::UnityW<::GlobalNamespace::HouseLight>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticLights = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& HouseCulling::CullingLocation::__cordl_internal_get_terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& HouseCulling::CullingLocation::__cordl_internal_get_terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrain = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& HouseCulling::CullingLocation::__cordl_internal_get_behaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviours;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& HouseCulling::CullingLocation::__cordl_internal_get_behaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviours;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_behaviours(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviours = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& HouseCulling::CullingLocation::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& HouseCulling::CullingLocation::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& HouseCulling::CullingLocation::__cordl_internal_get_waterRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterRenderer;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& HouseCulling::CullingLocation::__cordl_internal_get_waterRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterRenderer;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_waterRenderer(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterRenderer = value;
}
constexpr bool& HouseCulling::CullingLocation::__cordl_internal_get_listIsHandFilled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listIsHandFilled;
}
constexpr bool const& HouseCulling::CullingLocation::__cordl_internal_get_listIsHandFilled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listIsHandFilled;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_listIsHandFilled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listIsHandFilled = value;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingLocation>>& HouseCulling::CullingLocation::__cordl_internal_get_reservedLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedLocations;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingLocation>> const& HouseCulling::CullingLocation::__cordl_internal_get_reservedLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedLocations;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_reservedLocations(::ArrayW<::UnityW<::HouseCulling::CullingLocation>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedLocations = value;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>& HouseCulling::CullingLocation::__cordl_internal_get_originalMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMaterials;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>> const& HouseCulling::CullingLocation::__cordl_internal_get_originalMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMaterials;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set_originalMaterials(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMaterials = value;
}
constexpr ::HouseCulling::CullingState& HouseCulling::CullingLocation::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::HouseCulling::CullingState const& HouseCulling::CullingLocation::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void HouseCulling::CullingLocation::__cordl_internal_set__state(::HouseCulling::CullingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline ::HouseCulling::CullingState HouseCulling::CullingLocation::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HouseCulling::CullingState>(this, ___internal_method);
}
inline void HouseCulling::CullingLocation::set_state(::HouseCulling::CullingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"set_state", {}, {::i2c::type_of<::HouseCulling::CullingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HouseCulling::CullingLocation::SwapToDebugMaterial(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"SwapToDebugMaterial", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderer, material);
}
inline ::UnityEngine::Bounds HouseCulling::CullingLocation::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"GetBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void HouseCulling::CullingLocation::DrawGizmoBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"DrawGizmoBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingLocation::DrawRegionGizmos(::HouseCulling::CullingRegion*  region, ::HouseCulling::CullingLocation*  except)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"DrawRegionGizmos", {}, {::i2c::type_of<::HouseCulling::CullingRegion*>(), ::i2c::type_of<::HouseCulling::CullingLocation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, region, except);
}
inline void HouseCulling::CullingLocation::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingLocation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingLocation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingLocation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingLocation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseCulling::CullingLocation* HouseCulling::CullingLocation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseCulling::CullingLocation*>());
}
// Ctor Parameters []
constexpr ::HouseCulling::CullingLocation::CullingLocation()   {
}
