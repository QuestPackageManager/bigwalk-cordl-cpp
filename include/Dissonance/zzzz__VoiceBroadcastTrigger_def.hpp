#pragma once
// IWYU pragma private; include "Dissonance/VoiceBroadcastTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/zzzz__Fader_def.hpp"
#include "Dissonance/zzzz__BaseCommsTrigger_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__CommActivationMode_def.hpp"
#include "Dissonance/zzzz__CommTriggerTarget_def.hpp"
#include "Dissonance/zzzz__PlayerChannel_def.hpp"
#include "Dissonance/zzzz__RoomChannel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceBroadcastTrigger)
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
struct CommActivationMode;
}
namespace Dissonance {
struct CommTriggerTarget;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class IVoiceBroadcastTrigger;
}
namespace Dissonance {
class VolumeFaderSettings;
}
// Forward declare root types
namespace Dissonance {
class VoiceBroadcastTrigger;
}
// Write type traits
MARK_REF_T(::Dissonance::VoiceBroadcastTrigger*);
DEFINE_IL2CPP_CLASS(::Dissonance::VoiceBroadcastTrigger*, "Dissonance", "VoiceBroadcastTrigger");
// Dependencies Dissonance.Audio.Fader, Dissonance.BaseCommsTrigger, Dissonance.ChannelPriority, Dissonance.CommActivationMode, Dissonance.CommTriggerTarget, Dissonance.PlayerChannel, Dissonance.RoomChannel, System.Nullable`1<T>
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoiceBroadcastTrigger
class CORDL_TYPE VoiceBroadcastTrigger : public ::Dissonance::BaseCommsTrigger {
public:
// Declarations
 __declspec(property(get=get_ActivationFader)) ::Dissonance::VolumeFaderSettings*  ActivationFader;

 __declspec(property(get=get_BroadcastPosition, put=set_BroadcastPosition)) bool  BroadcastPosition;

 __declspec(property(get=get_CanTrigger)) bool  CanTrigger;

 __declspec(property(get=get_ChannelType, put=set_ChannelType)) ::Dissonance::CommTriggerTarget  ChannelType;

 __declspec(property(get=get_ColliderTriggerFader)) ::Dissonance::VolumeFaderSettings*  ColliderTriggerFader;

 __declspec(property(get=get_CurrentFaderVolume)) float_t  CurrentFaderVolume;

 __declspec(property(get=get_InputName, put=set_InputName)) ::StringW  InputName;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsTransmitting)) bool  IsTransmitting;

 __declspec(property(get=get_Mode, put=set_Mode)) ::Dissonance::CommActivationMode  Mode;

 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_Priority, put=set_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::StringW  RoomName;

 __declspec(property(get=get_UseColliderTrigger, put=set_UseColliderTrigger)) bool  UseColliderTrigger;

/// @brief Field _activationFader, offset 0xc8, size 0x14 
 __declspec(property(get=__cordl_internal_get__activationFader, put=__cordl_internal_set__activationFader)) ::Dissonance::Audio::Fader  _activationFader;

/// @brief Field _activationFaderSettings, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__activationFaderSettings, put=__cordl_internal_set__activationFaderSettings)) ::Dissonance::VolumeFaderSettings*  _activationFaderSettings;

/// @brief Field _activationModeExpanded, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__activationModeExpanded, put=__cordl_internal_set__activationModeExpanded)) bool  _activationModeExpanded;

/// @brief Field _ampExpanded, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__ampExpanded, put=__cordl_internal_set__ampExpanded)) bool  _ampExpanded;

/// @brief Field _broadcastPosition, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__broadcastPosition, put=__cordl_internal_set__broadcastPosition)) bool  _broadcastPosition;

/// @brief Field _channelType, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__channelType, put=__cordl_internal_set__channelType)) ::Dissonance::CommTriggerTarget  _channelType;

/// @brief Field _channelTypeExpanded, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__channelTypeExpanded, put=__cordl_internal_set__channelTypeExpanded)) bool  _channelTypeExpanded;

/// @brief Field _inputName, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputName, put=__cordl_internal_set__inputName)) ::StringW  _inputName;

/// @brief Field _isVadSpeaking, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVadSpeaking, put=__cordl_internal_set__isVadSpeaking)) bool  _isVadSpeaking;

/// @brief Field _metadataExpanded, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__metadataExpanded, put=__cordl_internal_set__metadataExpanded)) bool  _metadataExpanded;

/// @brief Field _mode, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Dissonance::CommActivationMode  _mode;

