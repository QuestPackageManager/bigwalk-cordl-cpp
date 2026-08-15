#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/BaseVoicePlayback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVoicePlayback)
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
namespace Dissonance::Audio::Playback {
class IRemoteChannelProvider;
}
namespace Dissonance::Audio::Playback {
class IVoicePlaybackInternal;
}
namespace Dissonance::Audio::Playback {
class IVoicePlayback;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
namespace Dissonance::Audio::Playback {
class SpeechSessionStream;
}
namespace Dissonance::Audio::Playback {
struct SpeechSession;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class BaseVoicePlayback;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::BaseVoicePlayback*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::BaseVoicePlayback*, "Dissonance.Audio.Playback", "BaseVoicePlayback");
// Dependencies Dissonance.Audio.Playback.FrameFormat, Dissonance.CodecSettings, UnityEngine.MonoBehaviour
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.BaseVoicePlayback
class CORDL_TYPE BaseVoicePlayback : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AllowPositionalPlayback, put=set_AllowPositionalPlayback)) bool  AllowPositionalPlayback;

 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

 __declspec(property(get=Dissonance_Audio_Playback_IVoicePlaybackInternal_get_CodecSettings, put=Dissonance_Audio_Playback_IVoicePlaybackInternal_set_CodecSettings)) ::Dissonance::CodecSettings  Dissonance_Audio_Playback_IVoicePlaybackInternal_CodecSettings;

 __declspec(property(get=Dissonance_Audio_Playback_IVoicePlayback_get_Priority)) ::Dissonance::ChannelPriority  Dissonance_Audio_Playback_IVoicePlayback_Priority;

 __declspec(property(get=Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume)) float_t  Dissonance_Audio_Playback_IVolumeProvider_TargetVolume;

 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Jitter)) float_t  Jitter;

 __declspec(property(get=get_LatestPlaybackOptions)) ::System::Nullable_1<::Dissonance::Audio::Playback::PlaybackOptions>  LatestPlaybackOptions;

 __declspec(property(get=get_PacketLoss)) ::System::Nullable_1<float_t>  PacketLoss;

 __declspec(property(get=get_PlaybackVolume, put=set_PlaybackVolume)) float_t  PlaybackVolume;

 __declspec(property(get=get_PlayerName, put=set_PlayerName)) ::StringW  PlayerName;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field <AllowPositionalPlayback>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowPositionalPlayback_k__BackingField, put=__cordl_internal_set__AllowPositionalPlayback_k__BackingField)) bool  _AllowPositionalPlayback_k__BackingField;

/// @brief Field <IsMuted>k__BackingField, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMuted_k__BackingField, put=__cordl_internal_set__IsMuted_k__BackingField)) bool  _IsMuted_k__BackingField;

/// @brief Field <PlaybackVolume>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlaybackVolume_k__BackingField, put=__cordl_internal_set__PlaybackVolume_k__BackingField)) float_t  _PlaybackVolume_k__BackingField;

/// @brief Field _codecSettings, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__codecSettings, put=__cordl_internal_set__codecSettings)) ::Dissonance::CodecSettings  _codecSettings;

/// @brief Field _frameFormat, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get__frameFormat, put=__cordl_internal_set__frameFormat)) ::Dissonance::Audio::Playback::FrameFormat  _frameFormat;

/// @brief Field _priorityManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__priorityManager, put=__cordl_internal_set__priorityManager)) ::Dissonance::Audio::Playback::IPriorityManager*  _priorityManager;

/// @brief Field _sessions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessions, put=__cordl_internal_set__sessions)) ::Dissonance::Audio::Playback::SpeechSessionStream*  _sessions;

/// @brief Field _transformCache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformCache, put=__cordl_internal_set__transformCache)) ::UnityW<::UnityEngine::Transform>  _transformCache;

