#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGrease.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Terrain_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerGrease_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerGrease::Initialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180347df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::PlayerGrease::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180347e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.RefreshBestTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)()>(&::GlobalNamespace::PlayerGrease::RefreshBestTerrain)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180347fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"RefreshBestTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.GetDistanceToTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGrease::*)()>(&::GlobalNamespace::PlayerGrease::GetDistanceToTerrain)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180347d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"GetDistanceToTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.TerrainNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerGrease::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerGrease::TerrainNormal)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803484e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"TerrainNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.UnderTerrainCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)()>(&::GlobalNamespace::PlayerGrease::UnderTerrainCheck)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803486c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"UnderTerrainCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::PlayerGrease::Teleport)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803482d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerGrease::Teleport)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180348240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGrease._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGrease::*)()>(&::GlobalNamespace::PlayerGrease::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180348810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerGrease::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerGrease::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerGrease::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr int32_t& GlobalNamespace::PlayerGrease::__cordl_internal_get_waterLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterLayer;
}
constexpr int32_t const& GlobalNamespace::PlayerGrease::__cordl_internal_get_waterLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterLayer;
}
constexpr void GlobalNamespace::PlayerGrease::__cordl_internal_set_waterLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterLayer = value;
}
constexpr ::StringW& GlobalNamespace::PlayerGrease::__cordl_internal_get_waterFloorTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterFloorTag;
}
constexpr ::StringW const& GlobalNamespace::PlayerGrease::__cordl_internal_get_waterFloorTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterFloorTag;
}
constexpr void GlobalNamespace::PlayerGrease::__cordl_internal_set_waterFloorTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterFloorTag = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& GlobalNamespace::PlayerGrease::__cordl_internal_get_terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& GlobalNamespace::PlayerGrease::__cordl_internal_get_terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr void GlobalNamespace::PlayerGrease::__cordl_internal_set_terrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrains = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& GlobalNamespace::PlayerGrease::__cordl_internal_get_bestTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestTerrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& GlobalNamespace::PlayerGrease::__cordl_internal_get_bestTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestTerrain;
}
constexpr void GlobalNamespace::PlayerGrease::__cordl_internal_set_bestTerrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestTerrain = value;
}
inline void GlobalNamespace::PlayerGrease::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerGrease::OnCollisionEnter(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::PlayerGrease::RefreshBestTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"RefreshBestTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerGrease::GetDistanceToTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"GetDistanceToTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerGrease::TerrainNormal(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"TerrainNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPos);
}
inline void GlobalNamespace::PlayerGrease::UnderTerrainCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"UnderTerrainCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGrease::Teleport(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  preserveRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, preserveRotation);
}
inline void GlobalNamespace::PlayerGrease::Teleport(::UnityEngine::Transform*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::PlayerGrease::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGrease*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerGrease* GlobalNamespace::PlayerGrease::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerGrease*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGrease::PlayerGrease()   {
}
