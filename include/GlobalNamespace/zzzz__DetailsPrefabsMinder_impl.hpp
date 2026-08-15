#pragma once
// IWYU pragma private; include "GlobalNamespace/DetailsPrefabsMinder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DetailsPrefabsMinder_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DetailsPrefabsMinder.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DetailsPrefabsMinder::*)()>(&::GlobalNamespace::DetailsPrefabsMinder::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DetailsPrefabsMinder.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DetailsPrefabsMinder::*)()>(&::GlobalNamespace::DetailsPrefabsMinder::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e5de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DetailsPrefabsMinder.OnTerrainHeightmapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DetailsPrefabsMinder::*)(::UnityEngine::Terrain*, ::UnityEngine::RectInt, bool)>(&::GlobalNamespace::DetailsPrefabsMinder::OnTerrainHeightmapChanged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"OnTerrainHeightmapChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DetailsPrefabsMinder.ReplaceDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DetailsPrefabsMinder::*)(::UnityEngine::TerrainData*)>(&::GlobalNamespace::DetailsPrefabsMinder::ReplaceDetails)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803e5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"ReplaceDetails", {}, {::i2c::type_of<::UnityEngine::TerrainData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DetailsPrefabsMinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DetailsPrefabsMinder::*)()>(&::GlobalNamespace::DetailsPrefabsMinder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DetailsPrefabsMinder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DetailsPrefabsMinder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DetailsPrefabsMinder::OnTerrainHeightmapChanged(::UnityEngine::Terrain*  terrain, ::UnityEngine::RectInt  heightmapRect, bool  synced)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"OnTerrainHeightmapChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, heightmapRect, synced);
}
inline void GlobalNamespace::DetailsPrefabsMinder::ReplaceDetails(::UnityEngine::TerrainData*  terrainData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {"ReplaceDetails", {}, {::i2c::type_of<::UnityEngine::TerrainData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainData);
}
inline void GlobalNamespace::DetailsPrefabsMinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DetailsPrefabsMinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DetailsPrefabsMinder* GlobalNamespace::DetailsPrefabsMinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DetailsPrefabsMinder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DetailsPrefabsMinder::DetailsPrefabsMinder()   {
}