/// @brief Field _muted, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get__muted, put=__cordl_internal_set__muted)) bool  _muted;

/// @brief Field _playerChannel, offset 0x58, size 0x28 
 __declspec(property(get=__cordl_internal_get__playerChannel, put=__cordl_internal_set__playerChannel)) ::System::Nullable_1<::Dissonance::PlayerChannel>  _playerChannel;

/// @brief Field _playerId, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) ::StringW  _playerId;

/// @brief Field _previousMode, offset 0xb4, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousMode, put=__cordl_internal_set__previousMode)) ::System::Nullable_1<::Dissonance::CommActivationMode>  _previousMode;

/// @brief Field _priority, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__priority, put=__cordl_internal_set__priority)) ::Dissonance::ChannelPriority  _priority;

/// @brief Field _roomChannel, offset 0x80, size 0x30 
 __declspec(property(get=__cordl_internal_get__roomChannel, put=__cordl_internal_set__roomChannel)) ::System::Nullable_1<::Dissonance::RoomChannel>  _roomChannel;

/// @brief Field _roomName, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomName, put=__cordl_internal_set__roomName)) ::StringW  _roomName;

/// @brief Field _self, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__self, put=__cordl_internal_set__self)) ::Dissonance::IDissonancePlayer*  _self;

/// @brief Field _tokensExpanded, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get__tokensExpanded, put=__cordl_internal_set__tokensExpanded)) bool  _tokensExpanded;

/// @brief Field _triggerFader, offset 0xe8, size 0x14 
 __declspec(property(get=__cordl_internal_get__triggerFader, put=__cordl_internal_set__triggerFader)) ::Dissonance::Audio::Fader  _triggerFader;

/// @brief Field _triggerFaderSettings, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerFaderSettings, put=__cordl_internal_set__triggerFaderSettings)) ::Dissonance::VolumeFaderSettings*  _triggerFaderSettings;

/// @brief Field _useTrigger, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTrigger, put=__cordl_internal_set__useTrigger)) bool  _useTrigger;

/// @brief Convert operator to "::Dissonance::IVoiceBroadcastTrigger"
constexpr operator  ::Dissonance::IVoiceBroadcastTrigger*() noexcept;

/// @brief Convert operator to "::Dissonance::VAD::IVoiceActivationListener"
constexpr operator  ::Dissonance::VAD::IVoiceActivationListener*() noexcept;

/// @brief Method CloseChannel, addr 0x1805d25c0, size 0x100, virtual false, abstract: false, final false
inline void CloseChannel() ;

/// @brief Method ColliderTriggerChanged, addr 0x1805d26c0, size 0xe0, virtual true, abstract: false, final false
inline void ColliderTriggerChanged() ;

/// @brief Method Dissonance.VAD.IVoiceActivationListener.VoiceActivationStart, addr 0x1805d27a0, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart() ;

/// @brief Method Dissonance.VAD.IVoiceActivationListener.VoiceActivationStop, addr 0x1805d27b0, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop() ;

/// @brief Method IsUserActivated, addr 0x1805d27c0, size 0x80, virtual true, abstract: false, final false
inline bool IsUserActivated() ;

static inline ::Dissonance::VoiceBroadcastTrigger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1805d2840, size 0x60, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1805d28a0, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OpenChannel, addr 0x1805d28b0, size 0x3d0, virtual false, abstract: false, final false
inline void OpenChannel() ;

/// @brief Method SetChannelVolume, addr 0x1805d2c80, size 0x160, virtual false, abstract: false, final false
inline void SetChannelVolume(float_t  value) ;

/// @brief Method ShouldActivate, addr 0x1805d2de0, size 0xd0, virtual false, abstract: false, final false
inline bool ShouldActivate(bool  intent) ;

/// @brief Method Start, addr 0x1805d2eb0, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchMode, addr 0x1805d2f60, size 0xd0, virtual false, abstract: false, final false
inline void SwitchMode() ;

/// @brief Method ToggleMute, addr 0x1805d3030, size 0x40, virtual true, abstract: false, final true
inline void ToggleMute() ;

/// @brief Method Update, addr 0x1805d3070, size 0x520, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::Audio::Fader const& __cordl_internal_get__activationFader() const;

constexpr ::Dissonance::Audio::Fader& __cordl_internal_get__activationFader() ;

constexpr ::Dissonance::VolumeFaderSettings* const& __cordl_internal_get__activationFaderSettings() const;

