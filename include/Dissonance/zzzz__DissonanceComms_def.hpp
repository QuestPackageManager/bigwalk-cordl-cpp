#pragma once
// IWYU pragma private; include "Dissonance/DissonanceComms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DissonanceComms)
namespace Dissonance::Audio::Capture {
class CapturePipelineManager;
}
namespace Dissonance::Audio::Capture {
class IChannelPriorityProvider;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneCapture;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Audio::Playback {
class PriorityManager;
}
namespace Dissonance::Audio::Playback {
class VoicePlayback;
}
namespace Dissonance::Audio {
class OpenChannelVolumeDuck;
}
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance::Networking {
struct RoomEvent;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class CodecSettingsLoader;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class DissonanceComms__CoResumePlayback_d__99;
}
namespace Dissonance {
class IAccessTokenCollection;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PlaybackPool;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class PlayerCollection;
}
namespace Dissonance {
class PlayerTrackerManager;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class Rooms;
}
namespace Dissonance {
class SemanticVersion;
}
namespace Dissonance {
class TextChat;
}
namespace Dissonance {
class TokenSet;
}
namespace Dissonance {
class VoicePlayerState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Dissonance {
class DissonanceComms;
}
namespace Dissonance {
class DissonanceComms__CoResumePlayback_d__99;
}
// Write type traits
MARK_REF_T(::Dissonance::DissonanceComms*);
MARK_REF_T(::Dissonance::DissonanceComms__CoResumePlayback_d__99*);
DEFINE_IL2CPP_CLASS(::Dissonance::DissonanceComms*, "Dissonance", "DissonanceComms");
DEFINE_IL2CPP_CLASS(::Dissonance::DissonanceComms__CoResumePlayback_d__99*, "Dissonance", "DissonanceComms/<CoResumePlayback>d__99");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.DissonanceComms/<CoResumePlayback>d__99
class CORDL_TYPE DissonanceComms__CoResumePlayback_d__99 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Dissonance::DissonanceComms>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1805d2100, size 0x190, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Dissonance::DissonanceComms__CoResumePlayback_d__99* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Dissonance::DissonanceComms> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Dissonance::DissonanceComms>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Dissonance::DissonanceComms>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DissonanceComms__CoResumePlayback_d__99() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DissonanceComms__CoResumePlayback_d__99", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DissonanceComms__CoResumePlayback_d__99(DissonanceComms__CoResumePlayback_d__99 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DissonanceComms__CoResumePlayback_d__99", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DissonanceComms__CoResumePlayback_d__99(DissonanceComms__CoResumePlayback_d__99 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16798};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Dissonance::DissonanceComms>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::DissonanceComms__CoResumePlayback_d__99, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms__CoResumePlayback_d__99, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms__CoResumePlayback_d__99, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms__CoResumePlayback_d__99, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::DissonanceComms__CoResumePlayback_d__99) == 0x30, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies Dissonance.ChannelPriority, UnityEngine.MonoBehaviour
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.DissonanceComms
class CORDL_TYPE DissonanceComms : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CoResumePlayback_d__99 = ::Dissonance::DissonanceComms__CoResumePlayback_d__99;

 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=Dissonance_Audio_Capture_IChannelPriorityProvider_get_DefaultChannelPriority, put=Dissonance_Audio_Capture_IChannelPriorityProvider_set_DefaultChannelPriority)) ::Dissonance::ChannelPriority  Dissonance_Audio_Capture_IChannelPriorityProvider_DefaultChannelPriority;

 __declspec(property(get=Dissonance_Audio_Playback_IPriorityManager_get_TopPriority)) ::Dissonance::ChannelPriority  Dissonance_Audio_Playback_IPriorityManager_TopPriority;

 __declspec(property(get=Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume)) float_t  Dissonance_Audio_Playback_IVolumeProvider_TargetVolume;

 __declspec(property(get=get_IsDeafened, put=set_IsDeafened)) bool  IsDeafened;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsNetworkInitialized)) bool  IsNetworkInitialized;

 __declspec(property(get=get_IsStarted)) bool  IsStarted;

 __declspec(property(get=get_LocalPlayerName, put=set_LocalPlayerName)) ::StringW  LocalPlayerName;

