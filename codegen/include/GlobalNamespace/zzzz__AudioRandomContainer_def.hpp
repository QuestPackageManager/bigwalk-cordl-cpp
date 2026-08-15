#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRandomContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioRandomContainer)
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct AudioVolumeStruct;
}
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class IAudioVolume;
}
namespace GlobalNamespace {
class ISoundBankable;
}
namespace GlobalNamespace {
class ISoundCueProvider;
}
namespace GlobalNamespace {
class IVirtualizable;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
struct VoiceLimitBehaviorType;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioRandomContainer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRandomContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRandomContainer*, "", "AudioRandomContainer");
// Dependencies AudioAsset, SoundCue, VoiceLimitBehaviorType
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRandomContainer
class CORDL_TYPE AudioRandomContainer : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
 __declspec(property(get=get_Cooldown, put=set_Cooldown)) float_t  Cooldown;

/// @brief Field Cues, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cues, put=__cordl_internal_set_Cues)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  Cues;

 __declspec(property(get=get_Delay, put=set_Delay)) float_t  Delay;

 __declspec(property(get=get_Deterministic)) bool  Deterministic;

 __declspec(property(get=get_MaxPitch)) float_t  MaxPitch;

 __declspec(property(get=get_MaxVolume)) float_t  MaxVolume;

 __declspec(property(get=get_MinPitch)) float_t  MinPitch;

 __declspec(property(get=get_MinVolume)) float_t  MinVolume;

 __declspec(property(get=get_NextCue, put=set_NextCue)) ::UnityW<::GlobalNamespace::SoundCue>  NextCue;

 __declspec(property(get=get_Offset, put=set_Offset)) float_t  Offset;

 __declspec(property(get=get_VoiceLimit)) int32_t  VoiceLimit;

 __declspec(property(get=get_VoiceLimitBehavior)) ::GlobalNamespace::VoiceLimitBehaviorType  VoiceLimitBehavior;

/// @brief Field <Cooldown>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__Cooldown_k__BackingField, put=__cordl_internal_set__Cooldown_k__BackingField)) float_t  _Cooldown_k__BackingField;

/// @brief Field <Delay>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Delay_k__BackingField, put=__cordl_internal_set__Delay_k__BackingField)) float_t  _Delay_k__BackingField;

/// @brief Field <NextCue>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__NextCue_k__BackingField, put=__cordl_internal_set__NextCue_k__BackingField)) ::UnityW<::GlobalNamespace::SoundCue>  _NextCue_k__BackingField;

/// @brief Field <Offset>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__Offset_k__BackingField, put=__cordl_internal_set__Offset_k__BackingField)) float_t  _Offset_k__BackingField;

/// @brief Field <TempVolumeList>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TempVolumeList_k__BackingField, put=setStaticF__TempVolumeList_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  _TempVolumeList_k__BackingField;

/// @brief Field _cooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldown, put=__cordl_internal_set__cooldown)) float_t  _cooldown;

/// @brief Field _delay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) float_t  _delay;

/// @brief Field _deterministic, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__deterministic, put=__cordl_internal_set__deterministic)) bool  _deterministic;

/// @brief Field _lastIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastIndex, put=__cordl_internal_set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _maxPitch, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxPitch, put=__cordl_internal_set__maxPitch)) float_t  _maxPitch;

/// @brief Field _maxVolume, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxVolume, put=__cordl_internal_set__maxVolume)) float_t  _maxVolume;

/// @brief Field _minPitch, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__minPitch, put=__cordl_internal_set__minPitch)) float_t  _minPitch;

/// @brief Field _minVolume, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__minVolume, put=__cordl_internal_set__minVolume)) float_t  _minVolume;

/// @brief Field _offset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) float_t  _offset;

/// @brief Field _voiceLimit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceLimit, put=__cordl_internal_set__voiceLimit)) int32_t  _voiceLimit;

/// @brief Field _voiceLimitBehavior, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceLimitBehavior, put=__cordl_internal_set__voiceLimitBehavior)) ::GlobalNamespace::VoiceLimitBehaviorType  _voiceLimitBehavior;