/// @brief Field _volumeProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeProvider, put=__cordl_internal_set__volumeProvider)) ::Dissonance::Audio::Playback::IVolumeProvider*  _volumeProvider;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr operator  ::Dissonance::Audio::Playback::IVoicePlayback*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVoicePlaybackInternal"
constexpr operator  ::Dissonance::Audio::Playback::IVoicePlaybackInternal*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr operator  ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.ForceReset, addr 0x1805d8060, size 0x100, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_ForceReset() ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.ReceiveAudioPacket, addr 0x1805d8160, size 0x1f0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_ReceiveAudioPacket(::Dissonance::Networking::VoicePacket  packet) ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.Reset, addr 0x1805d8350, size 0x130, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_Reset() ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.SetTransform, addr 0x1805d8480, size 0x40, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_SetTransform(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.StartPlayback, addr 0x1805d84c0, size 0x60, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_StartPlayback() ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.StopPlayback, addr 0x1805d8520, size 0xa0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_StopPlayback() ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.get_CodecSettings, addr 0x1805d85c0, size 0x20, virtual true, abstract: false, final true
inline ::Dissonance::CodecSettings Dissonance_Audio_Playback_IVoicePlaybackInternal_get_CodecSettings() ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlaybackInternal.set_CodecSettings, addr 0x1805d85e0, size 0xe0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Playback_IVoicePlaybackInternal_set_CodecSettings(::Dissonance::CodecSettings  value) ;

/// @brief Method Dissonance.Audio.Playback.IVoicePlayback.get_Priority, addr 0x1805d86c0, size 0x60, virtual true, abstract: false, final true
inline ::Dissonance::ChannelPriority Dissonance_Audio_Playback_IVoicePlayback_get_Priority() ;

/// @brief Method Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume, addr 0x1805d8720, size 0xc0, virtual true, abstract: false, final true
inline float_t Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume() ;

/// @brief Method GetRemoteChannels, addr 0x1805d87e0, size 0x90, virtual true, abstract: false, final true
inline void GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output) ;