constexpr ::Dissonance::VolumeFaderSettings*& __cordl_internal_get__activationFaderSettings() ;

constexpr bool const& __cordl_internal_get__activationModeExpanded() const;

constexpr bool& __cordl_internal_get__activationModeExpanded() ;

constexpr bool const& __cordl_internal_get__ampExpanded() const;

constexpr bool& __cordl_internal_get__ampExpanded() ;

constexpr bool const& __cordl_internal_get__broadcastPosition() const;

constexpr bool& __cordl_internal_get__broadcastPosition() ;

constexpr ::Dissonance::CommTriggerTarget const& __cordl_internal_get__channelType() const;

constexpr ::Dissonance::CommTriggerTarget& __cordl_internal_get__channelType() ;

constexpr bool const& __cordl_internal_get__channelTypeExpanded() const;

constexpr bool& __cordl_internal_get__channelTypeExpanded() ;

constexpr ::StringW const& __cordl_internal_get__inputName() const;

constexpr ::StringW& __cordl_internal_get__inputName() ;

constexpr bool const& __cordl_internal_get__isVadSpeaking() const;

constexpr bool& __cordl_internal_get__isVadSpeaking() ;

constexpr bool const& __cordl_internal_get__metadataExpanded() const;

constexpr bool& __cordl_internal_get__metadataExpanded() ;

constexpr ::Dissonance::CommActivationMode const& __cordl_internal_get__mode() const;

constexpr ::Dissonance::CommActivationMode& __cordl_internal_get__mode() ;

constexpr bool const& __cordl_internal_get__muted() const;

constexpr bool& __cordl_internal_get__muted() ;

constexpr ::System::Nullable_1<::Dissonance::PlayerChannel> const& __cordl_internal_get__playerChannel() const;

constexpr ::System::Nullable_1<::Dissonance::PlayerChannel>& __cordl_internal_get__playerChannel() ;

constexpr ::StringW const& __cordl_internal_get__playerId() const;

constexpr ::StringW& __cordl_internal_get__playerId() ;

constexpr ::System::Nullable_1<::Dissonance::CommActivationMode> const& __cordl_internal_get__previousMode() const;

constexpr ::System::Nullable_1<::Dissonance::CommActivationMode>& __cordl_internal_get__previousMode() ;

constexpr ::Dissonance::ChannelPriority const& __cordl_internal_get__priority() const;

constexpr ::Dissonance::ChannelPriority& __cordl_internal_get__priority() ;

constexpr ::System::Nullable_1<::Dissonance::RoomChannel> const& __cordl_internal_get__roomChannel() const;

constexpr ::System::Nullable_1<::Dissonance::RoomChannel>& __cordl_internal_get__roomChannel() ;

constexpr ::StringW const& __cordl_internal_get__roomName() const;

constexpr ::StringW& __cordl_internal_get__roomName() ;

constexpr ::Dissonance::IDissonancePlayer* const& __cordl_internal_get__self() const;

constexpr ::Dissonance::IDissonancePlayer*& __cordl_internal_get__self() ;

constexpr bool const& __cordl_internal_get__tokensExpanded() const;

constexpr bool& __cordl_internal_get__tokensExpanded() ;

constexpr ::Dissonance::Audio::Fader const& __cordl_internal_get__triggerFader() const;

constexpr ::Dissonance::Audio::Fader& __cordl_internal_get__triggerFader() ;

constexpr ::Dissonance::VolumeFaderSettings* const& __cordl_internal_get__triggerFaderSettings() const;

constexpr ::Dissonance::VolumeFaderSettings*& __cordl_internal_get__triggerFaderSettings() ;

constexpr bool const& __cordl_internal_get__useTrigger() const;

constexpr bool& __cordl_internal_get__useTrigger() ;

constexpr void __cordl_internal_set__activationFader(::Dissonance::Audio::Fader  value) ;

constexpr void __cordl_internal_set__activationFaderSettings(::Dissonance::VolumeFaderSettings*  value) ;

constexpr void __cordl_internal_set__activationModeExpanded(bool  value) ;

constexpr void __cordl_internal_set__ampExpanded(bool  value) ;

constexpr void __cordl_internal_set__broadcastPosition(bool  value) ;

constexpr void __cordl_internal_set__channelType(::Dissonance::CommTriggerTarget  value) ;

constexpr void __cordl_internal_set__channelTypeExpanded(bool  value) ;

constexpr void __cordl_internal_set__inputName(::StringW  value) ;

constexpr void __cordl_internal_set__isVadSpeaking(bool  value) ;

