#pragma once
// IWYU pragma private; include "Dissonance/VoicePlayerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoicePlayerState)
namespace Dissonance::Audio::Playback {
class IVoicePlaybackInternal;
}
namespace Dissonance::Audio::Playback {
class IVoicePlayback;
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
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance {
class VoicePlayerState;
}
// Write type traits
MARK_REF_T(::Dissonance::VoicePlayerState*);
DEFINE_IL2CPP_CLASS(::Dissonance::VoicePlayerState*, "Dissonance", "VoicePlayerState");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoicePlayerState
class CORDL_TYPE VoicePlayerState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsLocalPlayer)) bool  IsLocalPlayer;

 __declspec(property(get=get_IsLocallyMuted, put=set_IsLocallyMuted)) bool  IsLocallyMuted;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field OnEnteredRoom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnteredRoom, put=__cordl_internal_set_OnEnteredRoom)) ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  OnEnteredRoom;

/// @brief Field OnExitedRoom, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExitedRoom, put=__cordl_internal_set_OnExitedRoom)) ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  OnExitedRoom;

/// @brief Field OnLeftSession, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLeftSession, put=__cordl_internal_set_OnLeftSession)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnLeftSession;

/// @brief Field OnStartedSpeaking, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartedSpeaking, put=__cordl_internal_set_OnStartedSpeaking)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnStartedSpeaking;

/// @brief Field OnStoppedSpeaking, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStoppedSpeaking, put=__cordl_internal_set_OnStoppedSpeaking)) ::System::Action_1<::Dissonance::VoicePlayerState*>*  OnStoppedSpeaking;

 __declspec(property(get=get_PacketLoss)) ::System::Nullable_1<float_t>  PacketLoss;

 __declspec(property(get=get_Playback)) ::Dissonance::Audio::Playback::IVoicePlayback*  Playback;

 __declspec(property(get=get_PlaybackInternal)) ::Dissonance::Audio::Playback::IVoicePlaybackInternal*  PlaybackInternal;

 __declspec(property(get=get_Rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

 __declspec(property(get=get_SpeakerPriority)) ::System::Nullable_1<::Dissonance::ChannelPriority>  SpeakerPriority;

 __declspec(property(get=get_Tracker, put=set_Tracker)) ::Dissonance::IDissonancePlayer*  Tracker;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Method GetSpeakingChannels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetSpeakingChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output) ;

/// @brief Method InvokeOnEnteredRoom, addr 0x1805d3b60, size 0xa0, virtual true, abstract: false, final false
inline void InvokeOnEnteredRoom(::Dissonance::Networking::RoomEvent  evtData) ;

/// @brief Method InvokeOnExitedRoom, addr 0x1805d3c00, size 0xa0, virtual true, abstract: false, final false
inline void InvokeOnExitedRoom(::Dissonance::Networking::RoomEvent  evtData) ;

/// @brief Method InvokeOnLeftSession, addr 0x1805d3ca0, size 0x20, virtual false, abstract: false, final false
inline void InvokeOnLeftSession() ;

/// @brief Method InvokeOnStartedSpeaking, addr 0x1805d3cc0, size 0x80, virtual false, abstract: false, final false
inline void InvokeOnStartedSpeaking() ;

/// @brief Method InvokeOnStoppedSpeaking, addr 0x1805d3d40, size 0x80, virtual false, abstract: false, final false
inline void InvokeOnStoppedSpeaking() ;

static inline ::Dissonance::VoicePlayerState* New_ctor(::StringW  name) ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& __cordl_internal_get_OnEnteredRoom() const;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& __cordl_internal_get_OnEnteredRoom() ;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& __cordl_internal_get_OnExitedRoom() const;

constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& __cordl_internal_get_OnExitedRoom() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnLeftSession() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnLeftSession() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnStartedSpeaking() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnStartedSpeaking() ;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get_OnStoppedSpeaking() const;

constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get_OnStoppedSpeaking() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set_OnEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set_OnStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set_OnStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method add_OnEnteredRoom, addr 0x1805d3e10, size 0x90, virtual false, abstract: false, final false
inline void add_OnEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method add_OnExitedRoom, addr 0x1805d3ea0, size 0x90, virtual false, abstract: false, final false
inline void add_OnExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method add_OnLeftSession, addr 0x1805d3f30, size 0x90, virtual false, abstract: false, final false
inline void add_OnLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method add_OnStartedSpeaking, addr 0x1805d3fc0, size 0x90, virtual false, abstract: false, final false
inline void add_OnStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method add_OnStoppedSpeaking, addr 0x1805d4050, size 0x90, virtual false, abstract: false, final false
inline void add_OnStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Amplitude, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_IsConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsLocalPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsLocalPlayer() ;

/// @brief Method get_IsLocallyMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsLocallyMuted() ;

/// @brief Method get_IsSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_Name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_PacketLoss, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<float_t> get_PacketLoss() ;

/// @brief Method get_Playback, addr 0x1805d40e0, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVoicePlayback* get_Playback() ;

/// @brief Method get_PlaybackInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* get_PlaybackInternal() ;

/// @brief Method get_Rooms, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Rooms() ;

/// @brief Method get_SpeakerPriority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::ChannelPriority> get_SpeakerPriority() ;

/// @brief Method get_Tracker, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::IDissonancePlayer* get_Tracker() ;

/// @brief Method get_Volume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method remove_OnEnteredRoom, addr 0x1805d4100, size 0x90, virtual false, abstract: false, final false
inline void remove_OnEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method remove_OnExitedRoom, addr 0x1805d4190, size 0x90, virtual false, abstract: false, final false
inline void remove_OnExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value) ;

/// @brief Method remove_OnLeftSession, addr 0x1805d4220, size 0x90, virtual false, abstract: false, final false
inline void remove_OnLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method remove_OnStartedSpeaking, addr 0x1805d42b0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method remove_OnStoppedSpeaking, addr 0x1805d4340, size 0x90, virtual false, abstract: false, final false
inline void remove_OnStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_IsLocallyMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_IsLocallyMuted(bool  value) ;

/// @brief Method set_Tracker, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Tracker(::Dissonance::IDissonancePlayer*  value) ;

/// @brief Method set_Volume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoicePlayerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoicePlayerState(VoicePlayerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoicePlayerState(VoicePlayerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16830};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field OnStartedSpeaking, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnStartedSpeaking;

/// @brief Field OnStoppedSpeaking, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnStoppedSpeaking;

/// @brief Field OnEnteredRoom, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  ___OnEnteredRoom;

/// @brief Field OnExitedRoom, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  ___OnExitedRoom;

/// @brief Field OnLeftSession, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::VoicePlayerState*>*  ___OnLeftSession;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoicePlayerState, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoicePlayerState, ___OnStartedSpeaking) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoicePlayerState, ___OnStoppedSpeaking) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoicePlayerState, ___OnEnteredRoom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoicePlayerState, ___OnExitedRoom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoicePlayerState, ___OnLeftSession) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoicePlayerState) == 0x40, "Size mismatch!");

} // namespace end def Dissonance
