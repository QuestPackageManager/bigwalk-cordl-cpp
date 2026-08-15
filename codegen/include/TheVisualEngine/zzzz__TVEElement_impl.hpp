#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElement.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementVisibility_impl.hpp"
#include "TheVisualEngine/zzzz__TVERefreshMode_impl.hpp"
#include "TheVisualEngine/zzzz__TVETerrainTexture_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementMaterialData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEElement.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::OnEnable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1804a8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a8750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a8750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804a9100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.UpdateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::UpdateElement)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1804a8ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"UpdateElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.UpdateElementTerrainData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::UpdateElementTerrainData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a8a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"UpdateElementTerrainData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.UpdateFading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::UpdateFading)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1804a8da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"UpdateFading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.AddElementToVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::AddElementToVolume)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x1804a7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"AddElementToVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.SetElementVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::SetElementVisibility)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804a8990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"SetElementVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.LoadMaterialData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEElement::LoadMaterialData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804a8570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"LoadMaterialData", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.GetMaterialParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::GetMaterialParameters)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1804a8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"GetMaterialParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement.GetRacastFading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::GetRacastFading)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804a83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"GetRacastFading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElement::*)()>(&::TheVisualEngine::TVEElement::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804a9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TheVisualEngine::TVERefreshMode& TheVisualEngine::TVEElement::__cordl_internal_get_elementRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementRefresh;
}
constexpr ::TheVisualEngine::TVERefreshMode const& TheVisualEngine::TVEElement::__cordl_internal_get_elementRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementRefresh;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_elementRefresh(::TheVisualEngine::TVERefreshMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementRefresh = value;
}
constexpr ::TheVisualEngine::TVEElementVisibility& TheVisualEngine::TVEElement::__cordl_internal_get_customVisibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customVisibility;
}
constexpr ::TheVisualEngine::TVEElementVisibility const& TheVisualEngine::TVEElement::__cordl_internal_get_customVisibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customVisibility;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_customVisibility(::TheVisualEngine::TVEElementVisibility  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customVisibility = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TheVisualEngine::TVEElement::__cordl_internal_get_customMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TheVisualEngine::TVEElement::__cordl_internal_get_customMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMaterial;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_customMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& TheVisualEngine::TVEElement::__cordl_internal_get_terrainData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainData;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& TheVisualEngine::TVEElement::__cordl_internal_get_terrainData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainData;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_terrainData(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainData = value;
}
constexpr ::TheVisualEngine::TVETerrainTexture& TheVisualEngine::TVEElement::__cordl_internal_get_terrainMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainMask;
}
constexpr ::TheVisualEngine::TVETerrainTexture const& TheVisualEngine::TVEElement::__cordl_internal_get_terrainMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainMask;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_terrainMask(::TheVisualEngine::TVETerrainTexture  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainMask = value;
}
constexpr ::TheVisualEngine::TVEElementMaterialData*& TheVisualEngine::TVEElement::__cordl_internal_get_materialData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialData;
}
constexpr ::TheVisualEngine::TVEElementMaterialData* const& TheVisualEngine::TVEElement::__cordl_internal_get_materialData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialData;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_materialData(::TheVisualEngine::TVEElementMaterialData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialData = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& TheVisualEngine::TVEElement::__cordl_internal_get_elementRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& TheVisualEngine::TVEElement::__cordl_internal_get_elementRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementRenderer;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_elementRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TheVisualEngine::TVEElement::__cordl_internal_get_elementMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TheVisualEngine::TVEElement::__cordl_internal_get_elementMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementMaterial;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_elementMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEElement::__cordl_internal_get_elementMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEElement::__cordl_internal_get_elementMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementMesh;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_elementMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementMesh = value;
}
constexpr ::UnityEngine::Vector4& TheVisualEngine::TVEElement::__cordl_internal_get_elementParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementParams;
}
constexpr ::UnityEngine::Vector4 const& TheVisualEngine::TVEElement::__cordl_internal_get_elementParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementParams;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_elementParams(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementParams = value;
}
constexpr int32_t& TheVisualEngine::TVEElement::__cordl_internal_get_elementID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementID;
}
constexpr int32_t const& TheVisualEngine::TVEElement::__cordl_internal_get_elementID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementID;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_elementID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementID = value;
}
constexpr int32_t& TheVisualEngine::TVEElement::__cordl_internal_get_instancedID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instancedID;
}
constexpr int32_t const& TheVisualEngine::TVEElement::__cordl_internal_get_instancedID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instancedID;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_instancedID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instancedID = value;
}
constexpr ::StringW& TheVisualEngine::TVEElement::__cordl_internal_get_renderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderName;
}
constexpr ::StringW const& TheVisualEngine::TVEElement::__cordl_internal_get_renderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderName;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_renderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderName = value;
}
constexpr int32_t& TheVisualEngine::TVEElement::__cordl_internal_get_renderDataID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataID;
}
constexpr int32_t const& TheVisualEngine::TVEElement::__cordl_internal_get_renderDataID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataID;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_renderDataID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderDataID = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& TheVisualEngine::TVEElement::__cordl_internal_get_renderLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayers;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& TheVisualEngine::TVEElement::__cordl_internal_get_renderLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayers;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_renderLayers(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderLayers = value;
}
constexpr bool& TheVisualEngine::TVEElement::__cordl_internal_get_renderLayersAsPasses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayersAsPasses;
}
constexpr bool const& TheVisualEngine::TVEElement::__cordl_internal_get_renderLayersAsPasses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayersAsPasses;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_renderLayersAsPasses(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderLayersAsPasses = value;
}
constexpr bool& TheVisualEngine::TVEElement::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& TheVisualEngine::TVEElement::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& TheVisualEngine::TVEElement::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& TheVisualEngine::TVEElement::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr int32_t& TheVisualEngine::TVEElement::__cordl_internal_get_useVertexColorDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useVertexColorDirection;
}
constexpr int32_t const& TheVisualEngine::TVEElement::__cordl_internal_get_useVertexColorDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useVertexColorDirection;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_useVertexColorDirection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useVertexColorDirection = value;
}
constexpr int32_t& TheVisualEngine::TVEElement::__cordl_internal_get_useRaycastFading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycastFading;
}
constexpr int32_t const& TheVisualEngine::TVEElement::__cordl_internal_get_useRaycastFading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycastFading;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_useRaycastFading(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRaycastFading = value;
}
constexpr ::UnityEngine::Vector3& TheVisualEngine::TVEElement::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& TheVisualEngine::TVEElement::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::LayerMask& TheVisualEngine::TVEElement::__cordl_internal_get_raycastMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastMask;
}
constexpr ::UnityEngine::LayerMask const& TheVisualEngine::TVEElement::__cordl_internal_get_raycastMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastMask;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_raycastMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastMask = value;
}
constexpr float_t& TheVisualEngine::TVEElement::__cordl_internal_get_raycastStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastStart;
}
constexpr float_t const& TheVisualEngine::TVEElement::__cordl_internal_get_raycastStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastStart;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_raycastStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastStart = value;
}
constexpr float_t& TheVisualEngine::TVEElement::__cordl_internal_get_raycastLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastLimit;
}
constexpr float_t const& TheVisualEngine::TVEElement::__cordl_internal_get_raycastLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastLimit;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_raycastLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastLimit = value;
}
constexpr float_t& TheVisualEngine::TVEElement::__cordl_internal_get_raycastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastDistance;
}
constexpr float_t const& TheVisualEngine::TVEElement::__cordl_internal_get_raycastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastDistance;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_raycastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastDistance = value;
}
constexpr float_t& TheVisualEngine::TVEElement::__cordl_internal_get_speedTreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTreshold;
}
constexpr float_t const& TheVisualEngine::TVEElement::__cordl_internal_get_speedTreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTreshold;
}
constexpr void TheVisualEngine::TVEElement::__cordl_internal_set_speedTreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedTreshold = value;
}
inline void TheVisualEngine::TVEElement::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::UpdateElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"UpdateElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::UpdateElementTerrainData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"UpdateElementTerrainData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::UpdateFading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"UpdateFading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::AddElementToVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"AddElementToVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::SetElementVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"SetElementVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::LoadMaterialData(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"LoadMaterialData", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void TheVisualEngine::TVEElement::GetMaterialParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"GetMaterialParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t TheVisualEngine::TVEElement::GetRacastFading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {"GetRacastFading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void TheVisualEngine::TVEElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEElement* TheVisualEngine::TVEElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEElement*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElement::TVEElement()   {
}
