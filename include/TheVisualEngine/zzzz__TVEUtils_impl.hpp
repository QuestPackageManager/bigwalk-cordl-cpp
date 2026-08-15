#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEGameObjectData_def.hpp"
#include "TheVisualEngine/zzzz__TVEModelData_def.hpp"
#include "TheVisualEngine/zzzz__TVEProxyData_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrainTexture_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrain_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetMaterialSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetMaterialSettings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804b8df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialSettings", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetMaterialLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetMaterialLegacy)> {
  constexpr static std::size_t size = 0x17a0;
  constexpr static std::size_t addrs = 0x1804b4820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialLegacy", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetMaterialUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetMaterialUpgrade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804b8e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialUpgrade", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetMaterialRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetMaterialRuntime)> {
  constexpr static std::size_t size = 0x2e30;
  constexpr static std::size_t addrs = 0x1804b5fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialRuntime", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetMaterialInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetMaterialInternal)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x1804b40b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialInternal", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetImpostorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetImpostorSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804b4060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetImpostorSettings", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SetElementSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::SetElementSettings)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x1804b3930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetElementSettings", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Material*, bool)>(&::TheVisualEngine::TVEUtils::CreateElement)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804b18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::CreateElement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804b1810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Terrain*, ::UnityEngine::Material*, bool)>(&::TheVisualEngine::TVEUtils::CreateElement)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804b1580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Terrain*, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::CreateElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Material*, bool)>(&::TheVisualEngine::TVEUtils::CreateElement)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804b1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::CreateElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804b1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CopyTerrainDataToElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::TheVisualEngine::TVETerrainTexture, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::CopyTerrainDataToElement)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x1804af0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToElement", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::TheVisualEngine::TVETerrainTexture>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CopyTerrainDataToMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::CopyTerrainDataToMaterial)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x1804b01f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToMaterial", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CopyTerrainDataToMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TheVisualEngine::TVETerrain*, ::UnityEngine::Material*)>(&::TheVisualEngine::TVEUtils::CopyTerrainDataToMaterial)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x1804af760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToMaterial", {}, {::i2c::type_of<::TheVisualEngine::TVETerrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CopyTerrainDataToRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TheVisualEngine::TVETerrain*, ::UnityEngine::Renderer*)>(&::TheVisualEngine::TVEUtils::CopyTerrainDataToRenderer)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x1804b0a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToRenderer", {}, {::i2c::type_of<::TheVisualEngine::TVETerrain*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreatePackedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::TheVisualEngine::TVEModelData*)>(&::TheVisualEngine::TVEUtils::CreatePackedMesh)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x1804b1b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreatePackedMesh", {}, {::i2c::type_of<::TheVisualEngine::TVEModelData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CombinePackedMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, bool, bool)>(&::TheVisualEngine::TVEUtils::CombinePackedMeshes)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x1804aec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CombinePackedMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CombinePackedMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, bool)>(&::TheVisualEngine::TVEUtils::CombinePackedMeshes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804aec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CombinePackedMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CombineColliderMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::TheVisualEngine::TVEUtils::CombineColliderMeshes)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804ae9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CombineColliderMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.SplitPackedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* (*)(::UnityEngine::Mesh*)>(&::TheVisualEngine::TVEUtils::SplitPackedMesh)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804b8ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SplitPackedMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.GetSubmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Mesh*, int32_t)>(&::TheVisualEngine::TVEUtils::GetSubmesh)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x1804b3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetSubmesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateProxyTextureFromTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::TheVisualEngine::TVEProxyData*)>(&::TheVisualEngine::TVEUtils::CreateProxyTextureFromTerrain)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1804b2320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateProxyTextureFromTerrain", {}, {::i2c::type_of<::TheVisualEngine::TVEProxyData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.CreateQuadFromTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::TheVisualEngine::TVEUtils::CreateQuadFromTerrain)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1804b2780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateQuadFromTerrain", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.GetChildRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::TheVisualEngine::TVEUtils::GetChildRecursive)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804b2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetChildRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.GetChildRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::TheVisualEngine::TVEGameObjectData*>*)>(&::TheVisualEngine::TVEUtils::GetChildRecursive)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1804b2950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetChildRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::TheVisualEngine::TVEGameObjectData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils.GetGlobalTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::StringW, ::UnityEngine::Vector3, int32_t, ::UnityEngine::Texture2DArray*)>(&::TheVisualEngine::TVEUtils::GetGlobalTextureData)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1804b2e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetGlobalTextureData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture2DArray*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEUtils::*)()>(&::TheVisualEngine::TVEUtils::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void TheVisualEngine::TVEUtils::SetMaterialSettings(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialSettings", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline void TheVisualEngine::TVEUtils::SetMaterialLegacy(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialLegacy", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline void TheVisualEngine::TVEUtils::SetMaterialUpgrade(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialUpgrade", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline void TheVisualEngine::TVEUtils::SetMaterialRuntime(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialRuntime", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline void TheVisualEngine::TVEUtils::SetMaterialInternal(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetMaterialInternal", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline void TheVisualEngine::TVEUtils::SetImpostorSettings(::UnityEngine::Material*  oldMaterial, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetImpostorSettings", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, oldMaterial, material);
}
inline void TheVisualEngine::TVEUtils::SetElementSettings(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SetElementSettings", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material);
}
inline ::UnityW<::UnityEngine::GameObject> TheVisualEngine::TVEUtils::CreateElement(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale, ::UnityEngine::Transform*  parent, ::UnityEngine::Material*  material, bool  customMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, localPosition, localRotation, localScale, parent, material, customMaterial);
}
inline ::UnityW<::UnityEngine::GameObject> TheVisualEngine::TVEUtils::CreateElement(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale, ::UnityEngine::Transform*  parent, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, localPosition, localRotation, localScale, parent, material);
}
inline ::UnityW<::UnityEngine::GameObject> TheVisualEngine::TVEUtils::CreateElement(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material, bool  customMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, terrain, material, customMaterial);
}
inline ::UnityW<::UnityEngine::GameObject> TheVisualEngine::TVEUtils::CreateElement(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, terrain, material);
}
inline ::UnityW<::UnityEngine::GameObject> TheVisualEngine::TVEUtils::CreateElement(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Material*  material, bool  customMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, gameObject, material, customMaterial);
}
inline ::UnityW<::UnityEngine::GameObject> TheVisualEngine::TVEUtils::CreateElement(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateElement", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, gameObject, material);
}
inline void TheVisualEngine::TVEUtils::CopyTerrainDataToElement(::UnityEngine::Terrain*  terrain, ::TheVisualEngine::TVETerrainTexture  terrainMask, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToElement", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::TheVisualEngine::TVETerrainTexture>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, terrainMask, material);
}
inline void TheVisualEngine::TVEUtils::CopyTerrainDataToMaterial(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToMaterial", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, material);
}
inline void TheVisualEngine::TVEUtils::CopyTerrainDataToMaterial(::TheVisualEngine::TVETerrain*  tveTerrain, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToMaterial", {}, {::i2c::type_of<::TheVisualEngine::TVETerrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tveTerrain, material);
}
inline void TheVisualEngine::TVEUtils::CopyTerrainDataToRenderer(::TheVisualEngine::TVETerrain*  tveTerrain, ::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CopyTerrainDataToRenderer", {}, {::i2c::type_of<::TheVisualEngine::TVETerrain*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tveTerrain, renderer);
}
inline ::UnityW<::UnityEngine::Mesh> TheVisualEngine::TVEUtils::CreatePackedMesh(::TheVisualEngine::TVEModelData*  meshData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreatePackedMesh", {}, {::i2c::type_of<::TheVisualEngine::TVEModelData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, meshData);
}
inline ::UnityW<::UnityEngine::Mesh> TheVisualEngine::TVEUtils::CombinePackedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects, bool  mergeSubMeshes, bool  usePrebakedPivots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CombinePackedMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, gameObjects, mergeSubMeshes, usePrebakedPivots);
}
inline ::UnityW<::UnityEngine::Mesh> TheVisualEngine::TVEUtils::CombinePackedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects, bool  mergeSubMeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CombinePackedMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, gameObjects, mergeSubMeshes);
}
inline ::UnityW<::UnityEngine::Mesh> TheVisualEngine::TVEUtils::CombineColliderMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CombineColliderMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, gameObjects);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* TheVisualEngine::TVEUtils::SplitPackedMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"SplitPackedMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(nullptr, ___internal_method, mesh);
}
inline ::UnityW<::UnityEngine::Mesh> TheVisualEngine::TVEUtils::GetSubmesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetSubmesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, mesh, submeshIndex);
}
inline ::UnityW<::UnityEngine::Texture> TheVisualEngine::TVEUtils::CreateProxyTextureFromTerrain(::TheVisualEngine::TVEProxyData*  proxyData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateProxyTextureFromTerrain", {}, {::i2c::type_of<::TheVisualEngine::TVEProxyData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, proxyData);
}
inline ::UnityW<::UnityEngine::Mesh> TheVisualEngine::TVEUtils::CreateQuadFromTerrain(::UnityEngine::Vector3  terrainPos, ::UnityEngine::Vector3  terrainSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"CreateQuadFromTerrain", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, terrainPos, terrainSize);
}
inline void TheVisualEngine::TVEUtils::GetChildRecursive(::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetChildRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, gameObjects);
}
inline void TheVisualEngine::TVEUtils::GetChildRecursive(::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::TheVisualEngine::TVEGameObjectData*>*  gameObjectsData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetChildRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::TheVisualEngine::TVEGameObjectData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, gameObjectsData);
}
inline ::UnityEngine::Color TheVisualEngine::TVEUtils::GetGlobalTextureData(::StringW  globalTexture, ::UnityEngine::Vector3  position, int32_t  layer, ::UnityEngine::Texture2DArray*  texture2DArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {"GetGlobalTextureData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture2DArray*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, globalTexture, position, layer, texture2DArray);
}
inline void TheVisualEngine::TVEUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEUtils* TheVisualEngine::TVEUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEUtils*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEUtils::TVEUtils()   {
}
