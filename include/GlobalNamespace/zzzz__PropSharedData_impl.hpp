#pragma once
// IWYU pragma private; include "GlobalNamespace/PropSharedData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PropSharedData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropSharedData.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropSharedData> (*)()>(&::GlobalNamespace::PropSharedData::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180384ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSharedData*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropSharedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropSharedData::*)()>(&::GlobalNamespace::PropSharedData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSharedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PropSharedData::__cordl_internal_get_propXRayPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propXRayPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PropSharedData::__cordl_internal_get_propXRayPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propXRayPrefab;
}
constexpr void GlobalNamespace::PropSharedData::__cordl_internal_set_propXRayPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propXRayPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PropSharedData::__cordl_internal_get_propZonerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propZonerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PropSharedData::__cordl_internal_get_propZonerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propZonerPrefab;
}
constexpr void GlobalNamespace::PropSharedData::__cordl_internal_set_propZonerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propZonerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::PropSharedData::__cordl_internal_get_zeroFrictionMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroFrictionMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::PropSharedData::__cordl_internal_get_zeroFrictionMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroFrictionMaterial;
}
constexpr void GlobalNamespace::PropSharedData::__cordl_internal_set_zeroFrictionMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zeroFrictionMaterial = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::PropSharedData::__cordl_internal_get_sittingPocketFrictionMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingPocketFrictionMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::PropSharedData::__cordl_internal_get_sittingPocketFrictionMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingPocketFrictionMaterial;
}
constexpr void GlobalNamespace::PropSharedData::__cordl_internal_set_sittingPocketFrictionMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sittingPocketFrictionMaterial = value;
}
inline ::UnityW<::GlobalNamespace::PropSharedData> GlobalNamespace::PropSharedData::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSharedData*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropSharedData>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropSharedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropSharedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropSharedData* GlobalNamespace::PropSharedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropSharedData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropSharedData::PropSharedData()   {
}
