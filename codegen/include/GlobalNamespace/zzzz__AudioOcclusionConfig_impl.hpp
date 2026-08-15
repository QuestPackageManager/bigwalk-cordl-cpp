#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionConfig.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterialConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionConfig::*)()>(&::GlobalNamespace::AudioOcclusionConfig::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180484300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_BasicOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BasicOcclusion;
}
constexpr bool const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_BasicOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BasicOcclusion;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_BasicOcclusion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BasicOcclusion = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_Layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Layers = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_MinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinDistance;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_MinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinDistance;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_MinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinDistance = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_MaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDistance;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_MaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDistance;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_MaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDistance = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_DetectionSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionSize;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_DetectionSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetectionSize;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_DetectionSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetectionSize = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_UpdateRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateRate;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_UpdateRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateRate;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_UpdateRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateRate = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_QueryTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueryTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_QueryTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueryTriggerInteraction;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_QueryTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueryTriggerInteraction = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_MaterialConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_MaterialConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialConfig;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_MaterialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaterialConfig = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_StartOccluded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartOccluded;
}
constexpr bool const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_StartOccluded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartOccluded;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_StartOccluded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartOccluded = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_UseHighShelfFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseHighShelfFilter;
}
constexpr bool const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_UseHighShelfFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseHighShelfFilter;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_UseHighShelfFilter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseHighShelfFilter = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_FilterMinGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterMinGain;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_FilterMinGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterMinGain;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_FilterMinGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterMinGain = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_FilterQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterQ;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_FilterQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterQ;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_FilterQ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterQ = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_FilterFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterFrequency;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionConfig::__cordl_internal_get_FilterFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterFrequency;
}
constexpr void GlobalNamespace::AudioOcclusionConfig::__cordl_internal_set_FilterFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterFrequency = value;
}
inline void GlobalNamespace::AudioOcclusionConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioOcclusionConfig* GlobalNamespace::AudioOcclusionConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioOcclusionConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusionConfig::AudioOcclusionConfig()   {
}
