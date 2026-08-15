#pragma once
// IWYU pragma private; include "GlobalNamespace/DynamicReverbConfig.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicReverbConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterialConfig_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicReverbConfig.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicReverbConfig::*)()>(&::GlobalNamespace::DynamicReverbConfig::OnValidate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18049f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicReverbConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicReverbConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicReverbConfig::*)()>(&::GlobalNamespace::DynamicReverbConfig::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18049f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicReverbConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_Mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_Mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mixer;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mixer = value;
}
constexpr bool& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_Basic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Basic;
}
constexpr bool const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_Basic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Basic;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_Basic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Basic = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_Layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Layers = value;
}
constexpr int32_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_RaysAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaysAmount;
}
constexpr int32_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_RaysAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaysAmount;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_RaysAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RaysAmount = value;
}
constexpr int32_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_LowQualityRaysAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LowQualityRaysAmount;
}
constexpr int32_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_LowQualityRaysAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LowQualityRaysAmount;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_LowQualityRaysAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LowQualityRaysAmount = value;
}
constexpr int32_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_CollideInfoSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollideInfoSize;
}
constexpr int32_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_CollideInfoSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollideInfoSize;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_CollideInfoSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollideInfoSize = value;
}
constexpr float_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_DetectionRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionRange;
}
constexpr float_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_DetectionRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionRange;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_DetectionRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetectionRange = value;
}
constexpr float_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_ActualRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActualRange;
}
constexpr float_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_ActualRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActualRange;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_ActualRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActualRange = value;
}
constexpr float_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_DetectionAngleLow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionAngleLow;
}
constexpr float_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_DetectionAngleLow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionAngleLow;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_DetectionAngleLow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetectionAngleLow = value;
}
constexpr float_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_DetectionAngleHigh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionAngleHigh;
}
constexpr float_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_DetectionAngleHigh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionAngleHigh;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_DetectionAngleHigh(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetectionAngleHigh = value;
}
constexpr float_t& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_InitialDiffusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialDiffusion;
}
constexpr float_t const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_InitialDiffusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialDiffusion;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_InitialDiffusion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialDiffusion = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_MaterialConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_MaterialConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialConfig;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_MaterialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaterialConfig = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_RoomSizeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomSizeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_RoomSizeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomSizeCurve;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_RoomSizeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomSizeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_OutdoornessCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutdoornessCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_OutdoornessCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutdoornessCurve;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_OutdoornessCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutdoornessCurve = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_IsLowQualityLevelSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLowQualityLevelSettings;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::DynamicReverbConfig::__cordl_internal_get_IsLowQualityLevelSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLowQualityLevelSettings;
}
constexpr void GlobalNamespace::DynamicReverbConfig::__cordl_internal_set_IsLowQualityLevelSettings(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsLowQualityLevelSettings = value;
}
inline void GlobalNamespace::DynamicReverbConfig::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicReverbConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicReverbConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicReverbConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DynamicReverbConfig* GlobalNamespace::DynamicReverbConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DynamicReverbConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicReverbConfig::DynamicReverbConfig()   {
}
