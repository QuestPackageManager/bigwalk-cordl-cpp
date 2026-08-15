#pragma once
// IWYU pragma private; include "Dissonance/LocalVoicePlayerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocalVoicePlayerState)
namespace Dissonance::Audio::Capture {
class IAmplitudeProvider;
}
namespace Dissonance::Audio::Playback {
class IVoicePlaybackInternal;
}
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class ILossEstimator;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class Rooms;
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
class LocalVoicePlayerState;
}
// Write type traits
MARK_REF_T(::Dissonance::LocalVoicePlayerState*);
DEFINE_IL2CPP_CLASS(::Dissonance::LocalVoicePlayerState*, "Dissonance", "LocalVoicePlayerState");
// Dependencies Dissonance.VoicePlayerState
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.LocalVoicePlayerState
class CORDL_TYPE LocalVoicePlayerState : public ::Dissonance::VoicePlayerState {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsLocalPlayer)) bool  IsLocalPlayer;

 __declspec(property(get=get_IsLocallyMuted, put=set_IsLocallyMuted)) bool  IsLocallyMuted;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PacketLoss)) ::System::Nullable_1<float_t>  PacketLoss;

 __declspec(property(get=get_PlaybackInternal)) ::Dissonance::Audio::Playback::IVoicePlaybackInternal*  PlaybackInternal;

 __declspec(property(get=get_Rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

 __declspec(property(get=get_SpeakerPriority)) ::System::Nullable_1<::Dissonance::ChannelPriority>  SpeakerPriority;

 __declspec(property(get=get_Tracker, put=set_Tracker)) ::Dissonance::IDissonancePlayer*  Tracker;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field <Tracker>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tracker_k__BackingField, put=__cordl_internal_set__Tracker_k__BackingField)) ::Dissonance::IDissonancePlayer*  _Tracker_k__BackingField;

/// @brief Field _loss, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__loss, put=__cordl_internal_set__loss)) ::Dissonance::ILossEstimator*  _loss;

/// @brief Field _micAmplitude, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__micAmplitude, put=__cordl_internal_set__micAmplitude)) ::Dissonance::Audio::Capture::IAmplitudeProvider*  _micAmplitude;

/// @brief Field _network, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__network, put=__cordl_internal_set__network)) ::Dissonance::Networking::ICommsNetwork*  _network;

/// @brief Field _playerChannels, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerChannels, put=__cordl_internal_set__playerChannels)) ::Dissonance::PlayerChannels*  _playerChannels;

/// @brief Field _roomChannels, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomChannels, put=__cordl_internal_set__roomChannels)) ::Dissonance::RoomChannels*  _roomChannels;

/// @brief Field _rooms, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::Dissonance::Rooms*  _rooms;

/// @brief Method CreateRemoteChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TChannel,typename TId>
static inline ::Dissonance::RemoteChannel CreateRemoteChannel(TChannel  item, ::StringW  name, ::Dissonance::ChannelType  type) ;

/// @brief Method GetSpeakingChannels, addr 0x1805cac80, size 0x2c0, virtual true, abstract: false, final false
inline void GetSpeakingChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels) ;

static inline ::Dissonance::LocalVoicePlayerState* New_ctor(::StringW  name, ::Dissonance::Audio::Capture::IAmplitudeProvider*  micAmplitude, ::Dissonance::Rooms*  rooms, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::ILossEstimator*  loss, ::Dissonance::Networking::ICommsNetwork*  network) ;

/// @brief Method OnChannelClosed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TId>
inline void OnChannelClosed(TId  channel, ::Dissonance::ChannelProperties*  properties) ;

/// @brief Method OnChannelOpened, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TId>
inline void OnChannelOpened(TId  channel, ::Dissonance::ChannelProperties*  properties) ;

/// @brief Method OnLocallyEnteredRoom, addr 0x1805caf40, size 0xa0, virtual false, abstract: false, final false
inline void OnLocallyEnteredRoom(::StringW  room) ;

/// @brief Method OnLocallyExitedRoom, addr 0x1805cafe0, size 0xa0, virtual false, abstract: false, final false
inline void OnLocallyExitedRoom(::StringW  room) ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::IDissonancePlayer* const& __cordl_internal_get__Tracker_k__BackingField() const;

constexpr ::Dissonance::IDissonancePlayer*& __cordl_internal_get__Tracker_k__BackingField() ;

constexpr ::Dissonance::ILossEstimator* const& __cordl_internal_get__loss() const;

constexpr ::Dissonance::ILossEstimator*& __cordl_internal_get__loss() ;

