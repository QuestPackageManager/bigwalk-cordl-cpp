#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSound.hpp"
#include "GlobalNamespace/zzzz__AmbienceVegetationScalerConfig_impl.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceSound.PlayCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent* (::GlobalNamespace::AmbienceSound::*)(::UnityEngine::Transform*, ::UnityEngine::Object*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AmbienceSound::PlayCenter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803227b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {"PlayCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSound.PlaySide1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent* (::GlobalNamespace::AmbienceSound::*)(::UnityEngine::Transform*, ::UnityEngine::Object*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AmbienceSound::PlaySide1)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803228f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {"PlaySide1", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSound.PlaySide2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent* (::GlobalNamespace::AmbienceSound::*)(::UnityEngine::Transform*, ::UnityEngine::Object*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::GlobalNamespace::AudioVolume*, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AmbienceSound::PlaySide2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180322a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {"PlaySide2", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSound::*)()>(&::GlobalNamespace::AmbienceSound::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180322b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AmbienceSound::__cordl_internal_get_BiomeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeName;
}
constexpr ::StringW const& GlobalNamespace::AmbienceSound::__cordl_internal_get_BiomeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeName;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_BiomeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BiomeName = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AmbienceSound::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AmbienceSound::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_Center(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AmbienceSound::__cordl_internal_get_Side1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Side1;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AmbienceSound::__cordl_internal_get_Side1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Side1;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_Side1(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Side1 = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AmbienceSound::__cordl_internal_get_Side2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Side2;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AmbienceSound::__cordl_internal_get_Side2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Side2;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_Side2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Side2 = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>>& GlobalNamespace::AmbienceSound::__cordl_internal_get_ScatterSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterSounds;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>> const& GlobalNamespace::AmbienceSound::__cordl_internal_get_ScatterSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterSounds;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_ScatterSounds(::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScatterSounds = value;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig>& GlobalNamespace::AmbienceSound::__cordl_internal_get_VegetationScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VegetationScalers;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig> const& GlobalNamespace::AmbienceSound::__cordl_internal_get_VegetationScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VegetationScalers;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_VegetationScalers(::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VegetationScalers = value;
}
constexpr float_t& GlobalNamespace::AmbienceSound::__cordl_internal_get_MaxVegetationIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxVegetationIntensity;
}
constexpr float_t const& GlobalNamespace::AmbienceSound::__cordl_internal_get_MaxVegetationIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxVegetationIntensity;
}
constexpr void GlobalNamespace::AmbienceSound::__cordl_internal_set_MaxVegetationIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxVegetationIntensity = value;
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::AmbienceSound::PlayCenter(::UnityEngine::Transform*  followTransform, ::UnityEngine::Object*  owner, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::GlobalNamespace::AudioVolume*  occVol, ::GlobalNamespace::AudioVolume*  vegeVol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {"PlayCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent*>(this, ___internal_method, followTransform, owner, getXFunc, occVol, vegeVol);
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::AmbienceSound::PlaySide1(::UnityEngine::Transform*  followTransform, ::UnityEngine::Object*  owner, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::GlobalNamespace::AudioVolume*  occVol, ::GlobalNamespace::AudioVolume*  vegeVol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {"PlaySide1", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent*>(this, ___internal_method, followTransform, owner, getXFunc, occVol, vegeVol);
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::AmbienceSound::PlaySide2(::UnityEngine::Transform*  followTransform, ::UnityEngine::Object*  owner, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::GlobalNamespace::AudioVolume*  occVol, ::GlobalNamespace::AudioVolume*  vegeVol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {"PlaySide2", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent*>(this, ___internal_method, followTransform, owner, getXFunc, occVol, vegeVol);
}
inline void GlobalNamespace::AmbienceSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AmbienceSound* GlobalNamespace::AmbienceSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbienceSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceSound::AmbienceSound()   {
}