/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr operator  ::GlobalNamespace::ISoundBankable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ISoundCueProvider"
constexpr operator  ::GlobalNamespace::ISoundCueProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVirtualizable"
constexpr operator  ::GlobalNamespace::IVirtualizable*() noexcept;

/// @brief Method GetAllCues, addr 0x18048c990, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GetAllCues() ;

/// @brief Method GetCue, addr 0x18048ca50, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SoundCue> GetCue() ;

/// @brief Method GetCue, addr 0x18048ca60, size 0x190, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundCue> GetCue(int32_t  index) ;

/// @brief Method GetDeterministicIndex, addr 0x18048cbf0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetDeterministicIndex(::UnityEngine::Object*  owner) ;

/// @brief Method GetPitch, addr 0x18048cc50, size 0x70, virtual false, abstract: false, final false
inline float_t GetPitch() ;

/// @brief Method GetVolume, addr 0x18048ccc0, size 0xa0, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolumeStruct GetVolume() ;

static inline ::GlobalNamespace::AudioRandomContainer* New_ctor() ;

/// @brief Method OnEnable, addr 0x18048cd60, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x18048cdb0, size 0x100, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Play, addr 0x18048ceb0, size 0x8b0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> Play(::UnityEngine::Vector3  worldPos, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, bool  rtpc, ::UnityEngine::Transform*  followTransform, double_t  delayOverride, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*  getCueFunc) ;

/// @brief Method SetMinMaxVolume, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetMinMaxVolume(float_t  min, float_t  max) ;