static inline ::Dissonance::Audio::Playback::BaseVoicePlayback* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1805d8870, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTransform, addr 0x1805d88b0, size 0xa0, virtual true, abstract: false, final false
inline void SetTransform(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Setup, addr 0x1805d8950, size 0x40, virtual true, abstract: false, final false
inline void Setup(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume) ;

/// @brief Method Start, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryDequeueSession, addr 0x1805d8990, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> TryDequeueSession(::System::Nullable_1<int32_t>  outputRate) ;

/// @brief Method TryGetActiveSession, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> TryGetActiveSession() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__AllowPositionalPlayback_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowPositionalPlayback_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMuted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMuted_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__PlaybackVolume_k__BackingField() const;

constexpr float_t& __cordl_internal_get__PlaybackVolume_k__BackingField() ;

constexpr ::Dissonance::CodecSettings const& __cordl_internal_get__codecSettings() const;

constexpr ::Dissonance::CodecSettings& __cordl_internal_get__codecSettings() ;

constexpr ::Dissonance::Audio::Playback::FrameFormat const& __cordl_internal_get__frameFormat() const;

constexpr ::Dissonance::Audio::Playback::FrameFormat& __cordl_internal_get__frameFormat() ;

constexpr ::Dissonance::Audio::Playback::IPriorityManager* const& __cordl_internal_get__priorityManager() const;

constexpr ::Dissonance::Audio::Playback::IPriorityManager*& __cordl_internal_get__priorityManager() ;

constexpr ::Dissonance::Audio::Playback::SpeechSessionStream* const& __cordl_internal_get__sessions() const;

constexpr ::Dissonance::Audio::Playback::SpeechSessionStream*& __cordl_internal_get__sessions() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transformCache() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transformCache() ;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& __cordl_internal_get__volumeProvider() const;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& __cordl_internal_get__volumeProvider() ;

constexpr void __cordl_internal_set__AllowPositionalPlayback_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsMuted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PlaybackVolume_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__codecSettings(::Dissonance::CodecSettings  value) ;

constexpr void __cordl_internal_set__frameFormat(::Dissonance::Audio::Playback::FrameFormat  value) ;

constexpr void __cordl_internal_set__priorityManager(::Dissonance::Audio::Playback::IPriorityManager*  value) ;

constexpr void __cordl_internal_set__sessions(::Dissonance::Audio::Playback::SpeechSessionStream*  value) ;

constexpr void __cordl_internal_set__transformCache(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__volumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value) ;

/// @brief Method .ctor, addr 0x1805d89e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllowPositionalPlayback, addr 0x180347a60, size 0xe0, virtual true, abstract: false, final true
inline bool get_AllowPositionalPlayback() ;

/// @brief Method get_Amplitude, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_IsActive, addr 0x1805d8aa0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsActive() ;

/// @brief Method get_IsMuted, addr 0x1805d8ab0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsMuted() ;

/// @brief Method get_IsSpeaking, addr 0x1805d8ac0, size 0x30, virtual true, abstract: false, final true
inline bool get_IsSpeaking() ;

/// @brief Method get_Jitter, addr 0x1805d8af0, size 0x30, virtual true, abstract: false, final true
inline float_t get_Jitter() ;

/// @brief Method get_LatestPlaybackOptions, addr 0x1805d8b20, size 0x130, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::Audio::Playback::PlaybackOptions> get_LatestPlaybackOptions() ;

/// @brief Method get_PacketLoss, addr 0x1805d8c50, size 0x90, virtual true, abstract: false, final true
inline ::System::Nullable_1<float_t> get_PacketLoss() ;

/// @brief Method get_PlaybackVolume, addr 0x180474bd0, size 0x10, virtual true, abstract: false, final true
inline float_t get_PlaybackVolume() ;

/// @brief Method get_PlayerName, addr 0x1805d8ce0, size 0x20, virtual true, abstract: false, final true
inline ::StringW get_PlayerName() ;

/// @brief Method get_Transform, addr 0x1805d8d00, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr ::Dissonance::Audio::Playback::IVoicePlayback* i___Dissonance__Audio__Playback__IVoicePlayback() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IVoicePlaybackInternal"
constexpr ::Dissonance::Audio::Playback::IVoicePlaybackInternal* i___Dissonance__Audio__Playback__IVoicePlaybackInternal() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* i___Dissonance__Audio__Playback__IVolumeProvider() noexcept;

/// @brief Method set_AllowPositionalPlayback, addr 0x180452bb0, size 0x10, virtual true, abstract: false, final true
inline void set_AllowPositionalPlayback(bool  value) ;

/// @brief Method set_IsMuted, addr 0x1805d8d40, size 0x10, virtual true, abstract: false, final true
inline void set_IsMuted(bool  value) ;

/// @brief Method set_PlaybackVolume, addr 0x180474c90, size 0x10, virtual true, abstract: false, final true
inline void set_PlaybackVolume(float_t  value) ;

/// @brief Method set_PlayerName, addr 0x1805d8d50, size 0x90, virtual true, abstract: false, final true
inline void set_PlayerName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVoicePlayback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVoicePlayback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVoicePlayback(BaseVoicePlayback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVoicePlayback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVoicePlayback(BaseVoicePlayback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16960};

/// @brief Field _priorityManager, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IPriorityManager*  ____priorityManager;

/// @brief Field _volumeProvider, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IVolumeProvider*  ____volumeProvider;

/// @brief Field _sessions, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::SpeechSessionStream*  ____sessions;

/// @brief Field _frameFormat, offset: 0x38, size: 0x18, def value: None
 ::Dissonance::Audio::Playback::FrameFormat  ____frameFormat;

/// @brief Field _codecSettings, offset: 0x50, size: 0xc, def value: None
 ::Dissonance::CodecSettings  ____codecSettings;

/// @brief Field _transformCache, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transformCache;

/// @brief Field <AllowPositionalPlayback>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____AllowPositionalPlayback_k__BackingField;

/// @brief Field <IsMuted>k__BackingField, offset: 0x69, size: 0x1, def value: None
 bool  ____IsMuted_k__BackingField;

/// @brief Field <PlaybackVolume>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 float_t  ____PlaybackVolume_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____priorityManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____volumeProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____sessions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____frameFormat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____codecSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____transformCache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____AllowPositionalPlayback_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____IsMuted_k__BackingField) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BaseVoicePlayback, ____PlaybackVolume_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::BaseVoicePlayback) == 0x70, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
