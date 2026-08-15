#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbiencePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__OceanSoundSample_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbiencePlayer)
namespace GlobalNamespace {
struct AmbienceEmitters;
}
namespace GlobalNamespace {
class AmbiencePlayer_ScatterAmbienceRuntime;
}
namespace GlobalNamespace {
class AmbienceSampleData;
}
namespace GlobalNamespace {
struct AmbienceScatterEvent;
}
namespace GlobalNamespace {
class AmbienceSoundData;
}
namespace GlobalNamespace {
class AudioDynamicReverb;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class CustomCullingGroup;
}
namespace GlobalNamespace {
struct FootstepAudioReferences_VegetationType;
}
namespace GlobalNamespace {
class IAudioGUI;
}
namespace GlobalNamespace {
struct OceanSoundSample;
}
namespace GlobalNamespace {
class ScatterAmbienceRuntime_AmbiencePlayer___c;
}
namespace GlobalNamespace {
struct SplineSampleStruct;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AmbiencePlayer;
}
namespace GlobalNamespace {
class AmbiencePlayer_ScatterAmbienceRuntime;
}
namespace GlobalNamespace {
class ScatterAmbienceRuntime_AmbiencePlayer___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbiencePlayer*);
MARK_REF_T(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*);
MARK_REF_T(::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbiencePlayer*, "", "AmbiencePlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*, "", "AmbiencePlayer/ScatterAmbienceRuntime");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*, "", "AmbiencePlayer/ScatterAmbienceRuntime/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbiencePlayer/ScatterAmbienceRuntime/<>c
class CORDL_TYPE ScatterAmbienceRuntime_AmbiencePlayer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Action_1<double_t>*  __9__10_0;

static inline ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c* New_ctor() ;

/// @brief Method <GetDeterministicCueIndex>b__10_0, addr 0x1803298e0, size 0x90, virtual false, abstract: false, final false
inline void _GetDeterministicCueIndex_b__10_0(double_t  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c* getStaticF___9() ;

static inline ::System::Action_1<double_t>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*  value) ;

static inline void setStaticF___9__10_0(::System::Action_1<double_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatterAmbienceRuntime_AmbiencePlayer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatterAmbienceRuntime_AmbiencePlayer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatterAmbienceRuntime_AmbiencePlayer___c(ScatterAmbienceRuntime_AmbiencePlayer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatterAmbienceRuntime_AmbiencePlayer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatterAmbienceRuntime_AmbiencePlayer___c(ScatterAmbienceRuntime_AmbiencePlayer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4783};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AmbienceScatterEvent, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbiencePlayer/ScatterAmbienceRuntime
class CORDL_TYPE AmbiencePlayer_ScatterAmbienceRuntime : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c;

/// @brief Field CurrentIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentIndex, put=__cordl_internal_set_CurrentIndex)) int32_t  CurrentIndex;

/// @brief Field Events, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Events, put=__cordl_internal_set_Events)) ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  Events;

/// @brief Field LPMin, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_LPMin, put=__cordl_internal_set_LPMin)) float_t  LPMin;

/// @brief Field LastTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastTime, put=__cordl_internal_set_LastTime)) float_t  LastTime;

/// @brief Field Owner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Owner, put=__cordl_internal_set_Owner)) ::UnityW<::UnityEngine::Object>  Owner;

/// @brief Field PlayingSounds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayingSounds, put=__cordl_internal_set_PlayingSounds)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  PlayingSounds;

/// @brief Field Scatter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scatter, put=__cordl_internal_set_Scatter)) ::UnityW<::GlobalNamespace::AudioScatterContainer>  Scatter;

/// @brief Method GetDeterministicCueIndex, addr 0x180328350, size 0x360, virtual false, abstract: false, final false
inline int32_t GetDeterministicCueIndex(::GlobalNamespace::AudioRandomContainer*  container) ;

/// @brief Method GetX, addr 0x1803286b0, size 0xb0, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime* New_ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::UnityEngine::Object*  owner, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events, float_t  lpMin) ;

/// @brief Method Update, addr 0x180328790, size 0x760, virtual false, abstract: false, final false
inline void Update(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*  inRangePositions, float_t  time) ;

/// @brief Method <Update>g___clearRef|8_0, addr 0x180328760, size 0x30, virtual false, abstract: false, final false
static inline void _Update_g___clearRef_8_0(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*  s, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr int32_t const& __cordl_internal_get_CurrentIndex() const;

constexpr int32_t& __cordl_internal_get_CurrentIndex() ;

constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent> const& __cordl_internal_get_Events() const;

constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>& __cordl_internal_get_Events() ;

constexpr float_t const& __cordl_internal_get_LPMin() const;

constexpr float_t& __cordl_internal_get_LPMin() ;

constexpr float_t const& __cordl_internal_get_LastTime() const;

constexpr float_t& __cordl_internal_get_LastTime() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_Owner() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_Owner() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get_PlayingSounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get_PlayingSounds() ;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& __cordl_internal_get_Scatter() const;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& __cordl_internal_get_Scatter() ;

constexpr void __cordl_internal_set_CurrentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_Events(::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  value) ;

constexpr void __cordl_internal_set_LPMin(float_t  value) ;

constexpr void __cordl_internal_set_LastTime(float_t  value) ;

constexpr void __cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_PlayingSounds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set_Scatter(::UnityW<::GlobalNamespace::AudioScatterContainer>  value) ;

/// @brief Method .ctor, addr 0x180328ef0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::UnityEngine::Object*  owner, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events, float_t  lpMin) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbiencePlayer_ScatterAmbienceRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbiencePlayer_ScatterAmbienceRuntime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbiencePlayer_ScatterAmbienceRuntime(AmbiencePlayer_ScatterAmbienceRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbiencePlayer_ScatterAmbienceRuntime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbiencePlayer_ScatterAmbienceRuntime(AmbiencePlayer_ScatterAmbienceRuntime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4784};

/// @brief Field Scatter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ___Scatter;

/// @brief Field Events, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  ___Events;

/// @brief Field PlayingSounds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ___PlayingSounds;

/// @brief Field Owner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___Owner;

/// @brief Field CurrentIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___CurrentIndex;

/// @brief Field LastTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___LastTime;

/// @brief Field LPMin, offset: 0x38, size: 0x4, def value: None
 float_t  ___LPMin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___Scatter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___Events) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___PlayingSounds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___Owner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___CurrentIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___LastTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime, ___LPMin) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AmbiencePlayer::ScatterAmbienceRuntime, AudioSourceController, AudioVolume, OceanSoundSample, UnityEngine.BoundingSphere, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbiencePlayer
class CORDL_TYPE AmbiencePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScatterAmbienceRuntime = ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime;

 __declspec(property(get=get_CachedTransform, put=set_CachedTransform)) ::UnityW<::UnityEngine::Transform>  CachedTransform;

/// @brief Field DebugEmitters, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugEmitters, put=__cordl_internal_set_DebugEmitters)) bool  DebugEmitters;

/// @brief Field DebugFills, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugFills, put=__cordl_internal_set_DebugFills)) bool  DebugFills;

/// @brief Field DebugScatter, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugScatter, put=__cordl_internal_set_DebugScatter)) bool  DebugScatter;

/// @brief Field DebugWaves, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugWaves, put=__cordl_internal_set_DebugWaves)) bool  DebugWaves;

 __declspec(property(get=get_EmitterLookup, put=set_EmitterLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  EmitterLookup;

/// @brief Field EnableOffset, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableOffset, put=__cordl_internal_set_EnableOffset)) bool  EnableOffset;

 __declspec(property(get=get_GUIDebugMode, put=set_GUIDebugMode)) bool  GUIDebugMode;

 __declspec(property(get=get_GUIDebugScatter, put=set_GUIDebugScatter)) bool  GUIDebugScatter;

 __declspec(property(get=get_GUIScatterLog, put=set_GUIScatterLog)) ::System::Collections::Generic::List_1<::StringW>*  GUIScatterLog;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field Labels, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Labels, put=setStaticF_Labels)) ::ArrayW<::StringW>  Labels;

/// @brief Field LabelsWind, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LabelsWind, put=setStaticF_LabelsWind)) ::ArrayW<::StringW>  LabelsWind;

/// @brief Field MinHPLevel, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinHPLevel, put=__cordl_internal_set_MinHPLevel)) float_t  MinHPLevel;

/// @brief Field MinLPLevel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinLPLevel, put=__cordl_internal_set_MinLPLevel)) float_t  MinLPLevel;

/// @brief Field MinVegeVol, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinVegeVol, put=__cordl_internal_set_MinVegeVol)) float_t  MinVegeVol;

/// @brief Field RaycastLayer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_RaycastLayer, put=__cordl_internal_set_RaycastLayer)) ::UnityEngine::LayerMask  RaycastLayer;

/// @brief Field RaycastPos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RaycastPos, put=__cordl_internal_set_RaycastPos)) ::UnityW<::UnityEngine::Transform>  RaycastPos;

/// @brief Field SampleData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SampleData, put=__cordl_internal_set_SampleData)) ::UnityW<::GlobalNamespace::AmbienceSampleData>  SampleData;

/// @brief Field SoundData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SoundData, put=__cordl_internal_set_SoundData)) ::UnityW<::GlobalNamespace::AmbienceSoundData>  SoundData;

/// @brief Field <CachedTransform>k__BackingField, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedTransform_k__BackingField, put=__cordl_internal_set__CachedTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _CachedTransform_k__BackingField;

/// @brief Field <EmitterLookup>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__EmitterLookup_k__BackingField, put=__cordl_internal_set__EmitterLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  _EmitterLookup_k__BackingField;

/// @brief Field <GUIDebugMode>k__BackingField, offset 0x250, size 0x1 
 __declspec(property(get=__cordl_internal_get__GUIDebugMode_k__BackingField, put=__cordl_internal_set__GUIDebugMode_k__BackingField)) bool  _GUIDebugMode_k__BackingField;

/// @brief Field <GUIDebugScatter>k__BackingField, offset 0x251, size 0x1 
 __declspec(property(get=__cordl_internal_get__GUIDebugScatter_k__BackingField, put=__cordl_internal_set__GUIDebugScatter_k__BackingField)) bool  _GUIDebugScatter_k__BackingField;

/// @brief Field <GUIScatterLog>k__BackingField, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__GUIScatterLog_k__BackingField, put=__cordl_internal_set__GUIScatterLog_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _GUIScatterLog_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::AmbiencePlayer>  _Instance_k__BackingField;

/// @brief Field _ambOccDb, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get__ambOccDb, put=__cordl_internal_set__ambOccDb)) float_t  _ambOccDb;

/// @brief Field _beachCloseASCs, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachCloseASCs, put=__cordl_internal_set__beachCloseASCs)) ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  _beachCloseASCs;

/// @brief Field _beachCloseTransforms, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachCloseTransforms, put=__cordl_internal_set__beachCloseTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _beachCloseTransforms;

/// @brief Field _beachFarASCs, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachFarASCs, put=__cordl_internal_set__beachFarASCs)) ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  _beachFarASCs;

/// @brief Field _beachFarTransforms, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachFarTransforms, put=__cordl_internal_set__beachFarTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _beachFarTransforms;

/// @brief Field _beachOccVols, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachOccVols, put=__cordl_internal_set__beachOccVols)) ::ArrayW<::GlobalNamespace::AudioVolume*>  _beachOccVols;

/// @brief Field _beachRumbleASC, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachRumbleASC, put=__cordl_internal_set__beachRumbleASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _beachRumbleASC;

/// @brief Field _beachRumbleTransform, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachRumbleTransform, put=__cordl_internal_set__beachRumbleTransform)) ::UnityW<::UnityEngine::Transform>  _beachRumbleTransform;

/// @brief Field _beachRumbleVol, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachRumbleVol, put=__cordl_internal_set__beachRumbleVol)) ::GlobalNamespace::AudioVolume*  _beachRumbleVol;

/// @brief Field _beachSurroundedASCs, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachSurroundedASCs, put=__cordl_internal_set__beachSurroundedASCs)) ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  _beachSurroundedASCs;

/// @brief Field _beachSurroundedTransforms, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachSurroundedTransforms, put=__cordl_internal_set__beachSurroundedTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _beachSurroundedTransforms;

/// @brief Field _beachWavesASCs, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__beachWavesASCs, put=__cordl_internal_set__beachWavesASCs)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  _beachWavesASCs;

/// @brief Field _currentBeachSample, offset 0xb8, size 0x80 
 __declspec(property(get=__cordl_internal_get__currentBeachSample, put=__cordl_internal_set__currentBeachSample)) ::GlobalNamespace::OceanSoundSample  _currentBeachSample;

/// @brief Field _directions2D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__directions2D, put=setStaticF__directions2D)) ::ArrayW<::UnityEngine::Vector2>  _directions2D;

/// @brief Field _distanceToGround, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceToGround, put=__cordl_internal_set__distanceToGround)) float_t  _distanceToGround;

/// @brief Field _elevationNormalized, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get__elevationNormalized, put=__cordl_internal_set__elevationNormalized)) float_t  _elevationNormalized;

/// @brief Field _emptyList, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__emptyList, put=__cordl_internal_set__emptyList)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  _emptyList;

/// @brief Field _guiDebugTextStyle, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Field _inRangeScatterPositions, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get__inRangeScatterPositions, put=__cordl_internal_set__inRangeScatterPositions)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*  _inRangeScatterPositions;

/// @brief Field _indoorness, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get__indoorness, put=__cordl_internal_set__indoorness)) float_t  _indoorness;

/// @brief Field _interiorASC, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__interiorASC, put=__cordl_internal_set__interiorASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _interiorASC;

/// @brief Field _interiorWindASC, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__interiorWindASC, put=__cordl_internal_set__interiorWindASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _interiorWindASC;

/// @brief Field _mixer, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixer, put=__cordl_internal_set__mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _mixer;

/// @brief Field _nextWindyTimes, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextWindyTimes, put=__cordl_internal_set__nextWindyTimes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  _nextWindyTimes;

/// @brief Field _oceaness, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__oceaness, put=__cordl_internal_set__oceaness)) float_t  _oceaness;

/// @brief Field _oceanessAvg, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get__oceanessAvg, put=__cordl_internal_set__oceanessAvg)) float_t  _oceanessAvg;

/// @brief Field _reverb, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverb, put=__cordl_internal_set__reverb)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  _reverb;

/// @brief Field _rockyWaterASCs, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__rockyWaterASCs, put=__cordl_internal_set__rockyWaterASCs)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  _rockyWaterASCs;

/// @brief Field _rockyWaterCount, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get__rockyWaterCount, put=__cordl_internal_set__rockyWaterCount)) int32_t  _rockyWaterCount;

/// @brief Field _rockyWaterCullingGroup, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__rockyWaterCullingGroup, put=__cordl_internal_set__rockyWaterCullingGroup)) ::GlobalNamespace::CustomCullingGroup*  _rockyWaterCullingGroup;

/// @brief Field _rockyWaterPositions, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rockyWaterPositions, put=__cordl_internal_set__rockyWaterPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _rockyWaterPositions;

/// @brief Field _rockyWaterResults, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__rockyWaterResults, put=__cordl_internal_set__rockyWaterResults)) ::ArrayW<int32_t>  _rockyWaterResults;

/// @brief Field _rockyWaterSpheres, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__rockyWaterSpheres, put=__cordl_internal_set__rockyWaterSpheres)) ::ArrayW<::UnityEngine::BoundingSphere>  _rockyWaterSpheres;

/// @brief Field _scatterCullingGroup, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__scatterCullingGroup, put=__cordl_internal_set__scatterCullingGroup)) ::GlobalNamespace::CustomCullingGroup*  _scatterCullingGroup;

/// @brief Field _scatterResults, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__scatterResults, put=__cordl_internal_set__scatterResults)) ::ArrayW<int32_t>  _scatterResults;

/// @brief Field _scatterRuntimes, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__scatterRuntimes, put=__cordl_internal_set__scatterRuntimes)) ::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>  _scatterRuntimes;

/// @brief Field _scatterSpheres, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__scatterSpheres, put=__cordl_internal_set__scatterSpheres)) ::ArrayW<::UnityEngine::BoundingSphere>  _scatterSpheres;

/// @brief Field _speechlessness, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get__speechlessness, put=__cordl_internal_set__speechlessness)) float_t  _speechlessness;

/// @brief Field _toRemove, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRemove, put=__cordl_internal_set__toRemove)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  _toRemove;

/// @brief Field _wavesCount, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__wavesCount, put=__cordl_internal_set__wavesCount)) int32_t  _wavesCount;

/// @brief Field _wavesCullingGroup, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__wavesCullingGroup, put=__cordl_internal_set__wavesCullingGroup)) ::GlobalNamespace::CustomCullingGroup*  _wavesCullingGroup;

/// @brief Field _wavesPositions, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__wavesPositions, put=__cordl_internal_set__wavesPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _wavesPositions;

/// @brief Field _wavesResults, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__wavesResults, put=__cordl_internal_set__wavesResults)) ::ArrayW<int32_t>  _wavesResults;

/// @brief Field _wavesSpheres, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__wavesSpheres, put=__cordl_internal_set__wavesSpheres)) ::ArrayW<::UnityEngine::BoundingSphere>  _wavesSpheres;

/// @brief Field _windCompensation, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get__windCompensation, put=__cordl_internal_set__windCompensation)) float_t  _windCompensation;

/// @brief Field _windHighASCs, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__windHighASCs, put=__cordl_internal_set__windHighASCs)) ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  _windHighASCs;

/// @brief Field _windHighIntensity, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__windHighIntensity, put=__cordl_internal_set__windHighIntensity)) float_t  _windHighIntensity;

/// @brief Field _windLowASCs, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__windLowASCs, put=__cordl_internal_set__windLowASCs)) ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  _windLowASCs;

/// @brief Field _windLowIntensity, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get__windLowIntensity, put=__cordl_internal_set__windLowIntensity)) float_t  _windLowIntensity;

/// @brief Field _windOccVols, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__windOccVols, put=__cordl_internal_set__windOccVols)) ::ArrayW<::GlobalNamespace::AudioVolume*>  _windOccVols;

/// @brief Field _windTransforms, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__windTransforms, put=__cordl_internal_set__windTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _windTransforms;

/// @brief Field isInManualUpdate, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInManualUpdate, put=__cordl_internal_set_isInManualUpdate)) bool  isInManualUpdate;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method Awake, addr 0x1803188c0, size 0x700, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Deregister, addr 0x180318fc0, size 0x60, virtual false, abstract: false, final false
inline void Deregister() ;

/// @brief Method DrawGUI, addr 0x180319020, size 0xee0, virtual true, abstract: false, final true
inline void DrawGUI() ;

/// @brief Method GetAttenuationFarNE, addr 0x180319f00, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationFarNE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationFarNW, addr 0x180319f30, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationFarNW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationFarSE, addr 0x180319f60, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationFarSE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationFarSW, addr 0x180319f90, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationFarSW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationNE, addr 0x180319fc0, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationNE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationNW, addr 0x180319ff0, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationNW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationRumble, addr 0x18031a020, size 0x20, virtual false, abstract: false, final false
inline bool GetAttenuationRumble(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationSE, addr 0x18031a040, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationSE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetAttenuationSW, addr 0x18031a070, size 0x30, virtual false, abstract: false, final false
inline bool GetAttenuationSW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method GetInterpolatedPositionFromDirectionFills, addr 0x18031a0a0, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetInterpolatedPositionFromDirectionFills(::GlobalNamespace::AudioDynamicReverb*  reverb, ::by_ref<float_t>  totalFill) ;

/// @brief Method LateUpdate, addr 0x18031a210, size 0x1070, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::AmbiencePlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18031b280, size 0x180, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18031b400, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18031b490, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMovingTooFast, addr 0x18031b510, size 0xc0, virtual false, abstract: false, final false
inline void OnMovingTooFast(::UnityEngine::Vector3  newPos) ;

/// @brief Method PlayNonBiomeAmbiences, addr 0x18031b5d0, size 0x1ff0, virtual false, abstract: false, final false
inline void PlayNonBiomeAmbiences() ;

/// @brief Method Register, addr 0x18031d5c0, size 0x110, virtual false, abstract: false, final false
inline void Register() ;

/// @brief Method Start, addr 0x18031d6d0, size 0x190, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18031fbc0, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateBeachSoundsPositions, addr 0x18031de10, size 0xd20, virtual false, abstract: false, final false
inline void UpdateBeachSoundsPositions(::GlobalNamespace::OceanSoundSample  sample, float_t  deltaTime, float_t  sideToTop) ;

/// @brief Method UpdateBeachWaves, addr 0x18031eb30, size 0x430, virtual false, abstract: false, final false
inline void UpdateBeachWaves() ;

/// @brief Method UpdateRockyWater, addr 0x18031ef60, size 0x430, virtual false, abstract: false, final false
inline void UpdateRockyWater() ;

/// @brief Method UpdateScatters, addr 0x18031f390, size 0x220, virtual false, abstract: false, final false
inline void UpdateScatters() ;

/// @brief Method UpdateWindySound, addr 0x18031f5b0, size 0x610, virtual false, abstract: false, final false
inline void UpdateWindySound() ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_1, addr 0x18031d860, size 0x60, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_1(::GlobalNamespace::AmbiencePlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_2, addr 0x18031d8c0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_2(::GlobalNamespace::AmbiencePlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_5, addr 0x18031d920, size 0x70, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_5(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_6, addr 0x18031d990, size 0x70, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_6(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_7, addr 0x18031da00, size 0x70, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_7(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_8, addr 0x18031da70, size 0x70, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_8(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRefs|109_9, addr 0x18031dae0, size 0x70, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRefs_109_9(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___clearRumbleRef|109_0, addr 0x18031db50, size 0x60, virtual false, abstract: false, final false
static inline void _PlayNonBiomeAmbiences_g___clearRumbleRef_109_0(::GlobalNamespace::AmbiencePlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayNonBiomeAmbiences>g___windHighGetX|109_3, addr 0x18031dbb0, size 0x50, virtual false, abstract: false, final false
inline bool _PlayNonBiomeAmbiences_g___windHighGetX_109_3(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method <PlayNonBiomeAmbiences>g___windLowGetX|109_4, addr 0x18031dc00, size 0xb0, virtual false, abstract: false, final false
inline bool _PlayNonBiomeAmbiences_g___windLowGetX_109_4(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method <UpdateBeachWaves>g___clearRefs|112_0, addr 0x18031dcb0, size 0xb0, virtual false, abstract: false, final false
static inline void _UpdateBeachWaves_g___clearRefs_112_0(::GlobalNamespace::AmbiencePlayer*  p, ::UnityEngine::Vector3  v, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <UpdateRockyWater>g___clearRefs|113_0, addr 0x18031dd60, size 0xb0, virtual false, abstract: false, final false
static inline void _UpdateRockyWater_g___clearRefs_113_0(::GlobalNamespace::AmbiencePlayer*  p, ::UnityEngine::Vector3  v, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr bool const& __cordl_internal_get_DebugEmitters() const;

constexpr bool& __cordl_internal_get_DebugEmitters() ;

constexpr bool const& __cordl_internal_get_DebugFills() const;

constexpr bool& __cordl_internal_get_DebugFills() ;

constexpr bool const& __cordl_internal_get_DebugScatter() const;

constexpr bool& __cordl_internal_get_DebugScatter() ;

constexpr bool const& __cordl_internal_get_DebugWaves() const;

constexpr bool& __cordl_internal_get_DebugWaves() ;

constexpr bool const& __cordl_internal_get_EnableOffset() const;

constexpr bool& __cordl_internal_get_EnableOffset() ;

constexpr float_t const& __cordl_internal_get_MinHPLevel() const;

constexpr float_t& __cordl_internal_get_MinHPLevel() ;

constexpr float_t const& __cordl_internal_get_MinLPLevel() const;

constexpr float_t& __cordl_internal_get_MinLPLevel() ;

constexpr float_t const& __cordl_internal_get_MinVegeVol() const;

constexpr float_t& __cordl_internal_get_MinVegeVol() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_RaycastLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_RaycastLayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_RaycastPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_RaycastPos() ;

constexpr ::UnityW<::GlobalNamespace::AmbienceSampleData> const& __cordl_internal_get_SampleData() const;

constexpr ::UnityW<::GlobalNamespace::AmbienceSampleData>& __cordl_internal_get_SampleData() ;

constexpr ::UnityW<::GlobalNamespace::AmbienceSoundData> const& __cordl_internal_get_SoundData() const;

constexpr ::UnityW<::GlobalNamespace::AmbienceSoundData>& __cordl_internal_get_SoundData() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__CachedTransform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__CachedTransform_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>* const& __cordl_internal_get__EmitterLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*& __cordl_internal_get__EmitterLookup_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GUIDebugMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__GUIDebugMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GUIDebugScatter_k__BackingField() const;

constexpr bool& __cordl_internal_get__GUIDebugScatter_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__GUIScatterLog_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__GUIScatterLog_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ambOccDb() const;

constexpr float_t& __cordl_internal_get__ambOccDb() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& __cordl_internal_get__beachCloseASCs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& __cordl_internal_get__beachCloseASCs() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__beachCloseTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__beachCloseTransforms() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& __cordl_internal_get__beachFarASCs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& __cordl_internal_get__beachFarASCs() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__beachFarTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__beachFarTransforms() ;

constexpr ::ArrayW<::GlobalNamespace::AudioVolume*> const& __cordl_internal_get__beachOccVols() const;

constexpr ::ArrayW<::GlobalNamespace::AudioVolume*>& __cordl_internal_get__beachOccVols() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__beachRumbleASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__beachRumbleASC() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__beachRumbleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__beachRumbleTransform() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__beachRumbleVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__beachRumbleVol() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& __cordl_internal_get__beachSurroundedASCs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& __cordl_internal_get__beachSurroundedASCs() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__beachSurroundedTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__beachSurroundedTransforms() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__beachWavesASCs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__beachWavesASCs() ;

constexpr ::GlobalNamespace::OceanSoundSample const& __cordl_internal_get__currentBeachSample() const;

constexpr ::GlobalNamespace::OceanSoundSample& __cordl_internal_get__currentBeachSample() ;

constexpr float_t const& __cordl_internal_get__distanceToGround() const;

constexpr float_t& __cordl_internal_get__distanceToGround() ;

constexpr float_t const& __cordl_internal_get__elevationNormalized() const;

constexpr float_t& __cordl_internal_get__elevationNormalized() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& __cordl_internal_get__emptyList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& __cordl_internal_get__emptyList() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>* const& __cordl_internal_get__inRangeScatterPositions() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*& __cordl_internal_get__inRangeScatterPositions() ;

constexpr float_t const& __cordl_internal_get__indoorness() const;

constexpr float_t& __cordl_internal_get__indoorness() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__interiorASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__interiorASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__interiorWindASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__interiorWindASC() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__mixer() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* const& __cordl_internal_get__nextWindyTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*& __cordl_internal_get__nextWindyTimes() ;

constexpr float_t const& __cordl_internal_get__oceaness() const;

constexpr float_t& __cordl_internal_get__oceaness() ;

constexpr float_t const& __cordl_internal_get__oceanessAvg() const;

constexpr float_t& __cordl_internal_get__oceanessAvg() ;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& __cordl_internal_get__reverb() const;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& __cordl_internal_get__reverb() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__rockyWaterASCs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__rockyWaterASCs() ;

constexpr int32_t const& __cordl_internal_get__rockyWaterCount() const;

constexpr int32_t& __cordl_internal_get__rockyWaterCount() ;

constexpr ::GlobalNamespace::CustomCullingGroup* const& __cordl_internal_get__rockyWaterCullingGroup() const;

constexpr ::GlobalNamespace::CustomCullingGroup*& __cordl_internal_get__rockyWaterCullingGroup() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__rockyWaterPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__rockyWaterPositions() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__rockyWaterResults() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__rockyWaterResults() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__rockyWaterSpheres() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__rockyWaterSpheres() ;

constexpr ::GlobalNamespace::CustomCullingGroup* const& __cordl_internal_get__scatterCullingGroup() const;

constexpr ::GlobalNamespace::CustomCullingGroup*& __cordl_internal_get__scatterCullingGroup() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__scatterResults() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__scatterResults() ;

constexpr ::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*> const& __cordl_internal_get__scatterRuntimes() const;

constexpr ::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>& __cordl_internal_get__scatterRuntimes() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__scatterSpheres() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__scatterSpheres() ;

constexpr float_t const& __cordl_internal_get__speechlessness() const;

constexpr float_t& __cordl_internal_get__speechlessness() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& __cordl_internal_get__toRemove() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& __cordl_internal_get__toRemove() ;

constexpr int32_t const& __cordl_internal_get__wavesCount() const;

constexpr int32_t& __cordl_internal_get__wavesCount() ;

constexpr ::GlobalNamespace::CustomCullingGroup* const& __cordl_internal_get__wavesCullingGroup() const;

constexpr ::GlobalNamespace::CustomCullingGroup*& __cordl_internal_get__wavesCullingGroup() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__wavesPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__wavesPositions() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__wavesResults() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__wavesResults() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__wavesSpheres() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__wavesSpheres() ;

constexpr float_t const& __cordl_internal_get__windCompensation() const;

constexpr float_t& __cordl_internal_get__windCompensation() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& __cordl_internal_get__windHighASCs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& __cordl_internal_get__windHighASCs() ;

constexpr float_t const& __cordl_internal_get__windHighIntensity() const;

constexpr float_t& __cordl_internal_get__windHighIntensity() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& __cordl_internal_get__windLowASCs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& __cordl_internal_get__windLowASCs() ;

constexpr float_t const& __cordl_internal_get__windLowIntensity() const;

constexpr float_t& __cordl_internal_get__windLowIntensity() ;

constexpr ::ArrayW<::GlobalNamespace::AudioVolume*> const& __cordl_internal_get__windOccVols() const;

constexpr ::ArrayW<::GlobalNamespace::AudioVolume*>& __cordl_internal_get__windOccVols() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__windTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__windTransforms() ;

constexpr bool const& __cordl_internal_get_isInManualUpdate() const;

constexpr bool& __cordl_internal_get_isInManualUpdate() ;

constexpr void __cordl_internal_set_DebugEmitters(bool  value) ;

constexpr void __cordl_internal_set_DebugFills(bool  value) ;

constexpr void __cordl_internal_set_DebugScatter(bool  value) ;

constexpr void __cordl_internal_set_DebugWaves(bool  value) ;

constexpr void __cordl_internal_set_EnableOffset(bool  value) ;

constexpr void __cordl_internal_set_MinHPLevel(float_t  value) ;

constexpr void __cordl_internal_set_MinLPLevel(float_t  value) ;

constexpr void __cordl_internal_set_MinVegeVol(float_t  value) ;

constexpr void __cordl_internal_set_RaycastLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_RaycastPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_SampleData(::UnityW<::GlobalNamespace::AmbienceSampleData>  value) ;

constexpr void __cordl_internal_set_SoundData(::UnityW<::GlobalNamespace::AmbienceSoundData>  value) ;

constexpr void __cordl_internal_set__CachedTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__EmitterLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  value) ;

constexpr void __cordl_internal_set__GUIDebugMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__GUIDebugScatter_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__GUIScatterLog_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__ambOccDb(float_t  value) ;

constexpr void __cordl_internal_set__beachCloseASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value) ;

constexpr void __cordl_internal_set__beachCloseTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__beachFarASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value) ;

constexpr void __cordl_internal_set__beachFarTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__beachOccVols(::ArrayW<::GlobalNamespace::AudioVolume*>  value) ;

constexpr void __cordl_internal_set__beachRumbleASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__beachRumbleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__beachRumbleVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__beachSurroundedASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value) ;

constexpr void __cordl_internal_set__beachSurroundedTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__beachWavesASCs(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__currentBeachSample(::GlobalNamespace::OceanSoundSample  value) ;

constexpr void __cordl_internal_set__distanceToGround(float_t  value) ;

constexpr void __cordl_internal_set__elevationNormalized(float_t  value) ;

constexpr void __cordl_internal_set__emptyList(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__inRangeScatterPositions(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__indoorness(float_t  value) ;

constexpr void __cordl_internal_set__interiorASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__interiorWindASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__nextWindyTimes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  value) ;

constexpr void __cordl_internal_set__oceaness(float_t  value) ;

constexpr void __cordl_internal_set__oceanessAvg(float_t  value) ;

constexpr void __cordl_internal_set__reverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value) ;

constexpr void __cordl_internal_set__rockyWaterASCs(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__rockyWaterCount(int32_t  value) ;

constexpr void __cordl_internal_set__rockyWaterCullingGroup(::GlobalNamespace::CustomCullingGroup*  value) ;

constexpr void __cordl_internal_set__rockyWaterPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__rockyWaterResults(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__rockyWaterSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

constexpr void __cordl_internal_set__scatterCullingGroup(::GlobalNamespace::CustomCullingGroup*  value) ;

constexpr void __cordl_internal_set__scatterResults(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__scatterRuntimes(::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>  value) ;

constexpr void __cordl_internal_set__scatterSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

constexpr void __cordl_internal_set__speechlessness(float_t  value) ;

constexpr void __cordl_internal_set__toRemove(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value) ;

constexpr void __cordl_internal_set__wavesCount(int32_t  value) ;

constexpr void __cordl_internal_set__wavesCullingGroup(::GlobalNamespace::CustomCullingGroup*  value) ;

constexpr void __cordl_internal_set__wavesPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__wavesResults(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__wavesSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

constexpr void __cordl_internal_set__windCompensation(float_t  value) ;

constexpr void __cordl_internal_set__windHighASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value) ;

constexpr void __cordl_internal_set__windHighIntensity(float_t  value) ;

constexpr void __cordl_internal_set__windLowASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value) ;

constexpr void __cordl_internal_set__windLowIntensity(float_t  value) ;

constexpr void __cordl_internal_set__windOccVols(::ArrayW<::GlobalNamespace::AudioVolume*>  value) ;

constexpr void __cordl_internal_set__windTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_isInManualUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x18031fe60, size 0x4b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF_Labels() ;

static inline ::ArrayW<::StringW> getStaticF_LabelsWind() ;

static inline ::UnityW<::GlobalNamespace::AmbiencePlayer> getStaticF__Instance_k__BackingField() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF__directions2D() ;

/// @brief Method get_CachedTransform, addr 0x180320310, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_CachedTransform() ;

/// @brief Method get_EmitterLookup, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>* get_EmitterLookup() ;

/// @brief Method get_GUIDebugMode, addr 0x180320320, size 0x10, virtual false, abstract: false, final false
inline bool get_GUIDebugMode() ;

/// @brief Method get_GUIDebugScatter, addr 0x180320330, size 0x10, virtual false, abstract: false, final false
inline bool get_GUIDebugScatter() ;

/// @brief Method get_GUIScatterLog, addr 0x180320340, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_GUIScatterLog() ;

/// @brief Method get_Identifier, addr 0x180320350, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Method get_Instance, addr 0x180320360, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AmbiencePlayer> get_Instance() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

static inline void setStaticF_Labels(::ArrayW<::StringW>  value) ;

static inline void setStaticF_LabelsWind(::ArrayW<::StringW>  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AmbiencePlayer>  value) ;

static inline void setStaticF__directions2D(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_CachedTransform, addr 0x1803203a0, size 0x20, virtual false, abstract: false, final false
inline void set_CachedTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_EmitterLookup, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_EmitterLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  value) ;

/// @brief Method set_GUIDebugMode, addr 0x1803203c0, size 0x10, virtual false, abstract: false, final false
inline void set_GUIDebugMode(bool  value) ;

/// @brief Method set_GUIDebugScatter, addr 0x1803203d0, size 0x10, virtual false, abstract: false, final false
inline void set_GUIDebugScatter(bool  value) ;

/// @brief Method set_GUIScatterLog, addr 0x1803203e0, size 0x20, virtual false, abstract: false, final false
inline void set_GUIScatterLog(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method set_Instance, addr 0x180320400, size 0x50, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::AmbiencePlayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbiencePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbiencePlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbiencePlayer(AmbiencePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbiencePlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbiencePlayer(AmbiencePlayer const& ) = delete;

/// @brief Field AMB_HP_PARAM offset 0xffffffff size 0x8
static constexpr ::ConstString  AMB_HP_PARAM{u"AmbExtHP"};

/// @brief Field AMB_LP_PARAM offset 0xffffffff size 0x8
static constexpr ::ConstString  AMB_LP_PARAM{u"AmbExtLP"};

/// @brief Field BIOME_LP_PARAM offset 0xffffffff size 0x8
static constexpr ::ConstString  BIOME_LP_PARAM{u"BiomeAmbLP"};

/// @brief Field OCEAN_HP_PARAM offset 0xffffffff size 0x8
static constexpr ::ConstString  OCEAN_HP_PARAM{u"OceanAmbHP"};

/// @brief Field SCATTER_DIST_MAX offset 0xffffffff size 0x4
static constexpr float_t  SCATTER_DIST_MAX{static_cast<float_t>(80.0f)};

/// @brief Field SCATTER_DIST_MIN offset 0xffffffff size 0x4
static constexpr float_t  SCATTER_DIST_MIN{static_cast<float_t>(30.0f)};

/// @brief Field WAVES_DIST offset 0xffffffff size 0x4
static constexpr float_t  WAVES_DIST{static_cast<float_t>(30.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4785};

/// @brief Field SoundData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AmbienceSoundData>  ___SoundData;

/// @brief Field SampleData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AmbienceSampleData>  ___SampleData;

/// @brief Field RaycastPos, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___RaycastPos;

/// @brief Field RaycastLayer, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___RaycastLayer;

/// @brief Field MinHPLevel, offset: 0x3c, size: 0x4, def value: None
 float_t  ___MinHPLevel;

/// @brief Field MinLPLevel, offset: 0x40, size: 0x4, def value: None
 float_t  ___MinLPLevel;

/// @brief Field MinVegeVol, offset: 0x44, size: 0x4, def value: None
 float_t  ___MinVegeVol;

/// @brief Field DebugWaves, offset: 0x48, size: 0x1, def value: None
 bool  ___DebugWaves;

/// @brief Field DebugScatter, offset: 0x49, size: 0x1, def value: None
 bool  ___DebugScatter;

/// @brief Field DebugEmitters, offset: 0x4a, size: 0x1, def value: None
 bool  ___DebugEmitters;

/// @brief Field DebugFills, offset: 0x4b, size: 0x1, def value: None
 bool  ___DebugFills;

/// @brief Field EnableOffset, offset: 0x4c, size: 0x1, def value: None
 bool  ___EnableOffset;

/// @brief Field <EmitterLookup>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  ____EmitterLookup_k__BackingField;

/// @brief Field _toRemove, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  ____toRemove;

/// @brief Field _emptyList, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  ____emptyList;

/// @brief Field _beachCloseASCs, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  ____beachCloseASCs;

/// @brief Field _beachSurroundedASCs, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  ____beachSurroundedASCs;

/// @brief Field _beachFarASCs, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  ____beachFarASCs;

/// @brief Field _beachRumbleASC, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____beachRumbleASC;

/// @brief Field _beachCloseTransforms, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____beachCloseTransforms;

/// @brief Field _beachSurroundedTransforms, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____beachSurroundedTransforms;

/// @brief Field _beachFarTransforms, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____beachFarTransforms;

/// @brief Field _beachRumbleTransform, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____beachRumbleTransform;

/// @brief Field _beachOccVols, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioVolume*>  ____beachOccVols;

/// @brief Field _beachRumbleVol, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____beachRumbleVol;

/// @brief Field _currentBeachSample, offset: 0xb8, size: 0x80, def value: None
 ::GlobalNamespace::OceanSoundSample  ____currentBeachSample;

/// @brief Field _oceaness, offset: 0x138, size: 0x4, def value: None
 float_t  ____oceaness;

/// @brief Field _oceanessAvg, offset: 0x13c, size: 0x4, def value: None
 float_t  ____oceanessAvg;

/// @brief Field isInManualUpdate, offset: 0x140, size: 0x1, def value: None
 bool  ___isInManualUpdate;

/// @brief Field _ambOccDb, offset: 0x144, size: 0x4, def value: None
 float_t  ____ambOccDb;

/// @brief Field _wavesCullingGroup, offset: 0x148, size: 0x8, def value: None
 ::GlobalNamespace::CustomCullingGroup*  ____wavesCullingGroup;

/// @brief Field _wavesSpheres, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____wavesSpheres;

/// @brief Field _wavesCount, offset: 0x158, size: 0x4, def value: None
 int32_t  ____wavesCount;

/// @brief Field _wavesResults, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____wavesResults;

/// @brief Field _beachWavesASCs, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  ____beachWavesASCs;

/// @brief Field _wavesPositions, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ____wavesPositions;

/// @brief Field _rockyWaterCullingGroup, offset: 0x178, size: 0x8, def value: None
 ::GlobalNamespace::CustomCullingGroup*  ____rockyWaterCullingGroup;

/// @brief Field _rockyWaterSpheres, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____rockyWaterSpheres;

/// @brief Field _rockyWaterCount, offset: 0x188, size: 0x4, def value: None
 int32_t  ____rockyWaterCount;

/// @brief Field _rockyWaterResults, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____rockyWaterResults;

/// @brief Field _rockyWaterASCs, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  ____rockyWaterASCs;

/// @brief Field _rockyWaterPositions, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ____rockyWaterPositions;

/// @brief Field _reverb, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioDynamicReverb>  ____reverb;

/// @brief Field _mixer, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____mixer;

/// @brief Field _indoorness, offset: 0x1b8, size: 0x4, def value: None
 float_t  ____indoorness;

/// @brief Field _interiorASC, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____interiorASC;

/// @brief Field _interiorWindASC, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____interiorWindASC;

/// @brief Field _windHighASCs, offset: 0x1d0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  ____windHighASCs;

/// @brief Field _windLowASCs, offset: 0x1d8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  ____windLowASCs;

/// @brief Field _windOccVols, offset: 0x1e0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioVolume*>  ____windOccVols;

/// @brief Field _distanceToGround, offset: 0x1e8, size: 0x4, def value: None
 float_t  ____distanceToGround;

/// @brief Field _speechlessness, offset: 0x1ec, size: 0x4, def value: None
 float_t  ____speechlessness;

/// @brief Field _windTransforms, offset: 0x1f0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____windTransforms;

/// @brief Field _windHighIntensity, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____windHighIntensity;

/// @brief Field _windLowIntensity, offset: 0x1fc, size: 0x4, def value: None
 float_t  ____windLowIntensity;

/// @brief Field _windCompensation, offset: 0x200, size: 0x4, def value: None
 float_t  ____windCompensation;

/// @brief Field _elevationNormalized, offset: 0x204, size: 0x4, def value: None
 float_t  ____elevationNormalized;

/// @brief Field _scatterRuntimes, offset: 0x208, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>  ____scatterRuntimes;

/// @brief Field _scatterCullingGroup, offset: 0x210, size: 0x8, def value: None
 ::GlobalNamespace::CustomCullingGroup*  ____scatterCullingGroup;

/// @brief Field _scatterSpheres, offset: 0x218, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____scatterSpheres;

/// @brief Field _inRangeScatterPositions, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*  ____inRangeScatterPositions;

/// @brief Field _scatterResults, offset: 0x228, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____scatterResults;

/// @brief Field _nextWindyTimes, offset: 0x230, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  ____nextWindyTimes;

/// @brief Field <CachedTransform>k__BackingField, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____CachedTransform_k__BackingField;

/// @brief Field _guiDebugTextStyle, offset: 0x240, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

/// @brief Field <GUIScatterLog>k__BackingField, offset: 0x248, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____GUIScatterLog_k__BackingField;

/// @brief Field <GUIDebugMode>k__BackingField, offset: 0x250, size: 0x1, def value: None
 bool  ____GUIDebugMode_k__BackingField;

/// @brief Field <GUIDebugScatter>k__BackingField, offset: 0x251, size: 0x1, def value: None
 bool  ____GUIDebugScatter_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___SoundData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___SampleData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___RaycastPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___RaycastLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___MinHPLevel) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___MinLPLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___MinVegeVol) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___DebugWaves) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___DebugScatter) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___DebugEmitters) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___DebugFills) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___EnableOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____EmitterLookup_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____toRemove) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____emptyList) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachCloseASCs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachSurroundedASCs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachFarASCs) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachRumbleASC) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachCloseTransforms) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachSurroundedTransforms) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachFarTransforms) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachRumbleTransform) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachOccVols) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachRumbleVol) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____currentBeachSample) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____oceaness) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____oceanessAvg) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ___isInManualUpdate) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____ambOccDb) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____wavesCullingGroup) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____wavesSpheres) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____wavesCount) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____wavesResults) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____beachWavesASCs) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____wavesPositions) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____rockyWaterCullingGroup) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____rockyWaterSpheres) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____rockyWaterCount) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____rockyWaterResults) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____rockyWaterASCs) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____rockyWaterPositions) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____reverb) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____mixer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____indoorness) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____interiorASC) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____interiorWindASC) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windHighASCs) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windLowASCs) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windOccVols) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____distanceToGround) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____speechlessness) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windTransforms) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windHighIntensity) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windLowIntensity) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____windCompensation) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____elevationNormalized) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____scatterRuntimes) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____scatterCullingGroup) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____scatterSpheres) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____inRangeScatterPositions) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____scatterResults) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____nextWindyTimes) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____CachedTransform_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____guiDebugTextStyle) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____GUIScatterLog_k__BackingField) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____GUIDebugMode_k__BackingField) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbiencePlayer, ____GUIDebugScatter_k__BackingField) == 0x251, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbiencePlayer) == 0x258, "Size mismatch!");

} // namespace end def GlobalNamespace
