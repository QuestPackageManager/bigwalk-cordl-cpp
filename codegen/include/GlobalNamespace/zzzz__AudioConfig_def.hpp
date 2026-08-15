#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__OnApplicationFocusBehaviorType_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioConfig)
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace GlobalNamespace {
class DynamicReverbConfig;
}
namespace GlobalNamespace {
class SoundBank;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioConfig*, "", "AudioConfig");
// Dependencies AudioAsset, OnApplicationFocusBehaviorType, UnityEngine.AudioSpeakerMode, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioConfig
class CORDL_TYPE AudioConfig : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field AudioListenerPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioListenerPrefab, put=__cordl_internal_set_AudioListenerPrefab)) ::UnityW<::UnityEngine::GameObject>  AudioListenerPrefab;

/// @brief Field AudioLoggerSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_AudioLoggerSize, put=__cordl_internal_set_AudioLoggerSize)) int32_t  AudioLoggerSize;

/// @brief Field AudioPlayerCullingDistance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_AudioPlayerCullingDistance, put=__cordl_internal_set_AudioPlayerCullingDistance)) float_t  AudioPlayerCullingDistance;

/// @brief Field AudioPlayerCullingSize, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_AudioPlayerCullingSize, put=__cordl_internal_set_AudioPlayerCullingSize)) int32_t  AudioPlayerCullingSize;

/// @brief Field AudioSourcePrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioSourcePrefab, put=__cordl_internal_set_AudioSourcePrefab)) ::UnityW<::UnityEngine::GameObject>  AudioSourcePrefab;

/// @brief Field AutoFollowMainCamera, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoFollowMainCamera, put=__cordl_internal_set_AutoFollowMainCamera)) bool  AutoFollowMainCamera;

/// @brief Field ControllerPoolSize, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ControllerPoolSize, put=__cordl_internal_set_ControllerPoolSize)) int32_t  ControllerPoolSize;

/// @brief Field DefaultRTPCXProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultRTPCXProvider, put=__cordl_internal_set_DefaultRTPCXProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  DefaultRTPCXProvider;

/// @brief Field DynamicReverbConfig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_DynamicReverbConfig, put=__cordl_internal_set_DynamicReverbConfig)) ::UnityW<::GlobalNamespace::DynamicReverbConfig>  DynamicReverbConfig;

/// @brief Field FloorNormal, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_FloorNormal, put=__cordl_internal_set_FloorNormal)) ::UnityEngine::Vector3  FloorNormal;

/// @brief Field GlobalSoundBank, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalSoundBank, put=__cordl_internal_set_GlobalSoundBank)) ::UnityW<::GlobalNamespace::SoundBank>  GlobalSoundBank;

/// @brief Field OnApplicationFocusBehavior, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_OnApplicationFocusBehavior, put=__cordl_internal_set_OnApplicationFocusBehavior)) ::GlobalNamespace::OnApplicationFocusBehaviorType  OnApplicationFocusBehavior;

/// @brief Field SourcePoolSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_SourcePoolSize, put=__cordl_internal_set_SourcePoolSize)) int32_t  SourcePoolSize;

/// @brief Field SpeakerMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpeakerMode, put=__cordl_internal_set_SpeakerMode)) ::UnityEngine::AudioSpeakerMode  SpeakerMode;

static inline ::GlobalNamespace::AudioConfig* New_ctor() ;

/// @brief Method OnValidate, addr 0x180470df0, size 0x80, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_AudioListenerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_AudioListenerPrefab() ;

constexpr int32_t const& __cordl_internal_get_AudioLoggerSize() const;

constexpr int32_t& __cordl_internal_get_AudioLoggerSize() ;

constexpr float_t const& __cordl_internal_get_AudioPlayerCullingDistance() const;

constexpr float_t& __cordl_internal_get_AudioPlayerCullingDistance() ;

constexpr int32_t const& __cordl_internal_get_AudioPlayerCullingSize() const;

constexpr int32_t& __cordl_internal_get_AudioPlayerCullingSize() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_AudioSourcePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_AudioSourcePrefab() ;

constexpr bool const& __cordl_internal_get_AutoFollowMainCamera() const;

constexpr bool& __cordl_internal_get_AutoFollowMainCamera() ;

constexpr int32_t const& __cordl_internal_get_ControllerPoolSize() const;

