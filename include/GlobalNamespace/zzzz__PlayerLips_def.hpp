#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLips.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLips)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace Dissonance {
class VoiceBroadcastTrigger;
}
namespace Dissonance {
class VoicePlayerState;
}
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class FixedSizeFloatQueue;
}
namespace GlobalNamespace {
class IVoiceDataProvider;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerLips__AsyncOnBlockListChanged_d__84;
}
namespace GlobalNamespace {
class PlayerVoicePlaybackControl;
}
namespace GlobalNamespace {
class VoicePlayer;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLips;
}
namespace GlobalNamespace {
struct PlayerLips__AsyncOnBlockListChanged_d__84;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerLips*);
MARK_VAL_T(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLips*, "", "PlayerLips");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84, "", "PlayerLips/<AsyncOnBlockListChanged>d__84");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerLips/<AsyncOnBlockListChanged>d__84
struct CORDL_TYPE PlayerLips__AsyncOnBlockListChanged_d__84 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18035c080, size 0x600, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerLips__AsyncOnBlockListChanged_d__84() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlayerLips*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlayerLips__AsyncOnBlockListChanged_d__84(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::GlobalNamespace::PlayerLips*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::PlayerLips*  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PropertyBlockHelper, System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLips
class CORDL_TYPE PlayerLips : public ::System::Object {
public:
// Declarations
using _AsyncOnBlockListChanged_d__84 = ::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84;

/// @brief Field BulgeAmplitudeShaderProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BulgeAmplitudeShaderProperty, put=setStaticF_BulgeAmplitudeShaderProperty)) int32_t  BulgeAmplitudeShaderProperty;

/// @brief Field BulgeCenterShaderProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BulgeCenterShaderProperty, put=setStaticF_BulgeCenterShaderProperty)) int32_t  BulgeCenterShaderProperty;

/// @brief Field BulgeWidthShaderProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BulgeWidthShaderProperty, put=setStaticF_BulgeWidthShaderProperty)) int32_t  BulgeWidthShaderProperty;

/// @brief Field OnChangePlayerSilence, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnChangePlayerSilence, put=setStaticF_OnChangePlayerSilence)) ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  OnChangePlayerSilence;

 __declspec(property(get=get_VoiceDataProvider)) ::GlobalNamespace::IVoiceDataProvider*  VoiceDataProvider;

/// @brief Field _activeVoicePlayers, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeVoicePlayers, put=__cordl_internal_set__activeVoicePlayers)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>*  _activeVoicePlayers;

/// @brief Field _amplitudeQueue, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__amplitudeQueue, put=__cordl_internal_set__amplitudeQueue)) ::GlobalNamespace::FixedSizeFloatQueue*  _amplitudeQueue;

/// @brief Field <amplitude>k__BackingField, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitude_k__BackingField, put=__cordl_internal_set__amplitude_k__BackingField)) float_t  _amplitude_k__BackingField;

/// @brief Field <isEncountered>k__BackingField, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEncountered_k__BackingField, put=__cordl_internal_set__isEncountered_k__BackingField)) bool  _isEncountered_k__BackingField;

/// @brief Field _isSilenced, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSilenced, put=__cordl_internal_set__isSilenced)) bool  _isSilenced;

/// @brief Field <playerVoicePlaybackControl>k__BackingField, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerVoicePlaybackControl_k__BackingField, put=__cordl_internal_set__playerVoicePlaybackControl_k__BackingField)) ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  _playerVoicePlaybackControl_k__BackingField;

/// @brief Field <useMuteNose>k__BackingField, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMuteNose_k__BackingField, put=__cordl_internal_set__useMuteNose_k__BackingField)) bool  _useMuteNose_k__BackingField;

 __declspec(property(get=get_amplitude, put=set_amplitude)) float_t  amplitude;

/// @brief Field audibility, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_audibility, put=__cordl_internal_set_audibility)) float_t  audibility;

/// @brief Field broadcastTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_broadcastTrigger, put=__cordl_internal_set_broadcastTrigger)) ::UnityW<::Dissonance::VoiceBroadcastTrigger>  broadcastTrigger;

/// @brief Field bulgeAmplitudeCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bulgeAmplitudeCurve, put=__cordl_internal_set_bulgeAmplitudeCurve)) ::UnityEngine::AnimationCurve*  bulgeAmplitudeCurve;

/// @brief Field bulgeCenterCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bulgeCenterCurve, put=__cordl_internal_set_bulgeCenterCurve)) ::UnityEngine::AnimationCurve*  bulgeCenterCurve;

/// @brief Field bulgeWidthCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bulgeWidthCurve, put=__cordl_internal_set_bulgeWidthCurve)) ::UnityEngine::AnimationCurve*  bulgeWidthCurve;

/// @brief Field dissonancePlayer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dissonancePlayer, put=__cordl_internal_set_dissonancePlayer)) ::Dissonance::IDissonancePlayer*  dissonancePlayer;

/// @brief Field extendoCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendoCurve, put=__cordl_internal_set_extendoCurve)) ::UnityEngine::AnimationCurve*  extendoCurve;

/// @brief Field isBlocked, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBlocked, put=__cordl_internal_set_isBlocked)) bool  isBlocked;

 __declspec(property(get=get_isContentRestricted)) bool  isContentRestricted;

 __declspec(property(get=get_isEncountered, put=set_isEncountered)) bool  isEncountered;

 __declspec(property(get=get_isMuted)) bool  isMuted;

 __declspec(property(get=get_isSilenced, put=set_isSilenced)) bool  isSilenced;

/// @brief Field isSpeakingInto, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_isSpeakingInto, put=__cordl_internal_set_isSpeakingInto)) ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  isSpeakingInto;

/// @brief Field lipTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lipTransform, put=__cordl_internal_set_lipTransform)) ::UnityW<::UnityEngine::Transform>  lipTransform;

/// @brief Field lipsLocalPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lipsLocalPosition, put=__cordl_internal_set_lipsLocalPosition)) ::UnityEngine::Vector3  lipsLocalPosition;

/// @brief Field lipsSmoothTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lipsSmoothTime, put=__cordl_internal_set_lipsSmoothTime)) float_t  lipsSmoothTime;

/// @brief Field lipsVelocity, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lipsVelocity, put=__cordl_internal_set_lipsVelocity)) float_t  lipsVelocity;

/// @brief Field localIsMuted, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_localIsMuted, put=__cordl_internal_set_localIsMuted)) bool  localIsMuted;

/// @brief Field logAmplitude, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get_logAmplitude, put=__cordl_internal_set_logAmplitude)) bool  logAmplitude;

/// @brief Field logAudibility, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_logAudibility, put=__cordl_internal_set_logAudibility)) bool  logAudibility;

/// @brief Field logVerbose, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field muteBulgeAmplitude, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_muteBulgeAmplitude, put=__cordl_internal_set_muteBulgeAmplitude)) float_t  muteBulgeAmplitude;

/// @brief Field muteBulgeCenter, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_muteBulgeCenter, put=__cordl_internal_set_muteBulgeCenter)) float_t  muteBulgeCenter;

/// @brief Field muteBulgeWidth, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_muteBulgeWidth, put=__cordl_internal_set_muteBulgeWidth)) float_t  muteBulgeWidth;

/// @brief Field muteSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteSound, put=__cordl_internal_set_muteSound)) ::UnityW<::GlobalNamespace::AudioAsset>  muteSound;

/// @brief Field mutedLocalPosition, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_mutedLocalPosition, put=__cordl_internal_set_mutedLocalPosition)) ::UnityEngine::Vector3  mutedLocalPosition;

/// @brief Field mutedLocalScale, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_mutedLocalScale, put=__cordl_internal_set_mutedLocalScale)) ::UnityEngine::Vector3  mutedLocalScale;

/// @brief Field playerCharacter, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

 __declspec(property(get=get_playerVoicePlaybackControl, put=set_playerVoicePlaybackControl)) ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  playerVoicePlaybackControl;

/// @brief Field propertyBlockHelpers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelpers, put=__cordl_internal_set_propertyBlockHelpers)) ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  propertyBlockHelpers;

/// @brief Field scaleCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleCurve, put=__cordl_internal_set_scaleCurve)) ::UnityEngine::AnimationCurve*  scaleCurve;

/// @brief Field sensitivity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivity, put=__cordl_internal_set_sensitivity)) float_t  sensitivity;

/// @brief Field smoothLipsValue, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothLipsValue, put=__cordl_internal_set_smoothLipsValue)) float_t  smoothLipsValue;

/// @brief Field unmuteSound, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unmuteSound, put=__cordl_internal_set_unmuteSound)) ::UnityW<::GlobalNamespace::AudioAsset>  unmuteSound;

 __declspec(property(get=get_useMuteNose, put=set_useMuteNose)) bool  useMuteNose;

/// @brief Field voicePlayerState, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_voicePlayerState, put=__cordl_internal_set_voicePlayerState)) ::Dissonance::VoicePlayerState*  voicePlayerState;

/// @brief Method AsyncOnBlockListChanged, addr 0x1803508b0, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid AsyncOnBlockListChanged() ;

/// @brief Method AudioGetXCallback, addr 0x180350920, size 0xe0, virtual false, abstract: false, final false
inline bool AudioGetXCallback(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method GetIsSpeakingInto, addr 0x180350a00, size 0x200, virtual false, abstract: false, final false
inline bool GetIsSpeakingInto(::StringW  roomName) ;

/// @brief Method Initialize, addr 0x180350d20, size 0x2c0, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method InitializeBlocking, addr 0x180350c00, size 0x120, virtual false, abstract: false, final false
inline void InitializeBlocking() ;

/// @brief Method IsAudibleInAnyWay, addr 0x180350fe0, size 0x110, virtual false, abstract: false, final false
inline bool IsAudibleInAnyWay() ;

/// @brief Method IsInEncounterDistance, addr 0x1803510f0, size 0xe0, virtual false, abstract: false, final false
inline bool IsInEncounterDistance() ;

static inline ::GlobalNamespace::PlayerLips* New_ctor() ;

/// @brief Method OnBlockListChanged, addr 0x1803511d0, size 0x70, virtual false, abstract: false, final false
inline void OnBlockListChanged() ;

/// @brief Method OnDestroy, addr 0x180351240, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlatformUserIdChanged, addr 0x1803511d0, size 0x70, virtual false, abstract: false, final false
inline void OnPlatformUserIdChanged(uint64_t  userId) ;

/// @brief Method OnSetIdentifier, addr 0x180351300, size 0x80, virtual false, abstract: false, final false
inline void OnSetIdentifier() ;

/// @brief Method RegisterVoicePlayer, addr 0x180351380, size 0x30, virtual false, abstract: false, final false
inline void RegisterVoicePlayer(::GlobalNamespace::VoicePlayer*  voicePlayer) ;

/// @brief Method Set2DVoice, addr 0x1803513b0, size 0xb0, virtual false, abstract: false, final false
inline void Set2DVoice(bool  is2D) ;

/// @brief Method SetGhost, addr 0x180351460, size 0x1c0, virtual false, abstract: false, final false
inline void SetGhost(bool  isGhost) ;

/// @brief Method SetIsMuted, addr 0x180351620, size 0x150, virtual false, abstract: false, final false
inline void SetIsMuted(bool  isMuted, bool  noAudio) ;

/// @brief Method SetOutdoorEcho, addr 0x180351770, size 0x140, virtual false, abstract: false, final false
inline void SetOutdoorEcho(bool  playEcho) ;

/// @brief Method SetTalkingIntoRadio, addr 0x1803518b0, size 0x1a0, virtual false, abstract: false, final false
inline void SetTalkingIntoRadio(bool  isTalking, ::StringW  radioRoomName) ;

/// @brief Method ShowContentRestrictionMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ShowContentRestrictionMessage() ;

/// @brief Method UnregisiterVoicePlayer, addr 0x180351a60, size 0x30, virtual false, abstract: false, final false
inline void UnregisiterVoicePlayer(::GlobalNamespace::VoicePlayer*  voicePlayer) ;

/// @brief Method Update, addr 0x180352100, size 0x800, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateEncountered, addr 0x180351a90, size 0x240, virtual false, abstract: false, final false
inline void UpdateEncountered() ;

/// @brief Method UpdateNoseVisuals, addr 0x180351cd0, size 0x430, virtual false, abstract: false, final false
inline void UpdateNoseVisuals(float_t  amplitude, bool  muted) ;

/// @brief Method <AsyncOnBlockListChanged>b__84_0, addr 0x180351a50, size 0x10, virtual false, abstract: false, final false
inline bool _AsyncOnBlockListChanged_b__84_0() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>* const& __cordl_internal_get__activeVoicePlayers() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>*& __cordl_internal_get__activeVoicePlayers() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__amplitudeQueue() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__amplitudeQueue() ;

constexpr float_t const& __cordl_internal_get__amplitude_k__BackingField() const;

constexpr float_t& __cordl_internal_get__amplitude_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isEncountered_k__BackingField() const;

constexpr bool& __cordl_internal_get__isEncountered_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isSilenced() const;

constexpr bool& __cordl_internal_get__isSilenced() ;

constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> const& __cordl_internal_get__playerVoicePlaybackControl_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>& __cordl_internal_get__playerVoicePlaybackControl_k__BackingField() ;

constexpr bool const& __cordl_internal_get__useMuteNose_k__BackingField() const;

constexpr bool& __cordl_internal_get__useMuteNose_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_audibility() const;

constexpr float_t& __cordl_internal_get_audibility() ;

constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger> const& __cordl_internal_get_broadcastTrigger() const;

constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger>& __cordl_internal_get_broadcastTrigger() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_bulgeAmplitudeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bulgeAmplitudeCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_bulgeCenterCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bulgeCenterCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_bulgeWidthCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bulgeWidthCurve() ;

constexpr ::Dissonance::IDissonancePlayer* const& __cordl_internal_get_dissonancePlayer() const;

constexpr ::Dissonance::IDissonancePlayer*& __cordl_internal_get_dissonancePlayer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_extendoCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_extendoCurve() ;

constexpr bool const& __cordl_internal_get_isBlocked() const;

constexpr bool& __cordl_internal_get_isBlocked() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* const& __cordl_internal_get_isSpeakingInto() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*& __cordl_internal_get_isSpeakingInto() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lipTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lipTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lipsLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lipsLocalPosition() ;

constexpr float_t const& __cordl_internal_get_lipsSmoothTime() const;

constexpr float_t& __cordl_internal_get_lipsSmoothTime() ;

constexpr float_t const& __cordl_internal_get_lipsVelocity() const;

constexpr float_t& __cordl_internal_get_lipsVelocity() ;

constexpr bool const& __cordl_internal_get_localIsMuted() const;

constexpr bool& __cordl_internal_get_localIsMuted() ;

constexpr bool const& __cordl_internal_get_logAmplitude() const;

constexpr bool& __cordl_internal_get_logAmplitude() ;

constexpr bool const& __cordl_internal_get_logAudibility() const;

constexpr bool& __cordl_internal_get_logAudibility() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_muteBulgeAmplitude() const;

constexpr float_t& __cordl_internal_get_muteBulgeAmplitude() ;

constexpr float_t const& __cordl_internal_get_muteBulgeCenter() const;

constexpr float_t& __cordl_internal_get_muteBulgeCenter() ;

constexpr float_t const& __cordl_internal_get_muteBulgeWidth() const;

constexpr float_t& __cordl_internal_get_muteBulgeWidth() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_muteSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_muteSound() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mutedLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mutedLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mutedLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mutedLocalScale() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& __cordl_internal_get_propertyBlockHelpers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& __cordl_internal_get_propertyBlockHelpers() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve() ;

constexpr float_t const& __cordl_internal_get_sensitivity() const;

constexpr float_t& __cordl_internal_get_sensitivity() ;

constexpr float_t const& __cordl_internal_get_smoothLipsValue() const;

constexpr float_t& __cordl_internal_get_smoothLipsValue() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_unmuteSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_unmuteSound() ;

constexpr ::Dissonance::VoicePlayerState* const& __cordl_internal_get_voicePlayerState() const;

constexpr ::Dissonance::VoicePlayerState*& __cordl_internal_get_voicePlayerState() ;

constexpr void __cordl_internal_set__activeVoicePlayers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>*  value) ;

constexpr void __cordl_internal_set__amplitudeQueue(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__amplitude_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__isEncountered_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isSilenced(bool  value) ;

constexpr void __cordl_internal_set__playerVoicePlaybackControl_k__BackingField(::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  value) ;

constexpr void __cordl_internal_set__useMuteNose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_audibility(float_t  value) ;

constexpr void __cordl_internal_set_broadcastTrigger(::UnityW<::Dissonance::VoiceBroadcastTrigger>  value) ;

constexpr void __cordl_internal_set_bulgeAmplitudeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_bulgeCenterCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_bulgeWidthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_dissonancePlayer(::Dissonance::IDissonancePlayer*  value) ;

constexpr void __cordl_internal_set_extendoCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_isBlocked(bool  value) ;

constexpr void __cordl_internal_set_isSpeakingInto(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  value) ;

constexpr void __cordl_internal_set_lipTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lipsLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lipsSmoothTime(float_t  value) ;

constexpr void __cordl_internal_set_lipsVelocity(float_t  value) ;

constexpr void __cordl_internal_set_localIsMuted(bool  value) ;

constexpr void __cordl_internal_set_logAmplitude(bool  value) ;

constexpr void __cordl_internal_set_logAudibility(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_muteBulgeAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_muteBulgeCenter(float_t  value) ;

constexpr void __cordl_internal_set_muteBulgeWidth(float_t  value) ;

constexpr void __cordl_internal_set_muteSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_mutedLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mutedLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_propertyBlockHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value) ;

constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_sensitivity(float_t  value) ;

constexpr void __cordl_internal_set_smoothLipsValue(float_t  value) ;

constexpr void __cordl_internal_set_unmuteSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_voicePlayerState(::Dissonance::VoicePlayerState*  value) ;

/// @brief Method .ctor, addr 0x180352970, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_BulgeAmplitudeShaderProperty() ;

static inline int32_t getStaticF_BulgeCenterShaderProperty() ;

static inline int32_t getStaticF_BulgeWidthShaderProperty() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* getStaticF_OnChangePlayerSilence() ;

/// @brief Method get_VoiceDataProvider, addr 0x180352a00, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::IVoiceDataProvider* get_VoiceDataProvider() ;

/// @brief Method get_amplitude, addr 0x180352a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_amplitude() ;

/// @brief Method get_isContentRestricted, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_isContentRestricted() ;

/// @brief Method get_isEncountered, addr 0x180352a90, size 0x10, virtual false, abstract: false, final false
inline bool get_isEncountered() ;

/// @brief Method get_isMuted, addr 0x180352aa0, size 0x60, virtual false, abstract: false, final false
inline bool get_isMuted() ;

/// @brief Method get_isSilenced, addr 0x180352b00, size 0x10, virtual false, abstract: false, final false
inline bool get_isSilenced() ;

/// @brief Method get_playerVoicePlaybackControl, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> get_playerVoicePlaybackControl() ;

/// @brief Method get_useMuteNose, addr 0x180352b10, size 0x10, virtual false, abstract: false, final false
inline bool get_useMuteNose() ;

static inline void setStaticF_BulgeAmplitudeShaderProperty(int32_t  value) ;

static inline void setStaticF_BulgeCenterShaderProperty(int32_t  value) ;

static inline void setStaticF_BulgeWidthShaderProperty(int32_t  value) ;

static inline void setStaticF_OnChangePlayerSilence(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

/// @brief Method set_amplitude, addr 0x180352b20, size 0x10, virtual false, abstract: false, final false
inline void set_amplitude(float_t  value) ;

/// @brief Method set_isEncountered, addr 0x180352b30, size 0x10, virtual false, abstract: false, final false
inline void set_isEncountered(bool  value) ;

/// @brief Method set_isSilenced, addr 0x180352b40, size 0xd0, virtual false, abstract: false, final false
inline void set_isSilenced(bool  value) ;

/// @brief Method set_playerVoicePlaybackControl, addr 0x180352c10, size 0x20, virtual false, abstract: false, final false
inline void set_playerVoicePlaybackControl(::GlobalNamespace::PlayerVoicePlaybackControl*  value) ;

/// @brief Method set_useMuteNose, addr 0x180352c30, size 0x10, virtual false, abstract: false, final false
inline void set_useMuteNose(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLips() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLips", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLips(PlayerLips && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLips", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLips(PlayerLips const& ) = delete;

/// @brief Field AUDIBILITY_TEST_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  AUDIBILITY_TEST_THRESHOLD{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5466};

/// @brief Field aliveToken offset 0xffffffff size 0x8
static constexpr ::ConstString  aliveToken{u"alive"};

/// @brief Field echoToken offset 0xffffffff size 0x8
static constexpr ::ConstString  echoToken{u"echo"};

/// @brief Field ghostToken offset 0xffffffff size 0x8
static constexpr ::ConstString  ghostToken{u"ghost"};

/// @brief Field lipTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lipTransform;

/// @brief Field propertyBlockHelpers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  ___propertyBlockHelpers;

/// @brief Field broadcastTrigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Dissonance::VoiceBroadcastTrigger>  ___broadcastTrigger;

/// @brief Field sensitivity, offset: 0x28, size: 0x4, def value: None
 float_t  ___sensitivity;

/// @brief Field lipsLocalPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lipsLocalPosition;

/// @brief Field extendoCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___extendoCurve;

/// @brief Field scaleCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___scaleCurve;

/// @brief Field bulgeAmplitudeCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___bulgeAmplitudeCurve;

/// @brief Field bulgeCenterCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___bulgeCenterCurve;

/// @brief Field bulgeWidthCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___bulgeWidthCurve;

/// @brief Field lipsSmoothTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___lipsSmoothTime;

/// @brief Field localIsMuted, offset: 0x64, size: 0x1, def value: None
 bool  ___localIsMuted;

/// @brief Field smoothLipsValue, offset: 0x68, size: 0x4, def value: None
 float_t  ___smoothLipsValue;

/// @brief Field lipsVelocity, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lipsVelocity;

/// @brief Field _isSilenced, offset: 0x70, size: 0x1, def value: None
 bool  ____isSilenced;

/// @brief Field <isEncountered>k__BackingField, offset: 0x71, size: 0x1, def value: None
 bool  ____isEncountered_k__BackingField;

/// @brief Field isBlocked, offset: 0x72, size: 0x1, def value: None
 bool  ___isBlocked;

/// @brief Field mutedLocalPosition, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mutedLocalPosition;

/// @brief Field mutedLocalScale, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mutedLocalScale;

/// @brief Field muteBulgeAmplitude, offset: 0x8c, size: 0x4, def value: None
 float_t  ___muteBulgeAmplitude;

/// @brief Field muteBulgeCenter, offset: 0x90, size: 0x4, def value: None
 float_t  ___muteBulgeCenter;

/// @brief Field muteBulgeWidth, offset: 0x94, size: 0x4, def value: None
 float_t  ___muteBulgeWidth;

/// @brief Field muteSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___muteSound;

/// @brief Field unmuteSound, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___unmuteSound;

/// @brief Field logVerbose, offset: 0xa8, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logAudibility, offset: 0xa9, size: 0x1, def value: None
 bool  ___logAudibility;

/// @brief Field logAmplitude, offset: 0xaa, size: 0x1, def value: None
 bool  ___logAmplitude;

/// @brief Field playerCharacter, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field voicePlayerState, offset: 0xb8, size: 0x8, def value: None
 ::Dissonance::VoicePlayerState*  ___voicePlayerState;

/// @brief Field dissonancePlayer, offset: 0xc0, size: 0x8, def value: None
 ::Dissonance::IDissonancePlayer*  ___dissonancePlayer;

/// @brief Field audibility, offset: 0xc8, size: 0x4, def value: None
 float_t  ___audibility;

/// @brief Field <amplitude>k__BackingField, offset: 0xcc, size: 0x4, def value: None
 float_t  ____amplitude_k__BackingField;

/// @brief Field <useMuteNose>k__BackingField, offset: 0xd0, size: 0x1, def value: None
 bool  ____useMuteNose_k__BackingField;

/// @brief Field isSpeakingInto, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  ___isSpeakingInto;

/// @brief Field <playerVoicePlaybackControl>k__BackingField, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  ____playerVoicePlaybackControl_k__BackingField;

/// @brief Field _activeVoicePlayers, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>*  ____activeVoicePlayers;

/// @brief Field _amplitudeQueue, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::FixedSizeFloatQueue*  ____amplitudeQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLips, ___lipTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___propertyBlockHelpers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___broadcastTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___sensitivity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___lipsLocalPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___extendoCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___scaleCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___bulgeAmplitudeCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___bulgeCenterCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___bulgeWidthCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___lipsSmoothTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___localIsMuted) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___smoothLipsValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___lipsVelocity) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____isSilenced) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____isEncountered_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___isBlocked) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___mutedLocalPosition) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___mutedLocalScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___muteBulgeAmplitude) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___muteBulgeCenter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___muteBulgeWidth) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___muteSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___unmuteSound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___logVerbose) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___logAudibility) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___logAmplitude) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___playerCharacter) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___voicePlayerState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___dissonancePlayer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___audibility) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____amplitude_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____useMuteNose_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ___isSpeakingInto) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____playerVoicePlaybackControl_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____activeVoicePlayers) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLips, ____amplitudeQueue) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLips) == 0xf8, "Size mismatch!");

} // namespace end def GlobalNamespace