/// @brief Field LocalPlayerNameChanged, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalPlayerNameChanged, put=__cordl_internal_set_LocalPlayerNameChanged)) ::System::Action_1<::StringW>*  LocalPlayerNameChanged;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_MicrophoneCapture)) ::Dissonance::Audio::Capture::IMicrophoneCapture*  MicrophoneCapture;

 __declspec(property(get=get_MicrophoneName, put=set_MicrophoneName)) ::StringW  MicrophoneName;

 __declspec(property(get=get_MuteAllRemoteVoices, put=set_MuteAllRemoteVoices)) bool  MuteAllRemoteVoices;

/// @brief Field OnPlayerEnteredRoom, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerEnteredRoom, put=__cordl_internal_set_OnPlayerEnteredRoom)) ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  OnPlayerEnteredRoom;

/// @brief Field OnPlayerExitedRoom, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerExitedRoom, put=__cordl_internal_set_OnPlayerExitedRoom)) ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  OnPlayerExitedRoom;

/// @brief Field OnPlayerJoinedSession, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerJoinedSession, put=__cordl_internal_set_OnPlayerJoinedSession)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnPlayerJoinedSession;

/// @brief Field OnPlayerLeftSession, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerLeftSession, put=__cordl_internal_set_OnPlayerLeftSession)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnPlayerLeftSession;

/// @brief Field OnPlayerStartedSpeaking, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerStartedSpeaking, put=__cordl_internal_set_OnPlayerStartedSpeaking)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnPlayerStartedSpeaking;

/// @brief Field OnPlayerStoppedSpeaking, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerStoppedSpeaking, put=__cordl_internal_set_OnPlayerStoppedSpeaking)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnPlayerStoppedSpeaking;

