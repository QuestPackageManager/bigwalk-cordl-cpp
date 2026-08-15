#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioConfig.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__OnApplicationFocusBehaviorType_impl.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__DynamicReverbConfig_def.hpp"
#include "GlobalNamespace/zzzz__SoundBank_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioConfig.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioConfig::*)()>(&::GlobalNamespace::AudioConfig::OnValidate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180470df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioConfig::*)()>(&::GlobalNamespace::AudioConfig::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180470e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioSourcePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSourcePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioSourcePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSourcePrefab;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_AudioSourcePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioSourcePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioListenerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioListenerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioListenerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioListenerPrefab;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_AudioListenerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioListenerPrefab = value;
}
constexpr int32_t& GlobalNamespace::AudioConfig::__cordl_internal_get_SourcePoolSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourcePoolSize;
}
constexpr int32_t const& GlobalNamespace::AudioConfig::__cordl_internal_get_SourcePoolSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourcePoolSize;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_SourcePoolSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SourcePoolSize = value;
}
constexpr int32_t& GlobalNamespace::AudioConfig::__cordl_internal_get_ControllerPoolSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ControllerPoolSize;
}
constexpr int32_t const& GlobalNamespace::AudioConfig::__cordl_internal_get_ControllerPoolSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ControllerPoolSize;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_ControllerPoolSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ControllerPoolSize = value;
}
constexpr bool& GlobalNamespace::AudioConfig::__cordl_internal_get_AutoFollowMainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoFollowMainCamera;
}
constexpr bool const& GlobalNamespace::AudioConfig::__cordl_internal_get_AutoFollowMainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoFollowMainCamera;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_AutoFollowMainCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoFollowMainCamera = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::AudioConfig::__cordl_internal_get_DefaultRTPCXProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultRTPCXProvider;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::AudioConfig::__cordl_internal_get_DefaultRTPCXProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultRTPCXProvider;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_DefaultRTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultRTPCXProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig>& GlobalNamespace::AudioConfig::__cordl_internal_get_DynamicReverbConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicReverbConfig;
}
constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig> const& GlobalNamespace::AudioConfig::__cordl_internal_get_DynamicReverbConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicReverbConfig;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_DynamicReverbConfig(::UnityW<::GlobalNamespace::DynamicReverbConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DynamicReverbConfig = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBank>& GlobalNamespace::AudioConfig::__cordl_internal_get_GlobalSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBank> const& GlobalNamespace::AudioConfig::__cordl_internal_get_GlobalSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalSoundBank;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_GlobalSoundBank(::UnityW<::GlobalNamespace::SoundBank>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalSoundBank = value;
}
constexpr int32_t& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioLoggerSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioLoggerSize;
}
constexpr int32_t const& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioLoggerSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioLoggerSize;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_AudioLoggerSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioLoggerSize = value;
}
constexpr ::UnityEngine::AudioSpeakerMode& GlobalNamespace::AudioConfig::__cordl_internal_get_SpeakerMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerMode;
}
constexpr ::UnityEngine::AudioSpeakerMode const& GlobalNamespace::AudioConfig::__cordl_internal_get_SpeakerMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerMode;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_SpeakerMode(::UnityEngine::AudioSpeakerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeakerMode = value;
}
constexpr ::GlobalNamespace::OnApplicationFocusBehaviorType& GlobalNamespace::AudioConfig::__cordl_internal_get_OnApplicationFocusBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnApplicationFocusBehavior;
}
constexpr ::GlobalNamespace::OnApplicationFocusBehaviorType const& GlobalNamespace::AudioConfig::__cordl_internal_get_OnApplicationFocusBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnApplicationFocusBehavior;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_OnApplicationFocusBehavior(::GlobalNamespace::OnApplicationFocusBehaviorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnApplicationFocusBehavior = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioConfig::__cordl_internal_get_FloorNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloorNormal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioConfig::__cordl_internal_get_FloorNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloorNormal;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_FloorNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FloorNormal = value;
}
constexpr float_t& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioPlayerCullingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioPlayerCullingDistance;
}
constexpr float_t const& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioPlayerCullingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioPlayerCullingDistance;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_AudioPlayerCullingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioPlayerCullingDistance = value;
}
constexpr int32_t& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioPlayerCullingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioPlayerCullingSize;
}
constexpr int32_t const& GlobalNamespace::AudioConfig::__cordl_internal_get_AudioPlayerCullingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioPlayerCullingSize;
}
constexpr void GlobalNamespace::AudioConfig::__cordl_internal_set_AudioPlayerCullingSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioPlayerCullingSize = value;
}
inline void GlobalNamespace::AudioConfig::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioConfig* GlobalNamespace::AudioConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioConfig::AudioConfig()   {
}
