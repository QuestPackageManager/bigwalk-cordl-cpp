#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCollider.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__TerrainCollider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainCollider.get_terrainData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TerrainData> (::UnityEngine::TerrainCollider::*)()>(&::UnityEngine::TerrainCollider::get_terrainData)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x182313bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainCollider*>(),
                        {"get_terrainData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainCollider.get_terrainData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TerrainCollider::get_terrainData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182313bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainCollider*>(),
                        {"get_terrainData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::TerrainData> UnityEngine::TerrainCollider::get_terrainData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainCollider*>(),
                        {"get_terrainData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TerrainData>>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::TerrainCollider::get_terrainData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainCollider*>(),
                        {"get_terrainData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCollider::TerrainCollider()   {
}
