#pragma once
// IWYU pragma private; include "UnityEngine/AudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSource)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct AudioVelocityUpdateMode;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AudioSource;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioSource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSource
class CORDL_TYPE AudioSource : public ::UnityEngine::AudioBehaviour {
public:
// Declarations
 __declspec(property(get=get_clip, put=set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

 __declspec(property(put=set_dopplerLevel)) float_t  dopplerLevel;

 __declspec(property(get=get_generatorObject, put=set_generatorObject)) ::UnityW<::UnityEngine::Object>  generatorObject;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(put=set_loop)) bool  loop;

 __declspec(property(put=set_mute)) bool  mute;

 __declspec(property(get=get_outputAudioMixerGroup, put=set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

 __declspec(property(put=set_panStereo)) float_t  panStereo;

 __declspec(property(put=set_pitch)) float_t  pitch;

 __declspec(property(put=set_playOnAwake)) bool  playOnAwake;

 __declspec(property(put=set_priority)) int32_t  priority;

 __declspec(property(put=set_spatialBlend)) float_t  spatialBlend;

 __declspec(property(put=set_spread)) float_t  spread;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_timeSamples, put=set_timeSamples)) int32_t  timeSamples;

 __declspec(property(put=set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode  velocityUpdateMode;

 __declspec(property(get=get_volume, put=set_volume)) float_t  volume;

/// @brief Method GetOutputData, addr 0x18223ab50, size 0x10, virtual false, abstract: false, final false
inline void GetOutputData(::ArrayW<float_t>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper, addr 0x18223aa50, size 0x100, virtual false, abstract: false, final false
static inline void GetOutputDataHelper(::UnityEngine::AudioSource*  source, ::by_ref<::ArrayW<float_t>>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper_Injected, addr 0x18223aa40, size 0x10, virtual false, abstract: false, final false
static inline void GetOutputDataHelper_Injected(::System::IntPtr  source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel) ;

/// @brief Method GetSpectrumData, addr 0x18223ac80, size 0x10, virtual false, abstract: false, final false
inline void GetSpectrumData(::ArrayW<float_t>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper, addr 0x18223ab70, size 0x110, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource*  source, ::by_ref<::ArrayW<float_t>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper_Injected, addr 0x18223ab60, size 0x10, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper_Injected(::System::IntPtr  source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

static inline ::UnityEngine::AudioSource* New_ctor() ;

/// @brief Method Play, addr 0x18223b040, size 0x50, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x18223b000, size 0x40, virtual false, abstract: false, final false
inline void Play(double_t  delay) ;

/// @brief Method PlayDelayed, addr 0x18223ac90, size 0x50, virtual false, abstract: false, final false
inline void PlayDelayed(float_t  delay) ;

/// @brief Method PlayHelper, addr 0x18223acf0, size 0x60, virtual false, abstract: false, final false
static inline void PlayHelper(::UnityEngine::AudioSource*  source, uint64_t  delay) ;

/// @brief Method PlayHelper_Injected, addr 0x18223ace0, size 0x10, virtual false, abstract: false, final false
static inline void PlayHelper_Injected(::System::IntPtr  source, uint64_t  delay) ;

/// @brief Method PlayOneShot, addr 0x18223ae00, size 0xd0, virtual false, abstract: false, final false
inline void PlayOneShot(::UnityEngine::AudioClip*  clip) ;

/// @brief Method PlayOneShot, addr 0x18223aed0, size 0xe0, virtual false, abstract: false, final false
inline void PlayOneShot(::UnityEngine::AudioClip*  clip, float_t  volumeScale) ;

/// @brief Method PlayOneShotHelper, addr 0x18223ad60, size 0xa0, virtual false, abstract: false, final false
static inline void PlayOneShotHelper(::UnityEngine::AudioSource*  source, ::UnityEngine::AudioClip*  clip, float_t  volumeScale) ;

/// @brief Method PlayOneShotHelper_Injected, addr 0x18223ad50, size 0x10, virtual false, abstract: false, final false
static inline void PlayOneShotHelper_Injected(::System::IntPtr  source, ::System::IntPtr  clip, float_t  volumeScale) ;

/// @brief Method PlayScheduled, addr 0x18223afb0, size 0x40, virtual false, abstract: false, final false
inline void PlayScheduled(double_t  time) ;

/// @brief Method Play_Injected, addr 0x18223aff0, size 0x10, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, double_t  delay) ;

/// @brief Method SetPitch, addr 0x18223b0a0, size 0x60, virtual false, abstract: false, final false
static inline void SetPitch(::UnityEngine::AudioSource*  source, float_t  pitch) ;

/// @brief Method SetPitch_Injected, addr 0x18223b090, size 0x10, virtual false, abstract: false, final false
static inline void SetPitch_Injected(::System::IntPtr  source, float_t  pitch) ;

/// @brief Method SetScheduledEndTime, addr 0x18223b110, size 0x40, virtual false, abstract: false, final false
inline void SetScheduledEndTime(double_t  time) ;

/// @brief Method SetScheduledEndTime_Injected, addr 0x18223b100, size 0x10, virtual false, abstract: false, final false
static inline void SetScheduledEndTime_Injected(::System::IntPtr  _unity_self, double_t  time) ;

/// @brief Method SetScheduledStartTime, addr 0x18223b160, size 0x40, virtual false, abstract: false, final false
inline void SetScheduledStartTime(double_t  time) ;

/// @brief Method SetScheduledStartTime_Injected, addr 0x18223b150, size 0x10, virtual false, abstract: false, final false
static inline void SetScheduledStartTime_Injected(::System::IntPtr  _unity_self, double_t  time) ;

/// @brief Method Stop, addr 0x18223b1b0, size 0x30, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0x18223b1e0, size 0x30, virtual false, abstract: false, final false
inline void Stop(bool  stopOneShots) ;

/// @brief Method Stop_Injected, addr 0x18223b1a0, size 0x10, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self, bool  stopOneShots) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_clip, addr 0x18223b210, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_clip() ;

/// @brief Method get_generatorObject, addr 0x18223b280, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_generatorObject() ;

/// @brief Method get_generatorObject_Injected, addr 0x18223b270, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_generatorObject_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isPlaying, addr 0x18223b2d0, size 0x30, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0x18223b2c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_outputAudioMixerGroup, addr 0x18223b310, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup() ;

/// @brief Method get_outputAudioMixerGroup_Injected, addr 0x18223b300, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time, addr 0x18223b3a0, size 0x30, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_timeSamples, addr 0x18223b360, size 0x30, virtual false, abstract: false, final false
inline int32_t get_timeSamples() ;

/// @brief Method get_timeSamples_Injected, addr 0x18223b350, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_timeSamples_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time_Injected, addr 0x18223b390, size 0x10, virtual false, abstract: false, final false
static inline float_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_volume, addr 0x18223b3e0, size 0x30, virtual false, abstract: false, final false
inline float_t get_volume() ;

/// @brief Method get_volume_Injected, addr 0x18223b3d0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_volume_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_clip, addr 0x18223b410, size 0x50, virtual false, abstract: false, final false
inline void set_clip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_dopplerLevel, addr 0x18223b470, size 0x40, virtual false, abstract: false, final false
inline void set_dopplerLevel(float_t  value) ;

/// @brief Method set_dopplerLevel_Injected, addr 0x18223b460, size 0x10, virtual false, abstract: false, final false
static inline void set_dopplerLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_generatorObject, addr 0x18223b410, size 0x50, virtual false, abstract: false, final false
inline void set_generatorObject(::UnityEngine::Object*  value) ;

/// @brief Method set_generatorObject_Injected, addr 0x18223b4b0, size 0x10, virtual false, abstract: false, final false
static inline void set_generatorObject_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_loop, addr 0x18223b4d0, size 0x30, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_loop_Injected, addr 0x18223b4c0, size 0x10, virtual false, abstract: false, final false
static inline void set_loop_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_mute, addr 0x18223b510, size 0x30, virtual false, abstract: false, final false
inline void set_mute(bool  value) ;

/// @brief Method set_mute_Injected, addr 0x18223b500, size 0x10, virtual false, abstract: false, final false
static inline void set_mute_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_outputAudioMixerGroup, addr 0x18223b550, size 0x50, virtual false, abstract: false, final false
inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup*  value) ;

/// @brief Method set_outputAudioMixerGroup_Injected, addr 0x18223b540, size 0x10, virtual false, abstract: false, final false
static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_panStereo, addr 0x18223b5b0, size 0x40, virtual false, abstract: false, final false
inline void set_panStereo(float_t  value) ;

/// @brief Method set_panStereo_Injected, addr 0x18223b5a0, size 0x10, virtual false, abstract: false, final false
static inline void set_panStereo_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_pitch, addr 0x18223b0a0, size 0x60, virtual false, abstract: false, final false
inline void set_pitch(float_t  value) ;

/// @brief Method set_playOnAwake, addr 0x18223b600, size 0x30, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// @brief Method set_playOnAwake_Injected, addr 0x18223b5f0, size 0x10, virtual false, abstract: false, final false
static inline void set_playOnAwake_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_priority, addr 0x18223b640, size 0x30, virtual false, abstract: false, final false
inline void set_priority(int32_t  value) ;

/// @brief Method set_priority_Injected, addr 0x18223b630, size 0x10, virtual false, abstract: false, final false
static inline void set_priority_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_spatialBlend, addr 0x18223b680, size 0x40, virtual false, abstract: false, final false
inline void set_spatialBlend(float_t  value) ;

/// @brief Method set_spatialBlend_Injected, addr 0x18223b670, size 0x10, virtual false, abstract: false, final false
static inline void set_spatialBlend_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_spread, addr 0x18223b6d0, size 0x40, virtual false, abstract: false, final false
inline void set_spread(float_t  value) ;

/// @brief Method set_spread_Injected, addr 0x18223b6c0, size 0x10, virtual false, abstract: false, final false
static inline void set_spread_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_time, addr 0x18223b760, size 0x40, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_timeSamples, addr 0x18223b720, size 0x30, virtual false, abstract: false, final false
inline void set_timeSamples(int32_t  value) ;

/// @brief Method set_timeSamples_Injected, addr 0x18223b710, size 0x10, virtual false, abstract: false, final false
static inline void set_timeSamples_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_time_Injected, addr 0x18223b750, size 0x10, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_velocityUpdateMode, addr 0x18223b7b0, size 0x30, virtual false, abstract: false, final false
inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_velocityUpdateMode_Injected, addr 0x18223b7a0, size 0x10, virtual false, abstract: false, final false
static inline void set_velocityUpdateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_volume, addr 0x18223b7f0, size 0x50, virtual false, abstract: false, final false
inline void set_volume(float_t  value) ;

/// @brief Method set_volume_Injected, addr 0x18223b7e0, size 0x10, virtual false, abstract: false, final false
static inline void set_volume_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSource(AudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSource(AudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioSource) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
