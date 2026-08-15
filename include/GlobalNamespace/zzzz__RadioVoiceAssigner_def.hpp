#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioVoiceAssigner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoicePlayer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RadioVoiceAssigner)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class RadioDisplay;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
struct TextChatMessage;
}
namespace GlobalNamespace {
class TextChatSource;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace GlobalNamespace {
class VoicePlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RadioVoiceAssigner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadioVoiceAssigner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioVoiceAssigner*, "", "RadioVoiceAssigner");
// Dependencies UnityEngine.MonoBehaviour, VoicePlayer::VoicePlayerType
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadioVoiceAssigner
class CORDL_TYPE RadioVoiceAssigner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cachedVoiceType, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedVoiceType, put=__cordl_internal_set__cachedVoiceType)) ::GlobalNamespace::VoicePlayer_VoicePlayerType  _cachedVoiceType;

/// @brief Field _feedbackSimulSource, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__feedbackSimulSource, put=__cordl_internal_set__feedbackSimulSource)) ::UnityW<::GlobalNamespace::AudioSourceController>  _feedbackSimulSource;

/// @brief Field _feedbackSource, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__feedbackSource, put=__cordl_internal_set__feedbackSource)) ::UnityW<::GlobalNamespace::AudioSourceController>  _feedbackSource;

/// @brief Field allRadios, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allRadios, put=setStaticF_allRadios)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*  allRadios;

/// @brief Field feedbackSimulSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_feedbackSimulSound, put=__cordl_internal_set_feedbackSimulSound)) ::UnityW<::GlobalNamespace::SoundCue>  feedbackSimulSound;

/// @brief Field feedbackSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_feedbackSound, put=__cordl_internal_set_feedbackSound)) ::UnityW<::GlobalNamespace::SoundCue>  feedbackSound;

/// @brief Field fullDuplex, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_fullDuplex, put=__cordl_internal_set_fullDuplex)) bool  fullDuplex;

/// @brief Field isBroadcasting, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBroadcasting, put=__cordl_internal_set_isBroadcasting)) bool  isBroadcasting;

/// @brief Field isInDeadZone, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInDeadZone, put=__cordl_internal_set_isInDeadZone)) bool  isInDeadZone;

/// @brief Field isReceiveing, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReceiveing, put=__cordl_internal_set_isReceiveing)) bool  isReceiveing;

/// @brief Field isWaitingForMessageEnd, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isWaitingForMessageEnd, put=__cordl_internal_set_isWaitingForMessageEnd)) bool  isWaitingForMessageEnd;

/// @brief Field latestBroadcastPlayer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestBroadcastPlayer, put=__cordl_internal_set_latestBroadcastPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  latestBroadcastPlayer;

/// @brief Field localSpecialVoice, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_localSpecialVoice, put=__cordl_internal_set_localSpecialVoice)) bool  localSpecialVoice;

/// @brief Field localVoiceVol, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_localVoiceVol, put=__cordl_internal_set_localVoiceVol)) float_t  localVoiceVol;

/// @brief Field logVerbose, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onChange, put=setStaticF_onChange)) ::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*  onChange;

/// @brief Field onEndReceiveing, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEndReceiveing, put=__cordl_internal_set_onEndReceiveing)) ::UnityW<::GlobalNamespace::PeckSwitch>  onEndReceiveing;

/// @brief Field onStartReceiveing, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStartReceiveing, put=__cordl_internal_set_onStartReceiveing)) ::UnityW<::GlobalNamespace::PeckSwitch>  onStartReceiveing;

/// @brief Field onWhenReceiving, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onWhenReceiving, put=__cordl_internal_set_onWhenReceiving)) ::UnityW<::UnityEngine::Transform>  onWhenReceiving;

/// @brief Field radioDisplay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_radioDisplay, put=__cordl_internal_set_radioDisplay)) ::UnityW<::GlobalNamespace::RadioDisplay>  radioDisplay;

/// @brief Field roomName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomName, put=__cordl_internal_set_roomName)) ::StringW  roomName;

/// @brief Field textChatSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_textChatSource, put=__cordl_internal_set_textChatSource)) ::UnityW<::GlobalNamespace::TextChatSource>  textChatSource;

/// @brief Field textReceiveSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_textReceiveSound, put=__cordl_internal_set_textReceiveSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textReceiveSound;

/// @brief Field textSentSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_textSentSound, put=__cordl_internal_set_textSentSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textSentSound;

/// @brief Field trackedStateSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Field voicePlayer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_voicePlayer, put=__cordl_internal_set_voicePlayer)) ::UnityW<::GlobalNamespace::VoicePlayer>  voicePlayer;

