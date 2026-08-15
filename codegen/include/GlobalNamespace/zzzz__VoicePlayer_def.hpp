#pragma once
// IWYU pragma private; include "GlobalNamespace/VoicePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoicePlayer)
namespace Dissonance::Audio::Playback {
class SamplePlaybackComponent;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class BitCrusher;
}
namespace GlobalNamespace {
class IAudioFilter;
}
namespace GlobalNamespace {
class IVoiceDataProvider;
}
namespace GlobalNamespace {
class LocalVoiceProvider;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
struct VoicePlayer_VoicePlayerType;
}
namespace GlobalNamespace {
class VoicePlayer___c;
}
namespace GlobalNamespace {
class WaterDepthSampleData;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct VoicePlayer_VoicePlayerType;
}
namespace GlobalNamespace {
class VoicePlayer;
}
namespace GlobalNamespace {
class VoicePlayer___c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoicePlayer_VoicePlayerType);
MARK_REF_T(::GlobalNamespace::VoicePlayer*);
MARK_REF_T(::GlobalNamespace::VoicePlayer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoicePlayer_VoicePlayerType, "", "VoicePlayer/VoicePlayerType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoicePlayer*, "", "VoicePlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoicePlayer___c*, "", "VoicePlayer/<>c");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoicePlayer/VoicePlayerType
struct CORDL_TYPE VoicePlayer_VoicePlayerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoicePlayer_VoicePlayerType_Unwrapped
enum struct __VoicePlayer_VoicePlayerType_Unwrapped : int32_t {
__E_Clean = static_cast<int32_t>(0x0),
__E_Radio = static_cast<int32_t>(0x1),
__E_SelfVoice = static_cast<int32_t>(0x2),
__E_Megaphone = static_cast<int32_t>(0x3),
__E_WalkieTalkie = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoicePlayer_VoicePlayerType_Unwrapped () const noexcept {
return static_cast<__VoicePlayer_VoicePlayerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoicePlayer_VoicePlayerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoicePlayer_VoicePlayerType(int32_t  value__) noexcept;

/// @brief Field Clean value: I32(0)
static ::GlobalNamespace::VoicePlayer_VoicePlayerType const Clean;

/// @brief Field Megaphone value: I32(3)
static ::GlobalNamespace::VoicePlayer_VoicePlayerType const Megaphone;

/// @brief Field Radio value: I32(1)
static ::GlobalNamespace::VoicePlayer_VoicePlayerType const Radio;

/// @brief Field SelfVoice value: I32(2)
static ::GlobalNamespace::VoicePlayer_VoicePlayerType const SelfVoice;

/// @brief Field WalkieTalkie value: I32(4)
static ::GlobalNamespace::VoicePlayer_VoicePlayerType const WalkieTalkie;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoicePlayer_VoicePlayerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoicePlayer_VoicePlayerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoicePlayer/<>c
class CORDL_TYPE VoicePlayer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::VoicePlayer___c*  __9;

/// @brief Field <>9__58_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_0, put=setStaticF___9__58_0)) ::UnityEngine::AudioClip_PCMReaderCallback*  __9__58_0;

static inline ::GlobalNamespace::VoicePlayer___c* New_ctor() ;

/// @brief Method <Awake>b__58_0, addr 0x18038e250, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__58_0(::ArrayW<float_t>  buf) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::VoicePlayer___c* getStaticF___9() ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* getStaticF___9__58_0() ;

static inline void setStaticF___9(::GlobalNamespace::VoicePlayer___c*  value) ;

static inline void setStaticF___9__58_0(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoicePlayer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoicePlayer___c(VoicePlayer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoicePlayer___c(VoicePlayer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VoicePlayer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, VoicePlayer::VoicePlayerType
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoicePlayer
class CORDL_TYPE VoicePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VoicePlayerType = ::GlobalNamespace::VoicePlayer_VoicePlayerType;

using __c = ::GlobalNamespace::VoicePlayer___c;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_Controller)) ::UnityW<::GlobalNamespace::AudioSourceController>  Controller;

/// @brief Field Cue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cue, put=__cordl_internal_set_Cue)) ::UnityW<::GlobalNamespace::SoundCue>  Cue;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field LocalVoiceProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalVoiceProvider, put=__cordl_internal_set_LocalVoiceProvider)) ::UnityW<::GlobalNamespace::LocalVoiceProvider>  LocalVoiceProvider;

 __declspec(property(get=get_LocalVol, put=set_LocalVol)) ::GlobalNamespace::AudioVolume*  LocalVol;

/// @brief Field MEGAPHONE_DRY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MEGAPHONE_DRY, put=setStaticF_MEGAPHONE_DRY)) ::ArrayW<::StringW>  MEGAPHONE_DRY;

/// @brief Field MEGAPHONE_WET, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MEGAPHONE_WET, put=setStaticF_MEGAPHONE_WET)) ::ArrayW<::StringW>  MEGAPHONE_WET;

/// @brief Field OnVoicePlayed, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVoicePlayed, put=__cordl_internal_set_OnVoicePlayed)) ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  OnVoicePlayed;

/// @brief Field PlayerType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerType, put=__cordl_internal_set_PlayerType)) ::GlobalNamespace::VoicePlayer_VoicePlayerType  PlayerType;

/// @brief Field SamplePlaybackComponent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SamplePlaybackComponent, put=__cordl_internal_set_SamplePlaybackComponent)) ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  SamplePlaybackComponent;

 __declspec(property(get=get_SampleProvider, put=set_SampleProvider)) ::GlobalNamespace::IVoiceDataProvider*  SampleProvider;

 __declspec(property(get=get_SourcePlayerCharacter, put=set_SourcePlayerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  SourcePlayerCharacter;

/// @brief Field Volume, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) ::GlobalNamespace::AudioVolume*  Volume;

/// @brief Field WaterDepthData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterDepthData, put=__cordl_internal_set_WaterDepthData)) ::UnityW<::GlobalNamespace::WaterDepthSampleData>  WaterDepthData;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field <LocalVol>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalVol_k__BackingField, put=__cordl_internal_set__LocalVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _LocalVol_k__BackingField;

/// @brief Field _bitCrusher, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__bitCrusher, put=__cordl_internal_set__bitCrusher)) ::UnityW<::GlobalNamespace::BitCrusher>  _bitCrusher;

/// @brief Field _bypass, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _cachedClip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedClip, put=__cordl_internal_set__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Field _controller, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::GlobalNamespace::AudioSourceController>  _controller;

/// @brief Field _internalBypass, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _megaphoneIndex, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__megaphoneIndex, put=__cordl_internal_set__megaphoneIndex)) int32_t  _megaphoneIndex;

/// @brief Field _megaphoneMasterMixer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__megaphoneMasterMixer, put=__cordl_internal_set__megaphoneMasterMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _megaphoneMasterMixer;

/// @brief Field _megaphoneMixer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__megaphoneMixer, put=__cordl_internal_set__megaphoneMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _megaphoneMixer;

/// @brief Field _muteVol, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__muteVol, put=__cordl_internal_set__muteVol)) ::GlobalNamespace::AudioVolume*  _muteVol;

/// @brief Field _readHead, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__readHead, put=__cordl_internal_set__readHead)) int32_t  _readHead;

/// @brief Field _sourcePlayerCharacter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourcePlayerCharacter, put=__cordl_internal_set__sourcePlayerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _sourcePlayerCharacter;

/// @brief Field _speechlessVol, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__speechlessVol, put=__cordl_internal_set__speechlessVol)) ::GlobalNamespace::AudioVolume*  _speechlessVol;

/// @brief Field _walkietalkieMixer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__walkietalkieMixer, put=__cordl_internal_set__walkietalkieMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _walkietalkieMixer;

/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr operator  ::GlobalNamespace::IAudioFilter*() noexcept;

/// @brief Method Awake, addr 0x1803f3450, size 0x240, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetX, addr 0x1803f3690, size 0x90, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::VoicePlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803f3720, size 0xb0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803f37d0, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803f3810, size 0x740, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessSamples, addr 0x1803f3f50, size 0x180, virtual true, abstract: false, final true
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method Update, addr 0x1803f4240, size 0xde0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateReadHead, addr 0x1803f4230, size 0x10, virtual false, abstract: false, final false
inline void UpdateReadHead(int32_t  newReadHead) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UpdateVariables(float_t  deltaTime) ;

/// @brief Method <OnEnable>g___clearRef|59_0, addr 0x1803f40d0, size 0x100, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_59_0(::GlobalNamespace::VoicePlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_Cue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_Cue() ;

constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider> const& __cordl_internal_get_LocalVoiceProvider() const;

constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider>& __cordl_internal_get_LocalVoiceProvider() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get_OnVoicePlayed() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get_OnVoicePlayed() ;

constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType const& __cordl_internal_get_PlayerType() const;

constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType& __cordl_internal_get_PlayerType() ;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& __cordl_internal_get_SamplePlaybackComponent() const;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& __cordl_internal_get_SamplePlaybackComponent() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get_Volume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get_Volume() ;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& __cordl_internal_get_WaterDepthData() const;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& __cordl_internal_get_WaterDepthData() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__LocalVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__LocalVol_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::BitCrusher> const& __cordl_internal_get__bitCrusher() const;

constexpr ::UnityW<::GlobalNamespace::BitCrusher>& __cordl_internal_get__bitCrusher() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cachedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cachedClip() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__controller() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr int32_t const& __cordl_internal_get__megaphoneIndex() const;

constexpr int32_t& __cordl_internal_get__megaphoneIndex() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__megaphoneMasterMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__megaphoneMasterMixer() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__megaphoneMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__megaphoneMixer() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__muteVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__muteVol() ;

constexpr int32_t const& __cordl_internal_get__readHead() const;

constexpr int32_t& __cordl_internal_get__readHead() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__sourcePlayerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__sourcePlayerCharacter() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__speechlessVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__speechlessVol() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__walkietalkieMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__walkietalkieMixer() ;

constexpr void __cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_LocalVoiceProvider(::UnityW<::GlobalNamespace::LocalVoiceProvider>  value) ;

constexpr void __cordl_internal_set_OnVoicePlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set_PlayerType(::GlobalNamespace::VoicePlayer_VoicePlayerType  value) ;

constexpr void __cordl_internal_set_SamplePlaybackComponent(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value) ;

constexpr void __cordl_internal_set_Volume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value) ;

constexpr void __cordl_internal_set__LocalVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__bitCrusher(::UnityW<::GlobalNamespace::BitCrusher>  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__megaphoneIndex(int32_t  value) ;

constexpr void __cordl_internal_set__megaphoneMasterMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__megaphoneMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__muteVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__readHead(int32_t  value) ;

constexpr void __cordl_internal_set__sourcePlayerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set__speechlessVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__walkietalkieMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

/// @brief Method .ctor, addr 0x1803f5170, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <set_SampleProvider>b__15_0, addr 0x1803f41d0, size 0x60, virtual false, abstract: false, final false
inline void _set_SampleProvider_b__15_0() ;

/// @brief Method add_OnVoicePlayed, addr 0x1803f5280, size 0xa0, virtual false, abstract: false, final false
inline void add_OnVoicePlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

static inline ::ArrayW<::StringW> getStaticF_MEGAPHONE_DRY() ;

static inline ::ArrayW<::StringW> getStaticF_MEGAPHONE_WET() ;

/// @brief Method get_Bypass, addr 0x180391c80, size 0x10, virtual true, abstract: false, final true
inline bool get_Bypass() ;

/// @brief Method get_Controller, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> get_Controller() ;

/// @brief Method get_InternalBypass, addr 0x180391c90, size 0x10, virtual true, abstract: false, final true
inline bool get_InternalBypass() ;

/// @brief Method get_LocalVol, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_LocalVol() ;

/// @brief Method get_SampleProvider, addr 0x1803f5320, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::IVoiceDataProvider* get_SampleProvider() ;

/// @brief Method get_SourcePlayerCharacter, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> get_SourcePlayerCharacter() ;

/// @brief Method get_XProviderIdentifier, addr 0x1803f5370, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_XProviderIdentifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* i___GlobalNamespace__IAudioFilter() noexcept;

/// @brief Method remove_OnVoicePlayed, addr 0x1803f5380, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnVoicePlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

static inline void setStaticF_MEGAPHONE_DRY(::ArrayW<::StringW>  value) ;

static inline void setStaticF_MEGAPHONE_WET(::ArrayW<::StringW>  value) ;

/// @brief Method set_Bypass, addr 0x180391ca0, size 0x10, virtual true, abstract: false, final true
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0x180391cb0, size 0x10, virtual true, abstract: false, final true
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_LocalVol, addr 0x1803f5420, size 0x10, virtual false, abstract: false, final false
inline void set_LocalVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_SampleProvider, addr 0x1803f5430, size 0x260, virtual false, abstract: false, final false
inline void set_SampleProvider(::GlobalNamespace::IVoiceDataProvider*  value) ;

/// @brief Method set_SourcePlayerCharacter, addr 0x1803f5690, size 0xa0, virtual false, abstract: false, final false
inline void set_SourcePlayerCharacter(::GlobalNamespace::PlayerCharacter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoicePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoicePlayer(VoicePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoicePlayer(VoicePlayer const& ) = delete;

/// @brief Field MEGAPHONE_COMP_GAIN offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_COMP_GAIN{u"CompressorGain"};

/// @brief Field MEGAPHONE_COMP_THRESHOLD offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_COMP_THRESHOLD{u"CompressorThreshold"};

/// @brief Field MEGAPHONE_HP_FREQUENCY offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_HP_FREQUENCY{u"HPFrequency"};

/// @brief Field MEGAPHONE_LP_FREQUENCY offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_LP_FREQUENCY{u"LPFrequency"};

/// @brief Field MEGAPHONE_POST_COMP_GAIN offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_POST_COMP_GAIN{u"PostCompressorGain"};

/// @brief Field MEGAPHONE_POST_COMP_RELEASE offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_POST_COMP_RELEASE{u"PostCompressorRelease"};

/// @brief Field MEGAPHONE_POST_COMP_THRESHOLD offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_POST_COMP_THRESHOLD{u"PostCompressorThreshold"};

/// @brief Field MEGAPHONE_REVERB_DECAY_TIME offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_REVERB_DECAY_TIME{u"ReverbDecayTime"};

/// @brief Field MEGAPHONE_REVERB_DENSITY offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_REVERB_DENSITY{u"ReverbDensity"};

/// @brief Field MEGAPHONE_REVERB_DRY offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_REVERB_DRY{u"ReverbDry"};

/// @brief Field MEGAPHONE_REVERB_HF_RATIO offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_REVERB_HF_RATIO{u"ReverbDecayHFRatio"};

/// @brief Field MEGAPHONE_REVERB_LF offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_REVERB_LF{u"ReverbLF"};

/// @brief Field MEGAPHONE_REVERB_WET offset 0xffffffff size 0x8
static constexpr ::ConstString  MEGAPHONE_REVERB_WET{u"ReverbWet"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4893};

/// @brief Field Cue, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___Cue;

/// @brief Field LocalVoiceProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalVoiceProvider>  ___LocalVoiceProvider;

/// @brief Field SamplePlaybackComponent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  ___SamplePlaybackComponent;

/// @brief Field WaterDepthData, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WaterDepthSampleData>  ___WaterDepthData;

/// @brief Field _internalBypass, offset: 0x40, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x41, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field Volume, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ___Volume;

/// @brief Field PlayerType, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::VoicePlayer_VoicePlayerType  ___PlayerType;

/// @brief Field _controller, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____controller;

/// @brief Field _sourcePlayerCharacter, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____sourcePlayerCharacter;

/// @brief Field _speechlessVol, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____speechlessVol;

/// @brief Field _muteVol, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____muteVol;

/// @brief Field <LocalVol>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____LocalVol_k__BackingField;

/// @brief Field _cachedClip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cachedClip;

/// @brief Field _readHead, offset: 0x88, size: 0x4, def value: None
 int32_t  ____readHead;

/// @brief Field _bitCrusher, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BitCrusher>  ____bitCrusher;

/// @brief Field _megaphoneMixer, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____megaphoneMixer;

/// @brief Field _megaphoneMasterMixer, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____megaphoneMasterMixer;

/// @brief Field _megaphoneIndex, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____megaphoneIndex;

/// @brief Field _walkietalkieMixer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____walkietalkieMixer;

/// @brief Field OnVoicePlayed, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ___OnVoicePlayed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___Cue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___LocalVoiceProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___SamplePlaybackComponent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___WaterDepthData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____internalBypass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____bypass) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___Volume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___PlayerType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____controller) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____sourcePlayerCharacter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____speechlessVol) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____muteVol) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____LocalVol_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____cachedClip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____readHead) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____bitCrusher) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____megaphoneMixer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____megaphoneMasterMixer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____megaphoneIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ____walkietalkieMixer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoicePlayer, ___OnVoicePlayed) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoicePlayer) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
