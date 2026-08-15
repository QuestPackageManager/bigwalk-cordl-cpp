#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseLightManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HouseLightManager_def.hpp"
#include "GlobalNamespace/zzzz__HouseLightManager_def.hpp"
#include "GlobalNamespace/zzzz__HouseLight_def.hpp"
#include "GlobalNamespace/zzzz__LightQualityData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager_LightData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager_LightData::*)(::GlobalNamespace::HouseLight*)>(&::GlobalNamespace::HouseLightManager_LightData::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803ec6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HouseLight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager_LightData.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HouseLightManager_LightData::*)()>(&::GlobalNamespace::HouseLightManager_LightData::GetSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803ec600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"GetSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager_LightData.GetMinCoverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HouseLightManager_LightData::*)(float_t, float_t)>(&::GlobalNamespace::HouseLightManager_LightData::GetMinCoverage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ec5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"GetMinCoverage", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager_LightData.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Light*)>(&::GlobalNamespace::HouseLightManager_LightData::GetSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ec670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"GetSize", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager_LightData.AdjustFieldOfView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HouseLightManager_LightData::*)(float_t)>(&::GlobalNamespace::HouseLightManager_LightData::AdjustFieldOfView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ec580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"AdjustFieldOfView", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HouseLightManager_LightData::_ctor(::GlobalNamespace::HouseLight*  houseLight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HouseLight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, houseLight);
}
inline float_t GlobalNamespace::HouseLightManager_LightData::GetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"GetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::HouseLightManager_LightData::GetMinCoverage(float_t  qualityMultiplier, float_t  defaultCullingCoverage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"GetMinCoverage", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, qualityMultiplier, defaultCullingCoverage);
}
inline float_t GlobalNamespace::HouseLightManager_LightData::GetSize(::UnityEngine::Light*  light)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"GetSize", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, light);
}
inline float_t GlobalNamespace::HouseLightManager_LightData::AdjustFieldOfView(float_t  fieldOfView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_LightData>(),
                        {"AdjustFieldOfView", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, fieldOfView);
}
// Ctor Parameters [CppParam { name: "houseLight", ty: "::UnityW<::GlobalNamespace::HouseLight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "staticPosition", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "staticLightValues", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipLowerQualityCulling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "minCoverage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "coverage", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HouseLightManager_LightData::HouseLightManager_LightData(::UnityW<::GlobalNamespace::HouseLight>  houseLight, ::UnityW<::UnityEngine::Transform>  transform, float_t  size, bool  staticPosition, bool  staticLightValues, ::Unity::Mathematics::float3  position, bool  enabled, bool  skipLowerQualityCulling, float_t  minCoverage, float_t  coverage) noexcept  {
this->houseLight = houseLight;
this->transform = transform;
this->size = size;
this->staticPosition = staticPosition;
this->staticLightValues = staticLightValues;
this->position = position;
this->enabled = enabled;
this->skipLowerQualityCulling = skipLowerQualityCulling;
this->minCoverage = minCoverage;
this->coverage = coverage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseLightManager_LightData::HouseLightManager_LightData()   {
}
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager_QualityLevel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager_QualityLevel::*)()>(&::GlobalNamespace::HouseLightManager_QualityLevel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_QualityLevel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::HouseLightManager_QualityLevel::__cordl_internal_get_coverageMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coverageMultiplier;
}
constexpr float_t const& GlobalNamespace::HouseLightManager_QualityLevel::__cordl_internal_get_coverageMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coverageMultiplier;
}
constexpr void GlobalNamespace::HouseLightManager_QualityLevel::__cordl_internal_set_coverageMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coverageMultiplier = value;
}
inline void GlobalNamespace::HouseLightManager_QualityLevel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager_QualityLevel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseLightManager_QualityLevel* GlobalNamespace::HouseLightManager_QualityLevel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseLightManager_QualityLevel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseLightManager_QualityLevel::HouseLightManager_QualityLevel()   {
}
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager___c::*)()>(&::GlobalNamespace::HouseLightManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager___c.__ctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HouseLightManager___c::*)(::GlobalNamespace::HouseLightManager_LightData, ::GlobalNamespace::HouseLightManager_LightData)>(&::GlobalNamespace::HouseLightManager___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager___c*>(),
                        {"<.ctor>b__19_0", {}, {::i2c::type_of<::GlobalNamespace::HouseLightManager_LightData>(), ::i2c::type_of<::GlobalNamespace::HouseLightManager_LightData>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HouseLightManager___c::setStaticF___9(::GlobalNamespace::HouseLightManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HouseLightManager___c*, "<>9", ::GlobalNamespace::HouseLightManager___c*>(std::forward<::GlobalNamespace::HouseLightManager___c*>(value));
}
inline ::GlobalNamespace::HouseLightManager___c* GlobalNamespace::HouseLightManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HouseLightManager___c*, "<>9", ::GlobalNamespace::HouseLightManager___c*>();
}
inline void GlobalNamespace::HouseLightManager___c::setStaticF___9__19_0(::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*, "<>9__19_0", ::GlobalNamespace::HouseLightManager___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>* GlobalNamespace::HouseLightManager___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*, "<>9__19_0", ::GlobalNamespace::HouseLightManager___c*>();
}
inline void GlobalNamespace::HouseLightManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::HouseLightManager___c::__ctor_b__19_0(::GlobalNamespace::HouseLightManager_LightData  a, ::GlobalNamespace::HouseLightManager_LightData  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager___c*>(),
                        {"<.ctor>b__19_0", {}, {::i2c::type_of<::GlobalNamespace::HouseLightManager_LightData>(), ::i2c::type_of<::GlobalNamespace::HouseLightManager_LightData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::HouseLightManager___c* GlobalNamespace::HouseLightManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseLightManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseLightManager___c::HouseLightManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager::*)()>(&::GlobalNamespace::HouseLightManager::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803ea3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager::*)()>(&::GlobalNamespace::HouseLightManager::Update)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1803ea480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.AddLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HouseLight*)>(&::GlobalNamespace::HouseLightManager::AddLight)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803e9e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"AddLight", {}, {::i2c::type_of<::GlobalNamespace::HouseLight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.RemoveLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HouseLight*)>(&::GlobalNamespace::HouseLightManager::RemoveLight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803ea310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"RemoveLight", {}, {::i2c::type_of<::GlobalNamespace::HouseLight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.ApplyQualityEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager::*)(int32_t)>(&::GlobalNamespace::HouseLightManager::ApplyQualityEffects)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803e9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.GetScreenCoverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::GlobalNamespace::HouseLightManager::GetScreenCoverage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803ea080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"GetScreenCoverage", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager::*)()>(&::GlobalNamespace::HouseLightManager::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803ea220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager::*)()>(&::GlobalNamespace::HouseLightManager::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803ea130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLightManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLightManager::*)()>(&::GlobalNamespace::HouseLightManager::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803eaa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HouseLightManager::__cordl_internal_get_maxLightLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLightLimit;
}
constexpr int32_t const& GlobalNamespace::HouseLightManager::__cordl_internal_get_maxLightLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLightLimit;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set_maxLightLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLightLimit = value;
}
constexpr ::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*>& GlobalNamespace::HouseLightManager::__cordl_internal_get_qualityLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qualityLevels;
}
constexpr ::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*> const& GlobalNamespace::HouseLightManager::__cordl_internal_get_qualityLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qualityLevels;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set_qualityLevels(::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qualityLevels = value;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData>& GlobalNamespace::HouseLightManager::__cordl_internal_get_defaultLightQualityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLightQualityData;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& GlobalNamespace::HouseLightManager::__cordl_internal_get_defaultLightQualityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLightQualityData;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set_defaultLightQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLightQualityData = value;
}
constexpr float_t& GlobalNamespace::HouseLightManager::__cordl_internal_get__qualityCoverageMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityCoverageMultiplier;
}
constexpr float_t const& GlobalNamespace::HouseLightManager::__cordl_internal_get__qualityCoverageMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityCoverageMultiplier;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set__qualityCoverageMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityCoverageMultiplier = value;
}
constexpr float_t& GlobalNamespace::HouseLightManager::__cordl_internal_get_defaultCullingCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCullingCoverage;
}
constexpr float_t const& GlobalNamespace::HouseLightManager::__cordl_internal_get_defaultCullingCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCullingCoverage;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set_defaultCullingCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCullingCoverage = value;
}
constexpr bool& GlobalNamespace::HouseLightManager::__cordl_internal_get_skipCoverageCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipCoverageCulling;
}
constexpr bool const& GlobalNamespace::HouseLightManager::__cordl_internal_get_skipCoverageCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipCoverageCulling;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set_skipCoverageCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipCoverageCulling = value;
}
constexpr bool& GlobalNamespace::HouseLightManager::__cordl_internal_get_logCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logCounts;
}
constexpr bool const& GlobalNamespace::HouseLightManager::__cordl_internal_get_logCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logCounts;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set_logCounts(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logCounts = value;
}
constexpr ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*& GlobalNamespace::HouseLightManager::__cordl_internal_get__visibilityComparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibilityComparison;
}
constexpr ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>* const& GlobalNamespace::HouseLightManager::__cordl_internal_get__visibilityComparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibilityComparison;
}
constexpr void GlobalNamespace::HouseLightManager::__cordl_internal_set__visibilityComparison(::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visibilityComparison = value;
}
inline void GlobalNamespace::HouseLightManager::setStaticF__lightDatas(::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>*, "_lightDatas", ::GlobalNamespace::HouseLightManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>* GlobalNamespace::HouseLightManager::getStaticF__lightDatas()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>*, "_lightDatas", ::GlobalNamespace::HouseLightManager*>();
}
inline void GlobalNamespace::HouseLightManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLightManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLightManager::AddLight(::GlobalNamespace::HouseLight*  houseLight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"AddLight", {}, {::i2c::type_of<::GlobalNamespace::HouseLight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, houseLight);
}
inline void GlobalNamespace::HouseLightManager::RemoveLight(::GlobalNamespace::HouseLight*  houseLight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"RemoveLight", {}, {::i2c::type_of<::GlobalNamespace::HouseLight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, houseLight);
}
inline void GlobalNamespace::HouseLightManager::ApplyQualityEffects(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline float_t GlobalNamespace::HouseLightManager::GetScreenCoverage(::Unity::Mathematics::float3  cameraPosition, ::Unity::Mathematics::float3  lightPosition, float_t  fieldOfView, float_t  lightSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"GetScreenCoverage", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, cameraPosition, lightPosition, fieldOfView, lightSize);
}
inline void GlobalNamespace::HouseLightManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLightManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLightManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLightManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseLightManager* GlobalNamespace::HouseLightManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseLightManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseLightManager::HouseLightManager()   {
}