constexpr int32_t& __cordl_internal_get_ControllerPoolSize() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get_DefaultRTPCXProvider() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get_DefaultRTPCXProvider() ;

constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig> const& __cordl_internal_get_DynamicReverbConfig() const;

constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig>& __cordl_internal_get_DynamicReverbConfig() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_FloorNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_FloorNormal() ;

constexpr ::UnityW<::GlobalNamespace::SoundBank> const& __cordl_internal_get_GlobalSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBank>& __cordl_internal_get_GlobalSoundBank() ;

constexpr ::GlobalNamespace::OnApplicationFocusBehaviorType const& __cordl_internal_get_OnApplicationFocusBehavior() const;

constexpr ::GlobalNamespace::OnApplicationFocusBehaviorType& __cordl_internal_get_OnApplicationFocusBehavior() ;

constexpr int32_t const& __cordl_internal_get_SourcePoolSize() const;

constexpr int32_t& __cordl_internal_get_SourcePoolSize() ;

constexpr ::UnityEngine::AudioSpeakerMode const& __cordl_internal_get_SpeakerMode() const;

constexpr ::UnityEngine::AudioSpeakerMode& __cordl_internal_get_SpeakerMode() ;

constexpr void __cordl_internal_set_AudioListenerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_AudioLoggerSize(int32_t  value) ;

constexpr void __cordl_internal_set_AudioPlayerCullingDistance(float_t  value) ;

constexpr void __cordl_internal_set_AudioPlayerCullingSize(int32_t  value) ;

constexpr void __cordl_internal_set_AudioSourcePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_AutoFollowMainCamera(bool  value) ;

constexpr void __cordl_internal_set_ControllerPoolSize(int32_t  value) ;

constexpr void __cordl_internal_set_DefaultRTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

constexpr void __cordl_internal_set_DynamicReverbConfig(::UnityW<::GlobalNamespace::DynamicReverbConfig>  value) ;

constexpr void __cordl_internal_set_FloorNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_GlobalSoundBank(::UnityW<::GlobalNamespace::SoundBank>  value) ;

constexpr void __cordl_internal_set_OnApplicationFocusBehavior(::GlobalNamespace::OnApplicationFocusBehaviorType  value) ;

constexpr void __cordl_internal_set_SourcePoolSize(int32_t  value) ;

constexpr void __cordl_internal_set_SpeakerMode(::UnityEngine::AudioSpeakerMode  value) ;

/// @brief Method .ctor, addr 0x180470e70, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioConfig(AudioConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioConfig(AudioConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17490};

/// @brief Field AudioSourcePrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___AudioSourcePrefab;

/// @brief Field AudioListenerPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___AudioListenerPrefab;

/// @brief Field SourcePoolSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___SourcePoolSize;

/// @brief Field ControllerPoolSize, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___ControllerPoolSize;

/// @brief Field AutoFollowMainCamera, offset: 0x30, size: 0x1, def value: None
 bool  ___AutoFollowMainCamera;

/// @brief Field DefaultRTPCXProvider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ___DefaultRTPCXProvider;

/// @brief Field DynamicReverbConfig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DynamicReverbConfig>  ___DynamicReverbConfig;

/// @brief Field GlobalSoundBank, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBank>  ___GlobalSoundBank;

/// @brief Field AudioLoggerSize, offset: 0x50, size: 0x4, def value: None
 int32_t  ___AudioLoggerSize;

/// @brief Field SpeakerMode, offset: 0x54, size: 0x4, def value: None
 ::UnityEngine::AudioSpeakerMode  ___SpeakerMode;

/// @brief Field OnApplicationFocusBehavior, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::OnApplicationFocusBehaviorType  ___OnApplicationFocusBehavior;

/// @brief Field FloorNormal, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___FloorNormal;

/// @brief Field AudioPlayerCullingDistance, offset: 0x68, size: 0x4, def value: None
 float_t  ___AudioPlayerCullingDistance;

/// @brief Field AudioPlayerCullingSize, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___AudioPlayerCullingSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioConfig, ___AudioSourcePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___AudioListenerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___SourcePoolSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___ControllerPoolSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___AutoFollowMainCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___DefaultRTPCXProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___DynamicReverbConfig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___GlobalSoundBank) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___AudioLoggerSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___SpeakerMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___OnApplicationFocusBehavior) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___FloorNormal) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___AudioPlayerCullingDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioConfig, ___AudioPlayerCullingSize) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioConfig) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