/// @brief Method <Play>g___deregisterVoice|54_0, addr 0x18048d760, size 0xb0, virtual false, abstract: false, final false
static inline void _Play_g___deregisterVoice_54_0(::GlobalNamespace::AudioRandomContainer*  r, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_Cues() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_Cues() ;

constexpr float_t const& __cordl_internal_get__Cooldown_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Cooldown_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Delay_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Delay_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get__NextCue_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get__NextCue_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Offset_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Offset_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__cooldown() const;

constexpr float_t& __cordl_internal_get__cooldown() ;

constexpr float_t const& __cordl_internal_get__delay() const;

constexpr float_t& __cordl_internal_get__delay() ;

constexpr bool const& __cordl_internal_get__deterministic() const;

constexpr bool& __cordl_internal_get__deterministic() ;

constexpr int32_t const& __cordl_internal_get__lastIndex() const;

constexpr int32_t& __cordl_internal_get__lastIndex() ;

constexpr float_t const& __cordl_internal_get__maxPitch() const;

constexpr float_t& __cordl_internal_get__maxPitch() ;

constexpr float_t const& __cordl_internal_get__maxVolume() const;

constexpr float_t& __cordl_internal_get__maxVolume() ;

constexpr float_t const& __cordl_internal_get__minPitch() const;

constexpr float_t& __cordl_internal_get__minPitch() ;

constexpr float_t const& __cordl_internal_get__minVolume() const;

constexpr float_t& __cordl_internal_get__minVolume() ;

constexpr float_t const& __cordl_internal_get__offset() const;

constexpr float_t& __cordl_internal_get__offset() ;

constexpr int32_t const& __cordl_internal_get__voiceLimit() const;

constexpr int32_t& __cordl_internal_get__voiceLimit() ;

constexpr ::GlobalNamespace::VoiceLimitBehaviorType const& __cordl_internal_get__voiceLimitBehavior() const;

constexpr ::GlobalNamespace::VoiceLimitBehaviorType& __cordl_internal_get__voiceLimitBehavior() ;

constexpr void __cordl_internal_set_Cues(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set__Cooldown_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Delay_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__NextCue_k__BackingField(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set__Offset_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__cooldown(float_t  value) ;

constexpr void __cordl_internal_set__delay(float_t  value) ;

constexpr void __cordl_internal_set__deterministic(bool  value) ;

constexpr void __cordl_internal_set__lastIndex(int32_t  value) ;

constexpr void __cordl_internal_set__maxPitch(float_t  value) ;

constexpr void __cordl_internal_set__maxVolume(float_t  value) ;

constexpr void __cordl_internal_set__minPitch(float_t  value) ;

constexpr void __cordl_internal_set__minVolume(float_t  value) ;

constexpr void __cordl_internal_set__offset(float_t  value) ;

constexpr void __cordl_internal_set__voiceLimit(int32_t  value) ;

constexpr void __cordl_internal_set__voiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value) ;

/// @brief Method .ctor, addr 0x18048d870, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* getStaticF__TempVolumeList_k__BackingField() ;

/// @brief Method get_Cooldown, addr 0x1802e2da0, size 0x10, virtual true, abstract: false, final true
inline float_t get_Cooldown() ;

/// @brief Method get_Delay, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Delay() ;

/// @brief Method get_Deterministic, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_Deterministic() ;

/// @brief Method get_MaxPitch, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxPitch() ;

/// @brief Method get_MaxVolume, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxVolume() ;

/// @brief Method get_MinPitch, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinPitch() ;

/// @brief Method get_MinVolume, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinVolume() ;

/// @brief Method get_NextCue, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundCue> get_NextCue() ;

/// @brief Method get_Offset, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_Offset() ;

/// @brief Method get_TempVolumeList, addr 0x1803161d0, size 0x170, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* get_TempVolumeList() ;

/// @brief Method get_VoiceLimit, addr 0x1803914a0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_VoiceLimit() ;

/// @brief Method get_VoiceLimitBehavior, addr 0x1803914b0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::VoiceLimitBehaviorType get_VoiceLimitBehavior() ;

/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* i___GlobalNamespace__ISoundBankable() noexcept;

/// @brief Convert to "::GlobalNamespace::ISoundCueProvider"
constexpr ::GlobalNamespace::ISoundCueProvider* i___GlobalNamespace__ISoundCueProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::IVirtualizable"
constexpr ::GlobalNamespace::IVirtualizable* i___GlobalNamespace__IVirtualizable() noexcept;

static inline void setStaticF__TempVolumeList_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

/// @brief Method set_Cooldown, addr 0x18046fb90, size 0x10, virtual false, abstract: false, final false
inline void set_Cooldown(float_t  value) ;

/// @brief Method set_Delay, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Delay(float_t  value) ;

/// @brief Method set_NextCue, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_NextCue(::GlobalNamespace::SoundCue*  value) ;

/// @brief Method set_Offset, addr 0x180307250, size 0x10, virtual false, abstract: false, final false
inline void set_Offset(float_t  value) ;

/// @brief Method set_TempVolumeList, addr 0x18048d8b0, size 0x50, virtual false, abstract: false, final false
static inline void set_TempVolumeList(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRandomContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRandomContainer(AudioRandomContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRandomContainer(AudioRandomContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17567};

/// @brief Field _minVolume, offset: 0x18, size: 0x4, def value: None
 float_t  ____minVolume;

/// @brief Field _maxVolume, offset: 0x1c, size: 0x4, def value: None
 float_t  ____maxVolume;

/// @brief Field _minPitch, offset: 0x20, size: 0x4, def value: None
 float_t  ____minPitch;

/// @brief Field _maxPitch, offset: 0x24, size: 0x4, def value: None
 float_t  ____maxPitch;

/// @brief Field _voiceLimit, offset: 0x28, size: 0x4, def value: None
 int32_t  ____voiceLimit;

/// @brief Field _voiceLimitBehavior, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::VoiceLimitBehaviorType  ____voiceLimitBehavior;

/// @brief Field _cooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ____cooldown;

/// @brief Field <Cooldown>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____Cooldown_k__BackingField;

/// @brief Field _delay, offset: 0x38, size: 0x4, def value: None
 float_t  ____delay;

/// @brief Field <Delay>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____Delay_k__BackingField;

/// @brief Field _offset, offset: 0x40, size: 0x4, def value: None
 float_t  ____offset;

/// @brief Field <Offset>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____Offset_k__BackingField;

/// @brief Field _deterministic, offset: 0x48, size: 0x1, def value: None
 bool  ____deterministic;

/// @brief Field Cues, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___Cues;

/// @brief Field <NextCue>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ____NextCue_k__BackingField;

/// @brief Field _lastIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ____lastIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____minVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____maxVolume) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____minPitch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____maxPitch) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____voiceLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____voiceLimitBehavior) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____cooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____Cooldown_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____delay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____Delay_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____Offset_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____deterministic) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ___Cues) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____NextCue_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRandomContainer, ____lastIndex) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRandomContainer) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
