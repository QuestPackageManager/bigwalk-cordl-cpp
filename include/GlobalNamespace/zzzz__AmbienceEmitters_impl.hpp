#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceEmitters.hpp"
#include "GlobalNamespace/zzzz__AmbienceEmitters_def.hpp"
#include "GlobalNamespace/zzzz__AmbiencePlayer_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__SplineSampleStruct_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceEmitters::*)(::GlobalNamespace::AmbienceSound*, ::UnityEngine::Transform*)>(&::GlobalNamespace::AmbienceEmitters::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180318590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AmbienceSound*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters.UpdatePositionAndVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceEmitters::*)(::GlobalNamespace::SplineSampleStruct, ::GlobalNamespace::AmbiencePlayer*, float_t, float_t, float_t)>(&::GlobalNamespace::AmbienceEmitters::UpdatePositionAndVolume)> {
  constexpr static std::size_t size = 0x1720;
  constexpr static std::size_t addrs = 0x180316e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"UpdatePositionAndVolume", {}, {::i2c::type_of<::GlobalNamespace::SplineSampleStruct>(), ::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters.DirectionBending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AmbienceEmitters::*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Vector2>)>(&::GlobalNamespace::AmbienceEmitters::DirectionBending)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180316910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"DirectionBending", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceEmitters::*)()>(&::GlobalNamespace::AmbienceEmitters::Dispose)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180316ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters.GetCenterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbienceEmitters::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbienceEmitters::GetCenterX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180316cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"GetCenterX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters.GetSide1X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbienceEmitters::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbienceEmitters::GetSide1X)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180316d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"GetSide1X", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceEmitters.GetSide2X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbienceEmitters::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbienceEmitters::GetSide2X)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180316de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"GetSide2X", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AmbienceEmitters::_ctor(::GlobalNamespace::AmbienceSound*  data, ::UnityEngine::Transform*  parentTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AmbienceSound*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, parentTransform);
}
inline void GlobalNamespace::AmbienceEmitters::UpdatePositionAndVolume(::GlobalNamespace::SplineSampleStruct  sample, ::GlobalNamespace::AmbiencePlayer*  player, float_t  deltaTime, float_t  heightVol, float_t  sideToTop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"UpdatePositionAndVolume", {}, {::i2c::type_of<::GlobalNamespace::SplineSampleStruct>(), ::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sample, player, deltaTime, heightVol, sideToTop);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AmbienceEmitters::DirectionBending(::UnityEngine::Vector3  currentDir, float_t  indoorness, ::ArrayW<::UnityEngine::Vector2>  directionOffsets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"DirectionBending", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, currentDir, indoorness, directionOffsets);
}
inline void GlobalNamespace::AmbienceEmitters::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::AmbienceEmitters::GetCenterX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"GetCenterX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::AmbienceEmitters::GetSide1X(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"GetSide1X", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::AmbienceEmitters::GetSide2X(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEmitters>(),
                        {"GetSide2X", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, xType, x);
}
// Ctor Parameters [CppParam { name: "SoundData", ty: "::GlobalNamespace::AmbienceSound*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CenterTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideTransform1", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideTransform2", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CenterEvent", ty: "::GlobalNamespace::AudioEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideEvent1", ty: "::GlobalNamespace::AudioEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideEvent2", ty: "::GlobalNamespace::AudioEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CenterVolume", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideVolume1", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideVolume2", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CenterOccVol", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideOccVol1", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SideOccVol2", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "VegetationDensityVol", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RawVegetationIntensity", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AmbienceEmitters::AmbienceEmitters(::GlobalNamespace::AmbienceSound*  SoundData, ::UnityW<::UnityEngine::Transform>  CenterTransform, ::UnityW<::UnityEngine::Transform>  SideTransform1, ::UnityW<::UnityEngine::Transform>  SideTransform2, ::GlobalNamespace::AudioEvent*  CenterEvent, ::GlobalNamespace::AudioEvent*  SideEvent1, ::GlobalNamespace::AudioEvent*  SideEvent2, ::GlobalNamespace::AudioVolume*  CenterVolume, ::GlobalNamespace::AudioVolume*  SideVolume1, ::GlobalNamespace::AudioVolume*  SideVolume2, ::GlobalNamespace::AudioVolume*  CenterOccVol, ::GlobalNamespace::AudioVolume*  SideOccVol1, ::GlobalNamespace::AudioVolume*  SideOccVol2, ::GlobalNamespace::AudioVolume*  VegetationDensityVol, float_t  RawVegetationIntensity) noexcept  {
this->SoundData = SoundData;
this->CenterTransform = CenterTransform;
this->SideTransform1 = SideTransform1;
this->SideTransform2 = SideTransform2;
this->CenterEvent = CenterEvent;
this->SideEvent1 = SideEvent1;
this->SideEvent2 = SideEvent2;
this->CenterVolume = CenterVolume;
this->SideVolume1 = SideVolume1;
this->SideVolume2 = SideVolume2;
this->CenterOccVol = CenterOccVol;
this->SideOccVol1 = SideOccVol1;
this->SideOccVol2 = SideOccVol2;
this->VegetationDensityVol = VegetationDensityVol;
this->RawVegetationIntensity = RawVegetationIntensity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceEmitters::AmbienceEmitters()   {
}
