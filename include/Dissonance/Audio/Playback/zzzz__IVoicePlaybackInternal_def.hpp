#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IVoicePlaybackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IVoicePlaybackInternal)
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
namespace Dissonance::Audio::Playback {
class IRemoteChannelProvider;
}
namespace Dissonance::Audio::Playback {
class IVoicePlayback;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
struct CodecSettings;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IVoicePlaybackInternal;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IVoicePlaybackInternal*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IVoicePlaybackInternal*, "Dissonance.Audio.Playback", "IVoicePlaybackInternal");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IVoicePlaybackInternal
class CORDL_TYPE IVoicePlaybackInternal {
public:
// Declarations
 __declspec(property(get=get_AllowPositionalPlayback, put=set_AllowPositionalPlayback)) bool  AllowPositionalPlayback;

 __declspec(property(get=get_CodecSettings, put=set_CodecSettings)) ::Dissonance::CodecSettings  CodecSettings;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_PlaybackVolume, put=set_PlaybackVolume)) float_t  PlaybackVolume;

 __declspec(property(get=get_PlayerName, put=set_PlayerName)) ::StringW  PlayerName;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr operator  ::Dissonance::Audio::Playback::IVoicePlayback*() noexcept;

/// @brief Method ForceReset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ForceReset() ;

/// @brief Method ReceiveAudioPacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReceiveAudioPacket(::Dissonance::Networking::VoicePacket  packet) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetTransform, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetTransform(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Setup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Setup(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume) ;

/// @brief Method StartPlayback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartPlayback() ;

/// @brief Method StopPlayback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopPlayback() ;

/// @brief Method get_AllowPositionalPlayback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_AllowPositionalPlayback() ;

/// @brief Method get_CodecSettings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::CodecSettings get_CodecSettings() ;

/// @brief Method get_IsMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_PlaybackVolume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_PlaybackVolume() ;

/// @brief Method get_PlayerName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_PlayerName() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr ::Dissonance::Audio::Playback::IVoicePlayback* i___Dissonance__Audio__Playback__IVoicePlayback() noexcept;

/// @brief Method set_AllowPositionalPlayback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_AllowPositionalPlayback(bool  value) ;

/// @brief Method set_CodecSettings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_CodecSettings(::Dissonance::CodecSettings  value) ;

/// @brief Method set_IsMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_IsMuted(bool  value) ;

/// @brief Method set_PlaybackVolume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_PlaybackVolume(float_t  value) ;

/// @brief Method set_PlayerName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_PlayerName(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoicePlaybackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoicePlaybackInternal(IVoicePlaybackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
