#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TerrainUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__TerrainUtil_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.GenerateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, ::UnityEngine::Vector3)>(&::JBooth::MicroVerseCore::TerrainUtil::GenerateMesh)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18144ae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.ComputeTerrainBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::TerrainUtil::ComputeTerrainBounds)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18144a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeTerrainBounds", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.ComputeTerrainBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Terrain*>)>(&::JBooth::MicroVerseCore::TerrainUtil::ComputeTerrainBounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18144a710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeTerrainBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.AdjustForRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Bounds, ::UnityEngine::Quaternion)>(&::JBooth::MicroVerseCore::TerrainUtil::AdjustForRotation)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181449b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"AdjustForRotation", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Transform*)>(&::JBooth::MicroVerseCore::TerrainUtil::GetBounds)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18144b160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"GetBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.ComputeTerrainSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::TerrainUtil::ComputeTerrainSize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18144a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeTerrainSize", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.ComputeStampMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Terrain*, ::UnityEngine::Transform*, bool, int32_t, int32_t)>(&::JBooth::MicroVerseCore::TerrainUtil::ComputeStampMatrix)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x181449e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeStampMatrix", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.FindTextureChannelIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::UnityEngine::TerrainLayer*)>(&::JBooth::MicroVerseCore::TerrainUtil::FindTextureChannelIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18144ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"FindTextureChannelIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.FindTreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::TerrainUtil::FindTreeIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18144ad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"FindTreeIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil.EnsureTexturesAreOnTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::TerrainUtil::EnsureTexturesAreOnTerrain)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18144a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"EnsureTexturesAreOnTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TerrainUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TerrainUtil::*)()>(&::JBooth::MicroVerseCore::TerrainUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Mesh> JBooth::MicroVerseCore::TerrainUtil::GenerateMesh(int32_t  segments, ::UnityEngine::Vector3  tsize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, segments, tsize);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::TerrainUtil::ComputeTerrainBounds(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeTerrainBounds", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, terrain);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::TerrainUtil::ComputeTerrainBounds(::ArrayW<::UnityEngine::Terrain*>  terrains)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeTerrainBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, terrains);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::TerrainUtil::AdjustForRotation(::UnityEngine::Bounds  b, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"AdjustForRotation", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, b, rot);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::TerrainUtil::GetBounds(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"GetBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Vector3 JBooth::MicroVerseCore::TerrainUtil::ComputeTerrainSize(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeTerrainSize", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, terrain);
}
inline ::UnityEngine::Matrix4x4 JBooth::MicroVerseCore::TerrainUtil::ComputeStampMatrix(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, bool  heightStamp, int32_t  sizeXOffset, int32_t  sizeZOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"ComputeStampMatrix", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, terrain, transform, heightStamp, sizeXOffset, sizeZOffset);
}
inline int32_t JBooth::MicroVerseCore::TerrainUtil::FindTextureChannelIndex(::UnityEngine::Terrain*  terrain, ::UnityEngine::TerrainLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"FindTextureChannelIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, layer);
}
inline int32_t JBooth::MicroVerseCore::TerrainUtil::FindTreeIndex(::UnityEngine::Terrain*  terrain, ::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"FindTreeIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, prefab);
}
inline void JBooth::MicroVerseCore::TerrainUtil::EnsureTexturesAreOnTerrain(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {"EnsureTexturesAreOnTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, prototypes);
}
inline void JBooth::MicroVerseCore::TerrainUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TerrainUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::TerrainUtil* JBooth::MicroVerseCore::TerrainUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TerrainUtil*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TerrainUtil::TerrainUtil()   {
}
