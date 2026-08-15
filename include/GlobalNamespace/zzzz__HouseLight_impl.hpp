#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseLight.hpp"
#include "HouseCulling/zzzz__CullingState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HouseLight_def.hpp"
#include "GlobalNamespace/zzzz__LightQualityData_def.hpp"
#include "HouseCulling/zzzz__CullingState_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HouseLight.get_houseCullingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HouseCulling::CullingState (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::get_houseCullingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"get_houseCullingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.set_houseCullingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)(::HouseCulling::CullingState)>(&::GlobalNamespace::HouseLight::set_houseCullingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"set_houseCullingState", {}, {::i2c::type_of<::HouseCulling::CullingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.RefreshLightState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::RefreshLightState)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803eae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"RefreshLightState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.GetLightEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::GetLightEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803ead90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"GetLightEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.SetLightEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)(bool)>(&::GlobalNamespace::HouseLight::SetLightEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803eb0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"SetLightEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803eadc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.ApplyQualityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)(int32_t, ::GlobalNamespace::LightQualityData*)>(&::GlobalNamespace::HouseLight::ApplyQualityData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803eac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"ApplyQualityData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightQualityData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.ApplyQualityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::ApplyQualityData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803eaae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"ApplyQualityData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight.AssignLightComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::AssignLightComponent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ead40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"AssignLightComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseLight::*)()>(&::GlobalNamespace::HouseLight::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803eb0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::HouseLight::__cordl_internal_get_lightComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightComponent;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::HouseLight::__cordl_internal_get_lightComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightComponent;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set_lightComponent(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightComponent = value;
}
constexpr bool& GlobalNamespace::HouseLight::__cordl_internal_get_staticPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticPosition;
}
constexpr bool const& GlobalNamespace::HouseLight::__cordl_internal_get_staticPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticPosition;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set_staticPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticPosition = value;
}
constexpr bool& GlobalNamespace::HouseLight::__cordl_internal_get_staticLightValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticLightValues;
}
constexpr bool const& GlobalNamespace::HouseLight::__cordl_internal_get_staticLightValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticLightValues;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set_staticLightValues(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticLightValues = value;
}
constexpr float_t& GlobalNamespace::HouseLight::__cordl_internal_get_minCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCoverage;
}
constexpr float_t const& GlobalNamespace::HouseLight::__cordl_internal_get_minCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCoverage;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set_minCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minCoverage = value;
}
constexpr bool& GlobalNamespace::HouseLight::__cordl_internal_get_skipLowerQualityCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipLowerQualityCulling;
}
constexpr bool const& GlobalNamespace::HouseLight::__cordl_internal_get_skipLowerQualityCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipLowerQualityCulling;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set_skipLowerQualityCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipLowerQualityCulling = value;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData>& GlobalNamespace::HouseLight::__cordl_internal_get_customQualityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customQualityData;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& GlobalNamespace::HouseLight::__cordl_internal_get_customQualityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customQualityData;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set_customQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customQualityData = value;
}
constexpr ::HouseCulling::CullingState& GlobalNamespace::HouseLight::__cordl_internal_get__houseCullingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____houseCullingState;
}
constexpr ::HouseCulling::CullingState const& GlobalNamespace::HouseLight::__cordl_internal_get__houseCullingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____houseCullingState;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set__houseCullingState(::HouseCulling::CullingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____houseCullingState = value;
}
constexpr bool& GlobalNamespace::HouseLight::__cordl_internal_get__isEnabledAndUnculled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabledAndUnculled;
}
constexpr bool const& GlobalNamespace::HouseLight::__cordl_internal_get__isEnabledAndUnculled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabledAndUnculled;
}
constexpr void GlobalNamespace::HouseLight::__cordl_internal_set__isEnabledAndUnculled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEnabledAndUnculled = value;
}
inline ::HouseCulling::CullingState GlobalNamespace::HouseLight::get_houseCullingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"get_houseCullingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HouseCulling::CullingState>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLight::set_houseCullingState(::HouseCulling::CullingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"set_houseCullingState", {}, {::i2c::type_of<::HouseCulling::CullingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HouseLight::RefreshLightState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"RefreshLightState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HouseLight::GetLightEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"GetLightEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLight::SetLightEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"SetLightEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HouseLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLight::ApplyQualityData(int32_t  qualityIndex, ::GlobalNamespace::LightQualityData*  defaultQualityData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"ApplyQualityData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightQualityData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityIndex, defaultQualityData);
}
inline void GlobalNamespace::HouseLight::ApplyQualityData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"ApplyQualityData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLight::AssignLightComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {"AssignLightComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseLight* GlobalNamespace::HouseLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseLight::HouseLight()   {
}