constexpr ::Dissonance::Audio::Capture::IAmplitudeProvider* const& __cordl_internal_get__micAmplitude() const;

constexpr ::Dissonance::Audio::Capture::IAmplitudeProvider*& __cordl_internal_get__micAmplitude() ;

constexpr ::Dissonance::Networking::ICommsNetwork* const& __cordl_internal_get__network() const;

constexpr ::Dissonance::Networking::ICommsNetwork*& __cordl_internal_get__network() ;

constexpr ::Dissonance::PlayerChannels* const& __cordl_internal_get__playerChannels() const;

constexpr ::Dissonance::PlayerChannels*& __cordl_internal_get__playerChannels() ;

constexpr ::Dissonance::RoomChannels* const& __cordl_internal_get__roomChannels() const;

constexpr ::Dissonance::RoomChannels*& __cordl_internal_get__roomChannels() ;

constexpr ::Dissonance::Rooms* const& __cordl_internal_get__rooms() const;

constexpr ::Dissonance::Rooms*& __cordl_internal_get__rooms() ;

constexpr void __cordl_internal_set__Tracker_k__BackingField(::Dissonance::IDissonancePlayer*  value) ;

constexpr void __cordl_internal_set__loss(::Dissonance::ILossEstimator*  value) ;

constexpr void __cordl_internal_set__micAmplitude(::Dissonance::Audio::Capture::IAmplitudeProvider*  value) ;

constexpr void __cordl_internal_set__network(::Dissonance::Networking::ICommsNetwork*  value) ;

constexpr void __cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value) ;

constexpr void __cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value) ;

constexpr void __cordl_internal_set__rooms(::Dissonance::Rooms*  value) ;

/// @brief Method .ctor, addr 0x1805cb0d0, size 0x2c0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::Dissonance::Audio::Capture::IAmplitudeProvider*  micAmplitude, ::Dissonance::Rooms*  rooms, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::ILossEstimator*  loss, ::Dissonance::Networking::ICommsNetwork*  network) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Amplitude, addr 0x1805cb390, size 0x30, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_IsConnected, addr 0x1805cb3c0, size 0x30, virtual true, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsLocalPlayer, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_IsLocalPlayer() ;

/// @brief Method get_IsLocallyMuted, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_IsLocallyMuted() ;

/// @brief Method get_IsSpeaking, addr 0x1805cb3f0, size 0x50, virtual true, abstract: false, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_PacketLoss, addr 0x1805cb440, size 0x50, virtual true, abstract: false, final false
inline ::System::Nullable_1<float_t> get_PacketLoss() ;

/// @brief Method get_PlaybackInternal, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* get_PlaybackInternal() ;

/// @brief Method get_Rooms, addr 0x1805cb490, size 0x20, virtual true, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Rooms() ;

/// @brief Method get_SpeakerPriority, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::ChannelPriority> get_SpeakerPriority() ;

/// @brief Method get_Tracker, addr 0x18039fe40, size 0x10, virtual true, abstract: false, final false
inline ::Dissonance::IDissonancePlayer* get_Tracker() ;

/// @brief Method get_Volume, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final false
inline float_t get_Volume() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_IsLocallyMuted, addr 0x1805cb4b0, size 0xa0, virtual true, abstract: false, final false
inline void set_IsLocallyMuted(bool  value) ;

/// @brief Method set_Tracker, addr 0x1803d5ad0, size 0x10, virtual true, abstract: false, final false
inline void set_Tracker(::Dissonance::IDissonancePlayer*  value) ;

/// @brief Method set_Volume, addr 0x1805cb550, size 0x90, virtual true, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoicePlayerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoicePlayerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoicePlayerState(LocalVoicePlayerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoicePlayerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoicePlayerState(LocalVoicePlayerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16831};

/// @brief Field _micAmplitude, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IAmplitudeProvider*  ____micAmplitude;

/// @brief Field _rooms, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Rooms*  ____rooms;

/// @brief Field _roomChannels, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  ____roomChannels;

/// @brief Field _playerChannels, offset: 0x58, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  ____playerChannels;

/// @brief Field _loss, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::ILossEstimator*  ____loss;

/// @brief Field _network, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::Networking::ICommsNetwork*  ____network;

/// @brief Field <Tracker>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Dissonance::IDissonancePlayer*  ____Tracker_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____micAmplitude) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____rooms) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____roomChannels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____playerChannels) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____loss) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____network) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::LocalVoicePlayerState, ____Tracker_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Dissonance::LocalVoicePlayerState) == 0x78, "Size mismatch!");

} // namespace end def Dissonance