/// @brief Field OnStart, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStart, put=__cordl_internal_set_OnStart)) ::System::Action*  OnStart;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_PlaybackPrefab, put=set_PlaybackPrefab)) ::UnityW<::UnityEngine::GameObject>  PlaybackPrefab;

 __declspec(property(get=get_PlayerChannels)) ::Dissonance::PlayerChannels*  PlayerChannels;

 __declspec(property(get=get_PlayerPriority, put=set_PlayerPriority)) ::Dissonance::ChannelPriority  PlayerPriority;

 __declspec(property(get=get_Players)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  Players;

 __declspec(property(get=get_RemoteVoiceVolume, put=set_RemoteVoiceVolume)) float_t  RemoteVoiceVolume;

 __declspec(property(get=get_RoomChannels)) ::Dissonance::RoomChannels*  RoomChannels;

 __declspec(property(get=get_Rooms)) ::Dissonance::Rooms*  Rooms;

 __declspec(property(get=get_Text)) ::Dissonance::TextChat*  Text;

 __declspec(property(get=get_Tokens)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  Tokens;

 __declspec(property(get=get_TopPrioritySpeaker)) ::Dissonance::ChannelPriority  TopPrioritySpeaker;

/// @brief Field Version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Version, put=setStaticF_Version)) ::Dissonance::SemanticVersion*  Version;

/// @brief Field _autoChannelDuck, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoChannelDuck, put=__cordl_internal_set__autoChannelDuck)) ::Dissonance::Audio::OpenChannelVolumeDuck*  _autoChannelDuck;

/// @brief Field _capture, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__capture, put=__cordl_internal_set__capture)) ::Dissonance::Audio::Capture::CapturePipelineManager*  _capture;

/// @brief Field _codecSettingsLoader, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__codecSettingsLoader, put=__cordl_internal_set__codecSettingsLoader)) ::Dissonance::CodecSettingsLoader*  _codecSettingsLoader;

/// @brief Field _isDeafened, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDeafened, put=__cordl_internal_set__isDeafened)) bool  _isDeafened;

/// @brief Field _isMuted, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMuted, put=__cordl_internal_set__isMuted)) bool  _isMuted;

/// @brief Field _lastPrefabError, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastPrefabError, put=__cordl_internal_set__lastPrefabError)) ::StringW  _lastPrefabError;

/// @brief Field _localPlayerName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPlayerName, put=__cordl_internal_set__localPlayerName)) ::StringW  _localPlayerName;

/// @brief Field _micName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__micName, put=__cordl_internal_set__micName)) ::StringW  _micName;

/// @brief Field _muteAllRemoteVoices, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__muteAllRemoteVoices, put=__cordl_internal_set__muteAllRemoteVoices)) bool  _muteAllRemoteVoices;

/// @brief Field _net, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__net, put=__cordl_internal_set__net)) ::Dissonance::Networking::ICommsNetwork*  _net;

/// @brief Field _oneMinusBaseRemoteVoiceVolume, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__oneMinusBaseRemoteVoiceVolume, put=__cordl_internal_set__oneMinusBaseRemoteVoiceVolume)) float_t  _oneMinusBaseRemoteVoiceVolume;

/// @brief Field _playbackPool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackPool, put=__cordl_internal_set__playbackPool)) ::Dissonance::PlaybackPool*  _playbackPool;

/// @brief Field _playbackPrefab, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackPrefab, put=__cordl_internal_set__playbackPrefab)) ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  _playbackPrefab;

/// @brief Field _playbackPrefab2, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackPrefab2, put=__cordl_internal_set__playbackPrefab2)) ::UnityW<::UnityEngine::GameObject>  _playbackPrefab2;

/// @brief Field _playbackPriorityManager, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackPriorityManager, put=__cordl_internal_set__playbackPriorityManager)) ::Dissonance::Audio::Playback::PriorityManager*  _playbackPriorityManager;

/// @brief Field _playerChannels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerChannels, put=__cordl_internal_set__playerChannels)) ::Dissonance::PlayerChannels*  _playerChannels;

/// @brief Field _playerPriority, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerPriority, put=__cordl_internal_set__playerPriority)) ::Dissonance::ChannelPriority  _playerPriority;

/// @brief Field _playerTrackers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerTrackers, put=__cordl_internal_set__playerTrackers)) ::Dissonance::PlayerTrackerManager*  _playerTrackers;

/// @brief Field _players, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::Dissonance::PlayerCollection*  _players;

/// @brief Field _resumeCo, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__resumeCo, put=__cordl_internal_set__resumeCo)) ::UnityEngine::Coroutine*  _resumeCo;

/// @brief Field _roomChannels, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomChannels, put=__cordl_internal_set__roomChannels)) ::Dissonance::RoomChannels*  _roomChannels;

/// @brief Field _rooms, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::Dissonance::Rooms*  _rooms;

/// @brief Field _started, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _text, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::Dissonance::TextChat*  _text;

/// @brief Field _tokens, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__tokens, put=__cordl_internal_set__tokens)) ::Dissonance::TokenSet*  _tokens;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IChannelPriorityProvider"
constexpr operator  ::Dissonance::Audio::Capture::IChannelPriorityProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr operator  ::Dissonance::Audio::Playback::IPriorityManager*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr operator  ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::IAccessTokenCollection"
constexpr operator  ::Dissonance::IAccessTokenCollection*() noexcept;

/// @brief Method AddToken, addr 0x1805c6c70, size 0x40, virtual true, abstract: false, final true
inline bool AddToken(::StringW  token) ;

/// @brief Method CoResumePlayback, addr 0x1805c6cb0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoResumePlayback() ;

/// @brief Method ContainsToken, addr 0x1805c6d00, size 0x90, virtual true, abstract: false, final true
inline bool ContainsToken(::StringW  token) ;

/// @brief Method Dissonance.Audio.Capture.IChannelPriorityProvider.get_DefaultChannelPriority, addr 0x1803b2c60, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::ChannelPriority Dissonance_Audio_Capture_IChannelPriorityProvider_get_DefaultChannelPriority() ;

/// @brief Method Dissonance.Audio.Capture.IChannelPriorityProvider.set_DefaultChannelPriority, addr 0x18051e9d0, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IChannelPriorityProvider_set_DefaultChannelPriority(::Dissonance::ChannelPriority  value) ;

/// @brief Method Dissonance.Audio.Playback.IPriorityManager.get_TopPriority, addr 0x1805c6d90, size 0x20, virtual true, abstract: false, final true
inline ::Dissonance::ChannelPriority Dissonance_Audio_Playback_IPriorityManager_get_TopPriority() ;

/// @brief Method Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume, addr 0x1805c6db0, size 0x70, virtual true, abstract: false, final true
inline float_t Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume() ;

/// @brief Method FindPlayer, addr 0x1805c6e20, size 0x70, virtual false, abstract: false, final false
inline ::Dissonance::VoicePlayerState* FindPlayer(::StringW  playerId) ;

/// @brief Method GetMicrophoneDevices, addr 0x1805c6e90, size 0x130, virtual false, abstract: false, final false
inline void GetMicrophoneDevices(::System::Collections::Generic::List_1<::StringW>*  output) ;

/// @brief Method GetOrAddMicrophone, addr 0x1805c6fc0, size 0x50, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::IMicrophoneCapture* GetOrAddMicrophone() ;

/// @brief Method HasAnyToken, addr 0x1805c7010, size 0x40, virtual false, abstract: false, final false
inline bool HasAnyToken(::Dissonance::TokenSet*  tokens) ;

/// @brief Method Net_PlayerJoined, addr 0x1805c7050, size 0x3b0, virtual false, abstract: false, final false
inline void Net_PlayerJoined(::StringW  playerId, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method Net_PlayerLeft, addr 0x1805c7400, size 0x330, virtual false, abstract: false, final false
inline void Net_PlayerLeft(::StringW  playerId) ;

/// @brief Method Net_PlayerRoomEvent, addr 0x1805c7730, size 0x1a0, virtual false, abstract: false, final false
inline void Net_PlayerRoomEvent(::Dissonance::Networking::RoomEvent  evt) ;

/// @brief Method Net_PlayerStartedSpeaking, addr 0x1805c78d0, size 0x180, virtual false, abstract: false, final false
inline void Net_PlayerStartedSpeaking(::StringW  player) ;

/// @brief Method Net_PlayerStoppedSpeaking, addr 0x1805c7a50, size 0x170, virtual false, abstract: false, final false
inline void Net_PlayerStoppedSpeaking(::StringW  player) ;

/// @brief Method Net_VoicePacketReceived, addr 0x1805c7bc0, size 0x1f0, virtual false, abstract: false, final false
inline void Net_VoicePacketReceived(::Dissonance::Networking::VoicePacket  packet) ;

static inline ::Dissonance::DissonanceComms* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x1805c7db0, size 0x1a0, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  paused) ;

/// @brief Method OnDestroy, addr 0x1805c7f50, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1805c7f80, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1805c7fb0, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveToken, addr 0x1805c7ff0, size 0x40, virtual true, abstract: false, final true
inline bool RemoveToken(::StringW  token) ;

/// @brief Method ResetMicrophoneCapture, addr 0x1805c8030, size 0x20, virtual false, abstract: false, final false
inline void ResetMicrophoneCapture() ;

/// @brief Method Start, addr 0x1805c8050, size 0xb90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopTracking, addr 0x1805c8be0, size 0x110, virtual false, abstract: false, final false
inline void StopTracking(::Dissonance::IDissonancePlayer*  player) ;

/// @brief Method SubcribeToRecordedAudio, addr 0x1805c8cf0, size 0x30, virtual false, abstract: false, final false
inline void SubcribeToRecordedAudio(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method SubcribeToVoiceActivation, addr 0x1805c8d20, size 0x30, virtual false, abstract: false, final false
inline void SubcribeToVoiceActivation(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method SubscribeToRecordedAudio, addr 0x1805c8cf0, size 0x30, virtual false, abstract: false, final false
inline void SubscribeToRecordedAudio(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method TestDependencies, addr 0x1805c8d50, size 0x20, virtual false, abstract: false, final false
static inline void TestDependencies() ;

/// @brief Method TrackPlayerPosition, addr 0x1805c8d70, size 0x130, virtual false, abstract: false, final false
inline void TrackPlayerPosition(::Dissonance::IDissonancePlayer*  player) ;

/// @brief Method UnsubscribeFromRecordedAudio, addr 0x1805c8ea0, size 0x30, virtual false, abstract: false, final false
inline void UnsubscribeFromRecordedAudio(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method UnsubscribeFromVoiceActivation, addr 0x1805c8ed0, size 0x30, virtual false, abstract: false, final false
inline void UnsubscribeFromVoiceActivation(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method Update, addr 0x1805c8f00, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_LocalPlayerNameChanged() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_LocalPlayerNameChanged() ;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& __cordl_internal_get_OnPlayerEnteredRoom() const;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& __cordl_internal_get_OnPlayerEnteredRoom() ;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& __cordl_internal_get_OnPlayerExitedRoom() const;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& __cordl_internal_get_OnPlayerExitedRoom() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnPlayerJoinedSession() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnPlayerJoinedSession() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnPlayerLeftSession() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnPlayerLeftSession() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnPlayerStartedSpeaking() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnPlayerStartedSpeaking() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnPlayerStoppedSpeaking() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnPlayerStoppedSpeaking() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStart() const;

constexpr ::System::Action*& __cordl_internal_get_OnStart() ;

constexpr ::Dissonance::Audio::OpenChannelVolumeDuck* const& __cordl_internal_get__autoChannelDuck() const;

constexpr ::Dissonance::Audio::OpenChannelVolumeDuck*& __cordl_internal_get__autoChannelDuck() ;

constexpr ::Dissonance::Audio::Capture::CapturePipelineManager* const& __cordl_internal_get__capture() const;

constexpr ::Dissonance::Audio::Capture::CapturePipelineManager*& __cordl_internal_get__capture() ;

constexpr ::Dissonance::CodecSettingsLoader* const& __cordl_internal_get__codecSettingsLoader() const;

constexpr ::Dissonance::CodecSettingsLoader*& __cordl_internal_get__codecSettingsLoader() ;

constexpr bool const& __cordl_internal_get__isDeafened() const;

constexpr bool& __cordl_internal_get__isDeafened() ;

constexpr bool const& __cordl_internal_get__isMuted() const;

constexpr bool& __cordl_internal_get__isMuted() ;

constexpr ::StringW const& __cordl_internal_get__lastPrefabError() const;

constexpr ::StringW& __cordl_internal_get__lastPrefabError() ;

constexpr ::StringW const& __cordl_internal_get__localPlayerName() const;

constexpr ::StringW& __cordl_internal_get__localPlayerName() ;

constexpr ::StringW const& __cordl_internal_get__micName() const;

constexpr ::StringW& __cordl_internal_get__micName() ;

constexpr bool const& __cordl_internal_get__muteAllRemoteVoices() const;

constexpr bool& __cordl_internal_get__muteAllRemoteVoices() ;

constexpr ::Dissonance::Networking::ICommsNetwork* const& __cordl_internal_get__net() const;

constexpr ::Dissonance::Networking::ICommsNetwork*& __cordl_internal_get__net() ;

constexpr float_t const& __cordl_internal_get__oneMinusBaseRemoteVoiceVolume() const;

constexpr float_t& __cordl_internal_get__oneMinusBaseRemoteVoiceVolume() ;

constexpr ::Dissonance::PlaybackPool* const& __cordl_internal_get__playbackPool() const;

constexpr ::Dissonance::PlaybackPool*& __cordl_internal_get__playbackPool() ;

constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback> const& __cordl_internal_get__playbackPrefab() const;

constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>& __cordl_internal_get__playbackPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playbackPrefab2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playbackPrefab2() ;

constexpr ::Dissonance::Audio::Playback::PriorityManager* const& __cordl_internal_get__playbackPriorityManager() const;

constexpr ::Dissonance::Audio::Playback::PriorityManager*& __cordl_internal_get__playbackPriorityManager() ;

constexpr ::Dissonance::PlayerChannels* const& __cordl_internal_get__playerChannels() const;

constexpr ::Dissonance::PlayerChannels*& __cordl_internal_get__playerChannels() ;

constexpr ::Dissonance::ChannelPriority const& __cordl_internal_get__playerPriority() const;

constexpr ::Dissonance::ChannelPriority& __cordl_internal_get__playerPriority() ;

constexpr ::Dissonance::PlayerTrackerManager* const& __cordl_internal_get__playerTrackers() const;

constexpr ::Dissonance::PlayerTrackerManager*& __cordl_internal_get__playerTrackers() ;

constexpr ::Dissonance::PlayerCollection* const& __cordl_internal_get__players() const;

constexpr ::Dissonance::PlayerCollection*& __cordl_internal_get__players() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__resumeCo() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__resumeCo() ;

constexpr ::Dissonance::RoomChannels* const& __cordl_internal_get__roomChannels() const;

constexpr ::Dissonance::RoomChannels*& __cordl_internal_get__roomChannels() ;

constexpr ::Dissonance::Rooms* const& __cordl_internal_get__rooms() const;

constexpr ::Dissonance::Rooms*& __cordl_internal_get__rooms() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Dissonance::TextChat* const& __cordl_internal_get__text() const;

constexpr ::Dissonance::TextChat*& __cordl_internal_get__text() ;

constexpr ::Dissonance::TokenSet* const& __cordl_internal_get__tokens() const;

constexpr ::Dissonance::TokenSet*& __cordl_internal_get__tokens() ;

constexpr void __cordl_internal_set_LocalPlayerNameChanged(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnPlayerEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnPlayerExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnPlayerJoinedSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set_OnPlayerLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set_OnPlayerStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set_OnPlayerStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set_OnStart(::System::Action*  value) ;

constexpr void __cordl_internal_set__autoChannelDuck(::Dissonance::Audio::OpenChannelVolumeDuck*  value) ;

constexpr void __cordl_internal_set__capture(::Dissonance::Audio::Capture::CapturePipelineManager*  value) ;

constexpr void __cordl_internal_set__codecSettingsLoader(::Dissonance::CodecSettingsLoader*  value) ;

constexpr void __cordl_internal_set__isDeafened(bool  value) ;

constexpr void __cordl_internal_set__isMuted(bool  value) ;

constexpr void __cordl_internal_set__lastPrefabError(::StringW  value) ;

constexpr void __cordl_internal_set__localPlayerName(::StringW  value) ;

constexpr void __cordl_internal_set__micName(::StringW  value) ;

constexpr void __cordl_internal_set__muteAllRemoteVoices(bool  value) ;

constexpr void __cordl_internal_set__net(::Dissonance::Networking::ICommsNetwork*  value) ;

constexpr void __cordl_internal_set__oneMinusBaseRemoteVoiceVolume(float_t  value) ;

constexpr void __cordl_internal_set__playbackPool(::Dissonance::PlaybackPool*  value) ;

constexpr void __cordl_internal_set__playbackPrefab(::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  value) ;

constexpr void __cordl_internal_set__playbackPrefab2(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__playbackPriorityManager(::Dissonance::Audio::Playback::PriorityManager*  value) ;

constexpr void __cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value) ;

constexpr void __cordl_internal_set__playerPriority(::Dissonance::ChannelPriority  value) ;

constexpr void __cordl_internal_set__playerTrackers(::Dissonance::PlayerTrackerManager*  value) ;

constexpr void __cordl_internal_set__players(::Dissonance::PlayerCollection*  value) ;

constexpr void __cordl_internal_set__resumeCo(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value) ;

constexpr void __cordl_internal_set__rooms(::Dissonance::Rooms*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__text(::Dissonance::TextChat*  value) ;

constexpr void __cordl_internal_set__tokens(::Dissonance::TokenSet*  value) ;

/// @brief Method <.ctor>b__50_0, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Networking::ICommsNetwork* __ctor_b__50_0() ;

/// @brief Method .ctor, addr 0x1805c90d0, size 0x6e0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_LocalPlayerNameChanged, addr 0x1805c97b0, size 0xa0, virtual false, abstract: false, final false
inline void add_LocalPlayerNameChanged(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_OnPlayerEnteredRoom, addr 0x1805c9850, size 0xa0, virtual false, abstract: false, final false
inline void add_OnPlayerEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method add_OnPlayerExitedRoom, addr 0x1805c98f0, size 0xa0, virtual false, abstract: false, final false
inline void add_OnPlayerExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method add_OnPlayerJoinedSession, addr 0x1805c9990, size 0xa0, virtual false, abstract: false, final false
inline void add_OnPlayerJoinedSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method add_OnPlayerLeftSession, addr 0x1805c9a30, size 0xa0, virtual false, abstract: false, final false
inline void add_OnPlayerLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method add_OnPlayerStartedSpeaking, addr 0x1805c9ad0, size 0xa0, virtual false, abstract: false, final false
inline void add_OnPlayerStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method add_OnPlayerStoppedSpeaking, addr 0x1805c9b70, size 0xa0, virtual false, abstract: false, final false
inline void add_OnPlayerStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method add_OnStart, addr 0x1805c9c10, size 0x90, virtual false, abstract: false, final false
inline void add_OnStart(::System::Action*  value) ;

/// @brief Method add_TokenAdded, addr 0x1805c9ca0, size 0x30, virtual false, abstract: false, final false
inline void add_TokenAdded(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_TokenRemoved, addr 0x1805c9cd0, size 0x30, virtual false, abstract: false, final false
inline void add_TokenRemoved(::System::Action_1<::StringW>*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline ::Dissonance::SemanticVersion* getStaticF_Version() ;

/// @brief Method get_Clip, addr 0x1805c9d00, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_IsDeafened, addr 0x180310e80, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDeafened() ;

/// @brief Method get_IsMuted, addr 0x180310e70, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_IsNetworkInitialized, addr 0x1805c9d70, size 0x40, virtual false, abstract: false, final false
inline bool get_IsNetworkInitialized() ;

/// @brief Method get_IsStarted, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsStarted() ;

/// @brief Method get_LocalPlayerName, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_LocalPlayerName() ;

/// @brief Method get_MicrophoneCapture, addr 0x1805c9db0, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::IMicrophoneCapture* get_MicrophoneCapture() ;

/// @brief Method get_MicrophoneName, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_MicrophoneName() ;

/// @brief Method get_MuteAllRemoteVoices, addr 0x1805c9dd0, size 0x10, virtual false, abstract: false, final false
inline bool get_MuteAllRemoteVoices() ;

/// @brief Method get_PacketLoss, addr 0x1805c9de0, size 0x30, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Method get_PlaybackPrefab, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_PlaybackPrefab() ;

/// @brief Method get_PlayerChannels, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::PlayerChannels* get_PlayerChannels() ;

/// @brief Method get_PlayerPriority, addr 0x1803b2c60, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_PlayerPriority() ;

/// @brief Method get_Players, addr 0x1805c9e10, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* get_Players() ;

/// @brief Method get_RemoteVoiceVolume, addr 0x1805c9e30, size 0x30, virtual false, abstract: false, final false
inline float_t get_RemoteVoiceVolume() ;

/// @brief Method get_RoomChannels, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::RoomChannels* get_RoomChannels() ;

/// @brief Method get_Rooms, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Rooms* get_Rooms() ;

/// @brief Method get_Text, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::TextChat* get_Text() ;

/// @brief Method get_Tokens, addr 0x1802edc30, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Tokens() ;

/// @brief Method get_TopPrioritySpeaker, addr 0x1805c6d90, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_TopPrioritySpeaker() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IChannelPriorityProvider"
constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider* i___Dissonance__Audio__Capture__IChannelPriorityProvider() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr ::Dissonance::Audio::Playback::IPriorityManager* i___Dissonance__Audio__Playback__IPriorityManager() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* i___Dissonance__Audio__Playback__IVolumeProvider() noexcept;

/// @brief Convert to "::Dissonance::IAccessTokenCollection"
constexpr ::Dissonance::IAccessTokenCollection* i___Dissonance__IAccessTokenCollection() noexcept;

/// @brief Method remove_LocalPlayerNameChanged, addr 0x1805c9e60, size 0xa0, virtual false, abstract: false, final false
inline void remove_LocalPlayerNameChanged(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_OnPlayerEnteredRoom, addr 0x1805c9f00, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnPlayerEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method remove_OnPlayerExitedRoom, addr 0x1805c9fa0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnPlayerExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method remove_OnPlayerJoinedSession, addr 0x1805ca040, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnPlayerJoinedSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method remove_OnPlayerLeftSession, addr 0x1805ca0e0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnPlayerLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method remove_OnPlayerStartedSpeaking, addr 0x1805ca180, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnPlayerStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method remove_OnPlayerStoppedSpeaking, addr 0x1805ca220, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnPlayerStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method remove_OnStart, addr 0x1805ca2c0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnStart(::System::Action*  value) ;

/// @brief Method remove_TokenAdded, addr 0x1805ca350, size 0xc0, virtual false, abstract: false, final false
inline void remove_TokenAdded(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_TokenRemoved, addr 0x1805ca410, size 0xc0, virtual false, abstract: false, final false
inline void remove_TokenRemoved(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

static inline void setStaticF_Version(::Dissonance::SemanticVersion*  value) ;

/// @brief Method set_IsDeafened, addr 0x1805ca4d0, size 0x10, virtual false, abstract: false, final false
inline void set_IsDeafened(bool  value) ;

/// @brief Method set_IsMuted, addr 0x1805ca4e0, size 0x50, virtual false, abstract: false, final false
inline void set_IsMuted(bool  value) ;

/// @brief Method set_LocalPlayerName, addr 0x1805ca530, size 0x100, virtual false, abstract: false, final false
inline void set_LocalPlayerName(::StringW  value) ;

/// @brief Method set_MicrophoneName, addr 0x1805ca630, size 0x70, virtual false, abstract: false, final false
inline void set_MicrophoneName(::StringW  value) ;

/// @brief Method set_MuteAllRemoteVoices, addr 0x1805ca6a0, size 0x10, virtual false, abstract: false, final false
inline void set_MuteAllRemoteVoices(bool  value) ;

/// @brief Method set_PlaybackPrefab, addr 0x1805ca6b0, size 0x190, virtual false, abstract: false, final false
inline void set_PlaybackPrefab(::UnityEngine::GameObject*  value) ;

/// @brief Method set_PlayerPriority, addr 0x18051e9d0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerPriority(::Dissonance::ChannelPriority  value) ;

/// @brief Method set_RemoteVoiceVolume, addr 0x1805ca840, size 0xa0, virtual false, abstract: false, final false
inline void set_RemoteVoiceVolume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DissonanceComms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DissonanceComms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DissonanceComms(DissonanceComms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DissonanceComms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DissonanceComms(DissonanceComms const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16799};

/// @brief Field _lastPrefabError, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____lastPrefabError;

/// @brief Field _started, offset: 0x28, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _rooms, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Rooms*  ____rooms;

/// @brief Field _playerChannels, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  ____playerChannels;

/// @brief Field _roomChannels, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  ____roomChannels;

/// @brief Field _text, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::TextChat*  ____text;

/// @brief Field _autoChannelDuck, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::Audio::OpenChannelVolumeDuck*  ____autoChannelDuck;

/// @brief Field _playerTrackers, offset: 0x58, size: 0x8, def value: None
 ::Dissonance::PlayerTrackerManager*  ____playerTrackers;

/// @brief Field _playbackPool, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::PlaybackPool*  ____playbackPool;

/// @brief Field _players, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::PlayerCollection*  ____players;

/// @brief Field _codecSettingsLoader, offset: 0x70, size: 0x8, def value: None
 ::Dissonance::CodecSettingsLoader*  ____codecSettingsLoader;

/// @brief Field _playbackPriorityManager, offset: 0x78, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::PriorityManager*  ____playbackPriorityManager;

/// @brief Field _capture, offset: 0x80, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::CapturePipelineManager*  ____capture;

/// @brief Field _net, offset: 0x88, size: 0x8, def value: None
 ::Dissonance::Networking::ICommsNetwork*  ____net;

/// @brief Field _localPlayerName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____localPlayerName;

/// @brief Field _isMuted, offset: 0x98, size: 0x1, def value: None
 bool  ____isMuted;

/// @brief Field _isDeafened, offset: 0x99, size: 0x1, def value: None
 bool  ____isDeafened;

/// @brief Field _oneMinusBaseRemoteVoiceVolume, offset: 0x9c, size: 0x4, def value: None
 float_t  ____oneMinusBaseRemoteVoiceVolume;

/// @brief Field _playbackPrefab, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  ____playbackPrefab;

/// @brief Field _playbackPrefab2, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playbackPrefab2;

/// @brief Field _micName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ____micName;

/// @brief Field _playerPriority, offset: 0xb8, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  ____playerPriority;

/// @brief Field _tokens, offset: 0xc0, size: 0x8, def value: None
 ::Dissonance::TokenSet*  ____tokens;

/// @brief Field OnPlayerJoinedSession, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnPlayerJoinedSession;

/// @brief Field OnPlayerLeftSession, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnPlayerLeftSession;

/// @brief Field OnPlayerStartedSpeaking, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnPlayerStartedSpeaking;

/// @brief Field OnPlayerStoppedSpeaking, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnPlayerStoppedSpeaking;

/// @brief Field OnPlayerEnteredRoom, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  ___OnPlayerEnteredRoom;

/// @brief Field OnPlayerExitedRoom, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  ___OnPlayerExitedRoom;

/// @brief Field LocalPlayerNameChanged, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___LocalPlayerNameChanged;

/// @brief Field OnStart, offset: 0x100, size: 0x8, def value: None
 ::System::Action*  ___OnStart;

/// @brief Field _muteAllRemoteVoices, offset: 0x108, size: 0x1, def value: None
 bool  ____muteAllRemoteVoices;

/// @brief Field _resumeCo, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____resumeCo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::DissonanceComms, ____lastPrefabError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____rooms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playerChannels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____roomChannels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____text) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____autoChannelDuck) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playerTrackers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playbackPool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____players) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____codecSettingsLoader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playbackPriorityManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____capture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____net) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____localPlayerName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____isMuted) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____isDeafened) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____oneMinusBaseRemoteVoiceVolume) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playbackPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playbackPrefab2) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____micName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____playerPriority) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____tokens) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnPlayerJoinedSession) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnPlayerLeftSession) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnPlayerStartedSpeaking) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnPlayerStoppedSpeaking) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnPlayerEnteredRoom) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnPlayerExitedRoom) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___LocalPlayerNameChanged) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ___OnStart) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____muteAllRemoteVoices) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Dissonance::DissonanceComms, ____resumeCo) == 0x110, "Offset mismatch!");

static_assert(sizeof(::Dissonance::DissonanceComms) == 0x118, "Size mismatch!");

} // namespace end def Dissonance
