#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BPMData_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicGroup)
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class MusicPlayer;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicGroup*, "", "MusicGroup");
// Dependencies BPMData, SoundCue, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicGroup
class CORDL_TYPE MusicGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field BPM, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BPM, put=__cordl_internal_set_BPM)) ::ArrayW<::GlobalNamespace::BPMData>  BPM;

 __declspec(property(get=get_CurrentBeat, put=set_CurrentBeat)) int32_t  CurrentBeat;

/// @brief Field DiscoIntensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_DiscoIntensity, put=__cordl_internal_set_DiscoIntensity)) float_t  DiscoIntensity;

 __declspec(property(get=get_Duration, put=set_Duration)) float_t  Duration;

/// @brief Field MonoMix, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MonoMix, put=__cordl_internal_set_MonoMix)) ::UnityW<::GlobalNamespace::SoundCue>  MonoMix;

/// @brief Field OnBeat, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBeat, put=__cordl_internal_set_OnBeat)) ::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  OnBeat;

/// @brief Field OnNoBeatAudible, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNoBeatAudible, put=__cordl_internal_set_OnNoBeatAudible)) ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  OnNoBeatAudible;

/// @brief Field SpeakerStems, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpeakerStems, put=__cordl_internal_set_SpeakerStems)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  SpeakerStems;

 __declspec(property(get=get_SyncPlayers, put=set_SyncPlayers)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  SyncPlayers;

/// @brief Field SyncTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SyncTime, put=__cordl_internal_set_SyncTime)) float_t  SyncTime;

/// @brief Field SyncToTimeOfDay, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_SyncToTimeOfDay, put=__cordl_internal_set_SyncToTimeOfDay)) bool  SyncToTimeOfDay;

 __declspec(property(get=get_TransitionVol_music, put=set_TransitionVol_music)) ::GlobalNamespace::AudioVolume*  TransitionVol_music;

/// @brief Field <AllBeatsGroups>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AllBeatsGroups_k__BackingField, put=setStaticF__AllBeatsGroups_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  _AllBeatsGroups_k__BackingField;

/// @brief Field <AllMusicGroups>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AllMusicGroups_k__BackingField, put=setStaticF__AllMusicGroups_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  _AllMusicGroups_k__BackingField;

/// @brief Field <CurrentBeat>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentBeat_k__BackingField, put=__cordl_internal_set__CurrentBeat_k__BackingField)) int32_t  _CurrentBeat_k__BackingField;

/// @brief Field <Duration>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Duration_k__BackingField, put=__cordl_internal_set__Duration_k__BackingField)) float_t  _Duration_k__BackingField;

/// @brief Field <SyncPlayers>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__SyncPlayers_k__BackingField, put=__cordl_internal_set__SyncPlayers_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  _SyncPlayers_k__BackingField;

/// @brief Field <TransitionVol_music>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__TransitionVol_music_k__BackingField, put=__cordl_internal_set__TransitionVol_music_k__BackingField)) ::GlobalNamespace::AudioVolume*  _TransitionVol_music_k__BackingField;

/// @brief Field _anyAudible, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__anyAudible, put=__cordl_internal_set__anyAudible)) bool  _anyAudible;

/// @brief Field _steering, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__steering, put=__cordl_internal_set__steering)) bool  _steering;

/// @brief Method BeatsUpdate, addr 0x1803d5d80, size 0x340, virtual false, abstract: false, final false
inline void BeatsUpdate() ;

/// @brief Method GetPlayingPlayerTime, addr 0x1803d60c0, size 0xd0, virtual false, abstract: false, final false
inline float_t GetPlayingPlayerTime() ;

/// @brief Method GetStem, addr 0x1803d6190, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundCue> GetStem(int32_t  index) ;

/// @brief Method GetSyncTime, addr 0x1803d61c0, size 0xc0, virtual false, abstract: false, final false
inline float_t GetSyncTime() ;

static inline ::GlobalNamespace::MusicGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803d6280, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d6310, size 0x350, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SteerGroup, addr 0x1803d6660, size 0x330, virtual false, abstract: false, final false
inline bool SteerGroup() ;

/// @brief Method StopSteering, addr 0x1803d6990, size 0xb0, virtual false, abstract: false, final false
inline void StopSteering() ;

/// @brief Method SubscribeToOnBeatEvent, addr 0x1803d6a40, size 0x140, virtual false, abstract: false, final false
inline void SubscribeToOnBeatEvent(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  onBeat, ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  onNoBeat) ;

/// @brief Method SyncGroup, addr 0x1803d6b80, size 0x110, virtual false, abstract: false, final false
inline void SyncGroup() ;

/// @brief Method TransitionVolReset, addr 0x1803d6c90, size 0x30, virtual false, abstract: false, final false
inline void TransitionVolReset() ;

/// @brief Method UnsubscribeFromOnBeatEvent, addr 0x1803d6cc0, size 0x30, virtual false, abstract: false, final false
inline void UnsubscribeFromOnBeatEvent(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  onBeat, ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  onNoBeat) ;

/// @brief Method Update, addr 0x1803d6cf0, size 0x450, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::GlobalNamespace::BPMData> const& __cordl_internal_get_BPM() const;

constexpr ::ArrayW<::GlobalNamespace::BPMData>& __cordl_internal_get_BPM() ;

constexpr float_t const& __cordl_internal_get_DiscoIntensity() const;

constexpr float_t& __cordl_internal_get_DiscoIntensity() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_MonoMix() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_MonoMix() ;

constexpr ::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>* const& __cordl_internal_get_OnBeat() const;

constexpr ::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*& __cordl_internal_get_OnBeat() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>* const& __cordl_internal_get_OnNoBeatAudible() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*& __cordl_internal_get_OnNoBeatAudible() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_SpeakerStems() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_SpeakerStems() ;

constexpr float_t const& __cordl_internal_get_SyncTime() const;

constexpr float_t& __cordl_internal_get_SyncTime() ;

constexpr bool const& __cordl_internal_get_SyncToTimeOfDay() const;

constexpr bool& __cordl_internal_get_SyncToTimeOfDay() ;

constexpr int32_t const& __cordl_internal_get__CurrentBeat_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentBeat_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Duration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Duration_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* const& __cordl_internal_get__SyncPlayers_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*& __cordl_internal_get__SyncPlayers_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__TransitionVol_music_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__TransitionVol_music_k__BackingField() ;

constexpr bool const& __cordl_internal_get__anyAudible() const;

constexpr bool& __cordl_internal_get__anyAudible() ;

constexpr bool const& __cordl_internal_get__steering() const;

constexpr bool& __cordl_internal_get__steering() ;

constexpr void __cordl_internal_set_BPM(::ArrayW<::GlobalNamespace::BPMData>  value) ;

constexpr void __cordl_internal_set_DiscoIntensity(float_t  value) ;

constexpr void __cordl_internal_set_MonoMix(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_OnBeat(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_OnNoBeatAudible(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

constexpr void __cordl_internal_set_SpeakerStems(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_SyncTime(float_t  value) ;

constexpr void __cordl_internal_set_SyncToTimeOfDay(bool  value) ;

constexpr void __cordl_internal_set__CurrentBeat_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Duration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SyncPlayers_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value) ;

constexpr void __cordl_internal_set__TransitionVol_music_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__anyAudible(bool  value) ;

constexpr void __cordl_internal_set__steering(bool  value) ;

/// @brief Method .ctor, addr 0x1803d71e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnBeat, addr 0x1803d7270, size 0x90, virtual false, abstract: false, final false
inline void add_OnBeat(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  value) ;

/// @brief Method add_OnNoBeatAudible, addr 0x1803d7300, size 0x90, virtual false, abstract: false, final false
inline void add_OnNoBeatAudible(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* getStaticF__AllBeatsGroups_k__BackingField() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* getStaticF__AllMusicGroups_k__BackingField() ;

/// @brief Method get_AllBeatsGroups, addr 0x1803d7390, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* get_AllBeatsGroups() ;

/// @brief Method get_AllMusicGroups, addr 0x1803d73d0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* get_AllMusicGroups() ;

/// @brief Method get_CurrentBeat, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentBeat() ;

/// @brief Method get_Duration, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_SyncPlayers, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* get_SyncPlayers() ;

/// @brief Method get_TransitionVol_music, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_TransitionVol_music() ;

/// @brief Method remove_OnBeat, addr 0x1803d7420, size 0x90, virtual false, abstract: false, final false
inline void remove_OnBeat(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  value) ;

/// @brief Method remove_OnNoBeatAudible, addr 0x1803d74b0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnNoBeatAudible(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

static inline void setStaticF__AllBeatsGroups_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

static inline void setStaticF__AllMusicGroups_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

/// @brief Method set_AllBeatsGroups, addr 0x1803d7540, size 0x60, virtual false, abstract: false, final false
static inline void set_AllBeatsGroups(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

/// @brief Method set_AllMusicGroups, addr 0x1803d75a0, size 0x50, virtual false, abstract: false, final false
static inline void set_AllMusicGroups(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

/// @brief Method set_CurrentBeat, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentBeat(int32_t  value) ;

/// @brief Method set_Duration, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Duration(float_t  value) ;

/// @brief Method set_SyncPlayers, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_SyncPlayers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value) ;

/// @brief Method set_TransitionVol_music, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_TransitionVol_music(::GlobalNamespace::AudioVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicGroup(MusicGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicGroup(MusicGroup const& ) = delete;

/// @brief Field NETWORK_SYNC_WINDOW offset 0xffffffff size 0x4
static constexpr float_t  NETWORK_SYNC_WINDOW{static_cast<float_t>(0.2f)};

/// @brief Field STEER_DEADBAND offset 0xffffffff size 0x4
static constexpr float_t  STEER_DEADBAND{static_cast<float_t>(0.005f)};

/// @brief Field STEER_GAIN offset 0xffffffff size 0x4
static constexpr float_t  STEER_GAIN{static_cast<float_t>(1.0f)};

/// @brief Field STEER_MAX_DRIFT offset 0xffffffff size 0x4
static constexpr float_t  STEER_MAX_DRIFT{static_cast<float_t>(0.05f)};

/// @brief Field STEER_MAX_NUDGE offset 0xffffffff size 0x4
static constexpr float_t  STEER_MAX_NUDGE{static_cast<float_t>(0.01f)};

/// @brief Field SYNC_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  SYNC_THRESHOLD{static_cast<float_t>(0.02f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4851};

/// @brief Field SyncTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___SyncTime;

/// @brief Field SyncToTimeOfDay, offset: 0x1c, size: 0x1, def value: None
 bool  ___SyncToTimeOfDay;

/// @brief Field MonoMix, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___MonoMix;

/// @brief Field BPM, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BPMData>  ___BPM;

/// @brief Field SpeakerStems, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___SpeakerStems;

/// @brief Field DiscoIntensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___DiscoIntensity;

/// @brief Field <Duration>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____Duration_k__BackingField;

/// @brief Field OnBeat, offset: 0x40, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  ___OnBeat;

/// @brief Field OnNoBeatAudible, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  ___OnNoBeatAudible;

/// @brief Field <CurrentBeat>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____CurrentBeat_k__BackingField;

/// @brief Field <SyncPlayers>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  ____SyncPlayers_k__BackingField;

/// @brief Field <TransitionVol_music>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____TransitionVol_music_k__BackingField;

/// @brief Field _anyAudible, offset: 0x68, size: 0x1, def value: None
 bool  ____anyAudible;

/// @brief Field _steering, offset: 0x69, size: 0x1, def value: None
 bool  ____steering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicGroup, ___SyncTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___SyncToTimeOfDay) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___MonoMix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___BPM) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___SpeakerStems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___DiscoIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ____Duration_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___OnBeat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ___OnNoBeatAudible) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ____CurrentBeat_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ____SyncPlayers_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ____TransitionVol_music_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ____anyAudible) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicGroup, ____steering) == 0x69, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicGroup) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
