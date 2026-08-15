#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_def.hpp"
#include "UnityEngine/zzzz__DetailPrototype_def.hpp"
#include "UnityEngine/zzzz__DetailScatterMode_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__TerrainHeightmapSyncControl_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__TreePrototype_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainData_BoundaryValueType::TerrainData_BoundaryValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainData_BoundaryValueType::TerrainData_BoundaryValueType()   {
}
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MaxHeightmapRes{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MinDetailResPerPatch{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MaxDetailResPerPatch{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MaxDetailPatchCount{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MaxCoveragePerRes{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MinAlphamapRes{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MaxAlphamapRes{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MinBaseMapRes{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::TerrainData_BoundaryValueType  UnityEngine::TerrainData_BoundaryValueType::MaxBaseMapRes{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetBoundaryValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::TerrainData_BoundaryValueType)>(&::UnityEngine::TerrainData::GetBoundaryValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetBoundaryValue", {}, {::i2c::type_of<::UnityEngine::TerrainData_BoundaryValueType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*)>(&::UnityEngine::TerrainData::Internal_Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::TerrainData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_heightmapTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182311050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_heightmapResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_internalHeightmapResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_internalHeightmapResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_internalHeightmapResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_heightmapScale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182311000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_holesTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_holesTexture)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1823110c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_holesTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.IsHolesTextureCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::IsHolesTextureCompressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"IsHolesTextureCompressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetHolesTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::GetHolesTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18230fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHolesTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetCompressedHolesTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::GetCompressedHolesTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18230fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetCompressedHolesTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_holesResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_holesResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182311090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_holesResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_size)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182311180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_bounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182310e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetHeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetHeights)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18230fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHeights", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHeights)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1823103e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHeights", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetHoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetHoles)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182310030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHoles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHoles)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182310440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHoles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetInterpolatedNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TerrainData::*)(float_t, float_t)>(&::UnityEngine::TerrainData::GetInterpolatedNormal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182310140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_detailWidth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_detailHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailPatchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_detailPatchCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPatchCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_detailResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailScatterMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DetailScatterMode (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_detailScatterMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailScatterMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::DetailPrototype*> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_detailPrototypes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPrototypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.set_detailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::ArrayW<::UnityEngine::DetailPrototype*>)>(&::UnityEngine::TerrainData::set_detailPrototypes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1823112e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_detailPrototypes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::DetailPrototype*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetDetailLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetDetailLayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18230fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetDetailLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::DetailInstanceTransform> (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, float_t, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::TerrainData::ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18230f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.SetDetailLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, ::System::Object*)>(&::UnityEngine::TerrainData::SetDetailLayer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182310800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SetDetailLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_SetDetailLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Object*)>(&::UnityEngine::TerrainData::Internal_SetDetailLayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182310620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SetDetailLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreeInstance> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_treeInstances)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treeInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreeInstance> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::Internal_GetTreeInstances)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182310510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::ArrayW<::UnityEngine::TreeInstance>, bool)>(&::UnityEngine::TerrainData::SetTreeInstances)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182310920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetTreeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TreeInstance (::UnityEngine::TerrainData::*)(int32_t)>(&::UnityEngine::TerrainData::GetTreeInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1823101a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetTreeInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetTreeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TreeInstance (::UnityEngine::TerrainData::*)(int32_t)>(&::UnityEngine::TerrainData::Internal_GetTreeInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1823104a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treeInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_treeInstanceCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182311210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treeInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treePrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreePrototype*> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_treePrototypes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182311260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treePrototypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.set_treePrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::ArrayW<::UnityEngine::TreePrototype*>)>(&::UnityEngine::TerrainData::set_treePrototypes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182311360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_treePrototypes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TreePrototype*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.RemoveTreePrototype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(int32_t)>(&::UnityEngine::TerrainData::RemoveTreePrototype)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1823107d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"RemoveTreePrototype", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetAlphamaps)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18230fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetAlphamaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetAlphamaps)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182310380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetAlphamaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_alphamapResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_alphamapResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapResolutionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::GetAlphamapResolutionInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18230fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapResolutionInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_Internal_alphamapResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_Internal_alphamapResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_Internal_alphamapResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_alphamapWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_alphamapWidth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_alphamapHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_alphamapHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::TerrainData::*)(int32_t)>(&::UnityEngine::TerrainData::GetAlphamapTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18230fd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapTexture", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_alphamapTextureCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_alphamapTextureCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapTextureCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_alphamapTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Texture2D>> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_alphamapTextures)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182310d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_terrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_terrainLayers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1823111d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_terrainLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.set_terrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::ArrayW<::UnityEngine::TerrainLayer*>)>(&::UnityEngine::TerrainData::set_terrainLayers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182311320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_terrainLayers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_CopyActiveRenderTextureToHeightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::UnityEngine::RectInt, int32_t, int32_t, ::UnityEngine::TerrainHeightmapSyncControl)>(&::UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHeightmap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182310290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHeightmap", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TerrainHeightmapSyncControl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.SyncHeightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::SyncHeightmap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1823109f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SyncHeightmap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_CopyActiveRenderTextureToHoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::UnityEngine::RectInt, int32_t, int32_t, bool)>(&::UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHoles)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182310300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHoles", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_SyncHoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::Internal_SyncHoles)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncHoles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_MarkAlphamapDirtyRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_MarkAlphamapDirtyRegion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1823105c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_MarkAlphamapDirtyRegion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_ClearAlphamapDirtyRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(int32_t)>(&::UnityEngine::TerrainData::Internal_ClearAlphamapDirtyRegion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_ClearAlphamapDirtyRegion", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_SyncAlphamaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::Internal_SyncAlphamaps)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182310710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncAlphamaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_users
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_users)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1823112a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_users", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_SupportsCopyTextureBetweenRTAndTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::TerrainData::get_SupportsCopyTextureBetweenRTAndTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182310cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_SupportsCopyTextureBetweenRTAndTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.CopyActiveRenderTextureToHeightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::UnityEngine::RectInt, ::UnityEngine::Vector2Int, ::UnityEngine::TerrainHeightmapSyncControl)>(&::UnityEngine::TerrainData::CopyActiveRenderTextureToHeightmap)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18230f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"CopyActiveRenderTextureToHeightmap", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::TerrainHeightmapSyncControl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_AlphamapTextureName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::TerrainData::get_AlphamapTextureName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_AlphamapTextureName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_HolesTextureName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::TerrainData::get_HolesTextureName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_HolesTextureName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.CopyActiveRenderTextureToTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::StringW, int32_t, ::UnityEngine::RectInt, ::UnityEngine::Vector2Int, bool)>(&::UnityEngine::TerrainData::CopyActiveRenderTextureToTexture)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x18230f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"CopyActiveRenderTextureToTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.SyncTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainData::*)(::StringW)>(&::UnityEngine::TerrainData::SyncTexture)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182310a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SyncTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_heightmapTexture_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_internalHeightmapResolution_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_internalHeightmapResolution_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_internalHeightmapResolution_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapScale_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TerrainData::get_heightmapScale_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapScale_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.IsHolesTextureCompressed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::IsHolesTextureCompressed_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"IsHolesTextureCompressed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetHolesTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::GetHolesTexture_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHolesTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetCompressedHolesTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::GetCompressedHolesTexture_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetCompressedHolesTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_size_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TerrainData::get_size_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_size_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_bounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::TerrainData::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHeights_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHeights_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823103d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHeights_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHoles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHoles_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHoles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetInterpolatedNormal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TerrainData::GetInterpolatedNormal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetInterpolatedNormal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailWidth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_detailWidth_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailHeight_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_detailHeight_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailHeight_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailPatchCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_detailPatchCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPatchCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailResolution_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_detailResolution_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailResolution_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailScatterMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DetailScatterMode (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_detailScatterMode_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailScatterMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_detailPrototypes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::DetailPrototype*> (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_detailPrototypes_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.set_detailPrototypes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::DetailPrototype*>)>(&::UnityEngine::TerrainData::set_detailPrototypes_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823112d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_detailPrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::DetailPrototype*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetDetailLayer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetDetailLayer_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230fe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetDetailLayer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.ComputeDetailInstanceTransforms_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::TerrainData::ComputeDetailInstanceTransforms_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230f220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"ComputeDetailInstanceTransforms_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_SetDetailLayer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TerrainData::Internal_SetDetailLayer_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SetDetailLayer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetTreeInstances_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::TerrainData::Internal_GetTreeInstances_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstances_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.SetTreeInstances_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::TerrainData::SetTreeInstances_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SetTreeInstances_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetTreeInstance_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::TreeInstance>)>(&::UnityEngine::TerrainData::Internal_GetTreeInstance_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstance_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TreeInstance>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treeInstanceCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_treeInstanceCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treeInstanceCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treePrototypes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreePrototype*> (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_treePrototypes_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treePrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.set_treePrototypes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::TreePrototype*>)>(&::UnityEngine::TerrainData::set_treePrototypes_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_treePrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::TreePrototype*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.RemoveTreePrototype_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TerrainData::RemoveTreePrototype_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823107c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"RemoveTreePrototype_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetAlphamaps_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetAlphamaps_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetAlphamaps_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapResolutionInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::GetAlphamapResolutionInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapResolutionInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_Internal_alphamapResolution_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_Internal_alphamapResolution_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_Internal_alphamapResolution_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TerrainData::GetAlphamapTexture_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_alphamapTextureCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_alphamapTextureCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapTextureCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_terrainLayers_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_terrainLayers_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823111c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_terrainLayers_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.set_terrainLayers_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::TerrainLayer*>)>(&::UnityEngine::TerrainData::set_terrainLayers_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_terrainLayers_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_CopyActiveRenderTextureToHeightmap_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RectInt>, int32_t, int32_t, ::UnityEngine::TerrainHeightmapSyncControl)>(&::UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHeightmap_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHeightmap_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TerrainHeightmapSyncControl>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.SyncHeightmap_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::SyncHeightmap_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823109e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SyncHeightmap_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_CopyActiveRenderTextureToHoles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RectInt>, int32_t, int32_t, bool)>(&::UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHoles_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823102f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHoles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_SyncHoles_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::Internal_SyncHoles_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncHoles_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_MarkAlphamapDirtyRegion_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_MarkAlphamapDirtyRegion_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1823105b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_MarkAlphamapDirtyRegion_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_ClearAlphamapDirtyRegion_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TerrainData::Internal_ClearAlphamapDirtyRegion_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_ClearAlphamapDirtyRegion_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_SyncAlphamaps_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::Internal_SyncAlphamaps_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182310700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncAlphamaps_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_users_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>> (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_users_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182311290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_users_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainData::setStaticF_k_MaximumResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumDetailResolutionPerPatch(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumDetailResolutionPerPatch()  {
return ::cordl_internals::getStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumDetailResolutionPerPatch(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumDetailResolutionPerPatch()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumDetailPatchCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumDetailPatchCount", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumDetailPatchCount()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailPatchCount", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumAlphamapResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MinimumAlphamapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumAlphamapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MinimumAlphamapResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumAlphamapResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumAlphamapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumAlphamapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumAlphamapResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumBaseMapResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MinimumBaseMapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumBaseMapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MinimumBaseMapResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumBaseMapResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumBaseMapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumBaseMapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumBaseMapResolution", ::UnityEngine::TerrainData*>();
}
inline int32_t UnityEngine::TerrainData::GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetBoundaryValue", {}, {::i2c::type_of<::UnityEngine::TerrainData_BoundaryValueType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline void UnityEngine::TerrainData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::Internal_Create(::UnityEngine::TerrainData*  terrainData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::TerrainData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::TerrainData::get_heightmapTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_heightmapResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_internalHeightmapResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_internalHeightmapResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::TerrainData::get_heightmapScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::TerrainData::get_holesTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_holesTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline bool UnityEngine::TerrainData::IsHolesTextureCompressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"IsHolesTextureCompressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::TerrainData::GetHolesTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHolesTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::TerrainData::GetCompressedHolesTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetCompressedHolesTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_holesResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_holesResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::TerrainData::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::TerrainData::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::TerrainData::GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHeights", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHeights", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::GetHoles(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHoles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHoles(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHoles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::UnityEngine::Vector3 UnityEngine::TerrainData::GetInterpolatedNormal(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::TerrainData::get_detailWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_detailHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_detailPatchCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPatchCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_detailResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::DetailScatterMode UnityEngine::TerrainData::get_detailScatterMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailScatterMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DetailScatterMode>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::DetailPrototype*> UnityEngine::TerrainData::get_detailPrototypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPrototypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::DetailPrototype*>>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::set_detailPrototypes(::ArrayW<::UnityEngine::DetailPrototype*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_detailPrototypes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::DetailPrototype*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::TerrainData::GetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetDetailLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height, layer);
}
inline ::ArrayW<::UnityEngine::DetailInstanceTransform> UnityEngine::TerrainData::ComputeDetailInstanceTransforms(int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::DetailInstanceTransform>>(this, ___internal_method, patchX, patchY, layer, density, bounds);
}
inline void UnityEngine::TerrainData::SetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  layer, ::System::Object*  details)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SetDetailLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xBase, yBase, layer, details);
}
inline void UnityEngine::TerrainData::Internal_SetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SetDetailLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
}
inline ::ArrayW<::UnityEngine::TreeInstance> UnityEngine::TerrainData::get_treeInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treeInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreeInstance>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TreeInstance> UnityEngine::TerrainData::Internal_GetTreeInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreeInstance>>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::SetTreeInstances(::ArrayW<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, snapToHeightmap);
}
inline ::UnityEngine::TreeInstance UnityEngine::TerrainData::GetTreeInstance(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetTreeInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TreeInstance>(this, ___internal_method, index);
}
inline ::UnityEngine::TreeInstance UnityEngine::TerrainData::Internal_GetTreeInstance(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TreeInstance>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TerrainData::get_treeInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treeInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TreePrototype*> UnityEngine::TerrainData::get_treePrototypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treePrototypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreePrototype*>>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::set_treePrototypes(::ArrayW<::UnityEngine::TreePrototype*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_treePrototypes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TreePrototype*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TerrainData::RemoveTreePrototype(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"RemoveTreePrototype", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Object* UnityEngine::TerrainData::GetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, x, y, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetAlphamaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, x, y, width, height);
}
inline int32_t UnityEngine::TerrainData::get_alphamapResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapResolutionInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_Internal_alphamapResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_Internal_alphamapResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_alphamapWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_alphamapHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::TerrainData::GetAlphamapTexture(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapTexture", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TerrainData::get_alphamapTextureCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapTextureCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>> UnityEngine::TerrainData::get_alphamapTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Texture2D>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> UnityEngine::TerrainData::get_terrainLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_terrainLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::set_terrainLayers(::ArrayW<::UnityEngine::TerrainLayer*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_terrainLayers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHeightmap(::UnityEngine::RectInt  rect, int32_t  destX, int32_t  destY, ::UnityEngine::TerrainHeightmapSyncControl  syncControl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHeightmap", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TerrainHeightmapSyncControl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rect, destX, destY, syncControl);
}
inline void UnityEngine::TerrainData::SyncHeightmap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SyncHeightmap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHoles(::UnityEngine::RectInt  rect, int32_t  destX, int32_t  destY, bool  allowDelayedCPUSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHoles", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rect, destX, destY, allowDelayedCPUSync);
}
inline void UnityEngine::TerrainData::Internal_SyncHoles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncHoles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::Internal_MarkAlphamapDirtyRegion(int32_t  alphamapIndex, int32_t  x, int32_t  y, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_MarkAlphamapDirtyRegion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alphamapIndex, x, y, width, height);
}
inline void UnityEngine::TerrainData::Internal_ClearAlphamapDirtyRegion(int32_t  alphamapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_ClearAlphamapDirtyRegion", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alphamapIndex);
}
inline void UnityEngine::TerrainData::Internal_SyncAlphamaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncAlphamaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> UnityEngine::TerrainData::get_users()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_users", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>>>(this, ___internal_method);
}
inline bool UnityEngine::TerrainData::get_SupportsCopyTextureBetweenRTAndTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_SupportsCopyTextureBetweenRTAndTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::TerrainData::CopyActiveRenderTextureToHeightmap(::UnityEngine::RectInt  sourceRect, ::UnityEngine::Vector2Int  dest, ::UnityEngine::TerrainHeightmapSyncControl  syncControl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"CopyActiveRenderTextureToHeightmap", {}, {::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::TerrainHeightmapSyncControl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceRect, dest, syncControl);
}
inline ::StringW UnityEngine::TerrainData::get_AlphamapTextureName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_AlphamapTextureName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::TerrainData::get_HolesTextureName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_HolesTextureName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::TerrainData::CopyActiveRenderTextureToTexture(::StringW  textureName, int32_t  textureIndex, ::UnityEngine::RectInt  sourceRect, ::UnityEngine::Vector2Int  dest, bool  allowDelayedCPUSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"CopyActiveRenderTextureToTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureName, textureIndex, sourceRect, dest, allowDelayedCPUSync);
}
inline void UnityEngine::TerrainData::SyncTexture(::StringW  textureName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SyncTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureName);
}
inline ::System::IntPtr UnityEngine::TerrainData::get_heightmapTexture_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TerrainData::get_internalHeightmapResolution_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_internalHeightmapResolution_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::get_heightmapScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_heightmapScale_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::TerrainData::IsHolesTextureCompressed_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"IsHolesTextureCompressed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::TerrainData::GetHolesTexture_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetHolesTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::TerrainData::GetCompressedHolesTexture_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetCompressedHolesTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::get_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_size_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TerrainData::get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHeights_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHeights_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, _unity_self, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHoles_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetHoles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, _unity_self, xBase, yBase, width, height);
}
inline void UnityEngine::TerrainData::GetInterpolatedNormal_Injected(::System::IntPtr  _unity_self, float_t  x, float_t  y, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetInterpolatedNormal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, x, y, ret);
}
inline int32_t UnityEngine::TerrainData::get_detailWidth_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TerrainData::get_detailHeight_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailHeight_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TerrainData::get_detailPatchCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPatchCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TerrainData::get_detailResolution_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailResolution_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::DetailScatterMode UnityEngine::TerrainData::get_detailScatterMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailScatterMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DetailScatterMode>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityEngine::DetailPrototype*> UnityEngine::TerrainData::get_detailPrototypes_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_detailPrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::DetailPrototype*>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::set_detailPrototypes_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::DetailPrototype*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_detailPrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::DetailPrototype*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::Object* UnityEngine::TerrainData::GetDetailLayer_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetDetailLayer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, _unity_self, xBase, yBase, width, height, layer);
}
inline void UnityEngine::TerrainData::ComputeDetailInstanceTransforms_Injected(::System::IntPtr  _unity_self, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"ComputeDetailInstanceTransforms_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, patchX, patchY, layer, density, bounds, ret);
}
inline void UnityEngine::TerrainData::Internal_SetDetailLayer_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SetDetailLayer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
}
inline void UnityEngine::TerrainData::Internal_GetTreeInstances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstances_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TerrainData::SetTreeInstances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SetTreeInstances_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, instances, snapToHeightmap);
}
inline void UnityEngine::TerrainData::Internal_GetTreeInstance_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::TreeInstance>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetTreeInstance_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TreeInstance>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline int32_t UnityEngine::TerrainData::get_treeInstanceCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treeInstanceCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityEngine::TreePrototype*> UnityEngine::TerrainData::get_treePrototypes_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_treePrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreePrototype*>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::set_treePrototypes_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::TreePrototype*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_treePrototypes_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::TreePrototype*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::TerrainData::RemoveTreePrototype_Injected(::System::IntPtr  _unity_self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"RemoveTreePrototype_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetAlphamaps_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_GetAlphamaps_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, _unity_self, x, y, width, height);
}
inline float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapResolutionInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TerrainData::get_Internal_alphamapResolution_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_Internal_alphamapResolution_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::TerrainData::GetAlphamapTexture_Injected(::System::IntPtr  _unity_self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"GetAlphamapTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
inline int32_t UnityEngine::TerrainData::get_alphamapTextureCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_alphamapTextureCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> UnityEngine::TerrainData::get_terrainLayers_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_terrainLayers_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::set_terrainLayers_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::TerrainLayer*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"set_terrainLayers_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHeightmap_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RectInt>  rect, int32_t  destX, int32_t  destY, ::UnityEngine::TerrainHeightmapSyncControl  syncControl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHeightmap_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TerrainHeightmapSyncControl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, rect, destX, destY, syncControl);
}
inline void UnityEngine::TerrainData::SyncHeightmap_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"SyncHeightmap_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::Internal_CopyActiveRenderTextureToHoles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RectInt>  rect, int32_t  destX, int32_t  destY, bool  allowDelayedCPUSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_CopyActiveRenderTextureToHoles_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, rect, destX, destY, allowDelayedCPUSync);
}
inline void UnityEngine::TerrainData::Internal_SyncHoles_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncHoles_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::Internal_MarkAlphamapDirtyRegion_Injected(::System::IntPtr  _unity_self, int32_t  alphamapIndex, int32_t  x, int32_t  y, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_MarkAlphamapDirtyRegion_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, alphamapIndex, x, y, width, height);
}
inline void UnityEngine::TerrainData::Internal_ClearAlphamapDirtyRegion_Injected(::System::IntPtr  _unity_self, int32_t  alphamapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_ClearAlphamapDirtyRegion_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, alphamapIndex);
}
inline void UnityEngine::TerrainData::Internal_SyncAlphamaps_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"Internal_SyncAlphamaps_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> UnityEngine::TerrainData::get_users_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainData*>(),
                        {"get_users_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>>>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TerrainData* UnityEngine::TerrainData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainData::TerrainData()   {
}