/// @brief Method Awake, addr 0x180412a40, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastTextChatOverThisChannel, addr 0x180412ac0, size 0x290, virtual false, abstract: false, final false
inline void BroadcastTextChatOverThisChannel(::GlobalNamespace::TextChatMessage  message) ;

static inline ::GlobalNamespace::RadioVoiceAssigner* New_ctor() ;

/// @brief Method OnAssign, addr 0x180412d50, size 0x3a0, virtual false, abstract: false, final false
inline void OnAssign(::GlobalNamespace::RadioVoiceAssigner*  changedRadio) ;

/// @brief Method OnDisable, addr 0x1804130f0, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180413210, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Peck, addr 0x1804133e0, size 0x2b0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

/// @brief Method PlayFeedbackSimulSound, addr 0x180413690, size 0x1b0, virtual false, abstract: false, final false
inline void PlayFeedbackSimulSound() ;

/// @brief Method PlayFeedbackSound, addr 0x180413840, size 0x1f0, virtual false, abstract: false, final false
inline void PlayFeedbackSound() ;

/// @brief Method RefreshDisplay, addr 0x180413a30, size 0x110, virtual false, abstract: false, final false
inline void RefreshDisplay() ;

/// @brief Method SetIsInDeadZone, addr 0x180413b40, size 0x50, virtual false, abstract: false, final false
inline void SetIsInDeadZone(bool  value) ;

/// @brief Method StartReceiving, addr 0x180413b90, size 0x280, virtual false, abstract: false, final false
inline void StartReceiving(::GlobalNamespace::RadioVoiceAssigner*  broadcaster) ;

/// @brief Method StopRecieving, addr 0x180413e10, size 0x1a0, virtual false, abstract: false, final false
inline void StopRecieving() ;

