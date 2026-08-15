#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrain.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_impl.hpp"
#include "TheVisualEngine/zzzz__TVERefreshMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TheVisualEngine/zzzz__TVETerrain_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrainRenderer_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrainSettings_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ad930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ad900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ad900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.InitializeTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::InitializeTerrain)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x1804ad320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"InitializeTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.UpdateTerrainSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::UpdateTerrainSettings)> {
  constexpr static std::size_t size = 0xd50;
  constexpr static std::size_t addrs = 0x1804adc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"UpdateTerrainSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.CopyLayerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::TerrainLayer*, int32_t)>(&::TheVisualEngine::TVETerrain::CopyLayerSettings)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1804ac9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"CopyLayerSettings", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::TerrainLayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.AddTerrainToManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::AddTerrainToManager)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804ac910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"AddTerrainToManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.DestroyProxyTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::DestroyProxyTextures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"DestroyProxyTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.TryGetProxyTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::TryGetProxyTextures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"TryGetProxyTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.CreateProxyTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)(bool)>(&::TheVisualEngine::TVETerrain::CreateProxyTextures)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1804aced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"CreateProxyTextures", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.UpdateProxySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::UpdateProxySettings)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1804ada50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"UpdateProxySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain.GetProxyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::GetProxyName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804ad2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"GetProxyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVETerrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrain::*)()>(&::TheVisualEngine::TVETerrain::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804ae960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TheVisualEngine::TVERefreshMode& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainRefresh;
}
constexpr ::TheVisualEngine::TVERefreshMode const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainRefresh;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainRefresh(::TheVisualEngine::TVERefreshMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainRefresh = value;
}
constexpr float_t& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainBounds;
}
constexpr float_t const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainBounds;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainBounds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainBounds = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainMaterial;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainMaterial = value;
}
constexpr ::TheVisualEngine::TVETerrainSettings*& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSettings;
}
constexpr ::TheVisualEngine::TVETerrainSettings* const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSettings;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainSettings(::TheVisualEngine::TVETerrainSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSettings = value;
}
constexpr ::TheVisualEngine::TVETerrainRenderer*& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainRenderer;
}
constexpr ::TheVisualEngine::TVETerrainRenderer* const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainRenderer;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainRenderer(::TheVisualEngine::TVETerrainRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& TheVisualEngine::TVETerrain::__cordl_internal_get_terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrain = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& TheVisualEngine::TVETerrain::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& TheVisualEngine::TVETerrain::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& TheVisualEngine::TVETerrain::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& TheVisualEngine::TVETerrain::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityEngine::Vector3& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainPosition;
}
constexpr ::UnityEngine::Vector3 const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainPosition;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainPosition = value;
}
constexpr ::UnityEngine::Vector3& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSize;
}
constexpr ::UnityEngine::Vector3 const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainSize;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainSize = value;
}
constexpr int32_t& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayers;
}
constexpr int32_t const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayers;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainLayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainLayers = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainPropertyBlock;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainPropertyBlock = value;
}
constexpr bool& TheVisualEngine::TVETerrain::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& TheVisualEngine::TVETerrain::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr int32_t& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainID;
}
constexpr int32_t const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainID;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainID = value;
}
constexpr bool& TheVisualEngine::TVETerrain::__cordl_internal_get_isValidTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isValidTerrain;
}
constexpr bool const& TheVisualEngine::TVETerrain::__cordl_internal_get_isValidTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isValidTerrain;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_isValidTerrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isValidTerrain = value;
}
constexpr bool& TheVisualEngine::TVETerrain::__cordl_internal_get_isValidRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isValidRenderer;
}
constexpr bool const& TheVisualEngine::TVETerrain::__cordl_internal_get_isValidRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isValidRenderer;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_isValidRenderer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isValidRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainProxyMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainProxyMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVETerrain::__cordl_internal_get_terrainProxyMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainProxyMesh;
}
constexpr void TheVisualEngine::TVETerrain::__cordl_internal_set_terrainProxyMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainProxyMesh = value;
}
inline void TheVisualEngine::TVETerrain::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::InitializeTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"InitializeTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::UpdateTerrainSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"UpdateTerrainSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::CopyLayerSettings(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::TerrainLayer*  layer, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"CopyLayerSettings", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::TerrainLayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialPropertyBlock, layer, index);
}
inline void TheVisualEngine::TVETerrain::AddTerrainToManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"AddTerrainToManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::DestroyProxyTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"DestroyProxyTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::TryGetProxyTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"TryGetProxyTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::CreateProxyTextures(bool  saveTextures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"CreateProxyTextures", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveTextures);
}
inline void TheVisualEngine::TVETerrain::UpdateProxySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"UpdateProxySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW TheVisualEngine::TVETerrain::GetProxyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {"GetProxyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void TheVisualEngine::TVETerrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVETerrain* TheVisualEngine::TVETerrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVETerrain*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVETerrain::TVETerrain()   {
}