constexpr void __cordl_internal_set__metadataExpanded(bool  value) ;

constexpr void __cordl_internal_set__mode(::Dissonance::CommActivationMode  value) ;

constexpr void __cordl_internal_set__muted(bool  value) ;

constexpr void __cordl_internal_set__playerChannel(::System::Nullable_1<::Dissonance::PlayerChannel>  value) ;

constexpr void __cordl_internal_set__playerId(::StringW  value) ;

constexpr void __cordl_internal_set__previousMode(::System::Nullable_1<::Dissonance::CommActivationMode>  value) ;

constexpr void __cordl_internal_set__priority(::Dissonance::ChannelPriority  value) ;

constexpr void __cordl_internal_set__roomChannel(::System::Nullable_1<::Dissonance::RoomChannel>  value) ;

constexpr void __cordl_internal_set__roomName(::StringW  value) ;

constexpr void __cordl_internal_set__self(::Dissonance::IDissonancePlayer*  value) ;

constexpr void __cordl_internal_set__tokensExpanded(bool  value) ;

constexpr void __cordl_internal_set__triggerFader(::Dissonance::Audio::Fader  value) ;

constexpr void __cordl_internal_set__triggerFaderSettings(::Dissonance::VolumeFaderSettings*  value) ;

constexpr void __cordl_internal_set__useTrigger(bool  value) ;

/// @brief Method .ctor, addr 0x1805d3590, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivationFader, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::VolumeFaderSettings* get_ActivationFader() ;

/// @brief Method get_BroadcastPosition, addr 0x1805c9dd0, size 0x10, virtual false, abstract: false, final false
inline bool get_BroadcastPosition() ;

/// @brief Method get_CanTrigger, addr 0x1805d3690, size 0xc0, virtual true, abstract: false, final false
inline bool get_CanTrigger() ;

/// @brief Method get_ChannelType, addr 0x1805d3750, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::CommTriggerTarget get_ChannelType() ;

/// @brief Method get_ColliderTriggerFader, addr 0x1803370a0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::VolumeFaderSettings* get_ColliderTriggerFader() ;

/// @brief Method get_CurrentFaderVolume, addr 0x1805d3760, size 0x70, virtual false, abstract: false, final false
inline float_t get_CurrentFaderVolume() ;

/// @brief Method get_InputName, addr 0x1803370d0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_InputName() ;

/// @brief Method get_IsMuted, addr 0x1805d37d0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsMuted() ;

/// @brief Method get_IsTransmitting, addr 0x1805d37e0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsTransmitting() ;

/// @brief Method get_Mode, addr 0x1805d37f0, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::CommActivationMode get_Mode() ;

/// @brief Method get_PlayerId, addr 0x180337120, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method get_Priority, addr 0x1805d3800, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_RoomName, addr 0x1803370b0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_RoomName() ;

/// @brief Method get_UseColliderTrigger, addr 0x180497730, size 0x10, virtual true, abstract: false, final false
inline bool get_UseColliderTrigger() ;

/// @brief Convert to "::Dissonance::IVoiceBroadcastTrigger"
constexpr ::Dissonance::IVoiceBroadcastTrigger* i___Dissonance__IVoiceBroadcastTrigger() noexcept;

/// @brief Convert to "::Dissonance::VAD::IVoiceActivationListener"
constexpr ::Dissonance::VAD::IVoiceActivationListener* i___Dissonance__VAD__IVoiceActivationListener() noexcept;

/// @brief Method set_BroadcastPosition, addr 0x1805d3810, size 0x110, virtual false, abstract: false, final false
inline void set_BroadcastPosition(bool  value) ;

/// @brief Method set_ChannelType, addr 0x1805d3920, size 0x20, virtual false, abstract: false, final false
inline void set_ChannelType(::Dissonance::CommTriggerTarget  value) ;

/// @brief Method set_InputName, addr 0x180337190, size 0x20, virtual true, abstract: false, final true
inline void set_InputName(::StringW  value) ;

/// @brief Method set_IsMuted, addr 0x1805d3940, size 0x40, virtual true, abstract: false, final true
inline void set_IsMuted(bool  value) ;

/// @brief Method set_Mode, addr 0x1805d3980, size 0x10, virtual true, abstract: false, final true
inline void set_Mode(::Dissonance::CommActivationMode  value) ;

/// @brief Method set_PlayerId, addr 0x1805d3990, size 0x60, virtual false, abstract: false, final false
inline void set_PlayerId(::StringW  value) ;