/// @brief Method Update, addr 0x1804141d0, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <PlayFeedbackSimulSound>g___clearRef|38_0, addr 0x180413fb0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayFeedbackSimulSound_g___clearRef_38_0(::GlobalNamespace::RadioVoiceAssigner*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayFeedbackSound>g__GetX|37_0, addr 0x180414010, size 0x1c0, virtual false, abstract: false, final false
inline bool _PlayFeedbackSound_g__GetX_37_0(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method <PlayFeedbackSound>g___clearRef|37_1, addr 0x1803d2dd0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayFeedbackSound_g___clearRef_37_1(::GlobalNamespace::RadioVoiceAssigner*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType const& __cordl_internal_get__cachedVoiceType() const;

constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType& __cordl_internal_get__cachedVoiceType() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__feedbackSimulSource() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__feedbackSimulSource() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__feedbackSource() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__feedbackSource() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_feedbackSimulSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_feedbackSimulSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_feedbackSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_feedbackSound() ;

constexpr bool const& __cordl_internal_get_fullDuplex() const;

constexpr bool& __cordl_internal_get_fullDuplex() ;

constexpr bool const& __cordl_internal_get_isBroadcasting() const;

constexpr bool& __cordl_internal_get_isBroadcasting() ;

constexpr bool const& __cordl_internal_get_isInDeadZone() const;

constexpr bool& __cordl_internal_get_isInDeadZone() ;

constexpr bool const& __cordl_internal_get_isReceiveing() const;

constexpr bool& __cordl_internal_get_isReceiveing() ;

constexpr bool const& __cordl_internal_get_isWaitingForMessageEnd() const;

constexpr bool& __cordl_internal_get_isWaitingForMessageEnd() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_latestBroadcastPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_latestBroadcastPlayer() ;

constexpr bool const& __cordl_internal_get_localSpecialVoice() const;

constexpr bool& __cordl_internal_get_localSpecialVoice() ;

constexpr float_t const& __cordl_internal_get_localVoiceVol() const;

constexpr float_t& __cordl_internal_get_localVoiceVol() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onEndReceiveing() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onEndReceiveing() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onStartReceiveing() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onStartReceiveing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_onWhenReceiving() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_onWhenReceiving() ;

constexpr ::UnityW<::GlobalNamespace::RadioDisplay> const& __cordl_internal_get_radioDisplay() const;

constexpr ::UnityW<::GlobalNamespace::RadioDisplay>& __cordl_internal_get_radioDisplay() ;

constexpr ::StringW const& __cordl_internal_get_roomName() const;

constexpr ::StringW& __cordl_internal_get_roomName() ;

constexpr ::UnityW<::GlobalNamespace::TextChatSource> const& __cordl_internal_get_textChatSource() const;

constexpr ::UnityW<::GlobalNamespace::TextChatSource>& __cordl_internal_get_textChatSource() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textReceiveSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textReceiveSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textSentSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textSentSound() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr ::UnityW<::GlobalNamespace::VoicePlayer> const& __cordl_internal_get_voicePlayer() const;

constexpr ::UnityW<::GlobalNamespace::VoicePlayer>& __cordl_internal_get_voicePlayer() ;

constexpr void __cordl_internal_set__cachedVoiceType(::GlobalNamespace::VoicePlayer_VoicePlayerType  value) ;

constexpr void __cordl_internal_set__feedbackSimulSource(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__feedbackSource(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_feedbackSimulSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_feedbackSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_fullDuplex(bool  value) ;

constexpr void __cordl_internal_set_isBroadcasting(bool  value) ;

constexpr void __cordl_internal_set_isInDeadZone(bool  value) ;

constexpr void __cordl_internal_set_isReceiveing(bool  value) ;

constexpr void __cordl_internal_set_isWaitingForMessageEnd(bool  value) ;

constexpr void __cordl_internal_set_latestBroadcastPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_localSpecialVoice(bool  value) ;

constexpr void __cordl_internal_set_localVoiceVol(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onEndReceiveing(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onStartReceiveing(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onWhenReceiving(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_radioDisplay(::UnityW<::GlobalNamespace::RadioDisplay>  value) ;

constexpr void __cordl_internal_set_roomName(::StringW  value) ;

constexpr void __cordl_internal_set_textChatSource(::UnityW<::GlobalNamespace::TextChatSource>  value) ;

constexpr void __cordl_internal_set_textReceiveSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_textSentSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_voicePlayer(::UnityW<::GlobalNamespace::VoicePlayer>  value) ;

/// @brief Method .ctor, addr 0x1804142f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>* getStaticF_allRadios() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>* getStaticF_onChange() ;

static inline void setStaticF_allRadios(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*  value) ;

static inline void setStaticF_onChange(::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadioVoiceAssigner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadioVoiceAssigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioVoiceAssigner(RadioVoiceAssigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioVoiceAssigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioVoiceAssigner(RadioVoiceAssigner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5116};

/// @brief Field roomName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___roomName;

/// @brief Field trackedStateSystem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field onWhenReceiving, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___onWhenReceiving;

/// @brief Field radioDisplay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RadioDisplay>  ___radioDisplay;

/// @brief Field onStartReceiveing, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onStartReceiveing;

/// @brief Field onEndReceiveing, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onEndReceiveing;

/// @brief Field textChatSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextChatSource>  ___textChatSource;

/// @brief Field feedbackSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___feedbackSound;

/// @brief Field feedbackSimulSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___feedbackSimulSound;

/// @brief Field voicePlayer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VoicePlayer>  ___voicePlayer;

/// @brief Field _cachedVoiceType, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::VoicePlayer_VoicePlayerType  ____cachedVoiceType;

/// @brief Field localSpecialVoice, offset: 0x74, size: 0x1, def value: None
 bool  ___localSpecialVoice;

/// @brief Field textSentSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textSentSound;

/// @brief Field textReceiveSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textReceiveSound;

/// @brief Field localVoiceVol, offset: 0x88, size: 0x4, def value: None
 float_t  ___localVoiceVol;

/// @brief Field fullDuplex, offset: 0x8c, size: 0x1, def value: None
 bool  ___fullDuplex;

/// @brief Field logVerbose, offset: 0x8d, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field latestBroadcastPlayer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___latestBroadcastPlayer;

/// @brief Field isReceiveing, offset: 0x98, size: 0x1, def value: None
 bool  ___isReceiveing;

/// @brief Field isWaitingForMessageEnd, offset: 0x99, size: 0x1, def value: None
 bool  ___isWaitingForMessageEnd;

/// @brief Field isInDeadZone, offset: 0x9a, size: 0x1, def value: None
 bool  ___isInDeadZone;

/// @brief Field _feedbackSource, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____feedbackSource;

/// @brief Field _feedbackSimulSource, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____feedbackSimulSource;

/// @brief Field isBroadcasting, offset: 0xb0, size: 0x1, def value: None
 bool  ___isBroadcasting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___roomName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___trackedStateSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___onWhenReceiving) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___radioDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___onStartReceiveing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___onEndReceiveing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___textChatSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___feedbackSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___feedbackSimulSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___voicePlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ____cachedVoiceType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___localSpecialVoice) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___textSentSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___textReceiveSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___localVoiceVol) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___fullDuplex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___logVerbose) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___latestBroadcastPlayer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___isReceiveing) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___isWaitingForMessageEnd) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___isInDeadZone) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ____feedbackSource) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ____feedbackSimulSource) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioVoiceAssigner, ___isBroadcasting) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioVoiceAssigner) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
