#pragma once
// IWYU pragma private; include "Dissonance/RemoteVoicePlayerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RemoteVoicePlayerState)
namespace Dissonance::Audio::Playback {
class IVoicePlaybackInternal;
}
namespace Dissonance::Networking {
struct RoomEvent;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance {
class RemoteVoicePlayerState;
}
// Write type traits
MARK_REF_T(::Dissonance::RemoteVoicePlayerState*);
DEFINE_IL2CPP_CLASS(::Dissonance::RemoteVoicePlayerState*, "Dissonance", "RemoteVoicePlayerState");
// Dependencies Dissonance.VoicePlayerState
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.RemoteVoicePlayerState
class CORDL_TYPE RemoteVoicePlayerState : public ::Dissonance::VoicePlayerState {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

/// @brief Field EmptyRoomsList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyRoomsList, put=setStaticF_EmptyRoomsList)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  EmptyRoomsList;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsLocalPlayer)) bool  IsLocalPlayer;

 __declspec(property(get=get_IsLocallyMuted, put=set_IsLocallyMuted)) bool  IsLocallyMuted;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Jitter)) ::System::Nullable_1<float_t>  Jitter;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PacketLoss)) ::System::Nullable_1<float_t>  PacketLoss;

 __declspec(property(get=get_PlaybackInternal)) ::Dissonance::Audio::Playback::IVoicePlaybackInternal*  PlaybackInternal;

 __declspec(property(get=get_Rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

 __declspec(property(get=get_SpeakerPriority)) ::System::Nullable_1<::Dissonance::ChannelPriority>  SpeakerPriority;

 __declspec(property(get=get_Tracker, put=set_Tracker)) ::Dissonance::IDissonancePlayer*  Tracker;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field _playback, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playback, put=__cordl_internal_set__playback)) ::Dissonance::Audio::Playback::IVoicePlaybackInternal*  _playback;

/// @brief Field _player, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::Dissonance::IDissonancePlayer*  _player;

/// @brief Field _rooms, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _rooms;

/// @brief Method GetSpeakingChannels, addr 0x1805ce590, size 0x140, virtual true, abstract: false, final false
inline void GetSpeakingChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels) ;

/// @brief Method InvokeOnEnteredRoom, addr 0x1805ce6d0, size 0xd0, virtual true, abstract: false, final false
inline void InvokeOnEnteredRoom(::Dissonance::Networking::RoomEvent  evtData) ;

/// @brief Method InvokeOnExitedRoom, addr 0x1805ce7a0, size 0xd0, virtual true, abstract: false, final false
inline void InvokeOnExitedRoom(::Dissonance::Networking::RoomEvent  evtData) ;

static inline ::Dissonance::RemoteVoicePlayerState* New_ctor(::Dissonance::Audio::Playback::IVoicePlaybackInternal*  playback) ;

/// @brief Method Update, addr 0x1805ce870, size 0x2c0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::Audio::Playback::IVoicePlaybackInternal* const& __cordl_internal_get__playback() const;

constexpr ::Dissonance::Audio::Playback::IVoicePlaybackInternal*& __cordl_internal_get__playback() ;

constexpr ::Dissonance::IDissonancePlayer* const& __cordl_internal_get__player() const;

constexpr ::Dissonance::IDissonancePlayer*& __cordl_internal_get__player() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& __cordl_internal_get__rooms() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& __cordl_internal_get__rooms() ;

constexpr void __cordl_internal_set__playback(::Dissonance::Audio::Playback::IVoicePlaybackInternal*  value) ;

constexpr void __cordl_internal_set__player(::Dissonance::IDissonancePlayer*  value) ;

constexpr void __cordl_internal_set__rooms(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1805cebf0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::IVoicePlaybackInternal*  playback) ;

static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* getStaticF_EmptyRoomsList() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Amplitude, addr 0x1805cec70, size 0x50, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_IsConnected, addr 0x1805cecc0, size 0x70, virtual true, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsLocalPlayer, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_IsLocalPlayer() ;

/// @brief Method get_IsLocallyMuted, addr 0x1805ced30, size 0x50, virtual true, abstract: false, final false
inline bool get_IsLocallyMuted() ;

/// @brief Method get_IsSpeaking, addr 0x1805ced80, size 0x50, virtual true, abstract: false, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_Jitter, addr 0x1805cedd0, size 0x60, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_Jitter() ;

/// @brief Method get_PacketLoss, addr 0x1805cee30, size 0xc0, virtual true, abstract: false, final false
inline ::System::Nullable_1<float_t> get_PacketLoss() ;

/// @brief Method get_PlaybackInternal, addr 0x1805ceef0, size 0x40, virtual true, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* get_PlaybackInternal() ;

/// @brief Method get_Rooms, addr 0x1805cef30, size 0x40, virtual true, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Rooms() ;

/// @brief Method get_SpeakerPriority, addr 0x1805cef70, size 0x90, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::ChannelPriority> get_SpeakerPriority() ;

/// @brief Method get_Tracker, addr 0x1802e58c0, size 0x10, virtual true, abstract: false, final false
inline ::Dissonance::IDissonancePlayer* get_Tracker() ;

/// @brief Method get_Volume, addr 0x1805cf000, size 0x40, virtual true, abstract: false, final false
inline float_t get_Volume() ;

static inline void setStaticF_EmptyRoomsList(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_IsLocallyMuted, addr 0x1805cf040, size 0xd0, virtual true, abstract: false, final false
inline void set_IsLocallyMuted(bool  value) ;

/// @brief Method set_Tracker, addr 0x1805cf110, size 0x170, virtual true, abstract: false, final false
inline void set_Tracker(::Dissonance::IDissonancePlayer*  value) ;

/// @brief Method set_Volume, addr 0x1805cf280, size 0xf0, virtual true, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteVoicePlayerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoicePlayerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteVoicePlayerState(RemoteVoicePlayerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteVoicePlayerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteVoicePlayerState(RemoteVoicePlayerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16832};

/// @brief Field _playback, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IVoicePlaybackInternal*  ____playback;

/// @brief Field _player, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::IDissonancePlayer*  ____player;

/// @brief Field _rooms, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  ____rooms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::RemoteVoicePlayerState, ____playback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RemoteVoicePlayerState, ____player) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RemoteVoicePlayerState, ____rooms) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Dissonance::RemoteVoicePlayerState) == 0x58, "Size mismatch!");

} // namespace end def Dissonance