/// @brief Method set_Priority, addr 0x1805d39f0, size 0x100, virtual true, abstract: false, final true
inline void set_Priority(::Dissonance::ChannelPriority  value) ;

/// @brief Method set_RoomName, addr 0x1805d3af0, size 0x60, virtual true, abstract: false, final true
inline void set_RoomName(::StringW  value) ;

/// @brief Method set_UseColliderTrigger, addr 0x1805d3b50, size 0x10, virtual true, abstract: false, final false
inline void set_UseColliderTrigger(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceBroadcastTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceBroadcastTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceBroadcastTrigger(VoiceBroadcastTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceBroadcastTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceBroadcastTrigger(VoiceBroadcastTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16835};

/// @brief Field _channelTypeExpanded, offset: 0x50, size: 0x1, def value: None
 bool  ____channelTypeExpanded;

/// @brief Field _metadataExpanded, offset: 0x51, size: 0x1, def value: None
 bool  ____metadataExpanded;

/// @brief Field _activationModeExpanded, offset: 0x52, size: 0x1, def value: None
 bool  ____activationModeExpanded;

/// @brief Field _tokensExpanded, offset: 0x53, size: 0x1, def value: None
 bool  ____tokensExpanded;

/// @brief Field _ampExpanded, offset: 0x54, size: 0x1, def value: None
 bool  ____ampExpanded;

/// @brief Field _playerChannel, offset: 0x58, size: 0x28, def value: None
 ::System::Nullable_1<::Dissonance::PlayerChannel>  ____playerChannel;

/// @brief Field _roomChannel, offset: 0x80, size: 0x30, def value: None
 ::System::Nullable_1<::Dissonance::RoomChannel>  ____roomChannel;

/// @brief Field _isVadSpeaking, offset: 0xb0, size: 0x1, def value: None
 bool  ____isVadSpeaking;

/// @brief Field _previousMode, offset: 0xb4, size: 0x8, def value: None
 ::System::Nullable_1<::Dissonance::CommActivationMode>  ____previousMode;

/// @brief Field _self, offset: 0xc0, size: 0x8, def value: None
 ::Dissonance::IDissonancePlayer*  ____self;

/// @brief Field _activationFader, offset: 0xc8, size: 0x14, def value: None
 ::Dissonance::Audio::Fader  ____activationFader;

/// @brief Field _activationFaderSettings, offset: 0xe0, size: 0x8, def value: None
 ::Dissonance::VolumeFaderSettings*  ____activationFaderSettings;

/// @brief Field _triggerFader, offset: 0xe8, size: 0x14, def value: None
 ::Dissonance::Audio::Fader  ____triggerFader;

/// @brief Field _triggerFaderSettings, offset: 0x100, size: 0x8, def value: None
 ::Dissonance::VolumeFaderSettings*  ____triggerFaderSettings;

/// @brief Field _broadcastPosition, offset: 0x108, size: 0x1, def value: None
 bool  ____broadcastPosition;

/// @brief Field _channelType, offset: 0x10c, size: 0x4, def value: None
 ::Dissonance::CommTriggerTarget  ____channelType;

/// @brief Field _inputName, offset: 0x110, size: 0x8, def value: None
 ::StringW  ____inputName;

/// @brief Field _mode, offset: 0x118, size: 0x4, def value: None
 ::Dissonance::CommActivationMode  ____mode;

/// @brief Field _muted, offset: 0x11c, size: 0x1, def value: None
 bool  ____muted;

/// @brief Field _playerId, offset: 0x120, size: 0x8, def value: None
 ::StringW  ____playerId;

/// @brief Field _useTrigger, offset: 0x128, size: 0x1, def value: None
 bool  ____useTrigger;

/// @brief Field _roomName, offset: 0x130, size: 0x8, def value: None
 ::StringW  ____roomName;

/// @brief Field _priority, offset: 0x138, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  ____priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____channelTypeExpanded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____metadataExpanded) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____activationModeExpanded) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____tokensExpanded) == 0x53, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____ampExpanded) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____playerChannel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____roomChannel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____isVadSpeaking) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____previousMode) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____self) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____activationFader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____activationFaderSettings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____triggerFader) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____triggerFaderSettings) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____broadcastPosition) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____channelType) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____inputName) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____mode) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____muted) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____playerId) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____useTrigger) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____roomName) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceBroadcastTrigger, ____priority) == 0x138, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoiceBroadcastTrigger) == 0x140, "Size mismatch!");

} // namespace end def Dissonance
